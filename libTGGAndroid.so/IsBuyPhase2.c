long IsBuyPhase2(int* param0, int param1) {
    return (*(param0 + 1661) & 0xfffffffe) == 2 ? *(param0 + 1653) == param1: 0L;
}
