#include "stm32f4xx.h"

int main (void){

	// Initialise GPIO Port for LEDs
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN; // Enable GPIOD clock  
	
};
	