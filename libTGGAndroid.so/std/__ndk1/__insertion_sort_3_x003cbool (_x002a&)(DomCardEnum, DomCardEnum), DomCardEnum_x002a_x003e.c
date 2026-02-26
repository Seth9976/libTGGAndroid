// Package: std::__ndk1

void std::__ndk1::__insertion_sort_3<bool (*&)(DomCardEnum, DomCardEnum), DomCardEnum*>(DomCardEnum* param0, DomCardEnum* param1, bool (*&)(DomCardEnum, DomCardEnum) param2) {
    DomCardEnum* ptr0;
    DomCardEnum* ptr1 = param1;
    long v0 = *(long*)param2((uint64_t)*(DomCardEnum*)((long)param0 + 4L), (uint64_t)*(DomCardEnum*)param0, (long)param2);
    DomCardEnum* ptr2 = (DomCardEnum*)((long)param0 + 8L);
    long v1 = *(long*)param2((uint64_t)*(DomCardEnum*)((long)param0 + 8L), (uint64_t)*(DomCardEnum*)((long)param0 + 4L));
    if(v0 & 0x1L) {
        param1 = *(DomCardEnum*)param0;
        if(v1 & 0x1L) {
            DomCardEnum v2 = *(DomCardEnum*)((long)param0 + 8L);
            *(DomCardEnum*)((long)param0 + 8L) = (DomCardEnum)param1;
            *(DomCardEnum*)param0 = v2;
        }
        else {
            long v3 = (uint64_t)*(DomCardEnum*)((long)param0 + 8L);
            *(DomCardEnum*)param0 = *(DomCardEnum*)((long)param0 + 4L);
            *(DomCardEnum*)((long)param0 + 4L) = (DomCardEnum)param1;
            v1 = *(long*)param2(v3, (long)param1);
            if(v1 & 0x1L) {
                __int128 v4 = (unsigned __int128)*(DomCardEnum*)((long)param0 + 4L);
                *(DomCardEnum*)((long)param0 + 4L) = (uint64_t)(uint32_t)(v4 >>> 0x20X) | ((uint64_t)(uint32_t)v4 << 32);
            }
        }
    }
    else if(v1 & 0x1L) {
        __int128 v5 = (unsigned __int128)*(DomCardEnum*)((long)param0 + 4L);
        long v6 = (uint64_t)*(DomCardEnum*)param0;
        *(DomCardEnum*)((long)param0 + 4L) = (uint64_t)(uint32_t)(v5 >>> 0x20X) | ((uint64_t)(uint32_t)v5 << 32);
        v1 = *(long*)param2((uint64_t)(uint32_t)(v5 >>> 0x20X), v6);
        if(v1 & 0x1L) {
            __int128 v7 = (unsigned __int128)*(DomCardEnum*)param0;
            *(DomCardEnum*)param0 = (uint64_t)(uint32_t)(v7 >>> 0x20X) | ((uint64_t)(uint32_t)v7 << 32);
        }
    }
    DomCardEnum* ptr3 = (DomCardEnum*)((long)param0 + 12L);
    if(ptr3 != ptr1) {
        long v8 = 0L;
        do {
            long v9 = (uint64_t)*(DomCardEnum*)ptr2;
            ptr2 = ptr3;
            v1 = *(long*)param2((uint64_t)*(DomCardEnum*)ptr2, v9);
            if(v1 & 0x1L) {
                DomCardEnum v10 = *(DomCardEnum*)ptr2;
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
                    goto loc_7C11B8;
                }
                ptr0 = (char*)((long)param0 + v11) + 12L;
            loc_7C11B8:
                *(DomCardEnum*)ptr0 = v10;
            }
            ptr3 = (long)ptr2 + 4L;
            v8 += 4L;
        }
        while(ptr3 != ptr1);
    }
}
