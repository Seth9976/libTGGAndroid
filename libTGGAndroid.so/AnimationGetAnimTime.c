uint64_t* AnimationGetAnimTime(uint64_t* param0) {
    uint64_t* ptr0 = *(param0 + 7);
    if(ptr0 != 0L) {
        ptr0 = *(ptr0 + 1);
        if(ptr0 != 0L) {
            while(1) {
                float* ptr1 = *ptr0;
                ptr0 = *(ptr0 + 1);
                if(*(ptr1 + 8) < 0.0 || *(ptr1 + 10) == 4 || *(ptr1 + 10) == 2 && ptr0 == 0L) {
                    return param0;
                }
                else if(*(ptr1 + 8) >= 0.0 && *(ptr1 + 10) != 4 && *(ptr1 + 10) != 2) {
                    return param0;
                }
            }
        }
    }
    return param0;
}
