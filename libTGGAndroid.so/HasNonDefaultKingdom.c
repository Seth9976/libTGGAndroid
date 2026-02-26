long HasNonDefaultKingdom(int* param0) {
    long v0;
    if(*param0 != 0) {
        return 1L;
    }
    if(*(param0 + 40) != 0) {
        return 1L;
    }
    if(*(param0 + 767) != 0) {
        return 1L;
    }
    if(*(param0 + 0x300) != 0) {
        return 1L;
    }
    if(*(param0 + 1469) != 0) {
        return 1L;
    }
    long v1 = 0L;
    do {
        int* ptr0 = (int*)((long)param0 + v1);
        if(*(ptr0 + 0x272) == 0) {
            break;
        }
        v0 = 1L;
        if(*(ptr0 + 628) != 0 || *(ptr0 + 629) != 10) {
            return (uint64_t)(uint32_t)v0;
        }
        v1 += 16L;
    }
    while(v1 != 0x200L);
    v0 = 1L;
    if(*(param0 + 0x2f2) == 0 && *(param0 + 755) == 2) {
        v0 = 1L;
        if(*(param0 + 756) == 0 && *(param0 + 757) == 2) {
            v0 = 1L;
            if(*(param0 + 758) == 0 && *(param0 + 759) == 2) {
                v0 = 1L;
                if(*(param0 + 760) == 0 && *(param0 + 761) == 2) {
                    v0 = 1L;
                    if(*(param0 + 762) == 0 && *(param0 + 763) == 1) {
                        v0 = 1L;
                        if(*(param0 + 764) == 0 && *(param0 + 765) == 2) {
                            if(*(char*)(param0 + 766) != 0) {
                                return 1L;
                            }
                            if(*(char*)((char*)param0 + 3065L) != 0) {
                                return 1L;
                            }
                            v0 = *(param0 + 1476);
                        }
                    }
                }
            }
        }
    }
    return (uint64_t)(uint32_t)v0;
}
