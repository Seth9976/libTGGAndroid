long AnimationComplete(uint64_t* param0) {
    uint64_t* ptr0 = *(param0 + 7);
    if(ptr0 != 0L) {
        ptr0 = *(ptr0 + 1);
        while(ptr0 != 0L) {
            float* ptr1 = *ptr0;
            ptr0 = *(ptr0 + 1);
            if(*(ptr1 + 8) >= 0.0 && *(ptr1 + 10) != 4 && *(ptr1 + 10) != 2) {
                if(*(ptr1 + 9) == 1) {
                    return *(ptr1 + 1) == 1.0;
                }
                return 0L;
            }
        }
    }
    return 0L;
}
