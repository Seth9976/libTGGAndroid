long SelectHigher(uint32_t param0, float* param1, uint32_t param2) {
    float v0;
    int v1;
    long v2;
    long v3;
    float v4;
    if((int)param2 >= 1) {
        if(*param1 > v4) {
            v3 = 0L;
            v2 = 1L;
        }
        else {
            long v5 = 0L;
            do {
                v3 = v5 + 1L;
                if(param2 == v3) {
                    v1 = param2 < 0x80000000 ? (int)(param2 - 1): 0;
                    return (long)v1;
                }
                v0 = *(float*)((char*)(v5 * 4L + (long)param1) + 4L);
                v5 = v3;
            }
            while(v4 >= v0);
            v2 = param2 > v3;
        }
        v1 = (uint32_t)v3 != 0 ? (int)((uint32_t)v3 - 1): 0;
        uint32_t result = param2 < 0x80000000 ? param0: 0;
        if(v2 & 0x1L) {
            return (long)v1;
        }
        return result;
    }
    return 0L;
}
