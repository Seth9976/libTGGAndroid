// Package: Botan

long Botan::random_gf2m(long* param0) {
    short result;
    *(long*)(*param0 + 16L)((long)param0, (long)&result, 2L);
    return result;
}
