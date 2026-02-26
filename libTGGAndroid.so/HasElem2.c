int HasElem2(long param0, uint32_t param1, int param2) {
    if((int)param1 >= 1) {
        long v0 = 0L;
        int* ptr0 = (int*)(param0 + 4L);
        long v1 = 1L;
        while(*(ptr0 - 1) != 1 || *ptr0 != param2) {
            ++v0;
            v1 = param1 > v0;
            ptr0 += 4;
            if(param1 == v0) {
                break;
            }
        }
        return (uint64_t)((uint32_t)v1 & 1);
    }
    return 0;
}
