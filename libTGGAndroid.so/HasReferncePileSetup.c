long HasReferncePileSetup(long* param0, long* param1) {
    long v0;
    int v1 = *(int*)(param0 + 28);
    if(*(int*)(param0 + 28) != 0) {
        if(v1 == 14) {
            v0 = 0L;
        }
        else {
            int v2 = *(int*)(param0 + 52);
            if(*(int*)(param0 + 52) != 14 && v2 == 0) {
                return 0L;
            }
            else if(*(int*)(param0 + 52) != 14) {
                int v3 = *(int*)(param0 + 76);
                if(*(int*)(param0 + 76) == 0) {
                    return 0L;
                }
                if(v3 == 14) {
                    v0 = 2L;
                }
                else {
                    int v4 = *(int*)(param0 + 100);
                    if(*(int*)(param0 + 100) == 0) {
                        return 0L;
                    }
                    if(v4 == 14) {
                        v0 = 3L;
                    }
                    else {
                        int v5 = *(int*)(param0 + 124);
                        if(*(int*)(param0 + 124) == 0) {
                            return 0L;
                        }
                        if(v5 == 14) {
                            v0 = 4L;
                        }
                        else {
                            int v6 = *(int*)(param0 + 148);
                            if(*(int*)(param0 + 148) == 0) {
                                return 0L;
                            }
                            if(v6 == 14) {
                                v0 = 5L;
                            }
                            else {
                                int v7 = *(int*)(param0 + 172);
                                if(*(int*)(param0 + 172) == 0) {
                                    return 0L;
                                }
                                if(v7 == 14) {
                                    v0 = 6L;
                                }
                                else {
                                    if(*(int*)(param0 + 196) != 14) {
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
        if(param1 != 0L) {
            *param1 = *((long*)(v0 * 192L + (long)param0) + 33);
        }
        return 1L;
    }
    return 0L;
}
