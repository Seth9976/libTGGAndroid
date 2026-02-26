long Bin2DQuery(double* param0, float* param1, int param2) {
    char v0;
    char v1;
    int v2;
    int v2;
    int v3;
    long v4;
    long v5;
    int v6;
    long v7;
    long v8;
    uint64_t* ptr0;
    long v9;
    int v2;
    float v10;
    int v11;
    int v12;
    float v13;
    int v14;
    float v15;
    int v16;
    float v17 = *param1;
    float v18 = *(float*)(param0 + 5);
    float v19 = v17 - v15;
    float v20 = v18 + 1.0E-5;
    if(v18 + 1.0E-5 < v19) {
        if(*(float*)(param0 + 6) + -1.0E-5 > v19) {
            float v21 = (v19 - v18) / *(float*)(param0 + 7);
            FRINTM((v19 - v18) / *(float*)(param0 + 7), (v19 - v18) / *(float*)(param0 + 7));
            v14 = v21 + (v21 < 0.0 ? -0.5: 0.5);
            v13 = v17 + v15;
            if(v17 + v15 > v20) {
                goto loc_821478;
            }
            else {
                v12 = 0;
                goto loc_8214CC;
            }
        }
        v14 = *(float*)(param0 + 8) - 1;
        v13 = v17 + v15;
        if(v17 + v15 > v20) {
            goto loc_821478;
        }
        v12 = 0;
    }
    else {
        v14 = 0;
        v13 = v17 + v15;
        if(v17 + v15 <= v20) {
            v12 = 0;
            goto loc_8214CC;
        }
    loc_821478:
        if(*(float*)(param0 + 6) + -1.0E-5 > v13) {
            float v22 = (v13 - v18) / *(float*)(param0 + 7);
            FRINTM((v13 - v18) / *(float*)(param0 + 7), (v13 - v18) / *(float*)(param0 + 7));
            v12 = v22 + (v22 < 0.0 ? -0.5: 0.5);
        }
        else {
            v12 = *(float*)(param0 + 8) - 1;
        }
    }
loc_8214CC:
    float v23 = *(param1 + 1);
    float v24 = *(float*)((char*)param0 + 44L);
    float v25 = v23 - v15;
    float v26 = v24 + 1.0E-5;
    if(v24 + 1.0E-5 < v25) {
        if(*(float*)((char*)param0 + 52L) + -1.0E-5 > v25) {
            float v27 = (v25 - v24) / *(float*)((char*)param0 + 60L);
            FRINTM((v25 - v24) / *(float*)((char*)param0 + 60L), (v25 - v24) / *(float*)((char*)param0 + 60L));
            v11 = v27 + (v27 < 0.0 ? -0.5: 0.5);
            v10 = v23 + v15;
            if(v23 + v15 > v26) {
                goto loc_82156C;
            }
            else {
            loc_8215B8:
                v3 = 0;
                if(v11 > 0) {
                    v2 = 1;
                    return (uint64_t)(~v2 & 1);
                }
            loc_8215E4:
                v9 = *(float*)(param0 + 8);
                ptr0 = *(param0 + 3);
                v2 = 0;
                v8 = v14;
                v7 = v12;
                v6 = v12 + 1;
                v5 = v11;
                v4 = v3;
                v3 = v16 + 1;
                goto loc_821628;
            }
        }
        v11 = *(float*)((char*)param0 + 68L) - 1;
        v10 = v23 + v15;
        if(v23 + v15 > v26) {
            goto loc_82156C;
        }
        goto loc_8215B8;
    }
    else {
        v11 = 0;
        v10 = v23 + v15;
        if(v23 + v15 <= v26) {
            goto loc_8215B8;
        }
    loc_82156C:
        if(*(float*)((char*)param0 + 52L) + -1.0E-5 > v10) {
            float v28 = v10 - v24;
            float v29 = v28 / *(float*)((char*)param0 + 60L);
            FRINTM(v28 / *(float*)((char*)param0 + 60L), v28 / *(float*)((char*)param0 + 60L));
            v3 = v29 + (v29 < 0.0 ? -0.5: 0.5);
            if((int)(v29 + (v29 < 0.0 ? -0.5: 0.5)) < v11) {
                v2 = 1;
                return (uint64_t)(~v2 & 1);
            }
            goto loc_8215E4;
        }
        v3 = *(float*)((char*)param0 + 68L) - 1;
        if(*(float*)((char*)param0 + 68L) - 1 < v11) {
            v2 = 1;
            return (uint64_t)(~v2 & 1);
        }
        goto loc_8215E4;
    loc_821628:
        while(1) {
            if(v14 > v12) {
            loc_821610:
                v1 = v5 < v4;
                v0 = (((v5 - v4) ^ v5) & (v5 ^ v4)) < 0L;
                ++v5;
                v2 = v0 == v1;
                if((uint32_t)v5 == v3) {
                    break;
                }
                continue;
            }
            param1 = v5 * v9;
            long v30 = 0L;
            long v31 = v8;
            if(param2 != 0) {
                goto loc_821658;
            }
        loc_8216C0:
            while(1) {
                uint64_t* i = *(uint64_t*)((long)(uint64_t*)((long)(double*)((long)param1 + v31) * 8L) + (long)ptr0);
                while(i != 0L) {
                    float v32 = *(uint32_t*)(i + 1) - v17;
                    float v33 = *(uint32_t*)((char*)i + 12L) - v23;
                    v10 = *(uint32_t*)(i + 2) + v15;
                    if(v32 * v32 + v33 * v33 <= v10 * v10) {
                    loc_82160C:
                        if(!(v30 & 0x1L)) {
                            break loc_8216C0;
                        }
                        goto loc_821610;
                    }
                    else {
                        i = *i;
                    }
                }
                v1 = v31 < v7;
                v0 = (((v31 - v7) ^ v31) & (v31 ^ v7)) < 0L;
                ++v31;
                v30 = v0 == v1;
                if((uint32_t)v31 == v6) {
                    goto loc_821610;
                }
                else {
                    continue;
                loc_821658:
                    while(1) {
                        for(i = *(uint64_t*)((long)(uint64_t*)((long)(double*)((long)param1 + v31) * 8L) + (long)ptr0); i != 0L; i = *i) {
                            if(*(uint32_t*)((char*)i + 20L) == param2) {
                                float v34 = *(uint32_t*)(i + 1) - v17;
                                float v35 = *(uint32_t*)((char*)i + 12L) - v23;
                                v10 = *(uint32_t*)(i + 2) + v15;
                                if(v34 * v34 + v35 * v35 <= v10 * v10) {
                                    goto loc_82160C;
                                }
                            }
                        }
                        v1 = v31 < v7;
                        v0 = (((v31 - v7) ^ v31) & (v31 ^ v7)) < 0L;
                        ++v31;
                        v30 = v0 == v1;
                        if((uint32_t)v31 == v6) {
                            goto loc_821610;
                        }
                    }
                }
            }
            break;
        }
    }
    return (uint64_t)(~v2 & 1);
}
