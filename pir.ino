int pir = 3;
int status = 0;
int data = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(pir, INPUT);
}

void loop()
{
  data = digitalRead(pir);
  if((data==HIGH)&&(status==LOW)){
    Serial.println("Ada yang terdeteksi oleh sensor");
    delay(1000);
  }else{
    if((data == LOW)&&(status == HIGH)){
    Serial.println("Tidak ada yang terdeteksi oleh sensor");
    delay(1000);
    }
  }
}
