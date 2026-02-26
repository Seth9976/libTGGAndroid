// Package: Botan::Parallel

uint64_t* Botan::Parallel::clear(uint64_t* param0) {
    uint64_t* ptr0 = *(param0 + 1);
    long* ptr1 = *(param0 + 2);
    while(ptr0 != ptr1) {
        long* ptr2 = *ptr0;
        ++ptr0;
        param0 = *(long*)(*ptr2 + 56L)((long)ptr2);
    }
    return param0;
}
