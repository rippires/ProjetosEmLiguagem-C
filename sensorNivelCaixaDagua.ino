#define Boia1 D1
#define Boia2 D2
#define Boia3 D3
#define Boia4 D4

int boia1 = 1, boia2 = 1, boia3 = 1, boia4 = 1;

void setup() {
  pinMode(boia1, INPUT);
  pinMode(boia2, INPUT);
  pinMode(boia3, INPUT);
  pinMode(boia4, INPUT);
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:

  int boia1 = digitalRead(Boia1);
  int boia2 = digitalRead(Boia2);
  int boia3 = digitalRead(Boia3);
  int boia4 = digitalRead(Boia4);

  if((boia1 == 1) && (boia2 == 1) && (boia3 == 1) && (boia4 == 1)){
      Serial.println("Caixa Cheia!!!");
    } else if ((boia1 == 1) &&(boia2 == 1) && (boia3 == 1) && (boia4 == 0)){
      
      Serial.println("Nivel entre 100% e 75%");
      
    } else if ((boia1 == 1) && (boia2 == 1) && (boia3== 0) && (boia4 == 0)){
      
      Serial.println("Nível entre 75% e 50%");
      
    } else if ((boia1 == 1) && (boia2 == 0) && (boia3 == 0) && (boia4 == 0)){
      
      Serial.println("Nível Abaixo de 50%");
      
    } else if ((boia1 == 0) && (boia2 == 0) && (boia3 == 0) && (boia4 == 0)){
      
      Serial.println("Caixa Vazia!!!");
      
    } else {
      Serial.println("Erro não foi possível realizar a leitura do nivel da Água");
    }
  delay(2000);
}
