int AbilityCharacterticsCommute(long param0, int param1, int param2) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int result = 1;
    if(param1 != 16 && param2 != 16) {
        if(param1 == 17) {
            return 2;
        }
        if(param2 == 17) {
            return 3;
        }
        if(param1 == 22 && param2 == 23) {
            return 0;
        }
        if(param1 == 23 && param2 == 22) {
            return 0;
        }
        if(param1 == 5 && param2 == 4) {
            return 0;
        }
        if(param1 == 4 && param2 == 5) {
            return 0;
        }
        int v9 = param1 != 5 ? param1: 4;
        int v10 = param2 != 5 ? param2: 4;
        if(v9 == 13 && (param2 != 5 ? param2: 4) == 13) {
            return 1;
        }
        result = 1;
        if((v9 != 13 || v10 != 4) && !(v9 == 4 & v3 & 1)) {
            result = 1;
            if((v9 != 13 || v10 != 6) && !(v9 == 6 & v3 & 1)) {
                result = 1;
                if((v9 != 13 || v10 != 11) && !(v9 == 11 & v3 & 1)) {
                    result = 1;
                    if((v9 != 13 || v10 != 7) && !(v9 == 7 & v3 & 1)) {
                        result = 1;
                        if((v9 != 13 || v10 != 10) && !(v9 == 10 & v3 & 1)) {
                            result = 1;
                            if((v9 != 13 || v10 != 9) && !(v9 == 9 & v3 & 1)) {
                                result = 1;
                                if((v9 != 13 || v10 != 12) && !(v9 == 12 & v3 & 1)) {
                                    result = 1;
                                    if((v9 != 13 || v10 != 3) && !(v9 == 3 & v3 & 1)) {
                                        result = 1;
                                        if((v9 != 13 || v10 != 18) && !(v9 == 18 & v3 & 1)) {
                                            result = 1;
                                            if((v9 != 13 || v10 != 19) && !(v9 == 19 & v3 & 1)) {
                                                result = 1;
                                                if((v9 != 13 || v10 != 20) && !(v9 == 20 & v3 & 1)) {
                                                    result = 1;
                                                    if((v9 != 13 || v10 != 0xF) && !(v9 == 0xF & v3 & 1)) {
                                                        result = 1;
                                                        if((v9 != 13 || v10 != 14) && !(v9 == 14 & v3 & 1)) {
                                                            if(v9 == 4 && v10 == 3) {
                                                                return 2;
                                                            }
                                                            if(v9 == 3 && v10 == 4) {
                                                                return 3;
                                                            }
                                                            int v11 = v9 == 3;
                                                            int v12 = v10 == 3;
                                                            param1 = v9 == 4;
                                                            param2 = v10 == 4;
                                                            result = 1;
                                                            if(!(v9 == 20 & param2 & 1) && !(v10 == 20 & param1 & 1) && !(v9 == 19 & param2 & 1) && !(v10 == 19 & param1 & 1) && !(v9 == 0xF & param2 & 1) && !(v10 == 0xF & param1 & 1) && !(v0 & 1 & param2 & 1) && !(v12 & 1 & v4 & 1) && !(v11 & 1 & v5 & 1) && !(v12 & 1 & v6 & 1) && !(v11 & 1 & v7 & 1) && !(v8 & 1 & v12 & 1) && !(((v3 & 1) | (v12 & 1)) & v11 & 1)) {
                                                                if(v9 == 4 && v10 == 6) {
                                                                    return 2;
                                                                }
                                                                if(v9 == 6 && v10 == 4) {
                                                                    return 3;
                                                                }
                                                                v12 = v9 == 6;
                                                                v11 = v10 == 6;
                                                                result = 1;
                                                                if((v9 != 20 || !(v11 & 1)) && !(v12 & 1 & v5 & 1) && !(v11 & 1 & v6 & 1) && !(v12 & 1 & v7 & 1) && !(v8 & 1 & v12 & 1) && !(v3 & 1 & v11 & 1)) {
                                                                    v12 = v9 == 11;
                                                                    v11 = v10 == 11;
                                                                    result = 1;
                                                                    if((v9 != 20 || !(v11 & 1)) && !(v12 & 1 & v5 & 1) && !(v11 & 1 & v6 & 1) && !(v12 & 1 & v7 & 1) && !(v8 & 1 & v12 & 1) && !(v3 & 1 & v11 & 1)) {
                                                                        int v13 = v9 == 7;
                                                                        v12 = v10 == 7;
                                                                        result = 1;
                                                                        if((v9 != 20 || !(v12 & 1)) && !(v13 & 1 & v5 & 1) && !(v12 & 1 & v6 & 1) && !(v13 & 1 & v7 & 1) && !(v3 & 1 & v12 & 1) && !((v10 & 0xfffffff7) == 7 & v13 & 1)) {
                                                                            v11 = v9 == 9;
                                                                            v12 = v10 == 9;
                                                                            result = 1;
                                                                            if((v9 != 19 || !(v12 & 1)) && !(v11 & 1 & v7 & 1) && !(v8 & 1 & v12 & 1) && !(((v3 & 1) | (v12 & 1)) & v11 & 1)) {
                                                                                v11 = v9 == 12;
                                                                                v12 = v10 == 12;
                                                                                result = 1;
                                                                                if((v9 != 20 || !(v12 & 1)) && !(v11 & 1 & v5 & 1) && !(v12 & 1 & v6 & 1) && !(v11 & 1 & v7 & 1) && !(v8 & 1 & v12 & 1) && !(((v3 & 1) | (v12 & 1)) & v11 & 1)) {
                                                                                    if(v9 == 18 && v10 == 18) {
                                                                                        return 0;
                                                                                    }
                                                                                    v12 = v9 == 18;
                                                                                    v11 = v10 == 18;
                                                                                    result = 1;
                                                                                    if((v9 != 20 || !(v11 & 1)) && !(v12 & 1 & v5 & 1) && !(v11 & 1 & v6 & 1) && !(v12 & 1 & v7 & 1) && !(v8 & 1 & v12 & 1) && !(v3 & 1 & v11 & 1)) {
                                                                                        v12 = v9 == 10;
                                                                                        v11 = v10 == 10;
                                                                                        result = 1;
                                                                                        if((v9 != 19 || !(v11 & 1)) && !(v12 & 1 & v7 & 1) && !(v8 & 1 & v12 & 1) && !(v3 & 1 & v11 & 1)) {
                                                                                            int v14 = v9 == 19;
                                                                                            int v15 = v10 == 19;
                                                                                            result = 1;
                                                                                            if((v9 != 20 || v10 != 20) && !(v1 & 1 & v15 & 1) && !(v2 & 1 & v14 & 1) && !(v8 & 1 & v14 & 1) && !(v3 & 1 & v15 & 1)) {
                                                                                                int v16 = v10 & 0xfffffffe;
                                                                                                result = 1;
                                                                                                if((v10 != 14 || v9 != 0xF) && !(v16 == 14 & v1 & 1) && !((v10 == 19 | (v2 & 1)) & v8 & 1)) {
                                                                                                    if(v9 == 2 && v10 == 2) {
                                                                                                        return 1;
                                                                                                    }
                                                                                                    result = (v9 & 0xfffffffe) == 22 | v16 == 22;
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
                }
            }
        }
    }
    return result;
}
