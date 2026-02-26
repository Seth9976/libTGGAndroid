// Package: std::__ndk1

void std::__ndk1::__insertion_sort_3<bool (*&)(int, int), int*>(int* param0, int* param1, bool (*&)(int, int) param2) {
    int* ptr0;
    int* ptr1 = param1;
    long v0 = *(long*)param2((uint64_t)param0[1], (uint64_t)param0[0], (long)param2);
    int* ptr2 = param0 + 2;
    long v1 = *(long*)param2((uint64_t)param0[2], (uint64_t)param0[1]);
    if(v0 & 0x1L) {
        param1 = param0[0];
        if(v1 & 0x1L) {
            int v2 = param0[2];
            param0[2] = (int)param1;
            param0[0] = v2;
        }
        else {
            long v3 = (uint64_t)param0[2];
            param0[0] = param0[1];
            param0[1] = (int)param1;
            v1 = *(long*)param2(v3, (long)param1);
            if(v1 & 0x1L) {
                __int128 v4 = (unsigned __int128)*(long*)&param0[1];
                *(long*)&param0[1] = (uint64_t)(uint32_t)(v4 >>> 0x20X) | ((uint64_t)(uint32_t)v4 << 32);
            }
        }
    }
    else if(v1 & 0x1L) {
        __int128 v5 = (unsigned __int128)*(long*)&param0[1];
        long v6 = (uint64_t)param0[0];
        *(long*)&param0[1] = (uint64_t)(uint32_t)(v5 >>> 0x20X) | ((uint64_t)(uint32_t)v5 << 32);
        v1 = *(long*)param2((uint64_t)(uint32_t)(v5 >>> 0x20X), v6);
        if(v1 & 0x1L) {
            __int128 v7 = (unsigned __int128)*(long*)&param0[0];
            *(long*)&param0[0] = (uint64_t)(uint32_t)(v7 >>> 0x20X) | ((uint64_t)(uint32_t)v7 << 32);
        }
    }
    int* ptr3 = param0 + 3;
    if(ptr3 != ptr1) {
        long v8 = 0L;
        do {
            long v9 = (uint64_t)ptr2[0];
            ptr2 = ptr3;
            v1 = *(long*)param2((uint64_t)ptr2[0], v9);
            if(v1 & 0x1L) {
                int v10 = ptr2[0];
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
                    goto loc_8AD4B4;
                }
                ptr0 = (char*)((long)param0 + v11) + 12L;
            loc_8AD4B4:
                ptr0[0] = v10;
            }
            ptr3 = ptr2 + 1;
            v8 += 4L;
        }
        while(ptr3 != ptr1);
    }
}
