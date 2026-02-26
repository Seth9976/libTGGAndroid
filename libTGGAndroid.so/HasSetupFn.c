long HasSetupFn(int* param0) {
    int v0 = *(param0 + 56);
    if(*(param0 + 56) != 0) {
        if(v0 != 1 && v0 != 13) {
            v0 = *(param0 + 104);
            if(*(param0 + 104) == 0) {
                return 0L;
            }
            else if(v0 != 13 && v0 != 1) {
                v0 = *(param0 + 152);
                if(*(param0 + 152) == 0) {
                    return 0L;
                }
                if(v0 != 1 && v0 != 13) {
                    v0 = *(param0 + 200);
                    if(*(param0 + 200) == 0) {
                        return 0L;
                    }
                    if(v0 != 1 && v0 != 13) {
                        v0 = *(param0 + 248);
                        if(*(param0 + 248) == 0) {
                            return 0L;
                        }
                        if(v0 != 1 && v0 != 13) {
                            v0 = *(param0 + 296);
                            if(*(param0 + 296) == 0) {
                                return 0L;
                            }
                            if(v0 != 1 && v0 != 13) {
                                v0 = *(param0 + 344);
                                if(*(param0 + 344) == 0 || (v0 != 1 && v0 != 13 && *(param0 + 0x188) != 1 && *(param0 + 0x188) != 13)) {
                                    return 0L;
                                }
                            }
                        }
                    }
                }
            }
        }
        return 1L;
    }
    return 0L;
}
