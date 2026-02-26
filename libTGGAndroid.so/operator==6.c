long operator==6(int* param0, int* param1) {
    return *(param0 + 1) == *(param1 + 1) ? *param0 == *param1: 0L;
}
