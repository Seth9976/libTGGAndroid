long FindCardAnywhere2(int* param0, int param1) {
    long result;
    long v0 = (uint64_t)*(param0 + 1354);
    result = 0L;
    if(*(param0 + 1354) >= 1) {
        int* ptr0 = param0 + 1692;
        while(*ptr0 != param1) {
            ++result;
            ptr0 += 26;
            if(result != v0) {
                continue;
            }
            return 0L;
        }
    }
    return result;
}
