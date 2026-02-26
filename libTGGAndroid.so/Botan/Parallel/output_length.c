// Package: Botan::Parallel

long Botan::Parallel::output_length(uint64_t* param0) {
    uint64_t* ptr0 = *(param0 + 1);
    long* ptr1 = *(param0 + 2);
    if(ptr0 != ptr1) {
        long result = 0L;
        do {
            uint64_t* ptr2 = *ptr0;
            ++ptr0;
            long v0 = **ptr2((long)ptr2);
            result += v0;
        }
        while(ptr0 != ptr1);
        return result;
    }
    return 0L;
}
