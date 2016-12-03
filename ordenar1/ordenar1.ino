

int i= 0;
int j = 0;
int aux = 0; 

int arreglin[10]={4,2,28,9,4865,6,156,1,12,5};

void setup() {
  
  Serial.begin(9600);
 
  for(i=0;i<10;i++){
    for(j=i+1;j<10;j++){
      if(arreglin[i]>arreglin[j]){
            aux=arreglin[i];
          arreglin[i]= arreglin[j];   
        arreglin [j] = aux;
      }
    }
  }
  for(i=0;i<10;i++){
    Serial.println(arreglin[i]);
    delay(50);
  }  
 }    



void loop() {
 
}
