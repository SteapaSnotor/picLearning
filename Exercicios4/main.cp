#line 1 "C:/users/Public/Documents/MikroCProjects/Exercicios4/main.c"
void main() {





 unsigned char numeros[10] = {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x98};
 unsigned char index = 0;
 TRISD = 0;
 TRISB = 1;
 ADCON1= 15;
 for(;;){

 if(PORTB & 1){
 index++;
 }

 if (index >= 10){
 index = 0;
 }
 LATD = numeros[index];

 delay_ms(500);




 }

}
