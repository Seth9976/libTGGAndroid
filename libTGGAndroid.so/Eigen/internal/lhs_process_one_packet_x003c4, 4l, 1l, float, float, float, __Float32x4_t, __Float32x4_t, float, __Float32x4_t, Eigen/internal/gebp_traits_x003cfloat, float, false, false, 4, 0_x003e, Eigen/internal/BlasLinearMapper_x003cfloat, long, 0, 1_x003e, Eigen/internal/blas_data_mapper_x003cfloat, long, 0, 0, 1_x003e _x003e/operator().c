// Package: Eigen::internal::lhs_process_one_packet<4, 4l, 1l, float, float, float, __Float32x4_t, __Float32x4_t, float, __Float32x4_t, Eigen::internal::gebp_traits<float, float, false, false, 4, 0>, Eigen::internal::BlasLinearMapper<float, long, 0, 1>, Eigen::internal::blas_data_mapper<float, long, 0, 0, 1> >

long Eigen::internal::lhs_process_one_packet<4, 4l, 1l, float, float, float, __Float32x4_t, __Float32x4_t, float, __Float32x4_t, Eigen::internal::gebp_traits<float, float, false, false, 4, 0>, Eigen::internal::BlasLinearMapper<float, long, 0, 1>, Eigen::internal::blas_data_mapper<float, long, 0, 0, 1> >::operator()(long param0, uint64_t* param1, __int128* param2, long param3, long param4, __int128* param5, long* param6, long param7, long param8, long param9, long param10, long param11, long param12, long param13, long param14, __int128* param15) {
    __int128 v0;
    long* ptr0;
    __int128* ptr1;
    long* ptr2 = param6;
    __int128* ptr3 = param2;
    __int128* ptr4 = param5;
    if(param4 < (long)param5) {
        long v1 = param14;
        __int128* ptr5 = param15;
        long v2 = param12;
        long v3 = param13;
        __int128* ptr6 = (__int128*)(param8 * 4L);
        long v4 = param9 * 4L;
        long v5 = param11;
        long v6 = param9 * 16L + param3;
        int* ptr7 = (int*)((long)(long*)((long)(long*)((long)(long*)(param7 * (long)ptr5) + param9) * 4L) + param3);
        __int128* ptr8 = ptr6;
        long* ptr9 = (long*)((long)ptr2 * 16L);
        __int128 v7 = (unsigned __int128)(uint32_t)v7 | ((unsigned __int128)(uint32_t)v7 << 32) | ((unsigned __int128)(uint32_t)v7 << 64) | ((unsigned __int128)(uint32_t)v7 << 96);
        long v8 = param7 * 16L;
        long v9 = param7 * 4L;
        param0 = v2 * 16L;
        long* ptr10 = (long*)(v1 - v5);
        long v10 = v2 * 4L;
        __int128* ptr11 = (__int128*)((long)(long*)((long)(long*)((long)(long*)(param4 * (long)ptr2) + (long)ptr6) * 4L) + (long)ptr3);
        do {
            param2 = (long)(long*)(param4 * (long)ptr2) + (long)ptr8;
            if((long)ptr5 >= 1L) {
                long v11 = v6;
                long v12 = 0L;
                __int128* ptr12 = (__int128*)((long)(long*)((long)param2 * 4L) + (long)ptr3);
                do {
                    long* ptr13 = *param1;
                    long* ptr14 = *(param1 + 1);
                    __int128* ptr15 = (__int128*)((long)(long*)((long)(long*)((long)(long*)((long)ptr14 * v12) + param4) * 4L) + (long)ptr13);
                    __int128* ptr16 = (__int128*)((long)(long*)((long)(long*)((long)(long*)((v12 | 0x1L) * (long)ptr14) + param4) * 4L) + (long)ptr13);
                    __int128* ptr17 = (__int128*)((long)(long*)((long)(long*)((long)(long*)((v12 | 0x2L) * (long)ptr14) + param4) * 4L) + (long)ptr13);
                    __int128* ptr18 = (__int128*)((long)(long*)((long)(long*)((long)(long*)((v12 | 0x3L) * (long)ptr14) + param4) * 4L) + (long)ptr13);
                    __int128* ptr19 = (__int128*)((param7 * v12 + v4) * 4L + param3);
                    if(v5 >= 1L) {
                        long v13 = 0L;
                        long v14 = 0L;
                        do {
                            __int128* ptr20 = (__int128*)(v13 + v11);
                            __int128* ptr21 = (__int128*)(v13 + (long)ptr11);
                            __int128 v15 = *ptr21;
                            __int128 v16 = *ptr20;
                            FMLA(0x0X, v15, (uint32_t)v16);
                            FMLA(0x0X, v15, (uint32_t)(v16 >>> 0x20X));
                            FMLA(0x0X, v15, (uint32_t)(v16 >>> 0x40X));
                            FMLA(0x0X, v15, (uint32_t)(v16 >>> 0x60X));
                            __int128 v17 = *(ptr21 + 1);
                            __int128 v18 = *(ptr20 + 1);
                            FMLA(0x0X, v17, (uint32_t)v18);
                            FMLA(0x0X, v17, (uint32_t)(v18 >>> 0x20X));
                            FMLA(0x0X, v17, (uint32_t)(v18 >>> 0x40X));
                            FMLA(0x0X, v17, (uint32_t)(v18 >>> 0x60X));
                            __int128 v19 = *(ptr21 + 2);
                            __int128 v20 = *(ptr20 + 2);
                            FMLA(0x0X, v19, (uint32_t)v20);
                            FMLA(0x0X, v19, (uint32_t)(v20 >>> 0x20X));
                            FMLA(0x0X, v19, (uint32_t)(v20 >>> 0x40X));
                            FMLA(0x0X, v19, (uint32_t)(v20 >>> 0x60X));
                            __int128 v21 = *(ptr21 + 3);
                            __int128 v22 = *(ptr20 + 3);
                            FMLA(0x0X, v21, (uint32_t)v22);
                            FMLA(0x0X, v21, (uint32_t)(v22 >>> 0x20X));
                            FMLA(0x0X, v21, (uint32_t)(v22 >>> 0x40X));
                            FMLA(0x0X, v21, (uint32_t)(v22 >>> 0x60X));
                            __int128 v23 = *(ptr21 + 4);
                            __int128 v24 = *(ptr20 + 4);
                            FMLA(0x0X, v23, (uint32_t)v24);
                            FMLA(0x0X, v23, (uint32_t)(v24 >>> 0x20X));
                            FMLA(0x0X, v23, (uint32_t)(v24 >>> 0x40X));
                            FMLA(0x0X, v23, (uint32_t)(v24 >>> 0x60X));
                            __int128 v25 = *(ptr21 + 5);
                            __int128 v26 = *(ptr20 + 5);
                            FMLA(0x0X, v25, (uint32_t)v26);
                            FMLA(0x0X, v25, (uint32_t)(v26 >>> 0x20X));
                            FMLA(0x0X, v25, (uint32_t)(v26 >>> 0x40X));
                            FMLA(0x0X, v25, (uint32_t)(v26 >>> 0x60X));
                            __int128 v27 = *(ptr21 + 6);
                            __int128 v28 = *(ptr20 + 6);
                            FMLA(0x0X, v27, (uint32_t)v28);
                            FMLA(0x0X, v27, (uint32_t)(v28 >>> 0x20X));
                            FMLA(0x0X, v27, (uint32_t)(v28 >>> 0x40X));
                            FMLA(0x0X, v27, (uint32_t)(v28 >>> 0x60X));
                            __int128 v29 = *(ptr21 + 7);
                            __int128 v30 = *(ptr20 + 7);
                            v14 += v2;
                            v13 += param0;
                            FMLA(0x0X, v29, (uint32_t)v30);
                            FMLA(0x0X, v29, (uint32_t)(v30 >>> 0x20X));
                            FMLA(0x0X, v29, (uint32_t)(v30 >>> 0x40X));
                            FMLA(0x0X, v29, (uint32_t)(v30 >>> 0x60X));
                        }
                        while(v5 > v14);
                        ptr1 = v13 + (long)ptr11;
                        ptr19 = v13 + v11;
                    }
                    else {
                        ptr1 = ptr12;
                    }
                    param6 = ptr10;
                    if(v1 > v5) {
                        do {
                            __int128 v31 = *ptr1;
                            ++ptr1;
                            __int128 v32 = *ptr19;
                            ++ptr19;
                            ptr0 = (char*)param6 - 1L;
                            param6 = (char*)param6 - 1L;
                            FMLA(0x0X, v31, (uint32_t)v32);
                            FMLA(0x0X, v31, (uint32_t)(v32 >>> 0x20X));
                            FMLA(0x0X, v31, (uint32_t)(v32 >>> 0x40X));
                            FMLA(0x0X, v31, (uint32_t)(v32 >>> 0x60X));
                        }
                        while(ptr0 != 0L);
                    }
                    __int128 v33 = *ptr15;
                    __int128 v34 = *ptr16;
                    v12 += 4L;
                    FMLA(v33, v7, 0x0X);
                    FMLA(v34, v7, 0x0X);
                    *ptr15 = v33;
                    *ptr16 = v34;
                    __int128 v35 = *ptr17;
                    __int128 v36 = *ptr18;
                    v11 += v8;
                    FMLA(v35, v7, 0x0X);
                    FMLA(v36, v7, 0x0X);
                    *ptr17 = v35;
                    *ptr18 = v36;
                }
                while((long)ptr5 > v12);
            }
            if((long)ptr5 < v3) {
                ptr1 = ptr5;
                int* ptr22 = ptr7;
                if(v5 > 0L) {
                    int* ptr23 = ptr7;
                    ptr1 = ptr5;
                    do {
                        long* ptr24 = *param1;
                        long v37 = 0L;
                        __int128* ptr25 = ptr11;
                        param6 = (long)(long*)((long)*(param1 + 1) * (long)ptr1) + param4;
                        int* ptr26 = ptr23;
                        int* ptr27 = ptr23;
                        do {
                            int v38 = *ptr27;
                            ptr27 = v10 + (long)ptr27;
                            FMLA(0x0X, (unsigned __int128)v38 | ((unsigned __int128)v38 << 32) | ((unsigned __int128)v38 << 64) | ((unsigned __int128)v38 << 96), *ptr25);
                            FMLA(0x0X, *(ptr25 + 1), *(ptr26 + 1));
                            FMLA(0x0X, *(ptr25 + 2), *(ptr26 + 2));
                            FMLA(0x0X, *(ptr25 + 3), *(ptr26 + 3));
                            FMLA(0x0X, *(ptr25 + 4), *(ptr26 + 4));
                            FMLA(0x0X, *(ptr25 + 5), *(ptr26 + 5));
                            FMLA(0x0X, *(ptr25 + 6), *(ptr26 + 6));
                            __int128 v39 = *(ptr25 + 7);
                            v37 += v2;
                            ptr25 = param0 + (long)ptr25;
                            FMLA(0x0X, v39, *(ptr26 + 7));
                            ptr26 = ptr27;
                        }
                        while(v5 > v37);
                        if(v1 > v5) {
                            long v40 = 0L;
                            do {
                                __int128 v41 = *(__int128*)(v40 * 16L + (long)ptr25);
                                int v42 = *(int*)(v40 * 4L + (long)ptr27);
                                ++v40;
                                FMLA(0x0X, v41, v42);
                            }
                            while(ptr10 != v40);
                        }
                        param5 = (long)(long*)((long)param6 * 4L) + (long)ptr24;
                        v0 = *param5;
                        ptr1 = (char*)ptr1 + 1L;
                        ptr23 = (long)ptr23 + v9;
                        FMLA(v0, v7, 0x0X);
                        *param5 = v0;
                    }
                    while(v3 != ptr1);
                }
                else {
                    do {
                        param5 = *param1;
                        param6 = *(param1 + 1);
                        if(v1 > v5) {
                            long v43 = 0L;
                            do {
                                __int128 v44 = *(__int128*)(v43 * 16L + (long)ptr11);
                                int v45 = *(int*)(v43 * 4L + (long)ptr22);
                                ++v43;
                                FMLA(0x0X, v44, v45);
                            }
                            while(ptr10 != v43);
                        }
                        param2 = (long)(long*)((long)(long*)((long)(long*)((long)param6 * (long)ptr1) + param4) * 4L) + (long)param5;
                        v0 = *param2;
                        ptr1 = (char*)ptr1 + 1L;
                        ptr22 = (long)ptr22 + v9;
                        FMLA(v0, v7, 0x0X);
                        *param2 = v0;
                    }
                    while(v3 != ptr1);
                }
            }
            param4 += 4L;
            ptr11 = (long)ptr11 + (long)ptr9;
        }
        while(param4 < (long)ptr4);
    }
    return param0;
}
