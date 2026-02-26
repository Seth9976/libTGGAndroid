// Package: Botan::OFB

uint64_t* Botan::OFB::cipher(uint64_t* param0, long* param1, long* param2, long* param3) {
    long* ptr0;
    long* ptr1;
    __int128 v0;
    __int128 v1;
    __int128 v2;
    __int128 v3;
    __int128 v4;
    __int128 v5;
    __int128 v6;
    long* ptr2;
    long* ptr3;
    __int128* ptr4;
    __int128* ptr5;
    long* ptr6;
    long* ptr7;
    long* ptr8;
    long* ptr9;
    long* ptr10 = *(param0 + 2);
    long* ptr11 = *(param0 + 5);
    long* ptr12 = param3;
    long* ptr13 = param2;
    __int128* ptr14 = (__int128*)((long)(long*)((long)*(param0 + 3) - (long)ptr10) - (long)ptr11);
    uint64_t* ptr15 = param0;
    long* ptr16 = param1;
    if((uint64_t)param3 < (uint64_t)ptr14) {
        ptr7 = ptr11;
    }
    else {
        do {
            __int128* ptr17 = (__int128*)((long)ptr14 & 0xffffffffffffffe0L);
            if((long*)((long)ptr14 & 0xffffffffffffffe0L) != 0L) {
                ptr6 = NULL;
                long* ptr18 = (long*)(ptr17 - 2);
                if(ptr18 != 0L && !(long*)__carry__((long)(ptr13 + 2), (long)ptr18) && !(long*)__carry__((long)(ptr13 + 3), (long)ptr18) && !(long*)__carry__((long)(ptr13 + 1), (long)ptr18) && !(long*)__carry__((long)ptr18, (long)ptr13)) {
                    long* ptr19 = (long*)((long)ptr17 + (long)ptr13);
                    ptr5 = (long)ptr10 + (long)ptr11;
                    ptr6 = NULL;
                    if(((long*)((long)ptr17 + (long)ptr16) <= ptr13 || ptr19 <= ptr16) && ((long*)((long)(long*)((long)ptr10 + (long)ptr11) + (long)ptr17) <= ptr13 || (uint64_t)ptr5 >= (uint64_t)ptr19)) {
                        ptr4 = (char*)((long)ptr18 >>> 5L) + 1L;
                        ptr3 = (long)ptr4 & 0xffffffffffffffeL;
                        ptr6 = (long)ptr3 * 32L;
                        ptr2 = ptr3;
                        long* ptr20 = ptr16;
                        do {
                            __int128 v7 = (unsigned __int128)*ptr20 | ((unsigned __int128)*(ptr20 + 4) << 64);
                            v6 = (unsigned __int128)*(ptr20 + 1) | ((unsigned __int128)*(ptr20 + 5) << 64);
                            v5 = (unsigned __int128)*(ptr20 + 2) | ((unsigned __int128)*(ptr20 + 6) << 64);
                            v4 = (unsigned __int128)*(ptr20 + 3) | ((unsigned __int128)*(ptr20 + 7) << 64);
                            ptr20 += 8;
                            v3 = (unsigned __int128)*(long*)ptr5 | ((unsigned __int128)*(long*)(ptr5 + 2) << 64);
                            v2 = (unsigned __int128)*(long*)((char*)ptr5 + 8L) | ((unsigned __int128)*(long*)((char*)ptr5 + 40L) << 64);
                            v1 = (unsigned __int128)*(long*)(ptr5 + 1) | ((unsigned __int128)*(long*)(ptr5 + 3) << 64);
                            v0 = (unsigned __int128)*(long*)((char*)ptr5 + 24L) | ((unsigned __int128)*(long*)((char*)ptr5 + 56L) << 64);
                            ptr5 += 4;
                            ptr1 = (char*)ptr2 - 2L;
                            ptr2 = (char*)ptr2 - 2L;
                            (unsigned __int128)*ptr8 | ((unsigned __int128)*(ptr8 + 4) << 64) = (unsigned __int128)((uint8_t)v7 ^ (uint8_t)v3) | ((unsigned __int128)((uint8_t)(v7 >>> 0x8X) ^ (uint8_t)(v3 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(v7 >>> 0x10X) ^ (uint8_t)(v3 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(v7 >>> 0x18X) ^ (uint8_t)(v3 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(v7 >>> 0x20X) ^ (uint8_t)(v3 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(v7 >>> 0x28X) ^ (uint8_t)(v3 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(v7 >>> 0x30X) ^ (uint8_t)(v3 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(v7 >>> 0x38X) ^ (uint8_t)(v3 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(v7 >>> 0x40X) ^ (uint8_t)(v3 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(v7 >>> 0x48X) ^ (uint8_t)(v3 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(v7 >>> 0x50X) ^ (uint8_t)(v3 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(v7 >>> 0x58X) ^ (uint8_t)(v3 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(v7 >>> 0x60X) ^ (uint8_t)(v3 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(v7 >>> 0x68X) ^ (uint8_t)(v3 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(v7 >>> 0x70X) ^ (uint8_t)(v3 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(v7 >>> 0x78X) ^ (uint8_t)(v3 >>> 0x78X)) << 120);
                            (unsigned __int128)*(ptr8 + 1) | ((unsigned __int128)*(ptr8 + 5) << 64) = (unsigned __int128)((uint8_t)v6 ^ (uint8_t)v2) | ((unsigned __int128)((uint8_t)(v6 >>> 0x8X) ^ (uint8_t)(v2 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(v6 >>> 0x10X) ^ (uint8_t)(v2 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(v6 >>> 0x18X) ^ (uint8_t)(v2 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(v6 >>> 0x20X) ^ (uint8_t)(v2 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(v6 >>> 0x28X) ^ (uint8_t)(v2 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(v6 >>> 0x30X) ^ (uint8_t)(v2 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(v6 >>> 0x38X) ^ (uint8_t)(v2 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(v6 >>> 0x40X) ^ (uint8_t)(v2 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(v6 >>> 0x48X) ^ (uint8_t)(v2 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(v6 >>> 0x50X) ^ (uint8_t)(v2 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(v6 >>> 0x58X) ^ (uint8_t)(v2 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(v6 >>> 0x60X) ^ (uint8_t)(v2 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(v6 >>> 0x68X) ^ (uint8_t)(v2 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(v6 >>> 0x70X) ^ (uint8_t)(v2 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(v6 >>> 0x78X) ^ (uint8_t)(v2 >>> 0x78X)) << 120);
                            (unsigned __int128)*(ptr8 + 2) | ((unsigned __int128)*(ptr8 + 6) << 64) = (unsigned __int128)((uint8_t)v5 ^ (uint8_t)v1) | ((unsigned __int128)((uint8_t)(v5 >>> 0x8X) ^ (uint8_t)(v1 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(v5 >>> 0x10X) ^ (uint8_t)(v1 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(v5 >>> 0x18X) ^ (uint8_t)(v1 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(v5 >>> 0x20X) ^ (uint8_t)(v1 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(v5 >>> 0x28X) ^ (uint8_t)(v1 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(v5 >>> 0x30X) ^ (uint8_t)(v1 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(v5 >>> 0x38X) ^ (uint8_t)(v1 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(v5 >>> 0x40X) ^ (uint8_t)(v1 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(v5 >>> 0x48X) ^ (uint8_t)(v1 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(v5 >>> 0x50X) ^ (uint8_t)(v1 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(v5 >>> 0x58X) ^ (uint8_t)(v1 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(v5 >>> 0x60X) ^ (uint8_t)(v1 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(v5 >>> 0x68X) ^ (uint8_t)(v1 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(v5 >>> 0x70X) ^ (uint8_t)(v1 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(v5 >>> 0x78X) ^ (uint8_t)(v1 >>> 0x78X)) << 120);
                            (unsigned __int128)*(ptr8 + 3) | ((unsigned __int128)*(ptr8 + 7) << 64) = (unsigned __int128)((uint8_t)v4 ^ (uint8_t)v0) | ((unsigned __int128)((uint8_t)(v4 >>> 0x8X) ^ (uint8_t)(v0 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(v4 >>> 0x10X) ^ (uint8_t)(v0 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(v4 >>> 0x18X) ^ (uint8_t)(v0 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(v4 >>> 0x20X) ^ (uint8_t)(v0 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(v4 >>> 0x28X) ^ (uint8_t)(v0 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(v4 >>> 0x30X) ^ (uint8_t)(v0 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(v4 >>> 0x38X) ^ (uint8_t)(v0 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(v4 >>> 0x40X) ^ (uint8_t)(v0 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(v4 >>> 0x48X) ^ (uint8_t)(v0 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(v4 >>> 0x50X) ^ (uint8_t)(v0 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(v4 >>> 0x58X) ^ (uint8_t)(v0 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(v4 >>> 0x60X) ^ (uint8_t)(v0 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(v4 >>> 0x68X) ^ (uint8_t)(v0 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(v4 >>> 0x70X) ^ (uint8_t)(v0 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(v4 >>> 0x78X) ^ (uint8_t)(v0 >>> 0x78X)) << 120);
                        }
                        while(ptr1 != 0L);
                        if(ptr4 == ptr3) {
                            goto loc_9F1608;
                        }
                    }
                }
                long* ptr21 = (long*)((long)ptr6 + (long)ptr13);
                ptr2 = (long)ptr11 + (long)ptr6;
                ptr5 = (long)ptr6 - (long)ptr17;
                ptr6 = (long*)((long)ptr6 + (long)ptr16) + 2;
                ptr4 = ptr21 + 2;
                ptr3 = (long*)((long)ptr10 + (long)ptr2) + 2;
                do {
                    __int128 v8 = *(__int128*)(ptr6 - 2);
                    __int128 v9 = *(__int128*)ptr6;
                    v5 = *(__int128*)(ptr3 - 2);
                    v4 = *(__int128*)ptr3;
                    ptr0 = ptr5;
                    ptr5 += 2;
                    ptr6 += 4;
                    ptr3 += 4;
                    *(ptr4 - 1) = (unsigned __int128)((uint8_t)v8 ^ (uint8_t)v5) | ((unsigned __int128)((uint8_t)(v8 >>> 0x8X) ^ (uint8_t)(v5 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(v8 >>> 0x10X) ^ (uint8_t)(v5 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(v8 >>> 0x18X) ^ (uint8_t)(v5 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(v8 >>> 0x20X) ^ (uint8_t)(v5 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(v8 >>> 0x28X) ^ (uint8_t)(v5 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(v8 >>> 0x30X) ^ (uint8_t)(v5 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(v8 >>> 0x38X) ^ (uint8_t)(v5 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(v8 >>> 0x40X) ^ (uint8_t)(v5 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(v8 >>> 0x48X) ^ (uint8_t)(v5 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(v8 >>> 0x50X) ^ (uint8_t)(v5 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(v8 >>> 0x58X) ^ (uint8_t)(v5 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(v8 >>> 0x60X) ^ (uint8_t)(v5 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(v8 >>> 0x68X) ^ (uint8_t)(v5 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(v8 >>> 0x70X) ^ (uint8_t)(v5 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(v8 >>> 0x78X) ^ (uint8_t)(v5 >>> 0x78X)) << 120);
                    *ptr4 = (unsigned __int128)((uint8_t)v9 ^ (uint8_t)v4) | ((unsigned __int128)((uint8_t)(v9 >>> 0x8X) ^ (uint8_t)(v4 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(v9 >>> 0x10X) ^ (uint8_t)(v4 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(v9 >>> 0x18X) ^ (uint8_t)(v4 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(v9 >>> 0x20X) ^ (uint8_t)(v4 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(v9 >>> 0x28X) ^ (uint8_t)(v4 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(v9 >>> 0x30X) ^ (uint8_t)(v4 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(v9 >>> 0x38X) ^ (uint8_t)(v4 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(v9 >>> 0x40X) ^ (uint8_t)(v4 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(v9 >>> 0x48X) ^ (uint8_t)(v4 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(v9 >>> 0x50X) ^ (uint8_t)(v4 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(v9 >>> 0x58X) ^ (uint8_t)(v4 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(v9 >>> 0x60X) ^ (uint8_t)(v4 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(v9 >>> 0x68X) ^ (uint8_t)(v4 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(v9 >>> 0x70X) ^ (uint8_t)(v4 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(v9 >>> 0x78X) ^ (uint8_t)(v4 >>> 0x78X)) << 120);
                    ptr4 += 2;
                }
                while(ptr0 != -32L);
            }
        loc_9F1608:
            if(ptr14 != ptr17) {
                if((long*)((long)ptr14 & 0x18L) != 0L) {
                    long* ptr22 = (long*)((long)ptr17 + (long)ptr13);
                    long* ptr23 = (long*)((long)ptr14 + (long)ptr13);
                    if(((long*)((long)ptr14 + (long)ptr16) <= ptr22 || (long*)((long)ptr17 + (long)ptr16) >= ptr23) && ((long*)((long)(long*)((long)ptr10 + (long)ptr11) + (long)ptr14) <= ptr22 || (long*)((long)(long*)((long)ptr10 + (long)ptr11) + (long)ptr17) >= ptr23)) {
                        ptr6 = (long)ptr14 & 0x7L;
                        ptr3 = (long)(long*)((long)ptr14 & 0x1fL) - (long)ptr6;
                        ptr5 = (long)ptr17 + (long)ptr16;
                        ptr2 = (long)(long*)((long)ptr10 + (long)ptr11) + (long)ptr17;
                        ptr4 = (long)ptr17 + (long)ptr3;
                        long* ptr24 = (long*)((long)ptr17 + (long)ptr13);
                        do {
                            __int128 v10 = (unsigned __int128)*(long*)ptr5;
                            ptr5 = (char*)ptr5 + 8L;
                            v6 = (unsigned __int128)*ptr2;
                            ++ptr2;
                            ptr1 = ptr3 - 1;
                            --ptr3;
                            *ptr24 = (uint64_t)((uint8_t)v10 ^ (uint8_t)v6) | ((uint64_t)((uint8_t)(v10 >>> 0x8X) ^ (uint8_t)(v6 >>> 0x8X)) << 8) | ((uint64_t)((uint8_t)(v10 >>> 0x10X) ^ (uint8_t)(v6 >>> 0x10X)) << 16) | ((uint64_t)((uint8_t)(v10 >>> 0x18X) ^ (uint8_t)(v6 >>> 0x18X)) << 24) | ((uint64_t)((uint8_t)(v10 >>> 0x20X) ^ (uint8_t)(v6 >>> 0x20X)) << 32) | ((uint64_t)((uint8_t)(v10 >>> 0x28X) ^ (uint8_t)(v6 >>> 0x28X)) << 40) | ((uint64_t)((uint8_t)(v10 >>> 0x30X) ^ (uint8_t)(v6 >>> 0x30X)) << 48) | ((uint64_t)((uint8_t)(v10 >>> 0x38X) ^ (uint8_t)(v6 >>> 0x38X)) << 56);
                            ++ptr24;
                        }
                        while(ptr1 != 0L);
                        ptr17 = ptr4;
                        if(ptr6 == 0L) {
                            goto loc_9F1470;
                        }
                    }
                }
                long* ptr25 = (long*)((long)ptr14 - (long)ptr17);
                ptr6 = (long)ptr17 + (long)ptr13;
                char* ptr26 = (char*)((long)(long*)((long)ptr10 + (long)ptr11) + (long)ptr17);
                char* ptr27 = (char*)((long)ptr17 + (long)ptr16);
                do {
                    long v11 = (uint64_t)*ptr27;
                    ++ptr27;
                    ptr5 = (uint64_t)*ptr26;
                    ++ptr26;
                    ptr1 = (char*)ptr25 - 1L;
                    ptr25 = (char*)ptr25 - 1L;
                    *(char*)ptr6 = (uint8_t)v11 ^ (uint8_t)ptr5;
                    ptr6 = (char*)ptr6 + 1L;
                }
                while(ptr1 != 0L);
            }
        loc_9F1470:
            long* ptr28 = *(ptr15 + 1);
            long* ptr29 = *(ptr15 + 2);
            long* ptr30 = *(ptr15 + 5);
            long* ptr31 = (long*)((long)*(ptr15 + 3) - (long)ptr29);
            ptr12 = (long)(long*)((long)ptr30 + (long)ptr12) - (long)ptr31;
            long* ptr32 = (long*)((long)ptr31 - (long)ptr30);
            ptr16 = (long)ptr32 + (long)ptr16;
            ptr13 = (long)ptr32 + (long)ptr13;
            uint64_t v12 = (uint64_t)*(long*)(*ptr28 + 48L)((long)ptr28);
            param0 = *(long*)(*ptr28 + 72L)((long)ptr28, (long)ptr29, (long)ptr29, (long)(v12 != 0L ? (long*)((long)(uint64_t)ptr31 / v12): 0L));
            ptr10 = *(ptr15 + 2);
            long* ptr33 = *(ptr15 + 3);
            ptr11 = NULL;
            ptr7 = NULL;
            *(ptr15 + 5) = NULL;
            ptr14 = (long)ptr33 - (long)ptr10;
        }
        while((uint64_t)ptr14 <= (uint64_t)ptr12);
    }
    __int128* ptr34 = (__int128*)((long)ptr12 & 0xffffffffffffffe0L);
    if((long*)((long)ptr12 & 0xffffffffffffffe0L) != 0L) {
        ptr14 = NULL;
        long* ptr35 = (long*)(ptr34 - 2);
        if(ptr35 != 0L && !(long*)__carry__((long)(ptr13 + 2), (long)ptr35) && !(long*)__carry__((long)(ptr13 + 3), (long)ptr35) && !(long*)__carry__((long)(ptr13 + 1), (long)ptr35) && !(long*)__carry__((long)ptr35, (long)ptr13)) {
            long* ptr36 = (long*)((long)ptr34 + (long)ptr13);
            ptr6 = (long)ptr10 + (long)ptr7;
            ptr14 = NULL;
            if(((long*)((long)ptr34 + (long)ptr16) <= ptr13 || ptr36 <= ptr16) && ((long*)((long)(long*)((long)ptr10 + (long)ptr34) + (long)ptr7) <= ptr13 || ptr6 >= ptr36)) {
                ptr5 = (char*)((long)ptr35 >>> 5L) + 1L;
                ptr4 = (long)ptr5 & 0xffffffffffffffeL;
                ptr14 = (long)ptr4 * 32L;
                ptr3 = ptr4;
                ptr2 = ptr16;
                do {
                    __int128 v13 = (unsigned __int128)*ptr2 | ((unsigned __int128)*(ptr2 + 4) << 64);
                    v6 = (unsigned __int128)*(ptr2 + 1) | ((unsigned __int128)*(ptr2 + 5) << 64);
                    v5 = (unsigned __int128)*(ptr2 + 2) | ((unsigned __int128)*(ptr2 + 6) << 64);
                    v4 = (unsigned __int128)*(ptr2 + 3) | ((unsigned __int128)*(ptr2 + 7) << 64);
                    ptr2 += 8;
                    v3 = (unsigned __int128)*ptr6 | ((unsigned __int128)*(ptr6 + 4) << 64);
                    v2 = (unsigned __int128)*(ptr6 + 1) | ((unsigned __int128)*(ptr6 + 5) << 64);
                    v1 = (unsigned __int128)*(ptr6 + 2) | ((unsigned __int128)*(ptr6 + 6) << 64);
                    v0 = (unsigned __int128)*(ptr6 + 3) | ((unsigned __int128)*(ptr6 + 7) << 64);
                    ptr6 += 8;
                    ptr1 = (char*)ptr3 - 2L;
                    ptr3 = (char*)ptr3 - 2L;
                    (unsigned __int128)*ptr9 | ((unsigned __int128)*(ptr9 + 4) << 64) = (unsigned __int128)((uint8_t)v13 ^ (uint8_t)v3) | ((unsigned __int128)((uint8_t)(v13 >>> 0x8X) ^ (uint8_t)(v3 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(v13 >>> 0x10X) ^ (uint8_t)(v3 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(v13 >>> 0x18X) ^ (uint8_t)(v3 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(v13 >>> 0x20X) ^ (uint8_t)(v3 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(v13 >>> 0x28X) ^ (uint8_t)(v3 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(v13 >>> 0x30X) ^ (uint8_t)(v3 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(v13 >>> 0x38X) ^ (uint8_t)(v3 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(v13 >>> 0x40X) ^ (uint8_t)(v3 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(v13 >>> 0x48X) ^ (uint8_t)(v3 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(v13 >>> 0x50X) ^ (uint8_t)(v3 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(v13 >>> 0x58X) ^ (uint8_t)(v3 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(v13 >>> 0x60X) ^ (uint8_t)(v3 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(v13 >>> 0x68X) ^ (uint8_t)(v3 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(v13 >>> 0x70X) ^ (uint8_t)(v3 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(v13 >>> 0x78X) ^ (uint8_t)(v3 >>> 0x78X)) << 120);
                    (unsigned __int128)*(ptr9 + 1) | ((unsigned __int128)*(ptr9 + 5) << 64) = (unsigned __int128)((uint8_t)v6 ^ (uint8_t)v2) | ((unsigned __int128)((uint8_t)(v6 >>> 0x8X) ^ (uint8_t)(v2 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(v6 >>> 0x10X) ^ (uint8_t)(v2 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(v6 >>> 0x18X) ^ (uint8_t)(v2 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(v6 >>> 0x20X) ^ (uint8_t)(v2 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(v6 >>> 0x28X) ^ (uint8_t)(v2 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(v6 >>> 0x30X) ^ (uint8_t)(v2 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(v6 >>> 0x38X) ^ (uint8_t)(v2 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(v6 >>> 0x40X) ^ (uint8_t)(v2 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(v6 >>> 0x48X) ^ (uint8_t)(v2 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(v6 >>> 0x50X) ^ (uint8_t)(v2 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(v6 >>> 0x58X) ^ (uint8_t)(v2 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(v6 >>> 0x60X) ^ (uint8_t)(v2 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(v6 >>> 0x68X) ^ (uint8_t)(v2 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(v6 >>> 0x70X) ^ (uint8_t)(v2 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(v6 >>> 0x78X) ^ (uint8_t)(v2 >>> 0x78X)) << 120);
                    (unsigned __int128)*(ptr9 + 2) | ((unsigned __int128)*(ptr9 + 6) << 64) = (unsigned __int128)((uint8_t)v5 ^ (uint8_t)v1) | ((unsigned __int128)((uint8_t)(v5 >>> 0x8X) ^ (uint8_t)(v1 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(v5 >>> 0x10X) ^ (uint8_t)(v1 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(v5 >>> 0x18X) ^ (uint8_t)(v1 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(v5 >>> 0x20X) ^ (uint8_t)(v1 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(v5 >>> 0x28X) ^ (uint8_t)(v1 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(v5 >>> 0x30X) ^ (uint8_t)(v1 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(v5 >>> 0x38X) ^ (uint8_t)(v1 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(v5 >>> 0x40X) ^ (uint8_t)(v1 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(v5 >>> 0x48X) ^ (uint8_t)(v1 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(v5 >>> 0x50X) ^ (uint8_t)(v1 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(v5 >>> 0x58X) ^ (uint8_t)(v1 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(v5 >>> 0x60X) ^ (uint8_t)(v1 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(v5 >>> 0x68X) ^ (uint8_t)(v1 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(v5 >>> 0x70X) ^ (uint8_t)(v1 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(v5 >>> 0x78X) ^ (uint8_t)(v1 >>> 0x78X)) << 120);
                    (unsigned __int128)*(ptr9 + 3) | ((unsigned __int128)*(ptr9 + 7) << 64) = (unsigned __int128)((uint8_t)v4 ^ (uint8_t)v0) | ((unsigned __int128)((uint8_t)(v4 >>> 0x8X) ^ (uint8_t)(v0 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(v4 >>> 0x10X) ^ (uint8_t)(v0 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(v4 >>> 0x18X) ^ (uint8_t)(v0 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(v4 >>> 0x20X) ^ (uint8_t)(v0 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(v4 >>> 0x28X) ^ (uint8_t)(v0 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(v4 >>> 0x30X) ^ (uint8_t)(v0 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(v4 >>> 0x38X) ^ (uint8_t)(v0 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(v4 >>> 0x40X) ^ (uint8_t)(v0 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(v4 >>> 0x48X) ^ (uint8_t)(v0 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(v4 >>> 0x50X) ^ (uint8_t)(v0 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(v4 >>> 0x58X) ^ (uint8_t)(v0 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(v4 >>> 0x60X) ^ (uint8_t)(v0 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(v4 >>> 0x68X) ^ (uint8_t)(v0 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(v4 >>> 0x70X) ^ (uint8_t)(v0 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(v4 >>> 0x78X) ^ (uint8_t)(v0 >>> 0x78X)) << 120);
                }
                while(ptr1 != 0L);
                if(ptr5 == ptr4) {
                    goto loc_9F1388;
                }
            }
        }
        long* ptr37 = (long*)(ptr14 + 1);
        long* ptr38 = (long*)((long)(long*)((long)ptr10 + (long)ptr14) + (long)ptr7);
        ptr6 = (long)ptr14 - (long)ptr34;
        ptr14 = (long)ptr37 + (long)ptr16;
        ptr5 = (long)ptr37 + (long)ptr13;
        ptr4 = ptr38 + 2;
        do {
            __int128 v14 = *(ptr14 - 1);
            __int128 v15 = *ptr14;
            v5 = *(ptr4 - 1);
            v4 = *ptr4;
            ptr0 = ptr6;
            ptr6 += 4;
            ptr14 += 2;
            ptr4 += 2;
            *(ptr5 - 1) = (unsigned __int128)((uint8_t)v14 ^ (uint8_t)v5) | ((unsigned __int128)((uint8_t)(v14 >>> 0x8X) ^ (uint8_t)(v5 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(v14 >>> 0x10X) ^ (uint8_t)(v5 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(v14 >>> 0x18X) ^ (uint8_t)(v5 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(v14 >>> 0x20X) ^ (uint8_t)(v5 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(v14 >>> 0x28X) ^ (uint8_t)(v5 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(v14 >>> 0x30X) ^ (uint8_t)(v5 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(v14 >>> 0x38X) ^ (uint8_t)(v5 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(v14 >>> 0x40X) ^ (uint8_t)(v5 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(v14 >>> 0x48X) ^ (uint8_t)(v5 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(v14 >>> 0x50X) ^ (uint8_t)(v5 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(v14 >>> 0x58X) ^ (uint8_t)(v5 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(v14 >>> 0x60X) ^ (uint8_t)(v5 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(v14 >>> 0x68X) ^ (uint8_t)(v5 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(v14 >>> 0x70X) ^ (uint8_t)(v5 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(v14 >>> 0x78X) ^ (uint8_t)(v5 >>> 0x78X)) << 120);
            *ptr5 = (unsigned __int128)((uint8_t)v15 ^ (uint8_t)v4) | ((unsigned __int128)((uint8_t)(v15 >>> 0x8X) ^ (uint8_t)(v4 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(v15 >>> 0x10X) ^ (uint8_t)(v4 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(v15 >>> 0x18X) ^ (uint8_t)(v4 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(v15 >>> 0x20X) ^ (uint8_t)(v4 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(v15 >>> 0x28X) ^ (uint8_t)(v4 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(v15 >>> 0x30X) ^ (uint8_t)(v4 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(v15 >>> 0x38X) ^ (uint8_t)(v4 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(v15 >>> 0x40X) ^ (uint8_t)(v4 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(v15 >>> 0x48X) ^ (uint8_t)(v4 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(v15 >>> 0x50X) ^ (uint8_t)(v4 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(v15 >>> 0x58X) ^ (uint8_t)(v4 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(v15 >>> 0x60X) ^ (uint8_t)(v4 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(v15 >>> 0x68X) ^ (uint8_t)(v4 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(v15 >>> 0x70X) ^ (uint8_t)(v4 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(v15 >>> 0x78X) ^ (uint8_t)(v4 >>> 0x78X)) << 120);
            ptr5 += 2;
        }
        while(ptr0 != -32L);
    }
loc_9F1388:
    if(ptr34 != ptr12) {
        if((long*)((long)ptr12 & 0x18L) != 0L) {
            long* ptr39 = (long*)((long)ptr34 + (long)ptr13);
            long* ptr40 = (long*)((long)ptr12 + (long)ptr13);
            if(((long*)((long)ptr12 + (long)ptr16) <= ptr39 || (long*)((long)ptr34 + (long)ptr16) >= ptr40) && ((long*)((long)(long*)((long)ptr10 + (long)ptr7) + (long)ptr12) <= ptr39 || (long*)((long)(long*)((long)ptr10 + (long)ptr34) + (long)ptr7) >= ptr40)) {
                ptr14 = (long)ptr12 & 0x7L;
                ptr4 = (long)(long*)((long)ptr12 & 0x1fL) - (long)ptr14;
                ptr6 = (long)ptr34 + (long)ptr16;
                ptr3 = (long)(long*)((long)ptr10 + (long)ptr34) + (long)ptr7;
                ptr5 = (long)ptr34 + (long)ptr4;
                long* ptr41 = (long*)((long)ptr34 + (long)ptr13);
                do {
                    __int128 v16 = (unsigned __int128)*ptr6;
                    ++ptr6;
                    v6 = (unsigned __int128)*ptr3;
                    ++ptr3;
                    ptr1 = (char*)ptr4 - 8L;
                    ptr4 = (char*)ptr4 - 8L;
                    *ptr41 = (uint64_t)((uint8_t)v16 ^ (uint8_t)v6) | ((uint64_t)((uint8_t)(v16 >>> 0x8X) ^ (uint8_t)(v6 >>> 0x8X)) << 8) | ((uint64_t)((uint8_t)(v16 >>> 0x10X) ^ (uint8_t)(v6 >>> 0x10X)) << 16) | ((uint64_t)((uint8_t)(v16 >>> 0x18X) ^ (uint8_t)(v6 >>> 0x18X)) << 24) | ((uint64_t)((uint8_t)(v16 >>> 0x20X) ^ (uint8_t)(v6 >>> 0x20X)) << 32) | ((uint64_t)((uint8_t)(v16 >>> 0x28X) ^ (uint8_t)(v6 >>> 0x28X)) << 40) | ((uint64_t)((uint8_t)(v16 >>> 0x30X) ^ (uint8_t)(v6 >>> 0x30X)) << 48) | ((uint64_t)((uint8_t)(v16 >>> 0x38X) ^ (uint8_t)(v6 >>> 0x38X)) << 56);
                    ++ptr41;
                }
                while(ptr1 != 0L);
                ptr34 = ptr5;
                if(ptr14 == 0L) {
                    *(ptr15 + 5) = (long*)((long)*(ptr15 + 5) + (long)ptr12);
                    return param0;
                }
            }
        }
        ptr14 = (long)ptr12 - (long)ptr34;
        ptr6 = (long)ptr34 + (long)ptr13;
        char* ptr42 = (char*)((long)(long*)((long)ptr10 + (long)ptr34) + (long)ptr7);
        ptr34 = (long)ptr34 + (long)ptr16;
        do {
            int v17 = (uint32_t)*(char*)ptr34;
            ptr34 = (char*)ptr34 + 1L;
            ptr5 = (uint64_t)*ptr42;
            ++ptr42;
            ptr1 = (char*)ptr14 - 1L;
            ptr14 = (char*)ptr14 - 1L;
            *(char*)ptr6 = (uint8_t)v17 ^ (uint8_t)ptr5;
            ptr6 = (char*)ptr6 + 1L;
        }
        while(ptr1 != 0L);
    }
    *(ptr15 + 5) = (long*)((long)*(ptr15 + 5) + (long)ptr12);
    return param0;
}
