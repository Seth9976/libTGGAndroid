// Package: Eigen::internal::general_matrix_vector_product<long, float, Eigen::internal::const_blas_data_mapper<float, long, 0>, 0, false, float, Eigen::internal::const_blas_data_mapper<float, long, 1>, false, 0>

long Eigen::internal::general_matrix_vector_product<long, float, Eigen::internal::const_blas_data_mapper<float, long, 0>, 0, false, float, Eigen::internal::const_blas_data_mapper<float, long, 1>, false, 0>::run(long param0, long param1, double* param2, uint64_t* param3, long param4) {
    long v0;
    long v1;
    float v2;
    long double v3;
    long double v4;
    long double v5;
    long double v6;
    long double v7;
    long double v8;
    long double v9;
    long double v10;
    int v11;
    long double v12;
    long v13;
    long v14;
    float v15;
    float v16;
    double v17 = *(param2 + 1);
    long v18 = param1 >= 128L ? ((__ror__(v17, 6L)) & 0xffffffffffffffL) >= 125L ? 4L: 16L: param1;
    if(param1 >= 1L) {
        double v19 = *param2;
        param2 = v17 * 4L;
        long double* ptr0 = (long double*)(param4 + 64L);
        v17 *= v18;
        long double* ptr1 = (long double*)(param4 + 16L);
        float v20 = v16 * 0.0;
        long v21 = 0L;
        long v22 = 0L;
        long v23 = 0L;
        long v24 = param0 - 31L;
        long v25 = param0 - 15L;
        long v26 = param0 - 11L;
        long v27 = param0 - 7L;
        long v28 = param0 - 3L;
        long v29 = param0 - 1L;
        __int128 v30 = (unsigned __int128)v16 | ((unsigned __int128)v16 << 32) | ((unsigned __int128)v16 << 64) | ((unsigned __int128)v16 << 96);
        long v31 = (uint64_t)v16 | ((uint64_t)v16 << 32);
        long v32 = v18 * 4L;
        long double* ptr2 = (long double*)(param4 + 16L);
        long v33 = v17 * 4L;
        __int128 v34 = (unsigned __int128)v20 | ((unsigned __int128)v20 << 32) | ((unsigned __int128)v20 << 64) | ((unsigned __int128)v20 << 96);
        long double* ptr3 = (long double*)(v19 + 64L);
        double v35 = v19;
        do {
            v14 = v18 + v23;
            long v36 = param1 < v14 ? param1: v14;
            if(param0 < 32L) {
                v13 = 0L;
            }
            else if(v23 < v36) {
                v13 = 0L;
                long double* ptr4 = ptr3;
                do {
                    long* ptr5 = *(param3 + 1);
                    long double* ptr6 = ptr4;
                    long v37 = v23;
                    v12 = 0x0X;
                    int* ptr7 = (int*)((long)(long*)((long)ptr5 * v22) + (long)*param3);
                    long* ptr8 = (long*)((long)ptr5 * 4L);
                    do {
                        v11 = *ptr7;
                        __int128 v38 = (unsigned __int128)v11 | ((unsigned __int128)v11 << 32) | ((unsigned __int128)v11 << 64) | ((unsigned __int128)v11 << 96);
                        ptr7 = (long)ptr8 + (long)ptr7;
                        ++v37;
                        FMLA(0x0X, v38, *(ptr6 - 4));
                        FMLA(0x0X, v38, *(ptr6 - 3));
                        FMLA(0x0X, v38, *(ptr6 - 2));
                        FMLA(0x0X, v38, *(ptr6 - 1));
                        FMLA(0x0X, v38, *ptr6);
                        long double v39 = *(ptr6 + 2);
                        long double v40 = *(ptr6 + 3);
                        FMLA(0x0X, v38, *(ptr6 + 1));
                        ptr6 = (long)param2 + (long)ptr6;
                        FMLA(0x0X, v38, v39);
                        FMLA(0x0X, v38, v40);
                    }
                    while(v36 > v37);
                    ptr1 = v13 * 4L + param4;
                    v10 = *ptr1;
                    long double v41 = *(ptr1 + 1);
                    v13 += 32L;
                    ptr4 += 8;
                    FMLA(v10, v30, 0x0X);
                    long double v42 = *(ptr1 + 2);
                    v9 = *(ptr1 + 3);
                    FMLA(v41, v30, 0x0X);
                    *ptr1 = v10;
                    *(ptr1 + 1) = v41;
                    FMLA(v42, v30, 0x0X);
                    v8 = *(ptr1 + 4);
                    v7 = *(ptr1 + 5);
                    FMLA(v9, v30, 0x0X);
                    *(ptr1 + 2) = v42;
                    *(ptr1 + 3) = v9;
                    FMLA(v8, v30, 0x0X);
                    v6 = *(ptr1 + 6);
                    v5 = *(ptr1 + 7);
                    FMLA(v7, v30, 0x0X);
                    *(ptr1 + 4) = v8;
                    *(ptr1 + 5) = v7;
                    FMLA(v6, v30, 0x0X);
                    FMLA(v5, v30, 0x0X);
                    *(ptr1 + 6) = v6;
                    *(ptr1 + 7) = v5;
                }
                while(v24 > v13);
            }
            else {
                long double* ptr9 = ptr0;
                v13 = 0L;
                do {
                    long double v43 = *(ptr9 - 4);
                    long double v44 = *(ptr9 - 3);
                    v5 = *(ptr9 - 2);
                    v12 = *(ptr9 - 1);
                    v13 += 32L;
                    FMLA(v43, 0x0X, v30);
                    FMLA(v44, 0x0X, v30);
                    *(ptr9 - 4) = v43;
                    *(ptr9 - 3) = v44;
                    long double v45 = *ptr9;
                    long double v46 = *(ptr9 + 1);
                    FMLA(v5, 0x0X, v30);
                    FMLA(v12, 0x0X, v30);
                    *(ptr9 - 2) = v5;
                    *(ptr9 - 1) = v12;
                    FMLA(v45, 0x0X, v30);
                    FMLA(v46, 0x0X, v30);
                    *ptr9 = v45;
                    *(ptr9 + 1) = v46;
                    v4 = *(ptr9 + 2);
                    v3 = *(ptr9 + 3);
                    FMLA(v4, 0x0X, v30);
                    FMLA(v3, 0x0X, v30);
                    *(ptr9 + 2) = v4;
                    *(ptr9 + 3) = v3;
                    ptr9 += 8;
                }
                while(v24 > v13);
            }
            if(v25 > v13) {
                v12 = 0x0X;
                if(v23 < v36) {
                    long* ptr10 = *(param3 + 1);
                    long v47 = v23;
                    v12 = 0x0X;
                    v5 = 0x0X;
                    long double* ptr11 = (long double*)((v21 + v13) * 4L + v19);
                    int* ptr12 = (int*)((long)(long*)(v22 * (long)ptr10) + (long)*param3);
                    long* ptr13 = (long*)((long)ptr10 * 4L);
                    v3 = 0x0X;
                    do {
                        v11 = *ptr12;
                        __int128 v48 = (unsigned __int128)v11 | ((unsigned __int128)v11 << 32) | ((unsigned __int128)v11 << 64) | ((unsigned __int128)v11 << 96);
                        ptr12 = (long)ptr12 + (long)ptr13;
                        v10 = *(ptr11 + 3);
                        ++v47;
                        FMLA(0x0X, v48, *ptr11);
                        FMLA(0x0X, v48, *(ptr11 + 1));
                        FMLA(0x0X, v48, *(ptr11 + 2));
                        FMLA(0x0X, v48, *(ptr11 + 3));
                        ptr11 = (long)param2 + (long)ptr11;
                    }
                    while(v47 < v36);
                }
                ptr1 = v13 * 4L + param4;
                v6 = *ptr1;
                v9 = *(ptr1 + 1);
                v8 = *(ptr1 + 2);
                v7 = *(ptr1 + 3);
                v13 |= 16L;
                FMLA(v6, v30, 0x0X);
                FMLA(v9, v30, 0x0X);
                FMLA(v8, v30, 0x0X);
                FMLA(v7, v30, 0x0X);
                *ptr1 = v6;
                *(ptr1 + 1) = v9;
                *(ptr1 + 2) = v8;
                *(ptr1 + 3) = v7;
                if(v26 <= v13) {
                    goto loc_85D010;
                }
                else {
                loc_85D0CC:
                    v3 = 0x0X;
                    v5 = 0x0X;
                    if(v23 < v36) {
                        long* ptr14 = *(param3 + 1);
                        double* ptr15 = (double*)(v13 * 4L);
                        long v49 = v23;
                        v5 = 0x0X;
                        int* ptr16 = (int*)((long)(long*)(v22 * (long)ptr14) + (long)*param3);
                        long* ptr17 = (long*)((long)ptr14 * 4L);
                        v3 = 0x0X;
                        do {
                            long double* ptr18 = (long double*)((long)ptr15 + v35);
                            v11 = *ptr16;
                            __int128 v50 = (unsigned __int128)v11 | ((unsigned __int128)v11 << 32) | ((unsigned __int128)v11 << 64) | ((unsigned __int128)v11 << 96);
                            ptr16 = (long)ptr16 + (long)ptr17;
                            v8 = *(ptr18 + 2);
                            ++v49;
                            FMLA(0x0X, v50, *ptr18);
                            FMLA(0x0X, v50, *(ptr18 + 1));
                            FMLA(0x0X, v50, *(ptr18 + 2));
                            ptr15 = (long)param2 + (long)ptr15;
                        }
                        while(v36 > v49);
                    }
                    ptr1 = v13 * 4L + param4;
                    v12 = *ptr1;
                    v6 = *(ptr1 + 1);
                    v9 = *(ptr1 + 2);
                    v13 += 12L;
                    FMLA(v12, v30, 0x0X);
                    FMLA(v6, v30, 0x0X);
                    FMLA(v9, v30, 0x0X);
                    *ptr1 = v12;
                    *(ptr1 + 1) = v6;
                    *(ptr1 + 2) = v9;
                }
                if(v27 > v13) {
                    goto loc_85D158;
                loc_85D010:
                    if(v27 > v13) {
                        goto loc_85D158;
                    }
                }
                if(v28 <= v13) {
                    goto loc_85D020;
                loc_85D158:
                    v3 = 0x0X;
                    if(v23 < v36) {
                        long* ptr19 = *(param3 + 1);
                        double* ptr20 = (double*)(v13 * 4L);
                        long v51 = v23;
                        int* ptr21 = (int*)((long)(long*)(v22 * (long)ptr19) + (long)*param3);
                        long* ptr22 = (long*)((long)ptr19 * 4L);
                        v3 = 0x0X;
                        do {
                            long double* ptr23 = (long double*)((long)ptr20 + v35);
                            v11 = *ptr21;
                            __int128 v52 = (unsigned __int128)v11 | ((unsigned __int128)v11 << 32) | ((unsigned __int128)v11 << 64) | ((unsigned __int128)v11 << 96);
                            ptr21 = (long)ptr21 + (long)ptr22;
                            v6 = *(ptr23 + 1);
                            ++v51;
                            ptr20 = (long)param2 + (long)ptr20;
                            FMLA(0x0X, v52, *ptr23);
                            FMLA(0x0X, v52, *(ptr23 + 1));
                        }
                        while(v36 > v51);
                    }
                    ptr1 = v13 * 4L + param4;
                    v5 = *ptr1;
                    v12 = *(ptr1 + 1);
                    v13 += 8L;
                    FMLA(v5, v30, 0x0X);
                    FMLA(v12, v30, 0x0X);
                    *ptr1 = v5;
                    *(ptr1 + 1) = v12;
                    if(v28 <= v13) {
                        goto loc_85D020;
                    }
                }
                v4 = 0x0X;
                long double* ptr24 = (long double*)(v13 * 4L);
                if(v23 < v36) {
                    ptr1 = *param3;
                    long* ptr25 = *(param3 + 1);
                    v4 = 0x0X;
                    long double* ptr26 = ptr24;
                    long v53 = v23;
                    int* ptr27 = (int*)((long)(long*)(v22 * (long)ptr25) + (long)*param3);
                    long* ptr28 = (long*)((long)ptr25 * 4L);
                    do {
                        v11 = *ptr27;
                        ptr27 = (long)ptr27 + (long)ptr28;
                        v5 = *(long double*)(v35 + (long)ptr26);
                        ++v53;
                        ptr26 = (long)param2 + (long)ptr26;
                        FMLA(0x0X, (unsigned __int128)v11 | ((unsigned __int128)v11 << 32) | ((unsigned __int128)v11 << 64) | ((unsigned __int128)v11 << 96), v5);
                    }
                    while(v36 > v53);
                }
                v3 = *(long double*)(param4 + (long)ptr24);
                v13 += 4L;
                FMLA(v3, v30, 0x0X);
                *(long double*)(param4 + (long)ptr24) = v3;
                if(v29 > v13) {
                    goto loc_85D224;
                loc_85D020:
                    if(v29 > v13) {
                        goto loc_85D224;
                    }
                }
                if(param0 > v13) {
                    goto loc_85D284;
                loc_85D224:
                    v4 = 0x0X;
                    double* ptr29 = (double*)(v13 * 4L);
                    if(v23 < v36) {
                        ptr1 = *param3;
                        long* ptr30 = *(param3 + 1);
                        v4 = 0x0X;
                        double* ptr31 = ptr29;
                        long v54 = v23;
                        int* ptr32 = (int*)((long)(long*)(v22 * (long)ptr30) + (long)*param3);
                        long* ptr33 = (long*)((long)ptr30 * 4L);
                        do {
                            v11 = *ptr32;
                            ptr32 = (long)ptr32 + (long)ptr33;
                            v5 = *(double*)(v35 + (long)ptr31);
                            ++v54;
                            ptr31 = (long)param2 + (long)ptr31;
                            FMLA(0L, (uint64_t)v11 | ((uint64_t)v11 << 32), (uint64_t)v5);
                        }
                        while(v36 > v54);
                    }
                    v3 = *(double*)(param4 + (long)ptr29);
                    v13 += 2L;
                    FMLA((uint64_t)v3, v31, 0L);
                    *(double*)(param4 + (long)ptr29) = (double)v3;
                    if(param0 > v13) {
                    loc_85D284:
                        if(v23 < v36) {
                            float* ptr34 = (float*)((v21 + v13) * 4L + v19);
                            do {
                                long* ptr35 = *(param3 + 1);
                                float* ptr36 = ptr34;
                                long v55 = v23;
                                int* ptr37 = (int*)((long)(long*)(v22 * (long)ptr35) + (long)*param3);
                                long* ptr38 = (long*)((long)ptr35 * 4L);
                                do {
                                    v5 = *ptr37;
                                    ++v55;
                                    ptr37 = (long)ptr37 + (long)ptr38;
                                    v2 = v15 + *ptr36 * (uint32_t)v5;
                                    ptr36 = (long)param2 + (long)ptr36;
                                }
                                while(v36 > v55);
                                ptr1 = v13 * 4L;
                                ++v13;
                                v4 = v2 * v16 + *(float*)(param4 + (long)ptr1);
                                ++ptr34;
                                *(float*)(param4 + (long)ptr1) += v2 * v16;
                            }
                            while(param0 != v13);
                        }
                        else {
                            long v56 = param0 - v13;
                            if(v56 < 8L) {
                                v1 = v13;
                                goto loc_85D340;
                            }
                            else {
                                ptr1 = ptr2;
                                long v57 = v56 & 0xfffffffffffffff8L;
                                v1 = v57 + v13;
                                long v58 = v57;
                                long double* ptr39 = (long double*)(v13 * 4L + (long)ptr2);
                                do {
                                    long double v59 = *(ptr39 - 1);
                                    long double v60 = *ptr39;
                                    v0 = v58 - 8L;
                                    v58 -= 8L;
                                    v4 = (unsigned __int128)((uint32_t)v34 + (uint32_t)v59) | ((unsigned __int128)((uint32_t)(v34 >>> 0x20X) + (uint32_t)(v59 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v34 >>> 0x40X) + (uint32_t)(v59 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v34 >>> 0x60X) + (uint32_t)(v59 >>> 0x60X)) << 96);
                                    v3 = (unsigned __int128)((uint32_t)v34 + (uint32_t)v60) | ((unsigned __int128)((uint32_t)(v34 >>> 0x20X) + (uint32_t)(v60 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v34 >>> 0x40X) + (uint32_t)(v60 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v34 >>> 0x60X) + (uint32_t)(v60 >>> 0x60X)) << 96);
                                    *(ptr39 - 1) = (unsigned __int128)((uint32_t)v34 + (uint32_t)v59) | ((unsigned __int128)((uint32_t)(v34 >>> 0x20X) + (uint32_t)(v59 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v34 >>> 0x40X) + (uint32_t)(v59 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v34 >>> 0x60X) + (uint32_t)(v59 >>> 0x60X)) << 96);
                                    *ptr39 = (unsigned __int128)((uint32_t)v34 + (uint32_t)v60) | ((unsigned __int128)((uint32_t)(v34 >>> 0x20X) + (uint32_t)(v60 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v34 >>> 0x40X) + (uint32_t)(v60 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v34 >>> 0x60X) + (uint32_t)(v60 >>> 0x60X)) << 96);
                                    ptr39 += 2;
                                }
                                while(v0 != 0L);
                                if(v56 != v57) {
                                loc_85D340:
                                    float* ptr40 = (float*)(v1 * 4L + param4);
                                    long v61 = param0 - v1;
                                    do {
                                        v0 = v61 - 1L;
                                        --v61;
                                        v4 = v20 + *ptr40;
                                        *ptr40 += v20;
                                        ++ptr40;
                                    }
                                    while(v0 != 0L);
                                }
                            }
                        }
                    }
                }
            }
            else if(v26 > v13) {
                goto loc_85D0CC;
            }
            else {
                goto loc_85D010;
            }
            v22 += v32;
            ptr3 = v33 + (long)ptr3;
            v21 += v17;
            v35 += v33;
            v23 = v14;
        }
        while(param1 > v14);
    }
    return param0;
}
