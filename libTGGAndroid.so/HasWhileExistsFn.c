long HasWhileExistsFn(long* param0, long* param1) {
    long v0;
    int v1 = *(int*)(param0 + 28);
    if(*(int*)(param0 + 28) != 0) {
        if(v1 == 6 || *(int*)((char*)param0 + 228L) == 2) {
            v0 = 0L;
            *param1 = *((long*)(v0 * 192L + (long)param0) + 31);
            return 1L;
        }
        v1 = *(int*)(param0 + 52);
        if(*(int*)(param0 + 52) != 0) {
            if(v1 == 6 || *(int*)((char*)param0 + 420L) == 2) {
                v0 = 1L;
                *param1 = *((long*)(v0 * 192L + (long)param0) + 31);
                return 1L;
            }
            v1 = *(int*)(param0 + 76);
            if(*(int*)(param0 + 76) != 0) {
                if(v1 == 6 || *(int*)((char*)param0 + 612L) == 2) {
                    v0 = 2L;
                    *param1 = *((long*)(v0 * 192L + (long)param0) + 31);
                    return 1L;
                }
                v1 = *(int*)(param0 + 100);
                if(*(int*)(param0 + 100) != 0) {
                    if(v1 == 6 || *(int*)((char*)param0 + 804L) == 2) {
                        v0 = 3L;
                        *param1 = *((long*)(v0 * 192L + (long)param0) + 31);
                        return 1L;
                    }
                    v1 = *(int*)(param0 + 124);
                    if(*(int*)(param0 + 124) != 0) {
                        if(v1 == 6 || *(int*)((char*)param0 + 996L) == 2) {
                            v0 = 4L;
                            *param1 = *((long*)(v0 * 192L + (long)param0) + 31);
                            return 1L;
                        }
                        v1 = *(int*)(param0 + 148);
                        if(*(int*)(param0 + 148) != 0) {
                            if(v1 == 6 || *(int*)((char*)param0 + 1188L) == 2) {
                                v0 = 5L;
                                *param1 = *((long*)(v0 * 192L + (long)param0) + 31);
                                return 1L;
                            }
                            v1 = *(int*)(param0 + 172);
                            if(*(int*)(param0 + 172) != 0) {
                                if(v1 == 6 || *(int*)((char*)param0 + 1380L) == 2) {
                                    v0 = 6L;
                                    *param1 = *((long*)(v0 * 192L + (long)param0) + 31);
                                    return 1L;
                                }
                                if(*(int*)(param0 + 196) != 0 && (*(int*)(param0 + 196) == 6 || *(int*)((char*)param0 + 1572L) == 2)) {
                                    v0 = 7L;
                                    *param1 = *((long*)(v0 * 192L + (long)param0) + 31);
                                    return 1L;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0L;
}
