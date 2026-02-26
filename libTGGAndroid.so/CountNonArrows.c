long CountNonArrows(uint32_t param0, uint64_t* param1, int* param2) {
    uint32_t result;
    long v0;
    int v1;
    int v2;
    long v3 = *param2;
    int v4 = *(param2 + 1);
    if((uint32_t)v3 < v4) {
        long v5 = v4 - v3;
        if(v5 < 2L) {
            goto loc_7B9694;
        }
        else {
            uint64_t* ptr0 = (uint64_t*)(v3 * 8L + (long)param1);
            uint64_t* ptr1 = NULL;
            v3 += v5 & 0xfffffffffffffffeL;
            uint64_t* ptr2 = ptr0 + 0x202;
            long v6 = v5 & 0xfffffffffffffffeL;
            do {
                int* ptr3 = *(ptr2 - 1);
                int* ptr4 = *ptr2;
                ptr2 += 2;
                ptr1 = *(ptr3 + 11) != 7 ? (uint64_t)((uint32_t)ptr1 + 1): (uint64_t)(uint32_t)ptr1;
                v1 = *(ptr4 + 11) != 7 ? v2 + 1: v2;
                v0 = v6 - 2L;
                v6 -= 2L;
            }
            while(v0 != 0L);
            result = (uint32_t)ptr1 + v1;
            if((v5 & 0xfffffffffffffffeL) != v5) {
            loc_7B9694:
                do {
                    int* ptr5 = *((uint64_t*)(v3 * 8L + (long)param1) + 513);
                    ++v3;
                    result = *(ptr5 + 11) != 7 ? param0 + 1: param0;
                }
                while(v4 > v3);
            }
        }
        return result;
    }
    return 0L;
}
