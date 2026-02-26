char* SetFourCC(char* param0, char* param1) {
    *param0 = *param1;
    *(param0 + 1L) = *(param1 + 1L);
    *(param0 + 2L) = *(param1 + 2L);
    *(param0 + 3L) = *(param1 + 3L);
    return param0;
}
