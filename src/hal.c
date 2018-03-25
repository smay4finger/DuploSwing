#include "hal.h"
#include <avr/io.h>

void hal_init() {
#if defined (__AVR_ATtiny5__) || defined(__AVR_ATmega328P__) || defined (__AVR_ATtiny85__)
	ADCSRA = (1 << ADEN) | (1 << ADPS2) | (1 << ADPS1) | (0 << ADPS0);
#else
  #error "unsupported device"
#endif
}

void coil_turn_on() {
#if defined (__AVR_ATtiny5__) || defined (__AVR_ATtiny85__)
	DDRB  |=  _BV(PB0);
	PORTB |=  _BV(PB0);
#elif defined (__AVR_ATmega328P__)
	DDRC  |=  _BV(PC5);
	PORTC |=  _BV(PC5);
#else
  #error "unsupported device"
#endif
}

void coil_turn_off() {
#if defined (__AVR_ATtiny5__) || defined (__AVR_ATtiny85__)
	DDRB  &= ~_BV(PB0);
	PORTB &= ~_BV(PB0);
#elif defined (__AVR_ATmega328P__)
	DDRC  &= ~_BV(PC5);
	PORTC &= ~_BV(PC5);
#else
  #error "unsupported device"
#endif
}

uint16_t coil_read_adc()
{
#if defined (__AVR_ATtiny5__)
	ADMUX = 0;
	// adc start conversion
	ADCSRA |= (1 << ADSC);
	while (ADCSRA & (1 << ADSC));
	return ADCL;
#elif defined (__AVR_ATmega328P__) || defined (__AVR_ATtiny85__)
	ADMUX = 0;
	// AREF ext., adc right adjust result
	ADMUX |= (1 << REFS1) | (1 << REFS0) | (0 << ADLAR);
	// adc start conversion
	ADCSRA |= (1 << ADSC);
	while (ADCSRA & (1 << ADSC));
	return ADC;
#else
  #error "unsupported device"
#endif
}
