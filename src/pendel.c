/*
    DuploSwing - LEGO Duplo Swing swinging forever
    Copyright (C) 2018  Stefan May

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

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
