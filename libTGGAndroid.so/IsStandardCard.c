long IsStandardCard(char* param0) {
    return (uint64_t)((__ror__((uint32_t)*(param0 + 206L), 1)) & 1);
}
