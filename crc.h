/* 
 * File:   crc.h
 * Author: hjf
 *
 * Created on 8 de octubre de 2018, 21:56
 */

#ifndef CRC_H
#define  CRC_H
#include <stdint.h>
void crc16_update(uint16_t *crc, uint8_t data);
void crc8_update(uint8_t *dest, uint8_t data);

#ifdef  __cplusplus
extern "C" {
#endif


#ifdef  __cplusplus
}
#endif

#endif  /* CRC_H */


