int DomLocationSetGlobal(int* param0, int param1) {
    *param0 = param1;
    *(long*)(param0 + 2) = -1L;
    return param1;
}
