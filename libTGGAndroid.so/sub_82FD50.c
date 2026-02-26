uint64_t* sub_82FD50(uint64_t* param0, int param1) {
    char v0;
    char v1;
    float v2;
    float* ptr0;
    uint64_t* ptr1 = *(param0 + 1);
    float* ptr2 = (uint64_t)*(uint32_t*)((char*)param0 + 4L);
    float* ptr3 = *(uint64_t*)(param1 * 8L + (long)ptr1);
    long v3 = param1;
    if(param1 * 2 < (uint32_t)ptr2) {
        long* ptr4 = (long*)((long)((uint64_t)(param1 * 2) | ((uint64_t)((param1 >>> 30) & 1 ? -1: 0) << 32)) | 0x1L);
        if((uint32_t)ptr4 < (uint32_t)ptr2) {
            ptr0 = *(uint64_t*)((long)(uint64_t*)((long)((uint64_t)(param1 * 2) | ((uint64_t)((param1 >>> 30) & 1 ? -1: 0) << 32)) * 8L) + (long)ptr1);
            ptr2 = *(uint64_t*)((long)(uint64_t*)((long)ptr4 * 8L) + (long)ptr1);
            v2 = *(ptr0 + 8);
            v1 = *(ptr2 + 8) > v2;
            v0 = *(ptr2 + 8) == v2;
            if(v0) {
                v2 = *(ptr0 + 6);
                v1 = *(ptr2 + 6) > v2;
                v0 = *(ptr2 + 6) == v2;
            }
            if(!v0 && !v1) {
                goto loc_82FDB0;
            }
        }
        ptr4 = (uint64_t)(param1 * 2);
        if(param1 * 2 != 0) {
        loc_82FDB0:
            long* ptr5 = (uint64_t)(uint32_t)ptr4;
            while(1) {
                float* ptr6 = *(uint64_t*)((long)(uint32_t)ptr5 * 8L + (long)ptr1);
                v2 = *(ptr3 + 8);
                ptr4 = (uint64_t)param1;
                param1 = (uint32_t)ptr5;
                v1 = *(ptr6 + 8) > v2;
                v0 = *(ptr6 + 8) == v2;
                if(v0) {
                    v2 = *(ptr3 + 6);
                    v1 = *(ptr6 + 6) > v2;
                    v0 = *(ptr6 + 6) == v2;
                }
                if(!v0 && !v1) {
                    *(uint64_t*)((long)(uint32_t)ptr4 * 8L + (long)ptr1) = ptr6;
                    *(ptr6 + 10) = (float)ptr4;
                    ptr2 = (uint64_t)*(uint32_t*)((char*)param0 + 4L);
                    v3 = param1;
                    if(param1 * 2 >= (uint32_t)ptr2) {
                        break;
                    }
                    ptr5 = (long)((uint64_t)(param1 * 2) | ((uint64_t)((param1 >>> 30) & 1 ? -1: 0) << 32)) | 0x1L;
                    if((uint32_t)ptr5 < (uint32_t)ptr2) {
                        uint64_t* ptr7 = *(param0 + 1);
                        ptr0 = *(uint64_t*)((long)(uint64_t*)((long)((uint64_t)(param1 * 2) | ((uint64_t)((param1 >>> 30) & 1 ? -1: 0) << 32)) * 8L) + (long)ptr7);
                        ptr2 = *(uint64_t*)((long)(uint64_t*)((long)ptr5 * 8L) + (long)ptr7);
                        v2 = *(ptr0 + 8);
                        v1 = *(ptr2 + 8) > v2;
                        v0 = *(ptr2 + 8) == v2;
                        if(v0) {
                            v2 = *(ptr0 + 6);
                            v1 = *(ptr2 + 6) > v2;
                            v0 = *(ptr2 + 6) == v2;
                        }
                        if(v0 || v1) {
                            goto loc_82FDB8;
                        }
                    }
                    else {
                    loc_82FDB8:
                        ptr5 = (uint64_t)(param1 * 2);
                    }
                    if((uint32_t)ptr5 == 0) {
                        break;
                    }
                    continue;
                }
                v3 = (uint32_t)ptr4;
                param1 = (uint32_t)ptr4;
                break;
            }
        }
    }
    *(uint64_t*)(v3 * 8L + (long)ptr1) = ptr3;
    *(int*)(ptr3 + 10) = param1;
    return param0;
}
