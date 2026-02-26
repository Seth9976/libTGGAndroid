uint32_t HasArtifacts(uint32_t* param0, uint32_t* param1) {
    uint32_t v0;
    int v1;
    uint32_t result = *(param0 + 56);
    if(*(param0 + 56) != 0) {
        if(result == 16) {
            result = 1;
            *param1 = *(param0 + 62);
            v0 = *(param0 + 104);
            if(*(param0 + 104) != 16) {
            loc_6C0278:
                if(v0 != 0) {
                    v0 = *(param0 + 152);
                    if(*(param0 + 152) != 0) {
                    loc_6C02B4:
                        if(v0 == 16) {
                            *(uint32_t*)(result * 4L + (long)param1) = *(param0 + 158);
                            result = v1 + 1;
                        }
                        v0 = *(param0 + 200);
                        if(*(param0 + 200) != 0) {
                            if(v0 == 16) {
                                *(uint32_t*)(result * 4L + (long)param1) = *(param0 + 206);
                                result = v1 + 1;
                            }
                            v0 = *(param0 + 248);
                            if(*(param0 + 248) != 0) {
                                if(v0 == 16) {
                                    *(uint32_t*)(result * 4L + (long)param1) = *(param0 + 254);
                                    result = v1 + 1;
                                }
                                v0 = *(param0 + 296);
                                if(*(param0 + 296) != 0) {
                                    if(v0 == 16) {
                                        *(uint32_t*)(result * 4L + (long)param1) = *(param0 + 302);
                                        result = v1 + 1;
                                    }
                                    v0 = *(param0 + 344);
                                    if(*(param0 + 344) != 0) {
                                        if(v0 == 16) {
                                            *(uint32_t*)(result * 4L + (long)param1) = *(param0 + 350);
                                            result = v1 + 1;
                                        }
                                        if(*(param0 + 0x188) == 16) {
                                            *(uint32_t*)(result * 4L + (long)param1) = *(param0 + 398);
                                            return (uint32_t)(v1 + 1);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                return result;
            }
            goto loc_6C02A0;
        }
        else {
            result = 0;
            v0 = *(param0 + 104);
            if(*(param0 + 104) != 16) {
                goto loc_6C0278;
            }
        loc_6C02A0:
            *(uint32_t*)(result * 4L + (long)param1) = *(param0 + 110);
            result = v1 + 1;
            v0 = *(param0 + 152);
            if(*(param0 + 152) != 0) {
                goto loc_6C02B4;
            }
        }
    }
    return result;
}
