// Package: Botan::BER_Decoder

long Botan::BER_Decoder::more_items(uint64_t* param0) {
    long* ptr0 = *(param0 + 5);
    long v0 = *(long*)(*ptr0 + 24L)((long)ptr0);
    if((v0 & 0x1L) && *(uint32_t*)(param0 + 1) == 0xff00) {
        return 0L;
    }
    return 1L;
}
