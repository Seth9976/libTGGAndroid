// Package: Botan

long Botan::miller_rabin_test_iterations(long param0, long param1, char param2) {
    long result = (param1 + 2L) >>> 1L;
    if(param2 && param1 <= 128L) {
        if(param0 > 0x5ffL) {
            return 4L;
        }
        if(param0 > 0x3ffL) {
            return 6L;
        }
        if(param0 > 0x1ffL) {
            return 12L;
        }
        if(param0 > 0xffL) {
            result = 29L;
        }
    }
    return result;
}
