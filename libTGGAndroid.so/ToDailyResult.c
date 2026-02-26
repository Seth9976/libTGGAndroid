char ToDailyResult(int* param0, char param1, int param2, int param3, int param4) {
    *(long*)(param0 + 3) = 0L;
    *(long*)(param0 + 1) = 0L;
    *param0 = param3;
    if(param2 == param3) {
        if(param1) {
            *(param0 + 3) = param4;
            return param1;
        }
        *(param0 + 2) = param4;
        return 0;
    }
    *(param0 + 4) = param4;
    return param1;
}
