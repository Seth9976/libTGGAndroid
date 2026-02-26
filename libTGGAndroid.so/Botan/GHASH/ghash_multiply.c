// Package: Botan::GHASH

long* Botan::GHASH::ghash_multiply(long* param0, uint64_t* param1, long* param2, long param3) {
    long* ptr0 = *param1;
    long v0 = *ptr0;
    long v1 = *(ptr0 + 1);
    long* ptr1 = (uint64_t)(uint8_t)(v0 >>> 56L) | ((uint64_t)(uint8_t)(v0 >>> 48L) << 8) | ((uint64_t)(uint8_t)(v0 >>> 40L) << 16) | ((uint64_t)(uint8_t)(v0 >>> 32L) << 24) | ((uint64_t)(uint8_t)(v0 >>> 24L) << 32) | ((uint64_t)(uint8_t)(v0 >>> 16L) << 40) | ((uint64_t)(uint8_t)(v0 >>> 8L) << 48) | ((uint64_t)(uint8_t)v0 << 56);
    long* ptr2 = (uint64_t)(uint8_t)(v1 >>> 56L) | ((uint64_t)(uint8_t)(v1 >>> 48L) << 8) | ((uint64_t)(uint8_t)(v1 >>> 40L) << 16) | ((uint64_t)(uint8_t)(v1 >>> 32L) << 24) | ((uint64_t)(uint8_t)(v1 >>> 24L) << 32) | ((uint64_t)(uint8_t)(v1 >>> 16L) << 40) | ((uint64_t)(uint8_t)(v1 >>> 8L) << 48) | ((uint64_t)(uint8_t)v1 << 56);
    if(param3 != 0L) {
        v1 = *(param0 + 13);
        long v2 = 0L;
        do {
            long v3 = *(long*)(v2 * 16L + (long)param2);
            long v4 = *(long*)(((uint64_t)8 | ((uint64_t)(v2 & 0xfffffffffffffffL) << 4)) + (long)param2);
            long v5 = 0L;
            long* ptr3 = (long*)(((uint64_t)(uint8_t)(v3 >>> 56L) | ((uint64_t)(uint8_t)(v3 >>> 48L) << 8) | ((uint64_t)(uint8_t)(v3 >>> 40L) << 16) | ((uint64_t)(uint8_t)(v3 >>> 32L) << 24) | ((uint64_t)(uint8_t)(v3 >>> 24L) << 32) | ((uint64_t)(uint8_t)(v3 >>> 16L) << 40) | ((uint64_t)(uint8_t)(v3 >>> 8L) << 48) | ((uint64_t)(uint8_t)v3 << 56)) ^ (long)ptr1);
            long* ptr4 = (long*)(((uint64_t)(uint8_t)(v4 >>> 56L) | ((uint64_t)(uint8_t)(v4 >>> 48L) << 8) | ((uint64_t)(uint8_t)(v4 >>> 40L) << 16) | ((uint64_t)(uint8_t)(v4 >>> 32L) << 24) | ((uint64_t)(uint8_t)(v4 >>> 24L) << 32) | ((uint64_t)(uint8_t)(v4 >>> 16L) << 40) | ((uint64_t)(uint8_t)(v4 >>> 8L) << 48) | ((uint64_t)(uint8_t)v4 << 56)) ^ (long)ptr2);
            ptr2 = NULL;
            ptr1 = NULL;
            do {
                long* ptr5 = (long*)(v1 + v5);
                long* ptr6 = (long*)((long)ptr3 >> 63L);
                v5 += 32L;
                param0 = *ptr5 & (long)ptr6;
                param1 = (long)ptr4 >> 63L;
                ptr3 = (long)ptr3 * 2L;
                ptr4 = (long)ptr4 * 2L;
                ptr1 = (long)(long*)(*(ptr5 + 2) & (long)param1) ^ (long)(long*)((long)(long*)(*ptr5 & (long)ptr6) ^ (long)ptr1);
                ptr2 = (long)(long*)(*(ptr5 + 3) & (long)param1) ^ (long)(long*)((long)(long*)(*(ptr5 + 1) & (long)ptr6) ^ (long)ptr2);
            }
            while(v5 != 0x800L);
            ++v2;
        }
        while(param3 != v2);
    }
    *ptr0 = (uint64_t)(uint8_t)(long*)((long)ptr1 >>> 56L) | ((uint64_t)(uint8_t)(long*)((long)ptr1 >>> 48L) << 8) | ((uint64_t)(uint8_t)(long*)((long)ptr1 >>> 40L) << 16) | ((uint64_t)(uint8_t)(long*)((long)ptr1 >>> 32L) << 24) | ((uint64_t)(uint8_t)(long*)((long)ptr1 >>> 24L) << 32) | ((uint64_t)(uint8_t)(long*)((long)ptr1 >>> 16L) << 40) | ((uint64_t)(uint8_t)(long*)((long)ptr1 >>> 8L) << 48) | ((uint64_t)(uint8_t)ptr1 << 56);
    *(ptr0 + 1) = (uint64_t)(uint8_t)(long*)((long)ptr2 >>> 56L) | ((uint64_t)(uint8_t)(long*)((long)ptr2 >>> 48L) << 8) | ((uint64_t)(uint8_t)(long*)((long)ptr2 >>> 40L) << 16) | ((uint64_t)(uint8_t)(long*)((long)ptr2 >>> 32L) << 24) | ((uint64_t)(uint8_t)(long*)((long)ptr2 >>> 24L) << 32) | ((uint64_t)(uint8_t)(long*)((long)ptr2 >>> 16L) << 40) | ((uint64_t)(uint8_t)(long*)((long)ptr2 >>> 8L) << 48) | ((uint64_t)(uint8_t)ptr2 << 56);
    return param0;
}
