float* sub_C1D2E4(float* param0) {
    float v0;
    short* ptr0;
    float v1;
    float v2;
    float v3;
    float v4;
    float v5;
    float v6;
    float v7 = *param0;
    float v8 = *(param0 + 4) + v6;
    float v9 = *(param0 + 5) + v1;
    float v10 = v8 + v3;
    float v11 = v9 + v4;
    float v12 = (int)v8;
    float v13 = (int)v9;
    float v14 = v10 + v2;
    float v15 = v11 + v5;
    long v16 = (uint64_t)(int)v10;
    float v17 = (int)v14;
    float v18 = (int)v15;
    float v19 = (int)v11;
    *(param0 + 4) = v14;
    *(param0 + 5) = v15;
    if(v7 != 0) {
        ptr0 = (uint64_t)*(param0 + 7);
        if((int)*(param0 + 7) >= (int)v17 && *(param0 + 1) != 0) {
            v0 = *(param0 + 9);
            if((int)*(param0 + 9) >= (int)v18) {
                goto loc_C1D360;
            }
            else {
                goto loc_C1D374;
            }
        }
        else {
            ptr0 = (uint64_t)v17;
            *(param0 + 7) = v17;
            v0 = *(param0 + 9);
            if((int)*(param0 + 9) < (int)v18) {
                goto loc_C1D374;
            }
        loc_C1D360:
            if(*(param0 + 1) == 0) {
                goto loc_C1D374;
            }
            float v20 = *(param0 + 6);
            if((int)*(param0 + 6) > (int)v17) {
                goto loc_C1D3A0;
            loc_C1D374:
                v0 = v18;
                *(param0 + 9) = v18;
                v20 = *(param0 + 6);
                if((int)*(param0 + 6) > (int)v17) {
                    goto loc_C1D3A0;
                }
            }
            if(*(param0 + 1) == 0) {
                goto loc_C1D3A0;
            }
            v17 = *(param0 + 8);
            if((int)*(param0 + 8) > (int)v18) {
                goto loc_C1D420;
            loc_C1D3A0:
                v20 = v17;
                *(param0 + 6) = v17;
                v17 = *(param0 + 8);
                if((int)*(param0 + 8) > (int)v18) {
                    goto loc_C1D420;
                }
            }
            if(*(param0 + 1) == 0) {
                goto loc_C1D420;
            }
            *(param0 + 1) = (float)1.4E-45;
            if((uint32_t)ptr0 >= (int)v12) {
                goto loc_C1D3D0;
            loc_C1D420:
                v17 = v18;
                *(param0 + 8) = v18;
                *(param0 + 1) = (float)1.4E-45;
                if((uint32_t)ptr0 >= (int)v12) {
                    goto loc_C1D3D0;
                }
            }
            ptr0 = (uint64_t)v12;
            *(param0 + 7) = v12;
            if((int)v13 > (int)v0) {
                goto loc_C1D448;
            loc_C1D3D0:
                if((int)v13 > (int)v0) {
                    goto loc_C1D448;
                }
            }
            if((int)v12 >= (int)v20) {
                goto loc_C1D3E0;
            loc_C1D448:
                v0 = v13;
                *(param0 + 9) = v13;
                if((int)v12 >= (int)v20) {
                    goto loc_C1D3E0;
                }
            }
            v20 = v12;
            *(param0 + 6) = v12;
            if((int)v13 < (int)v17) {
                goto loc_C1D468;
            loc_C1D3E0:
                if((int)v13 < (int)v17) {
                    goto loc_C1D468;
                }
            }
            if((uint32_t)v16 <= (uint32_t)ptr0) {
                goto loc_C1D3F0;
            loc_C1D468:
                v17 = v13;
                *(param0 + 8) = v13;
                if((uint32_t)v16 <= (uint32_t)ptr0) {
                    goto loc_C1D3F0;
                }
            }
            *(param0 + 7) = (float)v16;
            if((int)v19 > (int)v0) {
                goto loc_C1D484;
            loc_C1D3F0:
                if((int)v19 > (int)v0) {
                    goto loc_C1D484;
                }
            }
            if((uint32_t)v16 >= (int)v20) {
                goto loc_C1D400;
            loc_C1D484:
                *(param0 + 9) = v19;
                if((uint32_t)v16 >= (int)v20) {
                    goto loc_C1D400;
                }
            }
            *(param0 + 6) = (float)v16;
            if((int)v19 >= (int)v17) {
                *(param0 + 1) = (float)1.4E-45;
                ++*(param0 + 12);
                return param0;
            loc_C1D400:
                if((int)v19 >= (int)v17) {
                    *(param0 + 1) = (float)1.4E-45;
                    ++*(param0 + 12);
                    return param0;
                }
            }
            *(param0 + 8) = v19;
        }
        *(param0 + 1) = (float)1.4E-45;
        ++*(param0 + 12);
        return param0;
    }
    ptr0 = (long)*(param0 + 12) * 14L + *(double*)(param0 + 10);
    *(char*)(ptr0 + 6) = 4;
    *ptr0 = (uint16_t)v17;
    *(ptr0 + 1) = (uint16_t)v18;
    *(ptr0 + 2) = (uint16_t)v12;
    *(ptr0 + 3) = (uint16_t)v13;
    *(short*)((long)*(param0 + 12) * 14L + *(double*)(param0 + 10) + 8L) = (uint16_t)v16;
    *(short*)((long)*(param0 + 12) * 14L + *(double*)(param0 + 10) + 10L) = (uint16_t)v19;
    ++*(param0 + 12);
    return param0;
}
