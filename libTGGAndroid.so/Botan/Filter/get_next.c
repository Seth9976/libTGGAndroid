// Package: Botan::Filter

long Botan::Filter::get_next(uint64_t* param0) {
    long* ptr0 = *(param0 + 4);
    long* ptr1 = *(param0 + 7);
    if((long*)((long)(long*)((long)*(param0 + 5) - (long)ptr0) >> 3L) > ptr1) {
        return *(long*)((long)(long*)((long)ptr1 * 8L) + (long)ptr0);
    }
    return 0L;
}
