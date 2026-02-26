long CanStartGame(int* param0, int* param1) {
    if(*(param0 + 24) == 1 && *(param0 + 25) == *(param1 + 6) && *(param0 + 27) == 2) {
        int v0 = *(param0 + 163);
        if(*(param0 + 163) != 1) {
            if(v0 == 2 && *(param0 + 164) == 0) {
                return 0L;
            }
            goto loc_5C7FAC;
        }
        else if(*(param0 + 166) == 2) {
        loc_5C7FAC:
            int v1 = *(param0 + 302);
            if(*(param0 + 302) != 1) {
                if(v1 == 2 && *(param0 + 303) == 0) {
                    return 0L;
                }
                goto loc_5C7FD8;
            }
            else if(*(param0 + 0x131) == 2) {
            loc_5C7FD8:
                int v2 = *(param0 + 441);
                if(*(param0 + 441) != 1) {
                    if(v2 == 2 && *(param0 + 442) == 0) {
                        return 0L;
                    }
                    goto loc_5C8004;
                }
                else if(*(param0 + 444) == 2) {
                loc_5C8004:
                    int v3 = *(param0 + 0x244);
                    if(*(param0 + 0x244) != 1) {
                        if(v3 == 2 && *(param0 + 581) == 0) {
                            return 0L;
                        }
                        goto loc_5C8030;
                    }
                    else if(*(param0 + 583) == 2) {
                    loc_5C8030:
                        int v4 = *(param0 + 719);
                        if(*(param0 + 719) != 1) {
                            if(v4 == 2 && *(param0 + 720) == 0) {
                                return 0L;
                            }
                            goto loc_5C805C;
                        }
                        else if(*(param0 + 0x2d2) == 2) {
                        loc_5C805C:
                            int v5 = *(param0 + 858);
                            if(*(param0 + 858) != 1) {
                                if(v5 == 2 && *(param0 + 859) == 0) {
                                    return 0L;
                                }
                                goto loc_5C8088;
                            }
                            else if(*(param0 + 861) == 2) {
                            loc_5C8088:
                                int v6 = *(param0 + 997);
                                if(*(param0 + 997) != 1) {
                                    if(v6 != 2 || *(param0 + 998) != 0) {
                                        return 1L;
                                    }
                                }
                                else if(*(param0 + 1000) == 2) {
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
