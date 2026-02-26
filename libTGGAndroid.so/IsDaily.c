long IsDaily(char* param0) {
    return (uint64_t)((__ror__((uint32_t)*(param0 + 32L), 2)) & 1);
}
