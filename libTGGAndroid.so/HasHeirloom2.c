long HasHeirloom2(int* param0, int* param1) {
    long v0;
    int v1 = *(param0 + 56);
    if(*(param0 + 56) != 0) {
        if(v1 == 0xF) {
            v0 = 0L;
        }
        else {
            v1 = *(param0 + 104);
            if(*(param0 + 104) != 0xF && v1 == 0) {
                return 0L;
            }
            else if(*(param0 + 104) != 0xF) {
                v1 = *(param0 + 152);
                if(*(param0 + 152) == 0) {
                    return 0L;
                }
                if(v1 == 0xF) {
                    v0 = 2L;
                }
                else {
                    v1 = *(param0 + 200);
                    if(*(param0 + 200) == 0) {
                        return 0L;
                    }
                    if(v1 == 0xF) {
                        v0 = 3L;
                    }
                    else {
                        v1 = *(param0 + 248);
                        if(*(param0 + 248) == 0) {
                            return 0L;
                        }
                        if(v1 == 0xF) {
                            v0 = 4L;
                        }
                        else {
                            v1 = *(param0 + 296);
                            if(*(param0 + 296) == 0) {
                                return 0L;
                            }
                            if(v1 == 0xF) {
                                v0 = 5L;
                            }
                            else {
                                v1 = *(param0 + 344);
                                if(*(param0 + 344) == 0) {
                                    return 0L;
                                }
                                if(v1 == 0xF) {
                                    v0 = 6L;
                                }
                                else {
                                    if(*(param0 + 0x188) != 0xF) {
                                        return 0L;
                                    }
                                    v0 = 7L;
                                }
                            }
                        }
                    }
                }
            }
            else {
                v0 = 1L;
            }
        }
        *param1 = *(int*)((long*)(v0 * 192L + (long)param0) + 31);
        return 1L;
    }
    return 0L;
}
