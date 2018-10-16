#include "crc.h"
#include <stdint.h>

////CRC8 MAXIM (good for 1-wire devices)
void crc8_update(uint8_t *dest, uint8_t data) {

   for (uint8_t tempI = 8; tempI; tempI--) {
       uint8_t sum = (uint8_t) ((*dest ^ data) & 0x01);
       *dest >>= 1;
       if (sum) {
           *dest ^= 0x8C;
       }
       data >>= 1;
   }
}

//CRC16 KERMIT
void crc16_update(uint16_t *crc, uint8_t data) {
    uint16_t crctemp = *crc;
    data ^= crctemp & 0xFF;
    data ^= (uint8_t)(data << 4);

    crctemp = ((((uint16_t) data << 8) | (crctemp >> 8)) ^ (uint8_t) (data >> 4)
            ^ ((uint16_t) data << 3));
    *crc = crctemp;
}
