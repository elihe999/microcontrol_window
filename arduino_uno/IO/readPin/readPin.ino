// 2号引脚有一个按键，给他命名:
int readPin2 = 2;
int readPin3 = 3;
int readPin4 = 4;
int readPin5 = 5;
int readPin7 = 7;

// setup函数在上电或复位后运行一次:
void setup() {
  // 初始化串口，波特率9600:
  Serial.begin(9600);
  // 将2号引脚设置为输入模式:
  pinMode(readPin2, INPUT);
  pinMode(readPin3, INPUT);
  pinMode(readPin4, INPUT);
  pinMode(readPin5, INPUT);
  pinMode(readPin7, INPUT);
}

// loop函数持续不断的运行:
void loop() {
  // 读取输入引脚:
  int buttonState = digitalRead(readPin2);
  // 将按键状态输出到串口监视器:
  Serial.println(buttonState);
  delay(1);        // 在读取操作前延时，以保证稳定
}
