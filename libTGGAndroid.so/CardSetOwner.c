int* CardSetOwner(int* param0, int param1) {
    if(param1 != -1) {
        *(param0 + 12) = param1;
    }
    *(param0 + 11) = param1;
    *(param0 + 13) = param1;
    return param0;
}
