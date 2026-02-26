long IKGroupAlloc(uint64_t* param0) {
    int* ptr0 = *(param0 + 7);
    long result = (uint64_t)*(ptr0 + 210);
    ++*(ptr0 + 210);
    return result;
}
