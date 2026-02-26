float* AnimationGetSingleSet(uint64_t* param0) {
    uint64_t* ptr0 = *(param0 + 7);
    if(ptr0 != 0L) {
        ptr0 = *(ptr0 + 1);
        if(ptr0 != 0L) {
            while(1) {
                float* result = *ptr0;
                ptr0 = *(ptr0 + 1);
                if(*(result + 8) < 0.0 || *(result + 10) == 4 || *(result + 10) == 2 && ptr0 == 0L) {
                    return NULL;
                }
                else if(*(result + 8) >= 0.0 && *(result + 10) != 4 && *(result + 10) != 2) {
                    return result;
                }
            }
        }
    }
    return NULL;
}
