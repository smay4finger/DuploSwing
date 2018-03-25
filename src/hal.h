#ifndef __HAL_H__
#define __HAL_H__

#include <stdint.h>

void hal_init(void);

void coil_turn_on(void);
void coil_turn_off(void);
uint16_t coil_read_adc(void);

#endif
