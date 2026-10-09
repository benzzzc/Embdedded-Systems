#include "stm32f4xx.h"

int main (void){
	
		uint32_t ii;

		// Initialise GPIO Port for LEDs
		RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN; // Enable GPIOD clock  
		GPIOD->MODER |= GPIO_MODER_MODER12_0; // Enable General Purpose Output mode
		// why gpio D?
	
	
		for(;;) {
			
			GPIOD->BSRR = 1<<12; // Turn on the green LED 
			for(ii = 0; ii <= 26000000; ii++){} // Delay 1 second
			GPIOD->BSRR = 1<<(12+16); // Turn off the green LED NOTE why not 28?
			for(ii = 0; ii <= 26000000; ii++){} // Delay 1 second
		} 
	
};
	