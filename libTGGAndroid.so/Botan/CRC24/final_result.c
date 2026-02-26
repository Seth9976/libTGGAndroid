// Package: Botan::CRC24

long* Botan::CRC24::final_result(long* param0, char* param1) {
    *param1 = (uint8_t)*(int*)(param0 + 1);
    *(param1 + 1L) = (uint8_t)(*(int*)(param0 + 1) >>> 8);
    *(param1 + 2L) = (uint8_t)*(short*)((char*)param0 + 10L);
    *(int*)(param0 + 1) = 13501623;
    return param0;
}
