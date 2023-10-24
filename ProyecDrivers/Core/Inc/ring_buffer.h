/*
 * ring_buffer.h
 *
 *  Created on: Oct 23, 2023
 *      Author: User
 */

#ifndef INC_RING_BUFFER_H_
#define INC_RING_BUFFER_H_

#include <stdint.h>


typedef struct {

   uint8_t *buffer;  // --> pointer to memory location (* apuntador a memoria) apunta a un valor de memoria
   uint16_t head;    // --> to write new data
   uint16_t tail;    // --> to read old data

   uint16_t capacity;
   uint8_t  is_full;

} ring_buffer_t;//se refiere a un tipo (estructura)

void ring_buffer_init(ring_buffer_t *ring_buffer,uint8_t *buffer, uint16_t capacity);






#endif /* INC_RING_BUFFER_H_ */
