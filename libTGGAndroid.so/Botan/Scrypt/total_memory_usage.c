// Package: Botan::Scrypt

long Botan::Scrypt::total_memory_usage(long* param0) {
    return (*(param0 + 1) + *(param0 + 3)) * *(param0 + 2) * 128L;
}
