long IsInKingdom(int* param0, int param1) {
    int v0;
    long v1;
    int* ptr0 = (uint64_t)*param0;
    if(*param0 != 0) {
        if((uint32_t)ptr0 == param1) {
            return 1L;
        }
        ptr0 = (uint64_t)*(param0 + 1);
        if(*(param0 + 1) != 0) {
            if((uint32_t)ptr0 == param1) {
                return 1L;
            }
            ptr0 = (uint64_t)*(param0 + 2);
            if(*(param0 + 2) != 0) {
                if((uint32_t)ptr0 == param1) {
                    return 1L;
                }
                ptr0 = (uint64_t)*(param0 + 3);
                if(*(param0 + 3) != 0) {
                    if((uint32_t)ptr0 == param1) {
                        return 1L;
                    }
                    ptr0 = (uint64_t)*(param0 + 4);
                    if(*(param0 + 4) != 0) {
                        if((uint32_t)ptr0 == param1) {
                            return 1L;
                        }
                        ptr0 = (uint64_t)*(param0 + 5);
                        if(*(param0 + 5) != 0) {
                            if((uint32_t)ptr0 == param1) {
                                return 1L;
                            }
                            ptr0 = (uint64_t)*(param0 + 6);
                            if(*(param0 + 6) != 0) {
                                if((uint32_t)ptr0 == param1) {
                                    return 1L;
                                }
                                ptr0 = (uint64_t)*(param0 + 7);
                                if(*(param0 + 7) != 0) {
                                    if((uint32_t)ptr0 == param1) {
                                        return 1L;
                                    }
                                    ptr0 = (uint64_t)*(param0 + 8);
                                    if(*(param0 + 8) != 0) {
                                        if((uint32_t)ptr0 == param1) {
                                            return 1L;
                                        }
                                        if(*(param0 + 9) != 0 && *(param0 + 9) == param1) {
                                            return 1L;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    ptr0 = (uint64_t)*(param0 + 10);
    if(*(param0 + 10) != 0) {
        if((uint32_t)ptr0 == param1) {
            return 1L;
        }
        ptr0 = (uint64_t)*(param0 + 25);
        if(*(param0 + 25) != 0) {
            if((uint32_t)ptr0 == param1) {
                return 1L;
            }
            ptr0 = (uint64_t)*(param0 + 40);
            if(*(param0 + 40) != 0) {
                if((uint32_t)ptr0 == param1) {
                    return 1L;
                }
                if(*(param0 + 55) != 0 && *(param0 + 55) == param1) {
                    return 1L;
                }
            }
        }
    }
    if(*(param0 + 70) != 0 && *(param0 + 70) == param1) {
        return 1L;
    }
    long v2 = 0L;
    ptr0 = param0 + 71;
    do {
        v1 = v2;
        if(v2 == 106L) {
            break;
        }
        v0 = *(int*)(v1 * 4L + (long)ptr0);
        v2 = v1 + 1L;
    }
    while(v0 == 0 || param1 != v0);
    return v1 < 106L;
}
