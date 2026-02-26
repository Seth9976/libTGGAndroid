int GetNumRequiredPlayers(long param0, uint32_t param1) {
    long v0;
    int result;
    result = 0;
    if((int)param1 >= 1) {
        long v1 = param1;
        int* ptr0 = (int*)(param0 + 100L);
        do {
            if(*(ptr0 - 1) != 0 && (*(ptr0 - 1) != 2 || *ptr0 != 1)) {
                result = (uint32_t)result + 1;
            }
            v0 = v1 - 1L;
            --v1;
            ptr0 += 139;
        }
        while(v0 != 0L);
    }
    return result;
}
