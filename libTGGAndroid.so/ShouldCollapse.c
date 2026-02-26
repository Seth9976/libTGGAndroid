long ShouldCollapse(int* param0, int* param1) {
    if(*param0 == *param1 && *(param0 + 1) == *(param1 + 1) && *(param0 + 3) == *(param1 + 3) && *(param0 + 4) == *(param1 + 4) && *(param0 + 5) == *(param1 + 5) && *(param0 + 6) == *(param1 + 6) && *(param0 + 7) == *(param1 + 7) && *(param0 + 8) == *(param1 + 8) && *(param0 + 9) == *(param1 + 9) && *(long*)(param0 + 10) == *(long*)(param1 + 10)) {
        return 1L;
    }
    return 0L;
}
