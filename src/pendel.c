#include "hal.h"

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <util/delay.h>

const uint16_t THRESHOLD = 20;
const uint16_t PUSH_TIME = 70; // ms
const uint16_t INHIBIT_TIME = 50; // ms

int main(void) {
	hal_init();

	coil_turn_off();

	while(true) {
		uint16_t read = coil_read_adc();
		if (read > THRESHOLD) {
			coil_turn_on();
			_delay_ms(PUSH_TIME);
			coil_turn_off();
			_delay_ms(INHIBIT_TIME);
		}

	}

	return 0;
}
