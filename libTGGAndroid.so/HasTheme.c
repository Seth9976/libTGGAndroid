long HasTheme(int* param0, uint32_t param1, int param2) {
    long v0;
    if((int)param1 >= 1) {
        if(*param0 == param2) {
            return 1L;
        }
        long v1 = 1L;
        do {
            v0 = v1;
            if(param1 == v1) {
                break;
            }
            v1 = v0 + 1L;
        }
        while(*(int*)(v0 * 4L + (long)param0) != param2);
        return param1 > v0;
    }
    return 0L;
}
