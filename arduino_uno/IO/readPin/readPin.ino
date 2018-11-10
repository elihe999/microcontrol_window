// 2号引脚有一个按键，给他命名:
int pushButton = 2;

// setup函数在上电或复位后运行一次:
void setup() {
  // 初始化串口，波特率9600:
  Serial.begin(9600);
  // 将2号引脚设置为输入模式:
  pinMode(pushButton, INPUT);
}

// loop函数持续不断的运行:
void loop() {
  // 读取输入引脚:
  int buttonState = digitalRead(pushButton);
  // 将按键状态输出到串口监视器:
  Serial.println(buttonState);
  delay(1);        // 在读取操作前延时，以保证稳定
}
