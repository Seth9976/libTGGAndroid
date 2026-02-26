// Package: Botan::FE_25519

int* Botan::FE_25519::sqr_iter(int* param0, int* param1, long param2) {
    long v0;
    long v1;
    long v2;
    long v3;
    long* ptr0 = (uint64_t)*param1;
    long* ptr1 = (uint64_t)*(param1 + 1);
    long v4 = (uint64_t)*(param1 + 2);
    long v5 = (uint64_t)*(param1 + 3);
    long v6 = (uint64_t)*(param1 + 4);
    int v7 = *(param1 + 5);
    int v8 = *(param1 + 6);
    int v9 = *(param1 + 7);
    long* ptr2 = (uint64_t)*(param1 + 8);
    long* ptr3 = (uint64_t)*(param1 + 9);
    if(param2 != 0L) {
        do {
            int v10 = (uint32_t)v5 * 2;
            int v11 = (uint32_t)v4 * 2;
            long v12 = (long)((uint32_t)ptr2 * 19) * v11 + (long)((uint32_t)ptr3 * 38) * ((uint64_t)((uint32_t)ptr1 * 2) | ((uint64_t)((long*)((long)(long*)((long)ptr1 >>> 30L) & 0x1L) ? -1: 0) << 32)) + (v9 * 38 * v10 + v8 * 19 * ((uint64_t)((uint32_t)v6 * 2) | ((uint64_t)((v6 >>> 30L) & 0x1L ? -1: 0) << 32))) + (v7 * 38 * v7 + (long)(uint32_t)ptr0 * (long)(uint32_t)ptr0);
            long v13 = (long)((uint32_t)ptr2 * 19) * ((uint64_t)(v8 * 2) | ((uint64_t)((v8 >>> 30) & 1 ? -1: 0) << 32)) + (long)((uint32_t)ptr3 * 38) * ((uint64_t)(v7 * 2) | ((uint64_t)((v7 >>> 30) & 1 ? -1: 0) << 32)) + (v9 * 38 * v9 + (long)(uint32_t)v4 * (long)(uint32_t)v4) + ((long)(uint32_t)v6 * ((uint64_t)((uint32_t)ptr0 * 2) | ((uint64_t)((long*)((long)(long*)((long)ptr0 >>> 30L) & 0x1L) ? -1: 0) << 32)) + v10 * ((uint64_t)((uint32_t)ptr1 * 2) | ((uint64_t)((long*)((long)(long*)((long)ptr1 >>> 30L) & 0x1L) ? -1: 0) << 32)));
            long v14 = (long)((uint32_t)ptr2 * 19) * v10 + (long)((uint32_t)ptr3 * 38) * (long)(uint32_t)v4 + (v9 * 38 * (long)(uint32_t)v6 + v8 * 19 * ((uint64_t)(v7 * 2) | ((uint64_t)((v7 >>> 30) & 1 ? -1: 0) << 32))) + ((long)(uint32_t)ptr1 * ((uint64_t)((uint32_t)ptr0 * 2) | ((uint64_t)((long*)((long)(long*)((long)ptr0 >>> 30L) & 0x1L) ? -1: 0) << 32)) + ((v12 + &gGameCenter+1068h) >> 26L));
            long v15 = (long)((uint32_t)ptr2 * 19) * ((uint64_t)(v9 * 2) | ((uint64_t)((v9 >>> 30) & 1 ? -1: 0) << 32)) + (long)((uint32_t)ptr3 * 38) * v8 + ((long)(uint32_t)v5 * v11 + (long)(uint32_t)v6 * ((uint64_t)((uint32_t)ptr1 * 2) | ((uint64_t)((long*)((long)(long*)((long)ptr1 >>> 30L) & 0x1L) ? -1: 0) << 32))) + (v7 * ((uint64_t)((uint32_t)ptr0 * 2) | ((uint64_t)((long*)((long)(long*)((long)ptr0 >>> 30L) & 0x1L) ? -1: 0) << 32)) + ((v13 + &gGameCenter+1068h) >> 26L));
            long v16 = (long)((uint32_t)ptr2 * 19) * ((uint64_t)((uint32_t)v6 * 2) | ((uint64_t)((v6 >>> 30L) & 0x1L ? -1: 0) << 32)) + (long)((uint32_t)ptr3 * 38) * v10 + (v9 * 38 * ((uint64_t)(v7 * 2) | ((uint64_t)((v7 >>> 30) & 1 ? -1: 0) << 32)) + v8 * 19 * v8) + ((long)(uint32_t)v4 * ((uint64_t)((uint32_t)ptr0 * 2) | ((uint64_t)((long*)((long)(long*)((long)ptr0 >>> 30L) & 0x1L) ? -1: 0) << 32)) + (long)(uint32_t)ptr1 * ((uint64_t)((uint32_t)ptr1 * 2) | ((uint64_t)((long*)((long)(long*)((long)ptr1 >>> 30L) & 0x1L) ? -1: 0) << 32)) + ((v14 + 0x1000000L) >> 25L));
            v3 = (long)((uint32_t)ptr2 * 19) * (long)(uint32_t)ptr2 + (long)((uint32_t)ptr3 * 38) * ((uint64_t)(v9 * 2) | ((uint64_t)((v9 >>> 30) & 1 ? -1: 0) << 32)) + ((long)(uint32_t)v5 * v10 + (long)(uint32_t)v6 * v11) + (v8 * ((uint64_t)((uint32_t)ptr0 * 2) | ((uint64_t)((long*)((long)(long*)((long)ptr0 >>> 30L) & 0x1L) ? -1: 0) << 32)) + ((uint64_t)((uint32_t)ptr1 * 2) | ((uint64_t)((long*)((long)(long*)((long)ptr1 >>> 30L) & 0x1L) ? -1: 0) << 32)) * ((uint64_t)(v7 * 2) | ((uint64_t)((v7 >>> 30) & 1 ? -1: 0) << 32)) + ((v15 + 0x1000000L) >> 25L));
            long v17 = (long)((uint32_t)ptr2 * 19) * ((uint64_t)(v7 * 2) | ((uint64_t)((v7 >>> 30) & 1 ? -1: 0) << 32)) + (long)((uint32_t)ptr3 * 38) * (long)(uint32_t)v6 + (v9 * 38 * v8 + (long)(uint32_t)v4 * ((uint64_t)((uint32_t)ptr1 * 2) | ((uint64_t)((long*)((long)(long*)((long)ptr1 >>> 30L) & 0x1L) ? -1: 0) << 32))) + ((long)(uint32_t)v5 * ((uint64_t)((uint32_t)ptr0 * 2) | ((uint64_t)((long*)((long)(long*)((long)ptr0 >>> 30L) & 0x1L) ? -1: 0) << 32)) + ((v16 + &gGameCenter+1068h) >> 26L));
            v2 = (long)((uint32_t)ptr3 * 38) * (long)(uint32_t)ptr2 + (long)(uint32_t)v6 * v10 + (v9 * ((uint64_t)((uint32_t)ptr0 * 2) | ((uint64_t)((long*)((long)(long*)((long)ptr0 >>> 30L) & 0x1L) ? -1: 0) << 32)) + v8 * ((uint64_t)((uint32_t)ptr1 * 2) | ((uint64_t)((long*)((long)(long*)((long)ptr1 >>> 30L) & 0x1L) ? -1: 0) << 32))) + (v7 * v11 + ((v3 + &gGameCenter+1068h) >> 26L));
            v4 = v16 - ((v16 + &gGameCenter+1068h) & 0xfc000000L);
            long v18 = v13 - ((v13 + &gGameCenter+1068h) & 0xfffffffffc000000L) + ((v17 + 0x1000000L) >> 25L);
            long v19 = (long)((uint32_t)ptr3 * 38) * (long)(uint32_t)ptr3 + (long)(uint32_t)v6 * (long)(uint32_t)v6 + ((long)(uint32_t)ptr2 * ((uint64_t)((uint32_t)ptr0 * 2) | ((uint64_t)((long*)((long)(long*)((long)ptr0 >>> 30L) & 0x1L) ? -1: 0) << 32)) + v10 * ((uint64_t)(v7 * 2) | ((uint64_t)((v7 >>> 30) & 1 ? -1: 0) << 32))) + (v8 * v11 + ((uint64_t)((uint32_t)ptr1 * 2) | ((uint64_t)((long*)((long)(long*)((long)ptr1 >>> 30L) & 0x1L) ? -1: 0) << 32)) * ((uint64_t)(v9 * 2) | ((uint64_t)((v9 >>> 30) & 1 ? -1: 0) << 32)) + ((v2 + 0x1000000L) >> 25L));
            v5 = v17 - ((v17 + 0x1000000L) & 0xfe000000L);
            param1 = v19 + &gGameCenter+1068h;
            v1 = v15 - ((v15 + 0x1000000L) & 0xfe000000L) + ((v18 + &gGameCenter+1068h) >>> 26L);
            long* ptr4 = (long*)((long)(uint32_t)ptr2 * ((uint64_t)((uint32_t)ptr1 * 2) | ((uint64_t)((long*)((long)(long*)((long)ptr1 >>> 30L) & 0x1L) ? -1: 0) << 32)) + (long)(uint32_t)ptr3 * ((uint64_t)((uint32_t)ptr0 * 2) | ((uint64_t)((long*)((long)(long*)((long)ptr0 >>> 30L) & 0x1L) ? -1: 0) << 32)) + (v9 * v11 + v10 * v8) + (long)(long*)(v7 * ((uint64_t)((uint32_t)v6 * 2) | ((uint64_t)((v6 >>> 30L) & 0x1L ? -1: 0) << 32)) + (long)(long*)((long)param1 >> 26L)));
            v6 = v18 - ((v18 + &gGameCenter+1068h) & 0xfc000000L);
            ptr2 = v19 - (long)(long*)((long)param1 & 0xfc000000L);
            long* ptr5 = (long*)(v12 - ((v12 + &gGameCenter+1068h) & 0xfffffffffc000000L) + (long)(long*)((long)(long*)((long)(ptr4 + "tIwLb1EE16do_positive_signEv") >> 25L) * 19L));
            ptr3 = (long)ptr4 - (long)(long*)((long)(ptr4 + "tIwLb1EE16do_positive_signEv") & 0xfe000000L);
            ptr1 = v14 - ((v14 + 0x1000000L) & 0xfe000000L) + (long)(long*)((long)(ptr5 + 0x400000) >>> 26L);
            v0 = param2 - 1L;
            --param2;
            ptr0 = (long)ptr5 - (long)(long*)((long)(ptr5 + 0x400000) & 0xfc000000L);
            v7 = (uint32_t)v1;
            v8 = (uint32_t)v3 - (((uint32_t)v3 + &gGameCenter+1068h) & 0xfc000000);
            v9 = (uint32_t)v2 - (((uint32_t)v2 + 0x1000000) & 0xfe000000);
        }
        while(v0 != 0L);
        v9 = (uint32_t)v2 - (((uint32_t)v2 + 0x1000000) & 0xfe000000);
        v8 = (uint32_t)v3 - (((uint32_t)v3 + &gGameCenter+1068h) & 0xfc000000);
        v7 = (uint32_t)v1;
    }
    *param0 = (uint32_t)ptr0;
    *(param0 + 1) = (uint32_t)ptr1;
    *(param0 + 2) = (uint32_t)v4;
    *(param0 + 3) = (uint32_t)v5;
    *(param0 + 4) = (uint32_t)v6;
    *(param0 + 5) = v7;
    *(param0 + 6) = v8;
    *(param0 + 7) = v9;
    *(param0 + 8) = (uint32_t)ptr2;
    *(param0 + 9) = (uint32_t)ptr3;
    return param1;
}
