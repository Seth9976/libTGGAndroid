char* DomLogToggle(char* param0, int param1) {
    *(param0 + 5384L) = (uint8_t)~param1 & 1;
    return param0;
}
