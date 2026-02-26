// Package: Eigen::internal::dense_assignment_loop<Eigen::internal::restricted_packet_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, -1, true> >, Eigen::internal::evaluator<Eigen::Product<Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, -1, true>, 1> >, Eigen::internal::assign_op<float, float> >, 4, 0>

uint64_t* Eigen::internal::dense_assignment_loop<Eigen::internal::restricted_packet_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, -1, true> >, Eigen::internal::evaluator<Eigen::Product<Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, -1, true>, 1> >, Eigen::internal::assign_op<float, float> >, 4, 0>::run(uint64_t* param0) {
    uint64_t* ptr0;
    float v0;
    float* ptr1;
    double* ptr2;
    uint64_t* ptr3;
    float* ptr4;
    long v1;
    long* ptr5;
    uint64_t* ptr6;
    float* ptr7;
    uint64_t* ptr8;
    uint64_t* ptr9;
    uint64_t* ptr10;
    uint64_t* ptr11;
    float v2;
    uint64_t* ptr12 = *(param0 + 3);
    double* ptr13 = *ptr12;
    if((long*)((long)ptr13 & 0x3L) == 0L) {
        ptr5 = *(ptr12 + 2);
        if((long)ptr5 >= 1L) {
            int* ptr14 = *(ptr12 + 3);
            ptr12 = *(ptr12 + 1);
            float* ptr15 = (float*)((uint64_t)(0 - ((uint32_t)ptr13 >>> 2)) & 0x3L);
            v1 = 0L;
            long* ptr16 = NULL;
            ptr13 = (uint64_t)(0 - *(ptr14 + 2)) & 0x3L;
            ptr4 = (long)ptr12 <= (long)ptr15 ? ptr12: ptr15;
            do {
                uint64_t* ptr17 = (uint64_t*)((long)ptr12 - (long)ptr4);
                if((long)ptr4 >= 1L) {
                    long v3 = 0L;
                    do {
                        uint64_t* ptr18 = *param0;
                        ptr11 = *(param0 + 1);
                        ptr2 = *ptr18;
                        ptr10 = *(ptr11 + 2);
                        long* ptr19 = *(ptr18 + 2);
                        if(ptr10 == 0L) {
                            v0 = 0.0;
                        }
                        else {
                            uint64_t* ptr20 = *(ptr11 + 4);
                            ptr9 = *ptr11;
                            ptr11 = *(ptr11 + 1);
                            ptr8 = *(ptr20 + 1);
                            ptr7 = *ptr9;
                            v0 = *(float*)(v3 * 4L + (long)ptr7) * *(float*)((long)(double*)((long)(long*)((long)ptr8 * (long)ptr16) * 4L) + (long)ptr11);
                            if((long)ptr10 >= 2L) {
                                ptr9 = *(ptr9 + 1);
                                ptr10 = (char*)ptr10 - 1L;
                                ptr11 = (char*)((long)(uint64_t*)((long)ptr8 * v1) + (long)ptr11) + 4L;
                                ptr7 = (long)(double*)((long)(uint64_t*)((long)ptr9 + v3) * 4L) + (long)ptr7;
                                ptr8 = (long)ptr9 * 4L;
                                do {
                                    float v4 = *ptr7;
                                    float v5 = *(float*)ptr11;
                                    ptr11 = (char*)ptr11 + 4L;
                                    ptr6 = (char*)ptr10 - 1L;
                                    ptr10 = (char*)ptr10 - 1L;
                                    ptr7 = (long)ptr7 + (long)ptr8;
                                    v0 = v2 + v4 * v5;
                                }
                                while(ptr6 != 0L);
                            }
                        }
                        ptr3 = (long)(uint64_t*)((long)ptr16 * (long)ptr19) + v3;
                        ++v3;
                        *(float*)((long)(double*)((long)ptr3 * 4L) + (long)ptr2) = v0;
                    }
                    while(ptr4 != v3);
                }
                double* ptr21 = (double*)((long)ptr17 & 0xfffffffffffffffcL);
                uint64_t* ptr22 = (uint64_t*)((long)ptr4 + (long)ptr21);
                ptr1 = ptr4;
                if((long)ptr21 >= 1L) {
                    do {
                        uint64_t* ptr23 = *param0;
                        ptr11 = *(param0 + 1);
                        ptr10 = *(ptr11 + 13);
                        ptr2 = *ptr23;
                        long* ptr24 = *(ptr23 + 2);
                        if((long)ptr10 >= 1L) {
                            long* ptr25 = *(ptr11 + 9);
                            ptr9 = *(ptr11 + 8);
                            ptr11 = (long)(uint64_t*)((long)*(ptr11 + 12) * v1) + (long)*(ptr11 + 10);
                            ptr7 = (uint32_t*)((long)(uint64_t*)((long)ptr1 * 4L) + (long)ptr9);
                            ptr8 = (long)ptr25 * 4L;
                            do {
                                long double v6 = *(long double*)ptr7;
                                int v7 = *(int*)ptr11;
                                ptr11 = (char*)ptr11 + 4L;
                                ptr0 = (char*)ptr10 - 1L;
                                ptr10 = (char*)ptr10 - 1L;
                                ptr7 = (long)ptr7 + (long)ptr8;
                                FMLA(0x0X, (unsigned __int128)v7 | ((unsigned __int128)v7 << 32) | ((unsigned __int128)v7 << 64) | ((unsigned __int128)v7 << 96), v6);
                            }
                            while(ptr0 != 0L);
                        }
                        double* ptr26 = (double*)((long)(double*)((long)ptr16 * (long)ptr24) + (long)ptr1);
                        ++ptr1;
                        *(long double*)((long)(double*)((long)ptr26 * 4L) + (long)ptr2) = 0x0X;
                    }
                    while((long)ptr22 > (long)ptr1);
                }
                while((long)ptr12 > (long)ptr22) {
                    uint64_t* ptr27 = *param0;
                    ptr10 = *(param0 + 1);
                    ptr1 = *ptr27;
                    ptr3 = *(ptr10 + 2);
                    long* ptr28 = *(ptr27 + 2);
                    if(ptr3 == 0L) {
                        v0 = 0.0;
                    }
                    else {
                        uint64_t* ptr29 = *(ptr10 + 4);
                        ptr8 = *ptr10;
                        ptr10 = *(ptr10 + 1);
                        ptr7 = *(ptr29 + 1);
                        ptr11 = *ptr8;
                        v0 = *(float*)((long)(double*)((long)ptr22 * 4L) + (long)ptr11) * *(uint32_t*)((long)(uint64_t*)((long)(long*)((long)ptr7 * (long)ptr16) * 4L) + (long)ptr10);
                        if((long)ptr3 >= 2L) {
                            ptr8 = *(ptr8 + 1);
                            ptr3 = (char*)ptr3 - 1L;
                            ptr10 = (char*)((long)(uint64_t*)((long)ptr7 * v1) + (long)ptr10) + 4L;
                            ptr11 = (long)(uint64_t*)((long)(uint64_t*)((long)ptr8 + (long)ptr22) * 4L) + (long)ptr11;
                            ptr7 = (long)ptr8 * 4L;
                            do {
                                float v8 = *(float*)ptr11;
                                float v9 = *(float*)ptr10;
                                ptr10 = (char*)ptr10 + 4L;
                                ptr0 = (char*)ptr3 - 1L;
                                ptr3 = (char*)ptr3 - 1L;
                                ptr11 = (long)ptr11 + (long)ptr7;
                                v0 = v2 + v8 * v9;
                            }
                            while(ptr0 != 0L);
                        }
                    }
                    ptr2 = (uint64_t*)((long)(uint64_t*)((long)ptr16 * (long)ptr28) + (long)ptr22);
                    ptr22 = (char*)ptr22 + 1L;
                    *(float*)((long)(double*)((long)ptr2 * 4L) + (long)ptr1) = v0;
                }
                double* ptr30 = (double*)((long)ptr13 + (long)ptr4);
                double* ptr31 = (double*)((long)ptr30 - (long)(double*)((long)((long)ptr30 < 0L ? (double*)((char*)ptr30 + 3L): ptr30) & 0xfffffffffffffffcL));
                ptr16 = (char*)ptr16 + 1L;
                ptr4 = (long)ptr12 < (long)ptr31 ? ptr12: ptr31;
                v1 += 4L;
            }
            while(ptr5 != ptr16);
        }
    }
    else if((long)*(ptr12 + 2) >= 1L) {
        ptr5 = NULL;
        v1 = 0L;
        do {
            if((long)*(ptr12 + 1) >= 1L) {
                long v10 = 0L;
                do {
                    uint64_t* ptr32 = *param0;
                    uint64_t* ptr33 = *(param0 + 1);
                    float* ptr34 = *ptr32;
                    ptr4 = *(ptr33 + 2);
                    long* ptr35 = *(ptr32 + 2);
                    if(ptr4 == 0L) {
                        v0 = 0.0;
                    }
                    else {
                        uint64_t* ptr36 = *(ptr33 + 4);
                        ptr3 = *ptr33;
                        ptr33 = *(ptr33 + 1);
                        ptr2 = *(ptr36 + 1);
                        ptr1 = *ptr3;
                        v0 = *(float*)(v10 * 4L + (long)ptr1) * *(float*)((long)(double*)((long)(long*)(v1 * (long)ptr2) * 4L) + (long)ptr33);
                        if((long)ptr4 >= 2L) {
                            ptr3 = *(ptr3 + 1);
                            ptr4 = (double*)((char*)ptr4 - 1L);
                            ptr33 = (char*)((long)(uint64_t*)((long)ptr5 * (long)ptr2) + (long)ptr33) + 4L;
                            ptr1 = (long)(double*)((long)(uint64_t*)(v10 + (long)ptr3) * 4L) + (long)ptr1;
                            ptr2 = (long)ptr3 * 4L;
                            do {
                                float v11 = *ptr1;
                                float v12 = *(float*)ptr33;
                                ptr33 = (char*)ptr33 + 4L;
                                ptr0 = (char*)ptr4 - 1L;
                                ptr4 = (double*)((char*)ptr4 - 1L);
                                ptr1 = (long)ptr1 + (long)ptr2;
                                v0 = v2 + v11 * v12;
                            }
                            while(ptr0 != 0L);
                        }
                    }
                    *(float*)((long)(double*)((long)(long*)((long)(long*)(v1 * (long)ptr35) + v10) * 4L) + (long)ptr34) = v0;
                    ptr12 = *(param0 + 3);
                    ++v10;
                }
                while((long)*(ptr12 + 1) > v10);
            }
            ++v1;
            ptr5 = (char*)ptr5 + 4L;
        }
        while((long)*(ptr12 + 2) > v1);
    }
    return param0;
}
