uint64_t* AnimationSetAnimTime(uint64_t* param0) {
    int v0;
    uint64_t* ptr0 = *(param0 + 7);
    if(ptr0 != 0L) {
        ptr0 = *(ptr0 + 1);
        if(ptr0 != 0L) {
            while(1) {
                uint64_t* ptr1 = *(ptr0 + 1);
                *(int*)((char*)*ptr0 + 4L) = v0;
                ptr0 = ptr1;
                if(ptr1 == 0L) {
                    return param0;
                }
            }
        }
    }
    return param0;
}
