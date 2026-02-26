int operator!=3(int* param0, int* param1) {
    int v0 = *param0;
    int v1 = *param1;
    if(v0 != 0) {
        if(v1 == 0) {
            return 1;
        }
    }
    else if(v1 != 0) {
        return 1;
    }
    return (uint64_t)(*(param0 + 1) != *(param1 + 1) | v0 != v1);
}
