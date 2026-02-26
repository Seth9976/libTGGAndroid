// Package: Botan::Adler32

long* Botan::Adler32::final_result(long* param0, short* param1) {
    long v0 = (uint64_t)*(short*)((char*)param0 + 10L);
    long v1 = (uint64_t)*(short*)(param0 + 1);
    *param1 = (uint16_t)(uint8_t)(v0 >>> 8L) | ((uint16_t)(uint8_t)v0 << 8);
    *(param1 + 1) = (uint16_t)(uint8_t)(v1 >>> 8L) | ((uint16_t)(uint8_t)v1 << 8);
    *(int*)(param0 + 1) = 1;
    return param0;
}
