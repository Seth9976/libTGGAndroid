float* sub_C1D098(float* param0) {
    float v0;
    float v1;
    float v2;
    float v3 = *(param0 + 3);
    float v4 = *(param0 + 4);
    float v5 = *(param0 + 2);
    if(*(param0 + 2) == v4) {
        v0 = *(param0 + 5);
        if(*(param0 + 5) != v3) {
            goto loc_C1D0B8;
        }
    }
    else {
    loc_C1D0B8:
        float v6 = (int)v5;
        float v7 = (int)v3;
        if(*param0 == 0) {
            short* ptr0 = (short*)((long)*(param0 + 12) * 14L + *(double*)(param0 + 10));
            *(char*)(ptr0 + 6) = 2;
            *ptr0 = (uint16_t)v6;
            *(ptr0 + 1) = (uint16_t)v7;
            *(int*)(ptr0 + 2) = 0;
            *(short*)((long)*(param0 + 12) * 14L + *(double*)(param0 + 10) + 8L) = 0;
            *(short*)((long)*(param0 + 12) * 14L + *(double*)(param0 + 10) + 10L) = 0;
            v4 = *(param0 + 4);
        }
        else {
            if((int)*(param0 + 7) < (int)v6 || *(param0 + 1) == 0) {
                *(param0 + 7) = v6;
                if((int)*(param0 + 9) < (int)v7) {
                    goto loc_C1D110;
                }
                else {
                loc_C1D0FC:
                    if(*(param0 + 1) == 0) {
                        goto loc_C1D110;
                    }
                }
                if((int)*(param0 + 6) > (int)v6) {
                    goto loc_C1D138;
                loc_C1D110:
                    *(param0 + 9) = v7;
                    if((int)*(param0 + 6) > (int)v6) {
                        goto loc_C1D138;
                    }
                }
                if(*(param0 + 1) == 0) {
                    goto loc_C1D138;
                }
                if((int)*(param0 + 8) > (int)v7) {
                    goto loc_C1D150;
                loc_C1D138:
                    *(param0 + 6) = v6;
                    if((int)*(param0 + 8) > (int)v7) {
                        goto loc_C1D150;
                    }
                }
                if(*(param0 + 1) == 0) {
                loc_C1D150:
                    *(param0 + 8) = v7;
                }
            }
            else if((int)*(param0 + 9) >= (int)v7) {
                goto loc_C1D0FC;
            }
            else {
                goto loc_C1D110;
            }
            *(param0 + 1) = (float)1.4E-45;
        }
        v0 = *(param0 + 5);
        ++*(param0 + 12);
    }
    float v8 = *param0;
    float v9 = v4 + v1;
    float v10 = v0 + v2;
    float v11 = (int)v9;
    float v12 = (int)v10;
    *(param0 + 4) = v9;
    *(param0 + 5) = v10;
    *(param0 + 2) = v9;
    *(param0 + 3) = v10;
    if(v8 != 0) {
        if((int)*(param0 + 7) < (int)v11 || *(param0 + 1) == 0) {
            *(param0 + 7) = v11;
            if((int)*(param0 + 9) < (int)v12) {
                goto loc_C1D22C;
            }
            else {
            loc_C1D218:
                if(*(param0 + 1) == 0) {
                    goto loc_C1D22C;
                }
            }
            if((int)*(param0 + 6) > (int)v11) {
                goto loc_C1D254;
            loc_C1D22C:
                *(param0 + 9) = v12;
                if((int)*(param0 + 6) > (int)v11) {
                    goto loc_C1D254;
                }
            }
            if(*(param0 + 1) == 0) {
                goto loc_C1D254;
            }
            if((int)*(param0 + 8) > (int)v12) {
                goto loc_C1D26C;
            loc_C1D254:
                *(param0 + 6) = v11;
                if((int)*(param0 + 8) > (int)v12) {
                    goto loc_C1D26C;
                }
            }
            if(*(param0 + 1) == 0) {
            loc_C1D26C:
                *(param0 + 8) = v12;
            }
        }
        else if((int)*(param0 + 9) >= (int)v12) {
            goto loc_C1D218;
        }
        else {
            goto loc_C1D22C;
        }
        *(param0 + 1) = (float)1.4E-45;
        ++*(param0 + 12);
        return param0;
    }
    short* ptr1 = (short*)((long)*(param0 + 12) * 14L + *(double*)(param0 + 10));
    *(char*)(ptr1 + 6) = 1;
    *ptr1 = (uint16_t)v11;
    *(ptr1 + 1) = (uint16_t)v12;
    *(int*)(ptr1 + 2) = 0;
    *(short*)((long)*(param0 + 12) * 14L + *(double*)(param0 + 10) + 8L) = 0;
    *(short*)((long)*(param0 + 12) * 14L + *(double*)(param0 + 10) + 10L) = 0;
    ++*(param0 + 12);
    return param0;
}
