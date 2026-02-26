void MCTS_AdjustPriors(long param0, int param1, int param2) {
    float v0;
    uint64_t* ptr0 = *(uint64_t*)(param1 * 8L + 0x10b7240L);
    int v1 = *(uint32_t*)(ptr0 + 27);
    if(v1 >= 1) {
        ptr0 = *(ptr0 + 26);
        long v2 = 0L;
        if(param2 == 0) {
            ptr1 = (uint32_t*)((char*)ptr0 + 84L);
        loc_60E0F8:
            while(*(ptr1 - 0xF) != 0) {
                if(**(uint64_t*)(ptr1 - 17) == 0) {
                    goto loc_60E0DC;
                }
                else {
                    ++v2;
                    ptr1 += 28;
                    if(v1 > v2) {
                        goto loc_60E0F8;
                    }
                    goto loc_60E118;
                }
            }
            *ptr1 += v0;
            return;
        loc_60E0DC:
            ptr0 = (v2 & 0xffffffffL) * 112L + (long)ptr0;
            *(float*)((char*)ptr0 + 84L) += v0;
            return;
        }
        float* ptr1 = (float*)(ptr0 + 3);
        do {
            if(*ptr1 != 0 && **(uint64_t*)(ptr1 - 2) == param2) {
                goto loc_60E0DC;
            }
            else {
                ++v2;
                ptr1 += 28;
            }
        }
        while(v1 > v2);
    }
loc_60E118:
}
