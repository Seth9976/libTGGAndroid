// Package: Botan::FE_25519

long Botan::FE_25519::to_bytes(int* param0, char* param1) {
    int v0;
    int v1 = *(param0 + 8);
    int v2 = *(param0 + 9);
    int v3 = *param0;
    int v4 = *(param0 + 1);
    int v5 = *(param0 + 2);
    int v6 = *(param0 + 3);
    int v7 = *(param0 + 4);
    int v8 = *(param0 + 5);
    int v9 = *(param0 + 6);
    int v10 = *(param0 + 7);
    long v11 = (uint64_t)(((((((((((((((((((((((v2 * 19 + 0x1000000) >> 25) + v3) >> 26) + v4) >> 25) + v5) >> 26) + v6) >> 25) + v7) >> 26) + v8) >> 25) + v9) >> 26) + *(param0 + 7)) >> 25) + v1) >> 26) + v2) >> 25) * 19 + v3);
    int v12 = ((((((((((((((((((((((((v2 * 19 + 0x1000000) >> 25) + v3) >> 26) + v4) >> 25) + v5) >> 26) + v6) >> 25) + v7) >> 26) + v8) >> 25) + v9) >> 26) + *(param0 + 7)) >> 25) + v1) >> 26) + v2) >> 25) * 19 + v3) >> 26) + v4;
    int v13 = ((((((((((((((((((((((((((v2 * 19 + 0x1000000) >> 25) + v3) >> 26) + v4) >> 25) + v5) >> 26) + v6) >> 25) + v7) >> 26) + v8) >> 25) + v9) >> 26) + *(param0 + 7)) >> 25) + v1) >> 26) + v2) >> 25) * 19 + v3) >> 26) + v4) >> 25) + v5;
    *(long*)param1 = (uint64_t)(uint32_t)(v11 & 0xffffffL) | ((uint64_t)(uint8_t)((uint32_t)(uint8_t)((v11 >>> 24L) & 0x3L) | ((uint32_t)(v12 & &gGameCenter+1067h) << 2)) << 24) | ((uint64_t)(uint16_t)(v12 >>> 6) << 32) | ((uint64_t)(uint8_t)((uint32_t)(uint8_t)((__ror__(v12, 22)) & 0x7) | ((uint32_t)(v13 & 0x3ffffff) << 3)) << 48) | ((uint64_t)(uint8_t)(v13 >>> 5) << 56);
    int v14 = (v13 >> 26) + v6;
    int v15 = (v14 >> 25) + v7;
    int v16 = (v15 >> 26) + v8;
    *(long*)(param1 + 10L) = (uint64_t)(uint16_t)(v14 >>> 3) | ((uint64_t)(uint8_t)((uint32_t)(uint8_t)((__ror__(v14, 19)) & 0x3F) | ((uint32_t)(v15 & 0x3ffffff) << 6)) << 16) | ((uint64_t)(uint32_t)((v15 >>> 2) & 0xffffff) << 24) | ((uint64_t)(uint16_t)v16 << 48);
    int v17 = (v16 >> 25) + v9;
    int v18 = (v17 >> 26) + v10;
    *(param1 + 9L) = (uint8_t)((uint32_t)(uint8_t)((__ror__(v13, 21)) & 0x1f) | ((uint32_t)(v14 & &gGameCenter+1067h) << 5));
    *(long*)(param1 + 18L) = (uint64_t)(uint8_t)(v16 >>> 16) | ((uint64_t)(uint8_t)((uint32_t)((v16 >>> 24) & 1) | ((uint32_t)(v17 & 0x3ffffff) << 1)) << 8) | ((uint64_t)(uint16_t)(v17 >>> 7) << 16) | ((uint64_t)(uint8_t)((uint32_t)(uint8_t)((__ror__(v17, 23)) & 0x7) | ((uint32_t)(v18 & &gGameCenter+1067h) << 3)) << 32) | ((uint64_t)(uint16_t)(v18 >>> 5) << 40) | ((uint64_t)(uint8_t)((uint32_t)(uint8_t)((__ror__(v18, 21)) & 0xF) | ((uint32_t)(v0 & 0x3ffffff) << 4)) << 56);
    v0 = (v18 >> 25) + v1;
    int v19 = (v0 >> 26) + v2;
    *(param1 + 26L) = (uint8_t)(v0 >>> 4);
    *(param1 + 8L) = (uint8_t)(v13 >>> 13);
    *(param1 + 27L) = (uint8_t)(v0 >>> 12);
    *(param1 + 29L) = (uint8_t)(v19 >>> 2);
    *(param1 + 30L) = (uint8_t)(v19 >>> 10);
    *(param1 + 28L) = (uint8_t)((uint32_t)(uint8_t)((__ror__(v0, 20)) & 0x3F) | ((uint32_t)(v19 & &gGameCenter+1067h) << 6));
    *(param1 + 31L) = (uint8_t)__ror__(v19, 18) & 0x7f;
    return (uint64_t)(v14 >>> 11);
}
