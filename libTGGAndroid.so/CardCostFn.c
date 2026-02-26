long CardCostFn(long* param0) {
    long* ptr0 = (uint64_t)*(int*)(param0 + 28);
    if(*(int*)(param0 + 28) != 0) {
        long v0 = 0L;
        if((uint32_t)ptr0 == 3) {
            return *((long*)(v0 * 192L + (long)param0) + 31);
        }
        ptr0 = (uint64_t)*(int*)(param0 + 52);
        if(*(int*)(param0 + 52) == 3) {
            return *(param0 + 55);
        }
        else if((uint32_t)ptr0 == 0) {
            return 0L;
        }
        ptr0 = (uint64_t)*(int*)(param0 + 76);
        if(*(int*)(param0 + 76) == 0) {
            return 0L;
        }
        if((uint32_t)ptr0 == 3) {
            v0 = 2L;
            return *((long*)(v0 * 192L + (long)param0) + 31);
        }
        ptr0 = (uint64_t)*(int*)(param0 + 100);
        if(*(int*)(param0 + 100) != 0) {
            if((uint32_t)ptr0 == 3) {
                return *(param0 + 103);
            }
            ptr0 = (uint64_t)*(int*)(param0 + 124);
            if(*(int*)(param0 + 124) != 0) {
                if((uint32_t)ptr0 == 3) {
                    return *(param0 + 127);
                }
                ptr0 = (uint64_t)*(int*)(param0 + 148);
                if(*(int*)(param0 + 148) != 0) {
                    if((uint32_t)ptr0 == 3) {
                        return *(param0 + 151);
                    }
                    ptr0 = (uint64_t)*(int*)(param0 + 172);
                    if(*(int*)(param0 + 172) != 0) {
                        if((uint32_t)ptr0 == 3) {
                            return *(param0 + 175);
                        }
                        if(*(int*)(param0 + 196) == 3) {
                            return *(param0 + 199);
                        }
                    }
                }
            }
        }
    }
    return 0L;
}
