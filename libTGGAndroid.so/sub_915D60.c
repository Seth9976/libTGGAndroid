uint64_t* sub_915D60(uint64_t* param0, long* param1, int param2, long* param3, long* param4) {
    uint64_t* ptr0;
    __int128 v0;
    __int128 v1;
    __int128 v2;
    __int128 v3;
    __int128* ptr1;
    __int128* ptr2;
    __int128 v4;
    uint64_t* ptr3;
    uint64_t* ptr4;
    unsigned __int128* ptr5;
    unsigned __int128* ptr6;
    uint64_t* ptr7;
    uint64_t* ptr8;
    unsigned __int128* ptr9;
    uint64_t* ptr10;
    uint64_t* ptr11;
    long* ptr12;
    long v5;
    __int128 v6;
    uint64_t* ptr13 = (uint64_t)(uint8_t)param2 | ((uint64_t)(long*)((long)(long*)((long)ptr13 >>> 8L) & 0xffffffffffffffL) << 8);
    uint64_t* ptr14 = param0;
    long* ptr15 = param4;
    *(long*)(*param3 + 24L)((long)param3, (long)&ptr13, 1L, (long)param3, (long)param4);
    ptr13 = (uint64_t)(uint8_t)param2 | ((uint64_t)(long*)((long)(long*)((long)ptr13 >>> 8L) & 0xffffffffffffffL) << 8);
    *(long*)(*ptr15 + 24L)((long)ptr15, (long)&ptr13, 1L);
    long v7 = *param1;
    *(long*)(*param3 + 24L)((long)param3, v7, *(param1 + 1) - v7);
    long v8 = *param1;
    *(long*)(*ptr15 + 24L)((long)ptr15, v8, *(param1 + 1) - v8);
    Botan::Buffered_Computation::final((long)param3);
    uint64_t* ptr16 = *ptr14;
    uint64_t* ptr17 = ptr13;
    uint64_t* ptr18 = (uint64_t*)((long)*(ptr14 + 1) - (long)ptr16);
    uint64_t* ptr19 = (uint64_t*)((long)ptr10 - (long)ptr17);
    uint64_t* ptr20 = ptr18 <= ptr19 ? ptr18: ptr19;
    uint64_t* ptr21 = (uint64_t*)((long)ptr20 & 0xffffffffffffffe0L);
    if((long*)((long)ptr20 & 0xffffffffffffffe0L) != 0L) {
        ptr9 = NULL;
        uint64_t* ptr22 = ptr21 - 4;
        if(ptr22 == 0L || (uint64_t*)__carry__((long)(ptr16 + 3), (long)ptr22) || (uint64_t*)__carry__((long)(ptr16 + 2), (long)ptr22) || (uint64_t*)__carry__((long)(ptr16 + 1), (long)ptr22) || (uint64_t*)__carry__((long)ptr16, (long)ptr22)) {
        loc_915EC8:
            uint64_t* ptr23 = (uint64_t*)(ptr9 + 1);
            ptr7 = (long)ptr9 - (long)ptr21;
            ptr9 = (long)ptr17 + (long)ptr23;
            ptr6 = (long)ptr16 + (long)ptr23;
            do {
                __int128* ptr24 = *(ptr6 - 1);
                __int128* ptr25 = *ptr6;
                ptr2 = *(ptr9 - 1);
                ptr1 = *ptr9;
                ptr8 = ptr7;
                ptr7 += 4;
                ptr9 += 2;
                *(ptr6 - 1) = (unsigned __int128)((uint8_t)ptr24 ^ (uint8_t)ptr2) | ((unsigned __int128)((uint8_t)(long*)((long)ptr24 >>> 0x8X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(long*)((long)ptr24 >>> 0x10X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(long*)((long)ptr24 >>> 0x18X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(long*)((long)ptr24 >>> 0x20X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(long*)((long)ptr24 >>> 0x28X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(long*)((long)ptr24 >>> 0x30X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(long*)((long)ptr24 >>> 0x38X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(long*)((long)ptr24 >>> 0x40X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(long*)((long)ptr24 >>> 0x48X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(long*)((long)ptr24 >>> 0x50X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(long*)((long)ptr24 >>> 0x58X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(long*)((long)ptr24 >>> 0x60X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(long*)((long)ptr24 >>> 0x68X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(long*)((long)ptr24 >>> 0x70X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(long*)((long)ptr24 >>> 0x78X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x78X)) << 120);
                *ptr6 = (unsigned __int128)((uint8_t)ptr25 ^ (uint8_t)ptr1) | ((unsigned __int128)((uint8_t)(long*)((long)ptr25 >>> 0x8X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(long*)((long)ptr25 >>> 0x10X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(long*)((long)ptr25 >>> 0x18X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(long*)((long)ptr25 >>> 0x20X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(long*)((long)ptr25 >>> 0x28X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(long*)((long)ptr25 >>> 0x30X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(long*)((long)ptr25 >>> 0x38X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(long*)((long)ptr25 >>> 0x40X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(long*)((long)ptr25 >>> 0x48X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(long*)((long)ptr25 >>> 0x50X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(long*)((long)ptr25 >>> 0x58X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(long*)((long)ptr25 >>> 0x60X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(long*)((long)ptr25 >>> 0x68X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(long*)((long)ptr25 >>> 0x70X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(long*)((long)ptr25 >>> 0x78X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x78X)) << 120);
                ptr6 += 2;
            }
            while(ptr8 != -32L);
        }
        else if((uint64_t*)((long)ptr17 + (long)ptr21) > ptr16 && (uint64_t*)((long)ptr16 + (long)ptr21) > ptr17) {
            ptr9 = NULL;
            goto loc_915EC8;
        }
        else {
            ptr7 = (char*)((long)ptr22 >>> 5L) + 1L;
            ptr6 = (long)ptr7 & 0xffffffffffffffeL;
            ptr9 = (long)ptr6 * 32L;
            ptr5 = ptr6;
            ptr4 = ptr17;
            ptr3 = ptr16;
            do {
                __int128 v9 = (unsigned __int128)*ptr3 | ((unsigned __int128)*(ptr3 + 4) << 64);
                v4 = (unsigned __int128)*(ptr3 + 1) | ((unsigned __int128)*(ptr3 + 5) << 64);
                ptr2 = (unsigned __int128)*(ptr3 + 2) | ((unsigned __int128)*(ptr3 + 6) << 64);
                ptr1 = (unsigned __int128)*(ptr3 + 3) | ((unsigned __int128)*(ptr3 + 7) << 64);
                v3 = (unsigned __int128)*ptr4 | ((unsigned __int128)*(ptr4 + 4) << 64);
                v2 = (unsigned __int128)*(ptr4 + 1) | ((unsigned __int128)*(ptr4 + 5) << 64);
                v1 = (unsigned __int128)*(ptr4 + 2) | ((unsigned __int128)*(ptr4 + 6) << 64);
                v0 = (unsigned __int128)*(ptr4 + 3) | ((unsigned __int128)*(ptr4 + 7) << 64);
                ptr4 += 8;
                ptr0 = (char*)ptr5 - 2L;
                ptr5 = (char*)ptr5 - 2L;
                (unsigned __int128)*ptr12 | ((unsigned __int128)*(ptr12 + 4) << 64) = (unsigned __int128)((uint8_t)v9 ^ (uint8_t)v3) | ((unsigned __int128)((uint8_t)(v9 >>> 0x8X) ^ (uint8_t)(v3 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(v9 >>> 0x10X) ^ (uint8_t)(v3 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(v9 >>> 0x18X) ^ (uint8_t)(v3 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(v9 >>> 0x20X) ^ (uint8_t)(v3 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(v9 >>> 0x28X) ^ (uint8_t)(v3 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(v9 >>> 0x30X) ^ (uint8_t)(v3 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(v9 >>> 0x38X) ^ (uint8_t)(v3 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(v9 >>> 0x40X) ^ (uint8_t)(v3 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(v9 >>> 0x48X) ^ (uint8_t)(v3 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(v9 >>> 0x50X) ^ (uint8_t)(v3 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(v9 >>> 0x58X) ^ (uint8_t)(v3 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(v9 >>> 0x60X) ^ (uint8_t)(v3 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(v9 >>> 0x68X) ^ (uint8_t)(v3 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(v9 >>> 0x70X) ^ (uint8_t)(v3 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(v9 >>> 0x78X) ^ (uint8_t)(v3 >>> 0x78X)) << 120);
                (unsigned __int128)*(ptr12 + 1) | ((unsigned __int128)*(ptr12 + 5) << 64) = (unsigned __int128)((uint8_t)v4 ^ (uint8_t)v2) | ((unsigned __int128)((uint8_t)(v4 >>> 0x8X) ^ (uint8_t)(v2 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(v4 >>> 0x10X) ^ (uint8_t)(v2 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(v4 >>> 0x18X) ^ (uint8_t)(v2 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(v4 >>> 0x20X) ^ (uint8_t)(v2 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(v4 >>> 0x28X) ^ (uint8_t)(v2 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(v4 >>> 0x30X) ^ (uint8_t)(v2 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(v4 >>> 0x38X) ^ (uint8_t)(v2 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(v4 >>> 0x40X) ^ (uint8_t)(v2 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(v4 >>> 0x48X) ^ (uint8_t)(v2 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(v4 >>> 0x50X) ^ (uint8_t)(v2 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(v4 >>> 0x58X) ^ (uint8_t)(v2 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(v4 >>> 0x60X) ^ (uint8_t)(v2 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(v4 >>> 0x68X) ^ (uint8_t)(v2 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(v4 >>> 0x70X) ^ (uint8_t)(v2 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(v4 >>> 0x78X) ^ (uint8_t)(v2 >>> 0x78X)) << 120);
                (unsigned __int128)*(ptr12 + 2) | ((unsigned __int128)*(ptr12 + 6) << 64) = (unsigned __int128)((uint8_t)ptr2 ^ (uint8_t)v1) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x8X) ^ (uint8_t)(v1 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x10X) ^ (uint8_t)(v1 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x18X) ^ (uint8_t)(v1 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x20X) ^ (uint8_t)(v1 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x28X) ^ (uint8_t)(v1 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x30X) ^ (uint8_t)(v1 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x38X) ^ (uint8_t)(v1 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x40X) ^ (uint8_t)(v1 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x48X) ^ (uint8_t)(v1 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x50X) ^ (uint8_t)(v1 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x58X) ^ (uint8_t)(v1 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x60X) ^ (uint8_t)(v1 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x68X) ^ (uint8_t)(v1 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x70X) ^ (uint8_t)(v1 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x78X) ^ (uint8_t)(v1 >>> 0x78X)) << 120);
                (unsigned __int128)*(ptr12 + 3) | ((unsigned __int128)*(ptr12 + 7) << 64) = (unsigned __int128)((uint8_t)ptr1 ^ (uint8_t)v0) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x8X) ^ (uint8_t)(v0 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x10X) ^ (uint8_t)(v0 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x18X) ^ (uint8_t)(v0 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x20X) ^ (uint8_t)(v0 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x28X) ^ (uint8_t)(v0 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x30X) ^ (uint8_t)(v0 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x38X) ^ (uint8_t)(v0 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x40X) ^ (uint8_t)(v0 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x48X) ^ (uint8_t)(v0 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x50X) ^ (uint8_t)(v0 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x58X) ^ (uint8_t)(v0 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x60X) ^ (uint8_t)(v0 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x68X) ^ (uint8_t)(v0 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x70X) ^ (uint8_t)(v0 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x78X) ^ (uint8_t)(v0 >>> 0x78X)) << 120);
                ptr3 += 8;
            }
            while(ptr0 != 0L);
            if(ptr7 != ptr6) {
                goto loc_915EC8;
            }
        }
    }
    if(ptr21 != ptr20) {
        if((long*)((long)ptr20 & 0x18L) != 0L) {
            ptr9 = (long)ptr16 + (long)ptr21;
            ptr7 = (long)ptr17 + (long)ptr21;
            if((uint64_t)(uint64_t*)((long)ptr17 + (long)ptr20) <= (uint64_t)ptr9 || (uint64_t*)((long)ptr16 + (long)ptr20) <= ptr7) {
                ptr6 = (long)ptr20 & 0x7L;
                ptr5 = (long)(uint64_t*)((long)ptr20 & 0x1fL) - (long)ptr6;
                ptr21 = (long)ptr21 + (long)ptr5;
                do {
                    __int128 v10 = (unsigned __int128)*ptr7;
                    ++ptr7;
                    v4 = (unsigned __int128)*(long**)ptr9;
                    ptr0 = (char*)ptr5 - 8L;
                    ptr5 = (char*)ptr5 - 8L;
                    *(long**)ptr9 = (uint64_t)((uint8_t)v10 ^ (uint8_t)v4) | ((uint64_t)((uint8_t)(v10 >>> 0x8X) ^ (uint8_t)(v4 >>> 0x8X)) << 8) | ((uint64_t)((uint8_t)(v10 >>> 0x10X) ^ (uint8_t)(v4 >>> 0x10X)) << 16) | ((uint64_t)((uint8_t)(v10 >>> 0x18X) ^ (uint8_t)(v4 >>> 0x18X)) << 24) | ((uint64_t)((uint8_t)(v10 >>> 0x20X) ^ (uint8_t)(v4 >>> 0x20X)) << 32) | ((uint64_t)((uint8_t)(v10 >>> 0x28X) ^ (uint8_t)(v4 >>> 0x28X)) << 40) | ((uint64_t)((uint8_t)(v10 >>> 0x30X) ^ (uint8_t)(v4 >>> 0x30X)) << 48) | ((uint64_t)((uint8_t)(v10 >>> 0x38X) ^ (uint8_t)(v4 >>> 0x38X)) << 56);
                    ptr9 = (char*)ptr9 + 8L;
                }
                while(ptr0 != 0L);
                if(ptr6 == 0L) {
                    goto loc_915F84;
                }
            }
        }
        uint64_t* ptr26 = (uint64_t*)((long)ptr20 - (long)ptr21);
        uint8_t* ptr27 = (uint8_t*)((long)ptr16 + (long)ptr21);
        uint8_t* ptr28 = (uint8_t*)((long)ptr17 + (long)ptr21);
        do {
            long v11 = (uint64_t)*ptr28;
            ++ptr28;
            ptr0 = (char*)ptr26 - 1L;
            ptr26 = (char*)ptr26 - 1L;
            *ptr27 ^= (uint8_t)v11;
            ++ptr27;
        }
        while(ptr0 != 0L);
    }
loc_915F84:
    Botan::Buffered_Computation::final((long)ptr15);
    uint64_t* ptr29 = ptr13;
    if(ptr29 != 0L) {
        ptr10 = ptr29;
        Botan::deallocate_memory((long)ptr29, (long)(uint64_t*)(v5 - (long)ptr29), 1L);
    }
    uint64_t* ptr30 = ptr11;
    ptr13 = ptr11;
    *(__int128*)&ptr10 = v6;
    uint64_t* ptr31 = *ptr14;
    uint64_t* ptr32 = (uint64_t*)((uint64_t)v6 - (long)ptr30);
    uint64_t* ptr33 = (uint64_t*)((long)*(ptr14 + 1) - (long)ptr31);
    uint64_t* ptr34 = ptr33 <= ptr32 ? ptr33: ptr32;
    uint64_t* ptr35 = (uint64_t*)((long)ptr34 & 0xffffffffffffffe0L);
    if((long*)((long)ptr34 & 0xffffffffffffffe0L) != 0L) {
        ptr9 = NULL;
        uint64_t* ptr36 = ptr35 - 4;
        if(ptr36 == 0L || (uint64_t*)__carry__((long)(ptr31 + 3), (long)ptr36) || (uint64_t*)__carry__((long)(ptr31 + 2), (long)ptr36) || (uint64_t*)__carry__((long)(ptr31 + 1), (long)ptr36) || (uint64_t*)__carry__((long)ptr31, (long)ptr36)) {
        loc_916084:
            uint64_t* ptr37 = (uint64_t*)(ptr9 + 1);
            ptr7 = (long)ptr9 - (long)ptr35;
            ptr9 = (long)ptr30 + (long)ptr37;
            ptr6 = (long)ptr31 + (long)ptr37;
            do {
                __int128* ptr38 = *(ptr6 - 1);
                __int128* ptr39 = *ptr6;
                ptr2 = *(ptr9 - 1);
                ptr1 = *ptr9;
                ptr8 = ptr7;
                ptr7 += 4;
                ptr9 += 2;
                *(ptr6 - 1) = (unsigned __int128)((uint8_t)ptr38 ^ (uint8_t)ptr2) | ((unsigned __int128)((uint8_t)(long*)((long)ptr38 >>> 0x8X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(long*)((long)ptr38 >>> 0x10X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(long*)((long)ptr38 >>> 0x18X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(long*)((long)ptr38 >>> 0x20X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(long*)((long)ptr38 >>> 0x28X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(long*)((long)ptr38 >>> 0x30X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(long*)((long)ptr38 >>> 0x38X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(long*)((long)ptr38 >>> 0x40X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(long*)((long)ptr38 >>> 0x48X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(long*)((long)ptr38 >>> 0x50X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(long*)((long)ptr38 >>> 0x58X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(long*)((long)ptr38 >>> 0x60X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(long*)((long)ptr38 >>> 0x68X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(long*)((long)ptr38 >>> 0x70X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(long*)((long)ptr38 >>> 0x78X) ^ (uint8_t)(long*)((long)ptr2 >>> 0x78X)) << 120);
                *ptr6 = (unsigned __int128)((uint8_t)ptr39 ^ (uint8_t)ptr1) | ((unsigned __int128)((uint8_t)(long*)((long)ptr39 >>> 0x8X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(long*)((long)ptr39 >>> 0x10X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(long*)((long)ptr39 >>> 0x18X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(long*)((long)ptr39 >>> 0x20X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(long*)((long)ptr39 >>> 0x28X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(long*)((long)ptr39 >>> 0x30X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(long*)((long)ptr39 >>> 0x38X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(long*)((long)ptr39 >>> 0x40X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(long*)((long)ptr39 >>> 0x48X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(long*)((long)ptr39 >>> 0x50X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(long*)((long)ptr39 >>> 0x58X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(long*)((long)ptr39 >>> 0x60X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(long*)((long)ptr39 >>> 0x68X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(long*)((long)ptr39 >>> 0x70X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(long*)((long)ptr39 >>> 0x78X) ^ (uint8_t)(long*)((long)ptr1 >>> 0x78X)) << 120);
                ptr6 += 2;
            }
            while(ptr8 != -32L);
        }
        else if((uint64_t*)((long)ptr30 + (long)ptr35) > ptr31 && (uint64_t*)((long)ptr31 + (long)ptr35) > ptr30) {
            ptr9 = NULL;
            goto loc_916084;
        }
        else {
            ptr7 = (char*)((long)ptr36 >>> 5L) + 1L;
            ptr6 = (long)ptr7 & 0xffffffffffffffeL;
            ptr9 = (long)ptr6 * 32L;
            ptr5 = ptr6;
            ptr4 = ptr30;
            ptr3 = ptr31;
            do {
                __int128 v12 = (unsigned __int128)*ptr3 | ((unsigned __int128)*(ptr3 + 4) << 64);
                v4 = (unsigned __int128)*(ptr3 + 1) | ((unsigned __int128)*(ptr3 + 5) << 64);
                ptr2 = (unsigned __int128)*(ptr3 + 2) | ((unsigned __int128)*(ptr3 + 6) << 64);
                ptr1 = (unsigned __int128)*(ptr3 + 3) | ((unsigned __int128)*(ptr3 + 7) << 64);
                v3 = (unsigned __int128)*ptr4 | ((unsigned __int128)*(ptr4 + 4) << 64);
                v2 = (unsigned __int128)*(ptr4 + 1) | ((unsigned __int128)*(ptr4 + 5) << 64);
                v1 = (unsigned __int128)*(ptr4 + 2) | ((unsigned __int128)*(ptr4 + 6) << 64);
                v0 = (unsigned __int128)*(ptr4 + 3) | ((unsigned __int128)*(ptr4 + 7) << 64);
                ptr4 += 8;
                ptr0 = (char*)ptr5 - 2L;
                ptr5 = (char*)ptr5 - 2L;
                (unsigned __int128)*ptr12 | ((unsigned __int128)*(ptr12 + 4) << 64) = (unsigned __int128)((uint8_t)v12 ^ (uint8_t)v3) | ((unsigned __int128)((uint8_t)(v12 >>> 0x8X) ^ (uint8_t)(v3 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(v12 >>> 0x10X) ^ (uint8_t)(v3 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(v12 >>> 0x18X) ^ (uint8_t)(v3 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(v12 >>> 0x20X) ^ (uint8_t)(v3 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(v12 >>> 0x28X) ^ (uint8_t)(v3 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(v12 >>> 0x30X) ^ (uint8_t)(v3 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(v12 >>> 0x38X) ^ (uint8_t)(v3 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(v12 >>> 0x40X) ^ (uint8_t)(v3 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(v12 >>> 0x48X) ^ (uint8_t)(v3 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(v12 >>> 0x50X) ^ (uint8_t)(v3 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(v12 >>> 0x58X) ^ (uint8_t)(v3 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(v12 >>> 0x60X) ^ (uint8_t)(v3 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(v12 >>> 0x68X) ^ (uint8_t)(v3 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(v12 >>> 0x70X) ^ (uint8_t)(v3 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(v12 >>> 0x78X) ^ (uint8_t)(v3 >>> 0x78X)) << 120);
                (unsigned __int128)*(ptr12 + 1) | ((unsigned __int128)*(ptr12 + 5) << 64) = (unsigned __int128)((uint8_t)v4 ^ (uint8_t)v2) | ((unsigned __int128)((uint8_t)(v4 >>> 0x8X) ^ (uint8_t)(v2 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(v4 >>> 0x10X) ^ (uint8_t)(v2 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(v4 >>> 0x18X) ^ (uint8_t)(v2 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(v4 >>> 0x20X) ^ (uint8_t)(v2 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(v4 >>> 0x28X) ^ (uint8_t)(v2 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(v4 >>> 0x30X) ^ (uint8_t)(v2 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(v4 >>> 0x38X) ^ (uint8_t)(v2 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(v4 >>> 0x40X) ^ (uint8_t)(v2 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(v4 >>> 0x48X) ^ (uint8_t)(v2 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(v4 >>> 0x50X) ^ (uint8_t)(v2 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(v4 >>> 0x58X) ^ (uint8_t)(v2 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(v4 >>> 0x60X) ^ (uint8_t)(v2 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(v4 >>> 0x68X) ^ (uint8_t)(v2 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(v4 >>> 0x70X) ^ (uint8_t)(v2 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(v4 >>> 0x78X) ^ (uint8_t)(v2 >>> 0x78X)) << 120);
                (unsigned __int128)*(ptr12 + 2) | ((unsigned __int128)*(ptr12 + 6) << 64) = (unsigned __int128)((uint8_t)ptr2 ^ (uint8_t)v1) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x8X) ^ (uint8_t)(v1 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x10X) ^ (uint8_t)(v1 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x18X) ^ (uint8_t)(v1 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x20X) ^ (uint8_t)(v1 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x28X) ^ (uint8_t)(v1 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x30X) ^ (uint8_t)(v1 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x38X) ^ (uint8_t)(v1 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x40X) ^ (uint8_t)(v1 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x48X) ^ (uint8_t)(v1 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x50X) ^ (uint8_t)(v1 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x58X) ^ (uint8_t)(v1 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x60X) ^ (uint8_t)(v1 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x68X) ^ (uint8_t)(v1 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x70X) ^ (uint8_t)(v1 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(long*)((long)ptr2 >>> 0x78X) ^ (uint8_t)(v1 >>> 0x78X)) << 120);
                (unsigned __int128)*(ptr12 + 3) | ((unsigned __int128)*(ptr12 + 7) << 64) = (unsigned __int128)((uint8_t)ptr1 ^ (uint8_t)v0) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x8X) ^ (uint8_t)(v0 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x10X) ^ (uint8_t)(v0 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x18X) ^ (uint8_t)(v0 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x20X) ^ (uint8_t)(v0 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x28X) ^ (uint8_t)(v0 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x30X) ^ (uint8_t)(v0 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x38X) ^ (uint8_t)(v0 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x40X) ^ (uint8_t)(v0 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x48X) ^ (uint8_t)(v0 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x50X) ^ (uint8_t)(v0 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x58X) ^ (uint8_t)(v0 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x60X) ^ (uint8_t)(v0 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x68X) ^ (uint8_t)(v0 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x70X) ^ (uint8_t)(v0 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(long*)((long)ptr1 >>> 0x78X) ^ (uint8_t)(v0 >>> 0x78X)) << 120);
                ptr3 += 8;
            }
            while(ptr0 != 0L);
            if(ptr7 != ptr6) {
                goto loc_916084;
            }
        }
    }
    if(ptr35 != ptr34) {
        if((long*)((long)ptr34 & 0x18L) != 0L) {
            ptr9 = (long)ptr31 + (long)ptr35;
            ptr7 = (long)ptr30 + (long)ptr35;
            if((uint64_t)(uint64_t*)((long)ptr30 + (long)ptr34) <= (uint64_t)ptr9 || (uint64_t*)((long)ptr31 + (long)ptr34) <= ptr7) {
                ptr6 = (long)ptr34 & 0x7L;
                ptr5 = (long)(uint64_t*)((long)ptr34 & 0x1fL) - (long)ptr6;
                ptr35 = (long)ptr35 + (long)ptr5;
                do {
                    __int128 v13 = (unsigned __int128)*ptr7;
                    ++ptr7;
                    v4 = (unsigned __int128)*(long**)ptr9;
                    ptr0 = (char*)ptr5 - 8L;
                    ptr5 = (char*)ptr5 - 8L;
                    *(long**)ptr9 = (uint64_t)((uint8_t)v13 ^ (uint8_t)v4) | ((uint64_t)((uint8_t)(v13 >>> 0x8X) ^ (uint8_t)(v4 >>> 0x8X)) << 8) | ((uint64_t)((uint8_t)(v13 >>> 0x10X) ^ (uint8_t)(v4 >>> 0x10X)) << 16) | ((uint64_t)((uint8_t)(v13 >>> 0x18X) ^ (uint8_t)(v4 >>> 0x18X)) << 24) | ((uint64_t)((uint8_t)(v13 >>> 0x20X) ^ (uint8_t)(v4 >>> 0x20X)) << 32) | ((uint64_t)((uint8_t)(v13 >>> 0x28X) ^ (uint8_t)(v4 >>> 0x28X)) << 40) | ((uint64_t)((uint8_t)(v13 >>> 0x30X) ^ (uint8_t)(v4 >>> 0x30X)) << 48) | ((uint64_t)((uint8_t)(v13 >>> 0x38X) ^ (uint8_t)(v4 >>> 0x38X)) << 56);
                    ptr9 = (char*)ptr9 + 8L;
                }
                while(ptr0 != 0L);
                if(ptr6 == 0L) {
                    goto loc_916138;
                }
            }
        }
        ptr34 = (long)ptr34 - (long)ptr35;
        ptr31 = (long)ptr31 + (long)ptr35;
        ptr30 = (long)ptr30 + (long)ptr35;
        do {
            int v14 = (uint32_t)*(char*)ptr30;
            ptr30 = (char*)ptr30 + 1L;
            ptr0 = (char*)ptr34 - 1L;
            ptr34 = (char*)ptr34 - 1L;
            *(char*)ptr31 ^= (uint8_t)v14;
            ptr31 = (char*)ptr31 + 1L;
        }
        while(ptr0 != 0L);
    }
loc_916138:
    param0 = ptr13;
    if(param0 != 0L) {
        ptr10 = param0;
        Botan::deallocate_memory((long)param0, (long)(uint64_t*)(v5 - (long)param0), 1L);
    }
    return param0;
}
