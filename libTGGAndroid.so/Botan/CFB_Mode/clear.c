// Package: Botan::CFB_Mode

long Botan::CFB_Mode::clear(uint64_t* param0) {
    long* ptr0 = *(param0 + 8);
    long result = *(long*)(*ptr0 + 16L)((long)ptr0);
    long* ptr1 = *(param0 + 1);
    *(param0 + 5) = *(param0 + 4);
    *(param0 + 2) = ptr1;
    return result;
}
