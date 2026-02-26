long AnimationCrossedTime(uint64_t* param0) {
    float v0;
    float v1;
    float v2;
    float* ptr0 = *(param0 + 7);
    if(ptr0 != 0L) {
        uint64_t* ptr1 = *(double*)(ptr0 + 2);
        while(ptr1 != 0L) {
            ptr0 = *ptr1;
            ptr1 = *(ptr1 + 1);
            if(*(ptr0 + 8) >= 0.0 && *(ptr0 + 10) != 4 && *(ptr0 + 10) != 2) {
                char v3 = *ptr0 < 0.0;
                if(*ptr0 != 0.0 && !v3) {
                    v1 = *(ptr0 + 1);
                    v0 = *(ptr0 + 2);
                    char v4 = v1 == v0;
                    if(*(ptr0 + 2) < v1) {
                        return v2 <= v1 ? v2 > v0: 0L;
                    }
                    if(!v4) {
                        return (uint64_t)(v2 <= v1 | v2 > v0);
                    }
                }
                else if(v3) {
                    v0 = *(ptr0 + 1);
                    v1 = *(ptr0 + 2);
                    if(*(ptr0 + 2) > v0) {
                        return v2 >= v0 ? v2 < v1: 0L;
                    }
                    return (uint64_t)(v2 >= v0 | v2 < v1);
                }
                return 0L;
            }
        }
    }
    return 0L;
}
