// Package: Botan::BER_Decoder

uint64_t* Botan::BER_Decoder::discard_remaining(uint64_t* param0) {
    long v0;
    char v1;
    do {
        uint64_t* ptr0 = *(param0 + 5);
        v0 = **ptr0((long)ptr0, (long)&v1, 1L);
    }
    while(v0 != 0L);
    return param0;
}
