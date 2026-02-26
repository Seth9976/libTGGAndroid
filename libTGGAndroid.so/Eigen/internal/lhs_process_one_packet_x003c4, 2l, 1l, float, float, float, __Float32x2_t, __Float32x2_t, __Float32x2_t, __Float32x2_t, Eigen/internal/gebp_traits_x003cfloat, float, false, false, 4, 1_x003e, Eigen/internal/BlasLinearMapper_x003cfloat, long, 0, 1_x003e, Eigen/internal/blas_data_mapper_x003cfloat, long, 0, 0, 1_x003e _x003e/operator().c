// Package: Eigen::internal::lhs_process_one_packet<4, 2l, 1l, float, float, float, __Float32x2_t, __Float32x2_t, __Float32x2_t, __Float32x2_t, Eigen::internal::gebp_traits<float, float, false, false, 4, 1>, Eigen::internal::BlasLinearMapper<float, long, 0, 1>, Eigen::internal::blas_data_mapper<float, long, 0, 0, 1> >

long Eigen::internal::lhs_process_one_packet<4, 2l, 1l, float, float, float, __Float32x2_t, __Float32x2_t, __Float32x2_t, __Float32x2_t, Eigen::internal::gebp_traits<float, float, false, false, 4, 1>, Eigen::internal::BlasLinearMapper<float, long, 0, 1>, Eigen::internal::blas_data_mapper<float, long, 0, 0, 1> >::operator()(long param0, long* param1, long* param2, long param3, long param4, long* param5, long* param6, long param7, long param8, long param9, long param10, long param11, long param12, long param13, long param14, long* param15) {
    long v0;
    long* ptr0;
    int v1;
    long* ptr1;
    int v2;
    long* ptr2 = param6;
    long* ptr3 = param2;
    long* ptr4 = param5;
    if(param4 < (long)param5) {
        long v3 = param14;
        long* ptr5 = param15;
        long v4 = param12;
        long v5 = param13;
        param6 = param8 * 2L;
        long v6 = param9 * 4L;
        long v7 = param11;
        long* ptr6 = (long*)((long)(long*)((long)(long*)((long)(long*)(param7 * (long)ptr5) + param9) * 4L) + param3);
        long* ptr7 = param6;
        long v8 = (uint64_t)v2 | ((uint64_t)v2 << 32);
        long* ptr8 = (long*)((long)ptr2 * 8L);
        long v9 = param7 * 16L;
        long v10 = param7 * 4L;
        param0 = v4 * 8L;
        long v11 = v4 * 16L;
        long* ptr9 = (long*)(v3 - v7);
        long v12 = v4 * 4L;
        long* ptr10 = (long*)((long)(long*)((long)(long*)((long)(long*)(param4 * (long)ptr2) + (long)param6) * 4L) + (long)ptr3);
        long* ptr11 = (long*)(param9 * 16L + param3 + 192L);
        do {
            param2 = (long)(long*)(param4 * (long)ptr2) + (long)ptr7;
            if((long)ptr5 >= 1L) {
                param6 = ptr11;
                long v13 = 0L;
                long* ptr12 = (long*)((long)(long*)((long)param2 * 4L) + (long)ptr3);
                do {
                    long v14 = *param1;
                    long v15 = *(param1 + 1);
                    long* ptr13 = (long*)((v15 * v13 + param4) * 4L + v14);
                    long* ptr14 = (long*)(((v13 | 0x1L) * v15 + param4) * 4L + v14);
                    long* ptr15 = (long*)(((v13 | 0x2L) * v15 + param4) * 4L + v14);
                    long* ptr16 = (long*)(((v13 | 0x3L) * v15 + param4) * 4L + v14);
                    int* ptr17 = (int*)((param7 * v13 + v6) * 4L + param3);
                    if(v7 >= 1L) {
                        long v16 = 0L;
                        long* ptr18 = param6;
                        ptr1 = ptr10;
                        do {
                            long v17 = *ptr1;
                            FMLA(0L, *ptr1, *(int*)(ptr18 - 24));
                            long v18 = *(ptr1 + 1);
                            long v19 = *(ptr1 + 2);
                            FMLA(0L, v17, *(int*)((char*)ptr18 - 188L));
                            FMLA(0L, v17, *(int*)(ptr18 - 23));
                            FMLA(0L, v17, *(int*)((char*)ptr18 - 180L));
                            FMLA(0L, v18, *(int*)(ptr18 - 22));
                            FMLA(0L, v18, *(int*)((char*)ptr18 - 172L));
                            FMLA(0L, v18, *(int*)(ptr18 - 21));
                            FMLA(0L, v18, *(int*)((char*)ptr18 - 164L));
                            FMLA(0L, v19, *(int*)(ptr18 - 20));
                            long v20 = *(ptr1 + 3);
                            FMLA(0L, v19, *(int*)((char*)ptr18 - 156L));
                            FMLA(0L, v19, *(int*)(ptr18 - 19));
                            FMLA(0L, v19, *(int*)((char*)ptr18 - 148L));
                            FMLA(0L, v20, *(int*)(ptr18 - 18));
                            long v21 = *(ptr1 + 4);
                            FMLA(0L, v20, *(int*)((char*)ptr18 - 140L));
                            FMLA(0L, v20, *(int*)(ptr18 - 17));
                            FMLA(0L, v20, *(int*)((char*)ptr18 - 132L));
                            FMLA(0L, v21, *(int*)(ptr18 - 16));
                            long v22 = *(ptr1 + 5);
                            FMLA(0L, v21, *(int*)((char*)ptr18 - 124L));
                            FMLA(0L, v21, *(int*)(ptr18 - 0xF));
                            FMLA(0L, v21, *(int*)((char*)ptr18 - 116L));
                            FMLA(0L, v22, *(int*)(ptr18 - 14));
                            long v23 = *(ptr1 + 6);
                            FMLA(0L, v22, *(int*)((char*)ptr18 - 108L));
                            FMLA(0L, v22, *(int*)(ptr18 - 13));
                            FMLA(0L, v22, *(int*)((char*)ptr18 - 100L));
                            FMLA(0L, v23, *(int*)(ptr18 - 12));
                            long v24 = *(ptr1 + 7);
                            FMLA(0L, v23, *(int*)((char*)ptr18 - 92L));
                            FMLA(0L, v23, *(int*)(ptr18 - 11));
                            FMLA(0L, v23, *(int*)((char*)ptr18 - 84L));
                            v16 += v4;
                            ptr1 = param0 + (long)ptr1;
                            FMLA(0L, v24, *(int*)(ptr18 - 10));
                            FMLA(0L, v24, *(int*)((char*)ptr18 - 76L));
                            FMLA(0L, v24, *(int*)(ptr18 - 9));
                            FMLA(0L, v24, *(int*)((char*)ptr18 - 68L));
                            ptr18 = v11 + (long)ptr18;
                        }
                        while(v7 > v16);
                        ptr17 = ptr18 - 24;
                    }
                    else {
                        ptr1 = ptr12;
                    }
                    param5 = ptr9;
                    if(v3 > v7) {
                        do {
                            long v25 = *ptr1;
                            ++ptr1;
                            v1 = *ptr17;
                            int* ptr19 = ptr17 + 1;
                            int v26 = *(ptr17 + 2);
                            int v27 = *(ptr17 + 3);
                            ptr0 = (char*)param5 - 1L;
                            param5 = (char*)param5 - 1L;
                            ptr17 += 4;
                            FMLA(0L, (uint64_t)v1 | ((uint64_t)v1 << 32), v25);
                            FMLA(0L, v25, v26);
                            FMLA(0L, v25, v27);
                            FMLA(0L, v25, *ptr19);
                        }
                        while(ptr0 != 0L);
                    }
                    long v28 = *ptr13;
                    long v29 = *ptr14;
                    v13 += 4L;
                    FMLA(v28, v8, 0L);
                    FMLA(v29, v8, 0L);
                    *ptr13 = v28;
                    *ptr14 = v29;
                    long v30 = *ptr15;
                    long v31 = *ptr16;
                    param6 = (long)param6 + v9;
                    FMLA(v30, v8, 0L);
                    FMLA(v31, v8, 0L);
                    *ptr15 = v30;
                    *ptr16 = v31;
                }
                while((long)ptr5 > v13);
            }
            if((long)ptr5 < v5) {
                param5 = ptr5;
                param2 = ptr6;
                if(v7 > 0L) {
                    param5 = ptr6;
                    param6 = ptr5;
                    do {
                        long v32 = *param1;
                        long v33 = 0L;
                        long* ptr20 = ptr10;
                        long* ptr21 = (long*)((long)(long*)(*(param1 + 1) * (long)param6) + param4);
                        int* ptr22 = (int*)param5;
                        int* ptr23 = (int*)param5;
                        do {
                            v1 = *ptr23;
                            ptr23 = v12 + (long)ptr23;
                            FMLA(0L, (uint64_t)v1 | ((uint64_t)v1 << 32), *ptr20);
                            FMLA(0L, *(ptr20 + 1), *(ptr22 + 1));
                            FMLA(0L, *(ptr20 + 2), *(ptr22 + 2));
                            FMLA(0L, *(ptr20 + 3), *(ptr22 + 3));
                            FMLA(0L, *(ptr20 + 4), *(ptr22 + 4));
                            FMLA(0L, *(ptr20 + 5), *(ptr22 + 5));
                            FMLA(0L, *(ptr20 + 6), *(ptr22 + 6));
                            long v34 = *(ptr20 + 7);
                            v33 += v4;
                            ptr20 = param0 + (long)ptr20;
                            FMLA(0L, v34, *(ptr22 + 7));
                            ptr22 = ptr23;
                        }
                        while(v7 > v33);
                        if(v3 > v7) {
                            long v35 = 0L;
                            do {
                                long v36 = *(long*)(v35 * 8L + (long)ptr20);
                                int v37 = *(int*)(v35 * 4L + (long)ptr23);
                                ++v35;
                                FMLA(0L, v36, v37);
                            }
                            while(v35 != ptr9);
                        }
                        param2 = (long)(long*)((long)ptr21 * 4L) + v32;
                        v0 = *param2;
                        param6 = (char*)param6 + 1L;
                        param5 = (long)param5 + v10;
                        FMLA(v0, v8, 0L);
                        *param2 = v0;
                    }
                    while(param6 != v5);
                }
                else {
                    do {
                        long v38 = *param1;
                        long v39 = *(param1 + 1);
                        if(v3 > v7) {
                            long v40 = 0L;
                            do {
                                long v41 = *(long*)(v40 * 8L + (long)ptr10);
                                int v42 = *(int*)(v40 * 4L + (long)param2);
                                ++v40;
                                FMLA(0L, v41, v42);
                            }
                            while(ptr9 != v40);
                        }
                        param6 = (long)(long*)((long)(long*)((long)(long*)((long)param5 * v39) + param4) * 4L) + v38;
                        v0 = *param6;
                        param5 = (char*)param5 + 1L;
                        param2 = (long)param2 + v10;
                        FMLA(v0, v8, 0L);
                        *param6 = v0;
                    }
                    while(param5 != v5);
                }
            }
            param4 += 2L;
            ptr10 = (long)ptr10 + (long)ptr8;
        }
        while(param4 < (long)ptr4);
    }
    return param0;
}
