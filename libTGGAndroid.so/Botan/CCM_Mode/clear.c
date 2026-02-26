// Package: Botan::CCM_Mode

long Botan::CCM_Mode::clear(uint64_t* param0) {
    long* ptr0 = *(param0 + 3);
    *(long*)(*ptr0 + 16L)((long)ptr0);
    jump *(*param0 + 14);
}
