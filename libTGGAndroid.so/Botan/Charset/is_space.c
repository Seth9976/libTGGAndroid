// Package: Botan::Charset

int Botan::Charset::is_space(long param0, int param1) {
    if((uint8_t)param1 - 9 <= 23) {
        return (uint64_t)((0x800013 >>> param0) & 1);
    }
    return 0;
}
