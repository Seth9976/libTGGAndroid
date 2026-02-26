long DefRoundUpToAlignment(int param0) {
    return (uint64_t)((param0 + 3) & 0xfffffffc);
}
