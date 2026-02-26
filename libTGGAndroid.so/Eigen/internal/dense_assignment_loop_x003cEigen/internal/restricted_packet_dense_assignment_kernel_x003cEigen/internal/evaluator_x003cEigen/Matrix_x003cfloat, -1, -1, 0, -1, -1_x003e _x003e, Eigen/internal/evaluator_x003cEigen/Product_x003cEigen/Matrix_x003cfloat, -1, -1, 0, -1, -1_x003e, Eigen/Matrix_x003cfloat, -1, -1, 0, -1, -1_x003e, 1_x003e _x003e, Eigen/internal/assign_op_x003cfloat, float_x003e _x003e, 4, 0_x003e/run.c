// Package: Eigen::internal::dense_assignment_loop<Eigen::internal::restricted_packet_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float, -1, -1, 0, -1, -1> >, Eigen::internal::evaluator<Eigen::Product<Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::Matrix<float, -1, -1, 0, -1, -1>, 1> >, Eigen::internal::assign_op<float, float> >, 4, 0>

uint64_t* Eigen::internal::dense_assignment_loop<Eigen::internal::restricted_packet_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float, -1, -1, 0, -1, -1> >, Eigen::internal::evaluator<Eigen::Product<Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::Matrix<float, -1, -1, 0, -1, -1>, 1> >, Eigen::internal::assign_op<float, float> >, 4, 0>::run(uint64_t* param0) {
    uint64_t* ptr0;
    uint64_t* ptr1;
    uint64_t* ptr2;
    double* ptr3;
    float v0;
    float* ptr4;
    uint32_t* ptr5;
    uint64_t* ptr6;
    uint64_t* ptr7;
    uint64_t* ptr8;
    float v1;
    uint64_t* ptr9 = *(param0 + 3);
    long* ptr10 = *(ptr9 + 2);
    if((long)ptr10 >= 1L) {
        ptr9 = *(ptr9 + 1);
        long v2 = 0L;
        uint32_t* ptr11 = NULL;
        long v3 = 0L;
        do {
            uint64_t* ptr12 = (uint64_t*)((long)ptr9 - (long)ptr11);
            if((long)ptr11 >= 1L) {
                long v4 = 0L;
                do {
                    uint64_t* ptr13 = *param0;
                    ptr8 = *(param0 + 1);
                    ptr7 = *(ptr8 + 1);
                    ptr6 = *ptr13;
                    long* ptr14 = *(ptr13 + 1);
                    ptr5 = *(ptr7 + 1);
                    if(ptr5 == 0L) {
                        v0 = 0.0;
                    }
                    else {
                        ptr8 = *ptr8;
                        ptr7 = *ptr7;
                        ptr4 = *ptr8;
                        v0 = *(float*)(v4 * 4L + (long)ptr4) * *(uint32_t*)((long)(uint64_t*)((long)(long*)((long)ptr5 * v3) * 4L) + (long)ptr7);
                        if((long)ptr5 >= 2L) {
                            ptr3 = *(ptr8 + 1);
                            ptr8 = (char*)ptr5 - 1L;
                            ptr5 = (char*)((long)(uint64_t*)((long)ptr5 * v2) + (long)ptr7) + 4L;
                            ptr4 = (long)(double*)((long)(double*)((long)ptr3 + v4) * 4L) + (long)ptr4;
                            do {
                                float v5 = *ptr4;
                                float v6 = *ptr5;
                                ++ptr5;
                                ptr2 = (char*)ptr8 - 1L;
                                ptr8 = (char*)ptr8 - 1L;
                                ptr4 = (long)(uint64_t*)((long)ptr3 * 4L) + (long)ptr4;
                                v0 = v1 + v5 * v6;
                            }
                            while(ptr2 != 0L);
                        }
                    }
                    ptr1 = (long)(uint64_t*)(v3 * (long)ptr14) + v4;
                    ++v4;
                    *(float*)((long)(double*)((long)ptr1 * 4L) + (long)ptr6) = v0;
                }
                while(ptr11 != v4);
            }
            uint64_t* ptr15 = (uint64_t*)((long)(uint64_t*)((long)ptr12 & 0xfffffffffffffffcL) + (long)ptr11);
            uint32_t* ptr16 = ptr11;
            if((long)(uint64_t*)((long)ptr12 & 0xfffffffffffffffcL) >= 1L) {
                do {
                    uint64_t* ptr17 = *param0;
                    ptr5 = *(param0 + 1);
                    ptr8 = *(uint64_t*)(ptr5 + 12);
                    ptr6 = *ptr17;
                    long* ptr18 = *(ptr17 + 1);
                    if((long)ptr8 >= 1L) {
                        ptr3 = *(uint64_t*)(ptr5 + 4);
                        long* ptr19 = *(uint64_t*)(ptr5 + 6);
                        ptr5 = (long)(uint64_t*)((long)*(uint64_t*)(ptr5 + 10) * v2) + (long)*(uint64_t*)(ptr5 + 8);
                        ptr4 = (long)(uint64_t*)((long)ptr16 * 4L) + (long)ptr3;
                        do {
                            __int128* ptr20 = *(__int128**)ptr4;
                            int v7 = *ptr5;
                            ++ptr5;
                            ptr0 = (char*)ptr8 - 1L;
                            ptr8 = (char*)ptr8 - 1L;
                            ptr4 = (long)(uint64_t*)((long)ptr19 * 4L) + (long)ptr4;
                            FMLA(0x0X, (unsigned __int128)v7 | ((unsigned __int128)v7 << 32) | ((unsigned __int128)v7 << 64) | ((unsigned __int128)v7 << 96), ptr20);
                        }
                        while(ptr0 != 0L);
                    }
                    uint64_t* ptr21 = (uint64_t*)((long)(uint64_t*)(v3 * (long)ptr18) + (long)ptr16);
                    ++ptr16;
                    *(unsigned __int128*)((long)(uint64_t*)((long)ptr21 * 4L) + (long)ptr6) = 0x0X;
                }
                while((long)ptr15 > (long)ptr16);
            }
            while((long)ptr9 > (long)ptr15) {
                uint64_t* ptr22 = *param0;
                ptr1 = *(param0 + 1);
                ptr4 = *(ptr1 + 1);
                ptr16 = *ptr22;
                long* ptr23 = *(ptr22 + 1);
                ptr8 = *(uint64_t*)(ptr4 + 2);
                if(ptr8 == 0L) {
                    v0 = 0.0;
                }
                else {
                    ptr1 = *ptr1;
                    ptr4 = *(float**)ptr4;
                    ptr5 = *ptr1;
                    v0 = *(float*)((long)(double*)((long)ptr15 * 4L) + (long)ptr5) * *(uint32_t*)((long)(uint64_t*)((long)(long*)((long)ptr8 * v3) * 4L) + (long)ptr4);
                    if((long)ptr8 >= 2L) {
                        ptr7 = *(ptr1 + 1);
                        ptr1 = (char*)ptr8 - 1L;
                        ptr8 = (char*)((long)(uint64_t*)((long)ptr8 * v2) + (long)ptr4) + 4L;
                        ptr5 = (long)(uint64_t*)((long)(uint64_t*)((long)ptr7 + (long)ptr15) * 4L) + (long)ptr5;
                        do {
                            float v8 = *ptr5;
                            float v9 = *(float*)ptr8;
                            ptr8 = (char*)ptr8 + 4L;
                            ptr0 = (char*)ptr1 - 1L;
                            ptr1 = (char*)ptr1 - 1L;
                            ptr5 = (long)(float*)((long)ptr7 * 4L) + (long)ptr5;
                            v0 = v1 + v8 * v9;
                        }
                        while(ptr0 != 0L);
                    }
                }
                ptr6 = (long)(uint64_t*)(v3 * (long)ptr23) + (long)ptr15;
                ptr15 = (char*)ptr15 + 1L;
                *(float*)((long)(double*)((long)ptr6 * 4L) + (long)ptr16) = v0;
            }
            uint64_t* ptr24 = (uint64_t*)(((uint64_t)(0 - (uint32_t)ptr9) & 0x3L) + (long)ptr11);
            ++v3;
            ptr11 = (long)(uint32_t*)((long)ptr24 - (long)(uint64_t*)((long)((long)ptr24 < 0L ? (uint64_t*)((char*)ptr24 + 3L): ptr24) & 0xfffffffffffffffcL)) <= (long)ptr9 ? (uint32_t*)((long)ptr24 - (long)(uint64_t*)((long)((long)ptr24 < 0L ? (uint64_t*)((char*)ptr24 + 3L): ptr24) & 0xfffffffffffffffcL)): ptr9;
            v2 += 4L;
        }
        while(ptr10 != v3);
    }
    return param0;
}
