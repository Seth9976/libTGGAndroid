// Package: Botan::CBC_Mode

long Botan::CBC_Mode::clear(uint64_t* param0) {
    long* ptr0 = *(param0 + 1);
    *(long*)(*ptr0 + 16L)((long)ptr0);
    jump *(*param0 + 14);
}
