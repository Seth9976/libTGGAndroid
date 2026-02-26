// Package: Botan::CCM_Mode

long* Botan::CCM_Mode::reset(long* param0) {
    long v0 = *(param0 + 7);
    long v1 = *(param0 + 10);
    *(param0 + 5) = *(param0 + 4);
    *(param0 + 8) = v0;
    *(param0 + 11) = v1;
    return param0;
}
