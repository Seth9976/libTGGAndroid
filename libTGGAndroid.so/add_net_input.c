int* add_net_input(int* param0, uint32_t param1, uint32_t param2) {
    long* ptr0;
    long* ptr1;
    int* ptr2;
    ++*param0;
    if(param1 < 0x80000000) {
        ptr2 = param1 * 4L + (long)param0;
        ++*(ptr2 + 12);
        return param0;
    }
    if((int)param2 >= 1) {
        if(param2 < 8) {
            ptr1 = NULL;
            goto loc_884420;
        }
        else {
            ptr1 = (long)param2 & 0xfffffff8L;
            __int128* ptr3 = (__int128*)(param0 + 16);
            long* ptr4 = ptr1;
            do {
                __int128 v0 = *(ptr3 - 1);
                __int128 v1 = *ptr3;
                ptr0 = ptr4 - 1;
                --ptr4;
                *(ptr3 - 1) = (unsigned __int128)((uint32_t)v0 + 1) | ((unsigned __int128)((uint32_t)(v0 >>> 0x20X) + 1) << 32) | ((unsigned __int128)((uint32_t)(v0 >>> 0x40X) + 1) << 64) | ((unsigned __int128)((uint32_t)(v0 >>> 0x60X) + 1) << 96);
                *ptr3 = (unsigned __int128)((uint32_t)v1 + 1) | ((unsigned __int128)((uint32_t)(v1 >>> 0x20X) + 1) << 32) | ((unsigned __int128)((uint32_t)(v1 >>> 0x40X) + 1) << 64) | ((unsigned __int128)((uint32_t)(v1 >>> 0x60X) + 1) << 96);
                ptr3 += 2;
            }
            while(ptr0 != 0L);
            if(param2 != ptr1) {
            loc_884420:
                ptr3 = (long*)((long)(long*)((long)ptr1 * 4L) + (long)param0) + 6;
                ptr2 = (long)param2 - (long)ptr1;
                do {
                    ptr0 = (char*)ptr2 - 1L;
                    ptr2 = (char*)ptr2 - 1L;
                    ++*(int*)ptr3;
                    ptr3 = (char*)ptr3 + 4L;
                }
                while(ptr0 != 0L);
            }
        }
    }
    return param0;
}
