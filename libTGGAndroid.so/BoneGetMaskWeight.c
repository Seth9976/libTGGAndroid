long BoneGetMaskWeight(int* param0, uint32_t param1, int param2, int param3) {
    if(param2 != 0) {
        if((int)param1 >= 1) {
            long v0 = param1;
            while(*param0 != param3) {
                long v1 = v0 - 1L;
                --v0;
                ++param0;
                if(v1 != 0L) {
                    continue;
                }
                return param2 == 2;
            }
            return param2 == 1;
        }
        return param2 == 2;
    }
    return 1L;
}
