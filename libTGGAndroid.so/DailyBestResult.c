long DailyBestResult(uint32_t* param0, int* param1) {
    uint32_t v0 = *(param0 + 1);
    if(*(param0 + 1) != 1) {
        if(v0 == 3) {
            *param1 = 1;
            return 10L;
        }
        else if(v0 != 4) {
            v0 = *(param0 + 2);
            uint32_t v1 = *(param0 + 3);
            int v2 = (int)v0 > (int)v1 ? (int)v0: (int)v1;
            if(((int)v0 > (int)v1 ? v0: v1) < 2) {
                v0 = *(param0 + 4);
                *param1 = 2;
                return v0 > 1 ? *(param0 + 4): 1L;
            }
            *param1 = (int)v0 < (int)v1;
            return (long)v2;
        }
        *param1 = 2;
        return 10L;
    }
    *param1 = 0;
    return 10L;
}
