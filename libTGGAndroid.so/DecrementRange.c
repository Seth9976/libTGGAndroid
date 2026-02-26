int* DecrementRange(int param0, int* param1, int* param2) {
    int v0 = *(param1 + 1);
    int v1 = *(param2 + 1);
    --*param1;
    if(v0 != v1) {
        *(param1 + 1) = param0 - 1;
    }
    return param1;
}
