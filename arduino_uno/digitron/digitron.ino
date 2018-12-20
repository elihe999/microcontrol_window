//Digitron
int pinDigitron = 2; //管脚D2连接到数码管的A脚，D3连B... D9连h
int pinWei = 10;  
 
void setup() {
  for(int x=0; x<4; x++) {
     pinMode(pinWei+x, OUTPUT); //设置各脚为输出状态
     digitalWrite(pinWei+x, HIGH);//
   }
     
  for(int x=0; x<8; x++) {
    pinMode(pinDigitron+x, OUTPUT); //设置各脚为输出状态
  }  
}
 
//在数码管中显示数字的函数
void displayDigit(unsigned char digit) {
  //定义一个数组表：不同数字的abcdefgh各段的取值
  unsigned char abcdefgh[][8] = {
    {1,1,1,1,1,1,0,0},  //0
    {0,1,1,0,0,0,0,0},  //1
    {1,1,0,1,1,0,1,0},  //2
    {1,1,1,1,0,0,1,0},  //3
    {0,1,1,0,0,1,1,0},  //4
    {1,0,1,1,0,1,1,0},  //5
    {1,0,1,1,1,1,1,0},  //6
    {1,1,1,0,0,0,0,0},  //7
    {1,1,1,1,1,1,1,0},  //8
    {1,1,1,1,0,1,1,0},  //9
    {1,1,1,0,1,1,1,0},  //A
    {0,0,1,1,1,1,1,0},  //b
    {1,0,0,1,1,1,0,0},  //C
    {0,1,1,1,1,0,1,0},  //d
    {1,0,0,1,1,1,1,0},  //E
    {1,0,0,0,1,1,1,0},  //F
    {0,0,0,0,0,0,0,1},  //DOT = 16
    {0,0,0,0,0,0,0,0},  //BLANK = 17
    {0,0,0,0,0,0,1,0},  //MINUS= 18
  };
  
  if ( digit > 18 ) return;
  for (unsigned char x=0; x<8; x++)
    digitalWrite( pinDigitron + x, abcdefgh[digit][x] );
}
 
//在指定的位，显示指定的数字
void display(unsigned char wei, unsigned char digit) {
  #define BLANK 17
  
  for(int x=0; x<4; x++) {
     if ( x != wei- 1)
       digitalWrite(pinWei + x, HIGH);
  }
  
  displayDigit(BLANK);//擦除
  digitalWrite(pinWei + wei- 1 , LOW);//位选
  delay(1);
 
  displayDigit(digit);//显示数字
  delay(5);
}
 
void loop() { 
   display(1, 3);//在第1位显示数字3
   display(2, 2);//在第2位显示数字2
   display(3, 0xB);//在第3位显示数字 b
   display(4, 0xF);//在第4位显示数字 F
}
