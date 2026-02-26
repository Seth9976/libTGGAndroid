int* FindExpSetup(int* param0, uint32_t param1, int param2) {
    if((int)param1 >= 1) {
        long v0 = param1;
        while(*param0 != param2) {
            long v1 = v0 - 1L;
            --v0;
            param0 += 4;
            if(v1 != 0L) {
                continue;
            }
            return NULL;
        }
    }
    else {
        param0 = NULL;
    }
    return param0;
}
