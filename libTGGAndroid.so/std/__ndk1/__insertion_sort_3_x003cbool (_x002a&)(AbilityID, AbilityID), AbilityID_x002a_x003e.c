// Package: std::__ndk1

void std::__ndk1::__insertion_sort_3<bool (*&)(AbilityID, AbilityID), AbilityID*>(AbilityID* param0, AbilityID* param1, bool (*&)(AbilityID, AbilityID) param2) {
    AbilityID* ptr0;
    AbilityID* ptr1 = param1;
    long v0 = *(long*)param2((uint64_t)*(AbilityID*)((long)param0 + 4L), (uint64_t)*(AbilityID*)param0, (long)param2);
    AbilityID* ptr2 = (AbilityID*)((long)param0 + 8L);
    long v1 = *(long*)param2((uint64_t)*(AbilityID*)((long)param0 + 8L), (uint64_t)*(AbilityID*)((long)param0 + 4L));
    if(v0 & 0x1L) {
        param1 = *(AbilityID*)param0;
        if(v1 & 0x1L) {
            ptr0 = *(AbilityID*)((long)param0 + 8L);
            *(AbilityID*)((long)param0 + 8L) = (AbilityID)param1;
            *(AbilityID*)param0 = (AbilityID)ptr0;
        }
        else {
            long v2 = (uint64_t)*(AbilityID*)((long)param0 + 8L);
            *(AbilityID*)param0 = *(AbilityID*)((long)param0 + 4L);
            *(AbilityID*)((long)param0 + 4L) = (AbilityID)param1;
            v1 = *(long*)param2(v2, (long)param1);
            if(v1 & 0x1L) {
                __int128 v3 = (unsigned __int128)*(AbilityID*)((long)param0 + 4L);
                *(AbilityID*)((long)param0 + 4L) = (uint64_t)(uint32_t)(v3 >>> 0x20X) | ((uint64_t)(uint32_t)v3 << 32);
            }
        }
    }
    else if(v1 & 0x1L) {
        __int128 v4 = (unsigned __int128)*(AbilityID*)((long)param0 + 4L);
        long v5 = (uint64_t)*(AbilityID*)param0;
        *(AbilityID*)((long)param0 + 4L) = (uint64_t)(uint32_t)(v4 >>> 0x20X) | ((uint64_t)(uint32_t)v4 << 32);
        v1 = *(long*)param2((uint64_t)(uint32_t)(v4 >>> 0x20X), v5);
        if(v1 & 0x1L) {
            __int128 v6 = (unsigned __int128)*(AbilityID*)param0;
            *(AbilityID*)param0 = (uint64_t)(uint32_t)(v6 >>> 0x20X) | ((uint64_t)(uint32_t)v6 << 32);
        }
    }
    AbilityID* ptr3 = (AbilityID*)((long)param0 + 12L);
    if(ptr1 != ptr3) {
        long v7 = 12L;
        do {
            v1 = *(long*)param2((uint64_t)*(AbilityID*)ptr3, (uint64_t)*(AbilityID*)ptr2);
            if(v1 & 0x1L) {
                long v8 = (uint64_t)*(AbilityID*)ptr3;
                long v9 = v7;
                while(1) {
                    int* ptr4 = (int*)((long)param0 + v9);
                    long v10 = v9 - 4L;
                    v9 -= 4L;
                    *ptr4 = *(ptr4 - 1);
                    if(v10 != 0L) {
                        v1 = *(long*)param2(v8, (uint64_t)*(ptr4 - 2));
                        if(v1 & 0x1L) {
                            continue;
                        }
                        break;
                    }
                    ptr0 = param0;
                    goto loc_81314C;
                }
                ptr0 = (long)param0 + v9;
            loc_81314C:
                *(AbilityID*)ptr0 = (AbilityID)v8;
            }
            ptr2 = ptr3;
            ptr3 = (long)ptr3 + 4L;
            v7 += 4L;
        }
        while(ptr1 != ptr3);
    }
}
