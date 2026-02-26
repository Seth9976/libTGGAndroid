int EmptySupplyPiles2(long param0, int* param1, int param2) {
    int result = 0;
    long v0 = -416L;
    while(1) {
        int* ptr0 = (int*)(param0 + v0);
        int v1 = *(ptr0 + 1487);
        if(*(ptr0 + 1487) != 0 && *(ptr0 + 1489) == 0) {
            ptr0 = (uint64_t)(result + 1);
            *(int*)(result * 4L + (long)param1) = v1;
            result = (uint32_t)ptr0;
            if((uint32_t)ptr0 == param2) {
                return param2;
            }
        }
        long v2 = v0;
        v0 += 16L;
        if(v2 == -16L) {
            return result;
        }
    }
    return result;
}
