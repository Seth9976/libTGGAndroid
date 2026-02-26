// Package: Botan::EAX_Mode

long Botan::EAX_Mode::update_granularity(uint64_t* param0) {
    long* ptr0 = *(param0 + 2);
    long v0 = *(long*)(*ptr0 + 56L)((long)ptr0);
    long v1 = *(long*)(*ptr0 + 48L)((long)ptr0);
    return v1 * v0 * 4L;
}
