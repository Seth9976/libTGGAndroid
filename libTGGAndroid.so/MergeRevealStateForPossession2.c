int* MergeRevealStateForPossession2(int* param0, int param1, int param2) {
    if(param1 != param2 && *(param0 + 1354) >= 1) {
        long v0 = 0L;
        int* ptr0 = (int*)((long*)(param2 * 4L + (long)param0) + 0x355);
        int* ptr1 = (int*)((long*)(param1 * 4L + (long)param0) + 0x355);
        do {
            int v1 = *ptr1;
            ptr1 += 26;
            ++v0;
            *ptr0 |= v1;
            ptr0 += 26;
        }
        while(*(param0 + 1354) > v0);
    }
    return param0;
}
