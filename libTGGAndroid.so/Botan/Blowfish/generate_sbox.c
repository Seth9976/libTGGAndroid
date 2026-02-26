// Package: Botan::Blowfish

uint64_t* Botan::Blowfish::generate_sbox(uint64_t* param0, uint64_t* param1, int* param2, int* param3, int* param4, long param5, long param6) {
    if(*(param1 + 1) != *param1) {
        uint64_t v0 = 0L;
        do {
            if(param5 != 0L) {
                uint64_t v1 = (uint64_t)(param6 + v0);
                long v2 = (uint64_t)*(int*)(v1 % (uint64_t)(param5 >>> 2L) * 4L + (long)param4);
                *param2 ^= (uint32_t)(uint8_t)(v2 >>> 24L) | ((uint32_t)(uint8_t)(v2 >>> 16L) << 8) | ((uint32_t)(uint8_t)(v2 >>> 8L) << 16) | ((uint32_t)(uint8_t)v2 << 24);
                long v3 = (uint64_t)*(int*)((v1 + 1L) % (uint64_t)(param5 >>> 2L) * 4L + (long)param4);
                *param3 ^= (uint32_t)(uint8_t)(v3 >>> 24L) | ((uint32_t)(uint8_t)(v3 >>> 16L) << 8) | ((uint32_t)(uint8_t)(v3 >>> 8L) << 16) | ((uint32_t)(uint8_t)v3 << 24);
            }
            int v4 = *param2;
            int* ptr0 = NULL;
            do {
                int v5 = *(int*)((long)*(param0 + 4) + (long)ptr0) ^ v4;
                *param2 = *(int*)((long)*(param0 + 4) + (long)ptr0) ^ v4;
                int* ptr1 = *(param0 + 1);
                int v6 = (((*(int*)((uint64_t)(v5 >>> 24) * 4L + (long)ptr1) + *(int*)((uint64_t)((uint32_t)(uint8_t)(v5 >>> 16) | ((uint32_t)1 << 8)) * 4L + (long)ptr1)) ^ *(int*)((uint64_t)((uint32_t)(uint8_t)(v5 >>> 8) | ((uint32_t)2 << 8)) * 4L + (long)ptr1)) + *(int*)((uint64_t)((uint32_t)(uint8_t)v5 | ((uint32_t)3 << 8)) * 4L + (long)ptr1)) ^ *param3;
                *param3 ^= ((*(int*)((uint64_t)(v5 >>> 24) * 4L + (long)ptr1) + *(int*)((uint64_t)((uint32_t)(uint8_t)(v5 >>> 16) | ((uint32_t)1 << 8)) * 4L + (long)ptr1)) ^ *(int*)((uint64_t)((uint32_t)(uint8_t)(v5 >>> 8) | ((uint32_t)2 << 8)) * 4L + (long)ptr1)) + *(int*)((uint64_t)((uint32_t)(uint8_t)v5 | ((uint32_t)3 << 8)) * 4L + (long)ptr1);
                int v7 = *(int*)((char*)((long)*(param0 + 4) + (long)ptr0) + 4L);
                ptr0 += 2;
                int v8 = v6 ^ v7;
                *param3 = v6 ^ v7;
                int* ptr2 = *(param0 + 1);
                v4 = (((*(int*)((uint64_t)(v8 >>> 24) * 4L + (long)ptr2) + *(int*)((uint64_t)((uint32_t)(uint8_t)(v8 >>> 16) | ((uint32_t)1 << 8)) * 4L + (long)ptr2)) ^ *(int*)((uint64_t)((uint32_t)(uint8_t)(v8 >>> 8) | ((uint32_t)2 << 8)) * 4L + (long)ptr2)) + *(int*)((uint64_t)((uint32_t)(uint8_t)v8 | ((uint32_t)3 << 8)) * 4L + (long)ptr2)) ^ *param2;
                *param2 ^= ((*(int*)((uint64_t)(v8 >>> 24) * 4L + (long)ptr2) + *(int*)((uint64_t)((uint32_t)(uint8_t)(v8 >>> 16) | ((uint32_t)1 << 8)) * 4L + (long)ptr2)) ^ *(int*)((uint64_t)((uint32_t)(uint8_t)(v8 >>> 8) | ((uint32_t)2 << 8)) * 4L + (long)ptr2)) + *(int*)((uint64_t)((uint32_t)(uint8_t)v8 | ((uint32_t)3 << 8)) * 4L + (long)ptr2);
            }
            while(ptr0 != 64L);
            int v9 = *param3;
            *param3 = *(int*)(*(param0 + 4) + 8) ^ v4;
            int v10 = *(int*)((char*)*(param0 + 4) + 68L) ^ v9;
            *param2 = *(int*)((char*)*(param0 + 4) + 68L) ^ v9;
            int* ptr3 = (int*)(v0 * 4L);
            v0 += 2L;
            *(int*)(*param1 + (long)ptr3) = v10;
            *(int*)((long)(long*)((long)ptr3 | 0x4L) + *param1) = *param3;
        }
        while((*(param1 + 1) - *param1) >> 2L != v0);
    }
    return param0;
}
