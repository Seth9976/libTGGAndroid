long BinGetHeadW(long* param0, int* param1) {
    return (long)(*(int*)(param0 + 8) * *(param1 + 1) + *param1) * 8L + *(param0 + 3);
}
