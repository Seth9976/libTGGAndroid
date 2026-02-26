long ComputeAIIndex(int* param0, int param1, int param2) {
    int v0;
    long v1;
    int v2;
    if(*(param0 + 24) == 3 && *(param0 + 25) == param2) {
        v1 = param1 > 0;
        v0 = 1;
        if(*(param0 + 163) == 3) {
            goto loc_5BCCE4;
        }
    }
    else {
        v1 = 0L;
        v0 = 0;
        if(*(param0 + 163) == 3) {
        loc_5BCCE4:
            if(*(param0 + 164) == param2) {
                v1 = param1 > 1 ? (uint64_t)((uint32_t)v1 + 1): (uint64_t)(uint32_t)v1;
                v0 = v2 + 1;
            }
        }
    }
    if(*(param0 + 302) == 3 && *(param0 + 303) == param2) {
        v1 = param1 > 2 ? (uint64_t)((uint32_t)v1 + 1): (uint64_t)(uint32_t)v1;
        v0 = v2 + 1;
    }
    if(*(param0 + 441) == 3 && *(param0 + 442) == param2) {
        v1 = param1 > 3 ? (uint64_t)((uint32_t)v1 + 1): (uint64_t)(uint32_t)v1;
        v0 = v2 + 1;
    }
    if(*(param0 + 0x244) == 3 && *(param0 + 581) == param2) {
        v1 = param1 > 4 ? (uint64_t)((uint32_t)v1 + 1): (uint64_t)(uint32_t)v1;
        v0 = v2 + 1;
    }
    if(*(param0 + 719) == 3 && *(param0 + 720) == param2) {
        v1 = param1 > 5 ? (uint64_t)((uint32_t)v1 + 1): (uint64_t)(uint32_t)v1;
        v0 = v2 + 1;
    }
    if(*(param0 + 858) == 3 && *(param0 + 859) == param2) {
        v1 = param1 > 6 ? (uint64_t)((uint32_t)v1 + 1): (uint64_t)(uint32_t)v1;
        v0 = v2 + 1;
    }
    if(*(param0 + 997) == 3 && *(param0 + 998) == param2) {
        v1 = param1 > 7 ? (uint64_t)((uint32_t)v1 + 1): (uint64_t)(uint32_t)v1;
        v0 = v2 + 1;
    }
    return v0 >= 2 ? (uint64_t)((uint32_t)v1 + 1): 0L;
}
