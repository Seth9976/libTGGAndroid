long AttribTagExists(uint64_t* param0, int param1) {
    long result;
    int v0;
    int v1 = *(uint32_t*)(param0 + 2);
    if(v1 >= 1) {
        int* ptr0 = *(param0 + 1);
        long v2 = 1L;
        do {
            v0 = *ptr0;
            ptr0 += 26;
            result = param1 == v0;
            if(v1 <= v2) {
                return result;
            }
            ++v2;
        }
        while(param1 != v0);
        return result;
    }
    return 0L;
}
