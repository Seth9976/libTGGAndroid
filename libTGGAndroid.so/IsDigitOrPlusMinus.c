long IsDigitOrPlusMinus(uint8_t param0) {
    if(param0 - 48 < 10 || param0 == 43 || param0 == 45) {
        return 1L;
    }
    return 0L;
}
