long ElemOfLandscapes(int* param0, uint32_t param1, int param2) {
    if((int)param1 >= 1) {
        long v0 = param1;
    loc_808084:
        do {
            int v1 = *param0;
            if(*param0 != 0) {
                if(param2 == v1) {
                    return 1L;
                }
                long v2 = v0 - 1L;
                --v0;
                param0 += 0xF;
                if(v2 != 0L) {
                    goto loc_808084;
                }
                goto loc_8080A4;
            }
        }
        while(*param0 != 0);
    }
loc_8080A4:
    return 0L;
}
