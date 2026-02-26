long ApplyRound(long param0, uint32_t param1) {
    long v0;
    long v1;
    long v2;
    if((int)param1 >= 1) {
        if(param1 <= 4) {
            v2 = 0L;
        }
        else {
            v2 = param1 - ((param1 & 0x3L) != 0L ? param1 & 0x3L: 4L);
            int* ptr0 = (int*)(param0 + 32L);
            long v3 = v2;
            do {
                __int128 v4 = (unsigned __int128)*(ptr0 - 6) | ((unsigned __int128)*(ptr0 - 3) << 32) | ((unsigned __int128)*ptr0 << 64) | ((unsigned __int128)*(ptr0 + 3) << 96);
                int* ptr1 = ptr0 + 3;
                v1 = v3 - 4L;
                v3 -= 4L;
                __int128 v5 = (unsigned __int128)((uint32_t)v4 >= 0.0 ? (uint32_t)v4: (float)(0.0 - (uint32_t)v4)) | ((unsigned __int128)((uint32_t)(v4 >>> 0x20X) >= 0.0 ? (uint32_t)(v4 >>> 0x20X): (float)(0.0 - (uint32_t)(v4 >>> 0x20X))) << 32) | ((unsigned __int128)((uint32_t)(v4 >>> 0x40X) >= 0.0 ? (uint32_t)(v4 >>> 0x40X): (float)(0.0 - (uint32_t)(v4 >>> 0x40X))) << 64) | ((unsigned __int128)((uint32_t)(v4 >>> 0x60X) >= 0.0 ? (uint32_t)(v4 >>> 0x60X): (float)(0.0 - (uint32_t)(v4 >>> 0x60X))) << 96);
                FSQRT(v5, v5);
                __int128 v6 = (unsigned __int128)(uint32_t)(v5 & 0xFFFFFFX) | ((unsigned __int128)((((uint8_t)(v4 >>> 0x18X) ^ (uint8_t)(v5 >>> 0x18X)) & 0xffffff80) ^ (uint8_t)(v5 >>> 0x18X)) << 24) | ((unsigned __int128)(uint32_t)((v5 >>> 0x20X) & 0xFFFFFFX) << 32) | ((unsigned __int128)((((uint8_t)(v4 >>> 0x38X) ^ (uint8_t)(v5 >>> 0x38X)) & 0xffffff80) ^ (uint8_t)(v5 >>> 0x38X)) << 56) | ((unsigned __int128)(uint32_t)((v5 >>> 0x40X) & 0xFFFFFFX) << 64) | ((unsigned __int128)((((uint8_t)(v4 >>> 0x58X) ^ (uint8_t)(v5 >>> 0x58X)) & 0xffffff80) ^ (uint8_t)(v5 >>> 0x58X)) << 88) | ((unsigned __int128)(uint32_t)((v5 >>> 0x60X) & 0xFFFFFFX) << 96) | ((unsigned __int128)((((uint8_t)(v4 >>> 0x78X) ^ (uint8_t)(v5 >>> 0x78X)) & 0xffffff80) ^ (uint8_t)(v5 >>> 0x78X)) << 120);
                *(ptr0 - 6) = (uint32_t)v6;
                *(ptr0 - 3) = (uint32_t)(v6 >>> 0x20X);
                *ptr0 = (uint32_t)(v6 >>> 0x40X);
                ptr0 += 12;
                *ptr1 = (uint32_t)(v6 >>> 0x60X);
            }
            while(v1 != 0L);
        }
        long v7 = param1 - v2;
        float* ptr2 = (float*)(v2 * 12L + param0 + 8L);
        do {
            v0 = v7 - 1L;
            --v7;
            __int128 v8 = *ptr2 < 0.0 ? (unsigned __int128)(float)(0.0 - *ptr2): (unsigned __int128)*ptr2;
            FSQRT(*ptr2 < 0.0 ? (float)(0.0 - *ptr2): *ptr2, *ptr2 < 0.0 ? (float)(0.0 - *ptr2): *ptr2);
            *ptr2 = (uint32_t)(v8 & 0xFFFFFFX) | ((uint32_t)((((uint8_t)(*ptr2 >>> 24) ^ (uint8_t)(v8 >>> 0x18X)) & 0xffffff80) ^ (uint8_t)(v8 >>> 0x18X)) << 24);
            ptr2 += 3;
        }
        while(v0 != 0L);
    }
    return param0;
}
