#define F_CPU 1474560
#include <avr/io.h>
#include <util/delay.h>
 
void cfgPRT();

void cfgPRT(){
	DDRC=0x00;
	PORTC=0x00;
}

int main(){
	cfgPRT();
	while(1){
  		_delay_ms(1000);
  	}
	return 0;
}
