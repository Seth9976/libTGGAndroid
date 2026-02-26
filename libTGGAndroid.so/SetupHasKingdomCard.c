long SetupHasKingdomCard(int* param0, int param1) {
    int v0 = *param0;
    if(*param0 != 0) {
        if(v0 == 1 && *(param0 + 1) == param1) {
            return 1L;
        }
        v0 = *(param0 + 4);
        if(*(param0 + 4) == 1) {
            if(*(param0 + 5) == param1) {
                return 1L;
            }
        loc_5F773C:
            v0 = *(param0 + 8);
            if(*(param0 + 8) != 0) {
                if(v0 == 1 && *(param0 + 9) == param1) {
                    return 1L;
                }
                v0 = *(param0 + 12);
                if(*(param0 + 12) != 0) {
                    if(v0 == 1 && *(param0 + 13) == param1) {
                        return 1L;
                    }
                    v0 = *(param0 + 16);
                    if(*(param0 + 16) != 0) {
                        if(v0 == 1 && *(param0 + 17) == param1) {
                            return 1L;
                        }
                        v0 = *(param0 + 20);
                        if(*(param0 + 20) != 0) {
                            if(v0 == 1 && *(param0 + 21) == param1) {
                                return 1L;
                            }
                            v0 = *(param0 + 24);
                            if(*(param0 + 24) != 0) {
                                if(v0 == 1 && *(param0 + 25) == param1) {
                                    return 1L;
                                }
                                v0 = *(param0 + 28);
                                if(*(param0 + 28) != 0) {
                                    if(v0 == 1 && *(param0 + 29) == param1) {
                                        return 1L;
                                    }
                                    v0 = *(param0 + 32);
                                    if(*(param0 + 32) != 0) {
                                        if(v0 == 1 && *(param0 + 33) == param1) {
                                            return 1L;
                                        }
                                        if(*(param0 + 36) != 0 && *(param0 + 36) == 1 && *(param0 + 37) == param1) {
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
        else if(v0 != 0) {
            goto loc_5F773C;
        }
    }
    return 0L;
}
