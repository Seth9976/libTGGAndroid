// Package: Botan::Parallel

uint64_t* Botan::Parallel::add_data(uint64_t* param0, long param1, long param2) {
    uint64_t* ptr0 = *(param0 + 1);
    long* ptr1 = *(param0 + 2);
    while(ptr0 != ptr1) {
        long* ptr2 = *ptr0;
        ++ptr0;
        param0 = *(long*)(*ptr2 + 24L)((long)ptr2, param1, param2);
    }
    return param0;
}
