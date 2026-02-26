// Package: Botan::CRC32

int* Botan::CRC32::final_result(int* param0, int* param1) {
    long v0 = (uint64_t)~*(param0 + 2);
    *param1 = (uint32_t)(uint8_t)(v0 >>> 24L) | ((uint32_t)(uint8_t)(v0 >>> 16L) << 8) | ((uint32_t)(uint8_t)(v0 >>> 8L) << 16) | ((uint32_t)(uint8_t)v0 << 24);
    *(param0 + 2) = -1;
    return param0;
}
