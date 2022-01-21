#include <stdio.h>
#include <wiringPi.h>

int main(void)
{
	int GREEN_PIN = 21;
	int RED_PIN = 22;
	int HIGROMETRO = 5;

	wiringPiSetup() ;
	pinMode(GREEN_PIN, OUTPUT) ;
	pinMode(RED_PIN, OUTPUT) ;
	for (;;)
	{
		if(digitalRead(HIGROMETRO) == 0){
			digitalWrite(GREEN_PIN, HIGH); 
			delay (500) ;
			digitalWrite(RED_PIN,  LOW); 
			delay (500) ;
			printf("Hay humedad\n");
			}
		else{
			digitalWrite(RED_PIN,  HIGH); 
			delay (500) ;
			digitalWrite(GREEN_PIN,  LOW) ; 
			delay (500) ;
			printf("No hay humedad\n");
			}
	}
	return 0;
}
