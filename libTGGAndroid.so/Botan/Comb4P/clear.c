// Package: Botan::Comb4P

long Botan::Comb4P::clear(uint64_t* param0) {
    long* ptr0 = *(param0 + 1);
    *(long*)(*ptr0 + 56L)((long)ptr0);
    long* ptr1 = *(param0 + 2);
    *(long*)(*ptr1 + 56L)((long)ptr1);
    long* ptr2 = *(param0 + 1);
    char v0 = 0;
    *(long*)(*ptr2 + 24L)((long)ptr2, (long)&v0, 1L);
    long* ptr3 = *(param0 + 2);
    char v1 = 0;
    return *(long*)(*ptr3 + 24L)((long)ptr3, (long)&v1, 1L);
}
