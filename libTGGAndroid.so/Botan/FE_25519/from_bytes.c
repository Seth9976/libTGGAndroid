// Package: Botan::FE_25519

int* Botan::FE_25519::from_bytes(int* param0, int* param1) {
    long v0 = (uint64_t)*(char*)((char*)param1 + 7L) * 32L;
    long v1 = (uint64_t)*(char*)(param1 + 1) * 64L;
    long v2 = (uint64_t)(uint16_t)(v0 & 0x1fffL) | ((uint64_t)*(char*)(param1 + 2) << 13) | ((uint64_t)((v0 >>> 21L) & 0x7ffffffffffL) << 21);
    long v3 = (uint64_t)(uint16_t)(v1 & 0x3fffL) | ((uint64_t)*(char*)((char*)param1 + 5L) << 14) | ((uint64_t)((v1 >>> 22L) & 0x3ffffffffffL) << 22);
    long v4 = (uint64_t)*(char*)((char*)param1 + 10L) * 8L;
    long v5 = (uint64_t)(uint16_t)(v4 & 0x7ffL) | ((uint64_t)*(char*)((char*)param1 + 11L) << 11) | ((uint64_t)((v4 >>> 19L) & 0x1fffffffffffL) << 19);
    long v6 = (uint64_t)*(char*)((char*)param1 + 13L) * 4L;
    long v7 = (uint64_t)(uint16_t)(v6 & 0x3ffL) | ((uint64_t)*(char*)((char*)param1 + 14L) << 10) | ((uint64_t)((v6 >>> 18L) & 0x3fffffffffffL) << 18);
    long v8 = (uint64_t)*(char*)(param1 + 5) * 128L;
    long v9 = (uint64_t)*(char*)((char*)param1 + 23L) * 32L;
    long v10 = (uint64_t)(uint16_t)(v9 & 0x1fffL) | ((uint64_t)*(char*)(param1 + 6) << 13) | ((uint64_t)((v9 >>> 21L) & 0x7ffffffffffL) << 21);
    long v11 = (uint64_t)*(char*)((char*)param1 + 26L) * 16L;
    long v12 = (uint64_t)*(char*)((char*)param1 + 29L) * 4L;
    long v13 = (uint64_t)(uint16_t)(v11 & 0xfffL) | ((uint64_t)*(char*)((char*)param1 + 27L) << 12) | ((uint64_t)((v11 >>> 20L) & 0xfffffffffffL) << 20);
    long v14 = (uint64_t)*(param1 + 4);
    long v15 = (uint64_t)(uint32_t)(v3 & 0x3fffffL) | ((uint64_t)*(char*)((char*)param1 + 6L) << 22) | ((uint64_t)((v3 >>> 30L) & 0x3ffffffffL) << 30);
    long v16 = (uint64_t)(uint32_t)(v5 & &gvar_10308+6fcf7h) | ((uint64_t)*(char*)(param1 + 3) << 19) | ((uint64_t)((v5 >>> 27L) & 0x1fffffffffL) << 27);
    long v17 = (uint64_t)(uint32_t)(v10 & "ctIwLb1EE16do_positive_signEv") | ((uint64_t)*(char*)((char*)param1 + 25L) << 21) | ((uint64_t)((v10 >>> 29L) & 0x7ffffffffL) << 29);
    long v18 = ((uint64_t)((uint32_t)*(char*)((char*)param1 + 31L) * &gvar_10308+2fcf8h) & &gDraw3DData+76f6a8h) | (uint64_t)(uint16_t)(v12 & 0x3ffL) | ((uint64_t)*(char*)((char*)param1 + 30L) << 10) | ((uint64_t)((v12 >>> 18L) & 0x3fffffffffffL) << 18);
    long v19 = (uint64_t)(uint16_t)(v8 & 0x7fffL) | ((uint64_t)*(char*)((char*)param1 + 21L) << 0xF) | ((uint64_t)((v8 >>> 23L) & 0x1ffffffffffL) << 23);
    long v20 = ((v18 + 0x1000000L) >>> 25L) * 19L + (uint64_t)*param1;
    long v21 = ((v14 + 0x1000000L) >>> 25L) + ((uint64_t)(uint32_t)(v19 & 0x7fffffL) | ((uint64_t)*(char*)((char*)param1 + 22L) << 23) | ((uint64_t)((v19 >>> 31L) & 0x1ffffffffL) << 31));
    long v22 = ((v15 + 0x1000000L) >>> 25L) + ((uint64_t)(uint32_t)(v2 & "ctIwLb1EE16do_positive_signEv") | ((uint64_t)*(char*)((char*)param1 + 9L) << 21) | ((uint64_t)((v2 >>> 29L) & 0x7ffffffffL) << 29));
    long v23 = ((v16 + 0x1000000L) >>> 25L) + ((uint64_t)(uint32_t)(v7 & &gvar_10308+2fcf7h) | ((uint64_t)*(char*)((char*)param1 + 15L) << 18) | ((uint64_t)((v7 >>> 26L) & 0x3fffffffffL) << 26));
    long v24 = ((v17 + 0x1000000L) >>> 25L) + ((uint64_t)(uint32_t)(v13 & "8GainCard6CardID8DomWhere7LogFlag16TriggerEventFlag13CardMoveStyle") | ((uint64_t)*(char*)(param1 + 7) << 20) | ((uint64_t)((v13 >>> 28L) & 0xfffffffffL) << 28));
    *(param0 + 4) = (uint32_t)v23 - (((uint32_t)v23 + &gGameCenter+1068h) & 0xfc000000);
    *(param0 + 5) = (uint32_t)v14 - (((uint32_t)v14 + 0x1000000) & 0xfe000000) + (uint32_t)((v23 + &gGameCenter+1068h) >>> 26L);
    *(param0 + 6) = (uint32_t)v21 - (((uint32_t)v21 + &gGameCenter+1068h) & 0xfc000000);
    *(param0 + 7) = (uint32_t)((v21 + &gGameCenter+1068h) >>> 26L) + (uint32_t)v17 - (((uint32_t)v17 + 0x1000000) & 0x3e000000);
    *param0 = (uint32_t)v20 - (((uint32_t)v20 + &gGameCenter+1068h) & 0xfc000000);
    *(param0 + 1) = (uint32_t)v15 - (((uint32_t)v15 + 0x1000000) & 0x7e000000) + (uint32_t)((v20 + &gGameCenter+1068h) >>> 26L);
    *(param0 + 2) = (uint32_t)v22 - (((uint32_t)v22 + &gGameCenter+1068h) & 0xfc000000);
    *(param0 + 3) = (uint32_t)((v22 + &gGameCenter+1068h) >>> 26L) + (uint32_t)v16 - (((uint32_t)v16 + 0x1000000) & 0xe000000);
    *(param0 + 8) = (uint32_t)v24 - (((uint32_t)v24 + &gGameCenter+1068h) & 0xfc000000);
    *(param0 + 9) = (uint32_t)((v24 + &gGameCenter+1068h) >>> 26L) + (uint32_t)v18 - (((uint32_t)v18 + 0x1000000) & &gGameCenter+1068h);
    return param0;
}
