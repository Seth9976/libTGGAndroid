long* AnimationSetRateFromDuration(long* param0) {
    uint64_t* ptr0;
    float v0;
    uint64_t* ptr1 = *(uint64_t*)(*(param0 + 7) + 8L);
    if(ptr1 != 0L) {
        do {
            float* ptr2 = *ptr1;
            ptr0 = *(ptr1 + 1);
            ptr1 = *(ptr1 + 1);
            *ptr2 = *(ptr2 + 9) != 2 ? (float)(1.0 / v0): 0.0;
        }
        while(ptr0 != 0L);
    }
    return param0;
}
