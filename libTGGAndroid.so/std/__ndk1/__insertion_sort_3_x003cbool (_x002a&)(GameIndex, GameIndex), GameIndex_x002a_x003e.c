// Package: std::__ndk1

void std::__ndk1::__insertion_sort_3<bool (*&)(GameIndex, GameIndex), GameIndex*>(GameIndex* param0, GameIndex* param1, bool (*&)(GameIndex, GameIndex) param2) {
    GameIndex* ptr0;
    GameIndex* ptr1 = param1;
    long v0 = *(long*)param2((uint64_t)*(GameIndex*)((long)param0 + 4L), (uint64_t)*(GameIndex*)param0, (long)param2);
    GameIndex* ptr2 = (GameIndex*)((long)param0 + 8L);
    long v1 = *(long*)param2((uint64_t)*(GameIndex*)((long)param0 + 8L), (uint64_t)*(GameIndex*)((long)param0 + 4L));
    if(v0 & 0x1L) {
        param1 = *(GameIndex*)param0;
        if(v1 & 0x1L) {
            GameIndex v2 = *(GameIndex*)((long)param0 + 8L);
            *(GameIndex*)((long)param0 + 8L) = (GameIndex)param1;
            *(GameIndex*)param0 = v2;
        }
        else {
            long v3 = (uint64_t)*(GameIndex*)((long)param0 + 8L);
            *(GameIndex*)param0 = *(GameIndex*)((long)param0 + 4L);
            *(GameIndex*)((long)param0 + 4L) = (GameIndex)param1;
            v1 = *(long*)param2(v3, (long)param1);
            if(v1 & 0x1L) {
                __int128 v4 = (unsigned __int128)*(GameIndex*)((long)param0 + 4L);
                *(GameIndex*)((long)param0 + 4L) = (uint64_t)(uint32_t)(v4 >>> 0x20X) | ((uint64_t)(uint32_t)v4 << 32);
            }
        }
    }
    else if(v1 & 0x1L) {
        __int128 v5 = (unsigned __int128)*(GameIndex*)((long)param0 + 4L);
        long v6 = (uint64_t)*(GameIndex*)param0;
        *(GameIndex*)((long)param0 + 4L) = (uint64_t)(uint32_t)(v5 >>> 0x20X) | ((uint64_t)(uint32_t)v5 << 32);
        v1 = *(long*)param2((uint64_t)(uint32_t)(v5 >>> 0x20X), v6);
        if(v1 & 0x1L) {
            __int128 v7 = (unsigned __int128)*(GameIndex*)param0;
            *(GameIndex*)param0 = (uint64_t)(uint32_t)(v7 >>> 0x20X) | ((uint64_t)(uint32_t)v7 << 32);
        }
    }
    GameIndex* ptr3 = (GameIndex*)((long)param0 + 12L);
    if(ptr3 != ptr1) {
        long v8 = 0L;
        do {
            long v9 = (uint64_t)*(GameIndex*)ptr2;
            ptr2 = ptr3;
            v1 = *(long*)param2((uint64_t)*(GameIndex*)ptr2, v9);
            if(v1 & 0x1L) {
                GameIndex v10 = *(GameIndex*)ptr2;
                long v11 = v8;
                while(1) {
                    int* ptr4 = (int*)((long)param0 + v11);
                    *(ptr4 + 3) = *(ptr4 + 2);
                    if(v11 != -8L) {
                        v1 = *(long*)param2((uint64_t)v10, (uint64_t)*(ptr4 + 1));
                        v11 -= 4L;
                        if(v1 & 0x1L) {
                            continue;
                        }
                        break;
                    }
                    ptr0 = param0;
                    goto loc_5DD990;
                }
                ptr0 = (char*)((long)param0 + v11) + 12L;
            loc_5DD990:
                *(GameIndex*)ptr0 = v10;
            }
            ptr3 = (long)ptr2 + 4L;
            v8 += 4L;
        }
        while(ptr3 != ptr1);
    }
}
