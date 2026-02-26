long* AnimationBind(long* param0, uint8_t* param1) {
    if(*param1 == 0) {
        uint64_t* ptr0 = *(uint64_t*)(param1 + 24L);
        *param1 = 1;
        long v0 = (uint64_t)*(uint32_t*)((char*)ptr0 + 4L);
        if(*(uint32_t*)((char*)ptr0 + 4L) >= 1) {
            long v1 = (uint64_t)*(int*)(param0 + 2);
            if(*(int*)(param0 + 2) > 0) {
                long v2 = 0L;
                do {
                    long* ptr1 = *(ptr0 + 1);
                    long v3 = 0L;
                    int* ptr2 = (int*)(v2 * 24L + (long)ptr1);
                    *(ptr2 + 4) = -1;
                    int v4 = *(int*)(v2 * 24L + (long)ptr1);
                    int* ptr3 = (int*)(*(param0 + 3) + 112L);
                    while(*ptr3 != v4) {
                        ++v3;
                        ptr3 += 54;
                        if(v1 != v3) {
                            continue;
                        }
                        goto loc_888A24;
                    }
                    *(ptr2 + 4) = (uint32_t)v3;
                loc_888A24:
                    ++v2;
                }
                while(v0 != v2);
            }
            else {
                v1 = 0L;
                v0 *= 24L;
                do {
                    int* ptr4 = (int*)((long)*(ptr0 + 1) + v1);
                    v1 += 24L;
                    *(ptr4 + 4) = -1;
                }
                while(v0 != v1);
            }
        }
    }
    return param0;
}
