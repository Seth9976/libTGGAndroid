// Package: Botan::AlgorithmIdentifier

long Botan::AlgorithmIdentifier::parameters_are_null(uint64_t* param0) {
    char* ptr0 = *(param0 + 5);
    if((long*)((long)*(param0 + 6) - (long)ptr0) == 2L && *ptr0 == 5) {
        return *(ptr0 + 1L) == 0;
    }
    return 0L;
}
