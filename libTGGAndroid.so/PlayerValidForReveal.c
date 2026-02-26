long PlayerValidForReveal(int* param0, int param1, int param2) {
    if(param1 == param2) {
        return 1L;
    }
    if(*(param0 + 1653) == param2 && *(param0 + 0x676) == param1) {
        return 1L;
    }
    return 0L;
}
