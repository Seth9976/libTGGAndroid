// Package: Eigen::internal::dense_assignment_loop<Eigen::internal::restricted_packet_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float, -1, -1, 0, -1, -1> >, Eigen::internal::evaluator<Eigen::Product<Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, -1, true>, Eigen::Transpose<Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, -1, true> const>, 1> >, Eigen::internal::assign_op<float, float> >, 4, 0>

uint64_t* Eigen::internal::dense_assignment_loop<Eigen::internal::restricted_packet_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float, -1, -1, 0, -1, -1> >, Eigen::internal::evaluator<Eigen::Product<Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, -1, true>, Eigen::Transpose<Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, -1, true> const>, 1> >, Eigen::internal::assign_op<float, float> >, 4, 0>::run(uint64_t* param0) {
    double* ptr0;
    unsigned __int128* ptr1;
    float* ptr2;
    uint64_t* ptr3;
    long* ptr4;
    __int128* ptr5;
    float v0;
    float* ptr6;
    float* ptr7;
    float v1;
    uint64_t* ptr8 = *(param0 + 3);
    long* ptr9 = *(ptr8 + 2);
    if((long)ptr9 >= 1L) {
        ptr8 = *(ptr8 + 1);
        uint64_t* ptr10 = NULL;
        long v2 = 0L;
        do {
            uint64_t* ptr11 = (uint64_t*)((long)ptr8 - (long)ptr10);
            if((long)ptr10 >= 1L) {
                long v3 = 0L;
                do {
                    uint64_t* ptr12 = *(param0 + 1);
                    long* ptr13 = *(ptr12 + 9);
                    if(ptr13 == 0L) {
                        v0 = 0.0;
                    }
                    else {
                        ptr7 = *ptr12;
                        ptr6 = *(ptr12 + 7);
                        v0 = *(float*)(v3 * 4L + (long)ptr7) * *(float*)(v2 * 4L + (long)ptr6);
                        if((long)ptr13 >= 2L) {
                            long* ptr14 = (long*)((char*)ptr13 - 1L);
                            ptr5 = *(*(ptr12 + 3) + 1);
                            long v4 = *(*(ptr12 + 10) + 1) * 4L;
                            ptr6 = v2 * 4L + v4 + (long)ptr6;
                            ptr7 = (long)(double*)((long)(long*)((long)ptr5 + v3) * 4L) + (long)ptr7;
                            do {
                                float v5 = *ptr7;
                                float v6 = *ptr6;
                                ptr4 = (char*)ptr14 - 1L;
                                ptr14 = (char*)ptr14 - 1L;
                                ptr6 = v4 + (long)ptr6;
                                ptr7 = (long)(double*)((long)ptr5 * 4L) + (long)ptr7;
                                v0 = v1 + v5 * v6;
                            }
                            while(ptr4 != 0L);
                        }
                    }
                    ptr3 = *param0;
                    ptr2 = (long)(double*)((long)*(ptr3 + 1) * v2) + v3;
                    ++v3;
                    *(float*)((long)(double*)((long)ptr2 * 4L) + (long)*ptr3) = v0;
                }
                while(ptr10 != v3);
            }
            uint64_t* ptr15 = (uint64_t*)((long)(uint64_t*)((long)ptr11 & 0xfffffffffffffffcL) + (long)ptr10);
            uint64_t* ptr16 = ptr10;
            if((long)(uint64_t*)((long)ptr11 & 0xfffffffffffffffcL) >= 1L) {
                do {
                    uint64_t* ptr17 = *param0;
                    ptr7 = *(param0 + 1);
                    ptr6 = *(uint64_t*)(ptr7 + 40);
                    ptr1 = *ptr17;
                    long* ptr18 = *(ptr17 + 1);
                    if((long)ptr6 >= 1L) {
                        double v7 = *(double*)(ptr7 + 32);
                        double v8 = *(double*)(ptr7 + 38);
                        double v9 = *(double*)(ptr7 + 28);
                        ptr7 = v2 * 4L + *(double*)(ptr7 + 34);
                        ptr5 = (long)(long*)((long)ptr16 * 4L) + v9;
                        do {
                            __int128 v10 = *ptr5;
                            float v11 = *ptr7;
                            ptr7 = (long)(double*)(v8 * 4L) + (long)ptr7;
                            ptr0 = (char*)ptr6 - 1L;
                            ptr6 = (char*)ptr6 - 1L;
                            ptr5 = v7 * 4L + (long)ptr5;
                            FMLA(0x0X, (unsigned __int128)v11 | ((unsigned __int128)v11 << 32) | ((unsigned __int128)v11 << 64) | ((unsigned __int128)v11 << 96), v10);
                        }
                        while(ptr0 != 0L);
                    }
                    uint64_t* ptr19 = (uint64_t*)((long)(uint64_t*)(v2 * (long)ptr18) + (long)ptr16);
                    ptr16 = (char*)ptr16 + 4L;
                    *(unsigned __int128*)((long)(uint64_t*)((long)ptr19 * 4L) + (long)ptr1) = 0x0X;
                }
                while((long)ptr15 > (long)ptr16);
            }
            while((long)ptr8 > (long)ptr15) {
                uint64_t* ptr20 = *(param0 + 1);
                double* ptr21 = *(ptr20 + 9);
                if(ptr21 == 0L) {
                    v0 = 0.0;
                }
                else {
                    ptr6 = *ptr20;
                    ptr2 = *(ptr20 + 7);
                    v0 = *(float*)((long)(double*)((long)ptr15 * 4L) + (long)ptr6) * *(float*)(v2 * 4L + (long)ptr2);
                    if((long)ptr21 >= 2L) {
                        double* ptr22 = (double*)((char*)ptr21 - 1L);
                        double* ptr23 = *(*(ptr20 + 3) + 1);
                        long v12 = *(*(ptr20 + 10) + 1) * 4L;
                        ptr2 = v2 * 4L + v12 + (long)ptr2;
                        ptr6 = (long)(double*)((long)(double*)((long)ptr23 + (long)ptr15) * 4L) + (long)ptr6;
                        do {
                            float v13 = *ptr6;
                            float v14 = *ptr2;
                            ptr0 = (char*)ptr22 - 1L;
                            ptr22 = (char*)ptr22 - 1L;
                            ptr2 = v12 + (long)ptr2;
                            ptr6 = (long)(float*)((long)ptr23 * 4L) + (long)ptr6;
                            v0 = v1 + v13 * v14;
                        }
                        while(ptr0 != 0L);
                    }
                }
                ptr3 = *param0;
                ptr1 = (long)(uint64_t*)((long)*(ptr3 + 1) * v2) + (long)ptr15;
                ptr15 = (char*)ptr15 + 1L;
                *(float*)((long)(double*)((long)ptr1 * 4L) + (long)*ptr3) = v0;
            }
            uint64_t* ptr24 = (uint64_t*)(((uint64_t)(0 - (uint32_t)ptr8) & 0x3L) + (long)ptr10);
            ++v2;
            ptr10 = (long)(uint64_t*)((long)ptr24 - (long)(uint64_t*)((long)((long)ptr24 < 0L ? (uint64_t*)((char*)ptr24 + 3L): ptr24) & 0xfffffffffffffffcL)) <= (long)ptr8 ? (uint64_t*)((long)ptr24 - (long)(uint64_t*)((long)((long)ptr24 < 0L ? (uint64_t*)((char*)ptr24 + 3L): ptr24) & 0xfffffffffffffffcL)): ptr8;
        }
        while(ptr9 != v2);
    }
    return param0;
}
