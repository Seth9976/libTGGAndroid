int BoardPileWhere(long param0, int param1) {
    if(param1 != 0) {
        int* ptr0 = (int*)(param0 + 5536L);
        long v0 = -65L;
        while(*(ptr0 - 1) != param1 && *ptr0 != param1) {
            long v1 = v0;
            ++v0;
            ptr0 += 4;
            if(v1 >= -1L) {
                return 0;
            }
        }
        return (uint64_t)((uint32_t)v0 + 72);
    }
    return 0;
}
