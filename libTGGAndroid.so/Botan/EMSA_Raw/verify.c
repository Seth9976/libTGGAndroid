// Package: Botan::EMSA_Raw

long Botan::EMSA_Raw::verify(uint64_t* param0, uint64_t* param1, uint64_t* param2) {
    long* ptr0;
    int v0;
    long* ptr1;
    char* ptr2;
    int v1;
    int v2;
    char* ptr3 = *param2;
    long* ptr4 = *(param2 + 1);
    char* ptr5 = *(param0 + 1);
    long* ptr6 = (long*)((long)ptr4 - (long)ptr3);
    if(ptr5 != 0L && ptr5 != ptr6) {
        return 0L;
    }
    ptr5 = *param1;
    long* ptr7 = *(param1 + 1);
    long* ptr8 = (long*)((long)ptr7 - (long)ptr5);
    char v3 = ptr6 >= ptr8;
    if(ptr6 == ptr8) {
        if(ptr5 != ptr7) {
            do {
                v1 = (uint32_t)*ptr5 == (uint32_t)*ptr3;
                if((uint32_t)*ptr5 != (uint32_t)*ptr3) {
                    break;
                }
                ++ptr5;
                ++ptr3;
            }
            while(ptr5 != ptr7);
            return (long)v1;
        }
        return 1L;
    }
    if(!v3) {
        return 0L;
    }
    long* ptr9 = (long*)((long)ptr6 - (long)ptr8);
    if(ptr9 == 0L) {
        v0 = 1;
    }
    else if((uint64_t)ptr9 < 32L) {
        ptr2 = NULL;
        goto loc_974864;
    }
    else {
        ptr2 = (long)ptr9 & 0xffffffffffffffe0L;
        __int128* ptr10 = (__int128*)(ptr3 + 16L);
        __int128 v4 = 0x1010101010101010101010101010101X;
        char* ptr11 = ptr2;
        __int128 v5 = 0x1010101010101010101010101010101X;
        do {
            __int128 v6 = *(ptr10 - 1);
            __int128 v7 = *ptr10;
            ptr1 = ptr11 - 32L;
            ptr11 -= 32L;
            ptr10 += 2;
            v4 = (unsigned __int128)((uint8_t)v6 == 0 ? (uint8_t)v4: 0) | ((unsigned __int128)((uint8_t)(v6 >>> 0x8X) == 0 ? (uint8_t)(v4 >>> 0x8X): 0) << 8) | ((unsigned __int128)((uint8_t)(v6 >>> 0x10X) == 0 ? (uint8_t)(v4 >>> 0x10X): 0) << 16) | ((unsigned __int128)((uint8_t)(v6 >>> 0x18X) == 0 ? (uint8_t)(v4 >>> 0x18X): 0) << 24) | ((unsigned __int128)((uint8_t)(v6 >>> 0x20X) == 0 ? (uint8_t)(v4 >>> 0x20X): 0) << 32) | ((unsigned __int128)((uint8_t)(v6 >>> 0x28X) == 0 ? (uint8_t)(v4 >>> 0x28X): 0) << 40) | ((unsigned __int128)((uint8_t)(v6 >>> 0x30X) == 0 ? (uint8_t)(v4 >>> 0x30X): 0) << 48) | ((unsigned __int128)((uint8_t)(v6 >>> 0x38X) == 0 ? (uint8_t)(v4 >>> 0x38X): 0) << 56) | ((unsigned __int128)((uint8_t)(v6 >>> 0x40X) == 0 ? (uint8_t)(v4 >>> 0x40X): 0) << 64) | ((unsigned __int128)((uint8_t)(v6 >>> 0x48X) == 0 ? (uint8_t)(v4 >>> 0x48X): 0) << 72) | ((unsigned __int128)((uint8_t)(v6 >>> 0x50X) == 0 ? (uint8_t)(v4 >>> 0x50X): 0) << 80) | ((unsigned __int128)((uint8_t)(v6 >>> 0x58X) == 0 ? (uint8_t)(v4 >>> 0x58X): 0) << 88) | ((unsigned __int128)((uint8_t)(v6 >>> 0x60X) == 0 ? (uint8_t)(v4 >>> 0x60X): 0) << 96) | ((unsigned __int128)((uint8_t)(v6 >>> 0x68X) == 0 ? (uint8_t)(v4 >>> 0x68X): 0) << 104) | ((unsigned __int128)((uint8_t)(v6 >>> 0x70X) == 0 ? (uint8_t)(v4 >>> 0x70X): 0) << 112) | ((unsigned __int128)((uint8_t)(v6 >>> 0x78X) == 0 ? (uint8_t)(v4 >>> 0x78X): 0) << 120);
            v5 = (unsigned __int128)((uint8_t)v7 == 0 ? (uint8_t)v5: 0) | ((unsigned __int128)((uint8_t)(v7 >>> 0x8X) == 0 ? (uint8_t)(v5 >>> 0x8X): 0) << 8) | ((unsigned __int128)((uint8_t)(v7 >>> 0x10X) == 0 ? (uint8_t)(v5 >>> 0x10X): 0) << 16) | ((unsigned __int128)((uint8_t)(v7 >>> 0x18X) == 0 ? (uint8_t)(v5 >>> 0x18X): 0) << 24) | ((unsigned __int128)((uint8_t)(v7 >>> 0x20X) == 0 ? (uint8_t)(v5 >>> 0x20X): 0) << 32) | ((unsigned __int128)((uint8_t)(v7 >>> 0x28X) == 0 ? (uint8_t)(v5 >>> 0x28X): 0) << 40) | ((unsigned __int128)((uint8_t)(v7 >>> 0x30X) == 0 ? (uint8_t)(v5 >>> 0x30X): 0) << 48) | ((unsigned __int128)((uint8_t)(v7 >>> 0x38X) == 0 ? (uint8_t)(v5 >>> 0x38X): 0) << 56) | ((unsigned __int128)((uint8_t)(v7 >>> 0x40X) == 0 ? (uint8_t)(v5 >>> 0x40X): 0) << 64) | ((unsigned __int128)((uint8_t)(v7 >>> 0x48X) == 0 ? (uint8_t)(v5 >>> 0x48X): 0) << 72) | ((unsigned __int128)((uint8_t)(v7 >>> 0x50X) == 0 ? (uint8_t)(v5 >>> 0x50X): 0) << 80) | ((unsigned __int128)((uint8_t)(v7 >>> 0x58X) == 0 ? (uint8_t)(v5 >>> 0x58X): 0) << 88) | ((unsigned __int128)((uint8_t)(v7 >>> 0x60X) == 0 ? (uint8_t)(v5 >>> 0x60X): 0) << 96) | ((unsigned __int128)((uint8_t)(v7 >>> 0x68X) == 0 ? (uint8_t)(v5 >>> 0x68X): 0) << 104) | ((unsigned __int128)((uint8_t)(v7 >>> 0x70X) == 0 ? (uint8_t)(v5 >>> 0x70X): 0) << 112) | ((unsigned __int128)((uint8_t)(v7 >>> 0x78X) == 0 ? (uint8_t)(v5 >>> 0x78X): 0) << 120);
        }
        while(ptr1 != 0L);
        __int128 v8 = (unsigned __int128)((uint64_t)((uint8_t)(v4 >>> 0x40X) & (uint8_t)(v5 >>> 0x40X)) | ((uint64_t)((uint8_t)(v4 >>> 0x48X) & (uint8_t)(v5 >>> 0x48X)) << 8) | ((uint64_t)((uint8_t)(v4 >>> 0x50X) & (uint8_t)(v5 >>> 0x50X)) << 16) | ((uint64_t)((uint8_t)(v4 >>> 0x58X) & (uint8_t)(v5 >>> 0x58X)) << 24) | ((uint64_t)((uint8_t)(v4 >>> 0x60X) & (uint8_t)(v5 >>> 0x60X)) << 32) | ((uint64_t)((uint8_t)(v4 >>> 0x68X) & (uint8_t)(v5 >>> 0x68X)) << 40) | ((uint64_t)((uint8_t)(v4 >>> 0x70X) & (uint8_t)(v5 >>> 0x70X)) << 48) | ((uint64_t)((uint8_t)(v4 >>> 0x78X) & (uint8_t)(v5 >>> 0x78X)) << 56)) | ((unsigned __int128)((uint64_t)((uint8_t)(v4 >>> 0x40X) & (uint8_t)(v5 >>> 0x40X)) | ((uint64_t)((uint8_t)(v4 >>> 0x48X) & (uint8_t)(v5 >>> 0x48X)) << 8) | ((uint64_t)((uint8_t)(v4 >>> 0x50X) & (uint8_t)(v5 >>> 0x50X)) << 16) | ((uint64_t)((uint8_t)(v4 >>> 0x58X) & (uint8_t)(v5 >>> 0x58X)) << 24) | ((uint64_t)((uint8_t)(v4 >>> 0x60X) & (uint8_t)(v5 >>> 0x60X)) << 32) | ((uint64_t)((uint8_t)(v4 >>> 0x68X) & (uint8_t)(v5 >>> 0x68X)) << 40) | ((uint64_t)((uint8_t)(v4 >>> 0x70X) & (uint8_t)(v5 >>> 0x70X)) << 48) | ((uint64_t)((uint8_t)(v4 >>> 0x78X) & (uint8_t)(v5 >>> 0x78X)) << 56)) << 64);
        __int128 v9 = (unsigned __int128)((uint32_t)((uint8_t)(v4 >>> 0x20X) & (uint8_t)(v5 >>> 0x20X) & (uint8_t)(v8 >>> 0x20X)) | ((uint32_t)((uint8_t)(v4 >>> 0x28X) & (uint8_t)(v5 >>> 0x28X) & (uint8_t)(v8 >>> 0x28X)) << 8) | ((uint32_t)((uint8_t)(v4 >>> 0x30X) & (uint8_t)(v5 >>> 0x30X) & (uint8_t)(v8 >>> 0x30X)) << 16) | ((uint32_t)((uint8_t)(v4 >>> 0x38X) & (uint8_t)(v5 >>> 0x38X) & (uint8_t)(v8 >>> 0x38X)) << 24)) | ((unsigned __int128)((uint32_t)((uint8_t)(v4 >>> 0x20X) & (uint8_t)(v5 >>> 0x20X) & (uint8_t)(v8 >>> 0x20X)) | ((uint32_t)((uint8_t)(v4 >>> 0x28X) & (uint8_t)(v5 >>> 0x28X) & (uint8_t)(v8 >>> 0x28X)) << 8) | ((uint32_t)((uint8_t)(v4 >>> 0x30X) & (uint8_t)(v5 >>> 0x30X) & (uint8_t)(v8 >>> 0x30X)) << 16) | ((uint32_t)((uint8_t)(v4 >>> 0x38X) & (uint8_t)(v5 >>> 0x38X) & (uint8_t)(v8 >>> 0x38X)) << 24)) << 32) | ((unsigned __int128)((uint32_t)((uint8_t)(v4 >>> 0x20X) & (uint8_t)(v5 >>> 0x20X) & (uint8_t)(v8 >>> 0x20X)) | ((uint32_t)((uint8_t)(v4 >>> 0x28X) & (uint8_t)(v5 >>> 0x28X) & (uint8_t)(v8 >>> 0x28X)) << 8) | ((uint32_t)((uint8_t)(v4 >>> 0x30X) & (uint8_t)(v5 >>> 0x30X) & (uint8_t)(v8 >>> 0x30X)) << 16) | ((uint32_t)((uint8_t)(v4 >>> 0x38X) & (uint8_t)(v5 >>> 0x38X) & (uint8_t)(v8 >>> 0x38X)) << 24)) << 64) | ((unsigned __int128)((uint32_t)((uint8_t)(v4 >>> 0x20X) & (uint8_t)(v5 >>> 0x20X) & (uint8_t)(v8 >>> 0x20X)) | ((uint32_t)((uint8_t)(v4 >>> 0x28X) & (uint8_t)(v5 >>> 0x28X) & (uint8_t)(v8 >>> 0x28X)) << 8) | ((uint32_t)((uint8_t)(v4 >>> 0x30X) & (uint8_t)(v5 >>> 0x30X) & (uint8_t)(v8 >>> 0x30X)) << 16) | ((uint32_t)((uint8_t)(v4 >>> 0x38X) & (uint8_t)(v5 >>> 0x38X) & (uint8_t)(v8 >>> 0x38X)) << 24)) << 96);
        __int128 v10 = (unsigned __int128)((uint16_t)((uint8_t)(v4 >>> 0x10X) & (uint8_t)(v5 >>> 0x10X) & (uint8_t)(v8 >>> 0x10X) & (uint8_t)(v9 >>> 0x10X)) | ((uint16_t)((uint8_t)(v4 >>> 0x18X) & (uint8_t)(v5 >>> 0x18X) & (uint8_t)(v8 >>> 0x18X) & (uint8_t)(v9 >>> 0x18X)) << 8)) | ((unsigned __int128)((uint16_t)((uint8_t)(v4 >>> 0x10X) & (uint8_t)(v5 >>> 0x10X) & (uint8_t)(v8 >>> 0x10X) & (uint8_t)(v9 >>> 0x10X)) | ((uint16_t)((uint8_t)(v4 >>> 0x18X) & (uint8_t)(v5 >>> 0x18X) & (uint8_t)(v8 >>> 0x18X) & (uint8_t)(v9 >>> 0x18X)) << 8)) << 16) | ((unsigned __int128)((uint16_t)((uint8_t)(v4 >>> 0x10X) & (uint8_t)(v5 >>> 0x10X) & (uint8_t)(v8 >>> 0x10X) & (uint8_t)(v9 >>> 0x10X)) | ((uint16_t)((uint8_t)(v4 >>> 0x18X) & (uint8_t)(v5 >>> 0x18X) & (uint8_t)(v8 >>> 0x18X) & (uint8_t)(v9 >>> 0x18X)) << 8)) << 32) | ((unsigned __int128)((uint16_t)((uint8_t)(v4 >>> 0x10X) & (uint8_t)(v5 >>> 0x10X) & (uint8_t)(v8 >>> 0x10X) & (uint8_t)(v9 >>> 0x10X)) | ((uint16_t)((uint8_t)(v4 >>> 0x18X) & (uint8_t)(v5 >>> 0x18X) & (uint8_t)(v8 >>> 0x18X) & (uint8_t)(v9 >>> 0x18X)) << 8)) << 48) | ((unsigned __int128)((uint16_t)((uint8_t)(v4 >>> 0x10X) & (uint8_t)(v5 >>> 0x10X) & (uint8_t)(v8 >>> 0x10X) & (uint8_t)(v9 >>> 0x10X)) | ((uint16_t)((uint8_t)(v4 >>> 0x18X) & (uint8_t)(v5 >>> 0x18X) & (uint8_t)(v8 >>> 0x18X) & (uint8_t)(v9 >>> 0x18X)) << 8)) << 64) | ((unsigned __int128)((uint16_t)((uint8_t)(v4 >>> 0x10X) & (uint8_t)(v5 >>> 0x10X) & (uint8_t)(v8 >>> 0x10X) & (uint8_t)(v9 >>> 0x10X)) | ((uint16_t)((uint8_t)(v4 >>> 0x18X) & (uint8_t)(v5 >>> 0x18X) & (uint8_t)(v8 >>> 0x18X) & (uint8_t)(v9 >>> 0x18X)) << 8)) << 80) | ((unsigned __int128)((uint16_t)((uint8_t)(v4 >>> 0x10X) & (uint8_t)(v5 >>> 0x10X) & (uint8_t)(v8 >>> 0x10X) & (uint8_t)(v9 >>> 0x10X)) | ((uint16_t)((uint8_t)(v4 >>> 0x18X) & (uint8_t)(v5 >>> 0x18X) & (uint8_t)(v8 >>> 0x18X) & (uint8_t)(v9 >>> 0x18X)) << 8)) << 96) | ((unsigned __int128)((uint16_t)((uint8_t)(v4 >>> 0x10X) & (uint8_t)(v5 >>> 0x10X) & (uint8_t)(v8 >>> 0x10X) & (uint8_t)(v9 >>> 0x10X)) | ((uint16_t)((uint8_t)(v4 >>> 0x18X) & (uint8_t)(v5 >>> 0x18X) & (uint8_t)(v8 >>> 0x18X) & (uint8_t)(v9 >>> 0x18X)) << 8)) << 112);
        v0 = (uint32_t)((uint8_t)(v4 >>> 0x8X) & (uint8_t)(v5 >>> 0x8X) & (uint8_t)(v8 >>> 0x8X) & (uint8_t)(v9 >>> 0x8X) & (uint8_t)(v10 >>> 0x8X) & (uint8_t)v4 & (uint8_t)v5 & (uint8_t)v8 & (uint8_t)v9 & (uint8_t)v10);
        if(ptr9 != ptr2) {
        loc_974864:
            ptr4 = (long)(long*)((long)(long*)((long)(long*)(ptr3 + ptr7) + (long)ptr2) - (long)ptr5) - (long)ptr4;
            ptr2 += ptr3;
            do {
                int v11 = (uint32_t)*ptr2;
                ++ptr2;
                ptr0 = ptr4;
                ptr4 = (char*)ptr4 + 1L;
                v0 = v11 == 0 ? v2 & 1: 0;
            }
            while((uint64_t)ptr0 < -1L);
        }
    }
    uint8_t v12 = 0;
    if(ptr8 != 0L) {
        ptr7 = ptr5 - ptr7;
        long* ptr12 = (long*)(ptr3 + ptr6);
        do {
            int v13 = (uint32_t)*ptr5;
            ++ptr5;
            ptr8 = (uint64_t)*(char*)((long)ptr12 + (long)ptr7);
            ptr0 = ptr7;
            ptr7 = (char*)ptr7 + 1L;
            v12 |= (uint8_t)v13 ^ (uint8_t)ptr8;
        }
        while((uint64_t)ptr0 < -1L);
    }
    return (((v12 - 1) & ~v12) >>> 7) & 1 ? (uint64_t)(v0 & 1): 0L;
}
