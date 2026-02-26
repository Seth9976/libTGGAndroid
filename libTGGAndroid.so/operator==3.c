long operator==3(int* param0, int* param1) {
    return ((*param0 ^ *param1) & 0xfffbffff) == 0;
}
