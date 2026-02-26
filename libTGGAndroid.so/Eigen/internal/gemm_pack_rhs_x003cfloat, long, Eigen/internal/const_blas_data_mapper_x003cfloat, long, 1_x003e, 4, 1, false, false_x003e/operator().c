// Package: Eigen::internal::gemm_pack_rhs<float, long, Eigen::internal::const_blas_data_mapper<float, long, 1>, 4, 1, false, false>

void Eigen::internal::gemm_pack_rhs<float, long, Eigen::internal::const_blas_data_mapper<float, long, 1>, 4, 1, false, false>::operator()(long param0, long param1, uint64_t* param2, long param3, long param4) {
    int* ptr0;
    long v0;
    long v1;
    long v2 = (param4 < 0L ? param4 + 3L: param4) & 0xfffffffffffffffcL;
    if(param4 < 4L) {
        v0 = 0L;
    loc_8623AC:
        if(param4 > v2) {
        loc_8623B4:
            if(param3 >= 1L) {
                do {
                    v1 = 0L;
                    ptr0 = v0 * 4L + param1;
                    do {
                        *(int*)(v1 * 4L + (long)ptr0) = *(int*)((long)(long*)((long)(long*)((long)(long*)((long)*(param2 + 1) * v1) + v2) * 4L) + (long)*param2);
                        ++v1;
                    }
                    while(param3 != v1);
                    ++v2;
                    v0 += v1;
                }
                while(param4 != v2);
                return;
            }
        }
    }
    else if(param3 >= 1L) {
        v1 = 0L;
        v0 = 0L;
        do {
            ptr0 = NULL;
            __int128* ptr1 = (__int128*)(v0 * 4L + param1);
            do {
                v0 += 4L;
                *(__int128*)((long)(long*)((long)ptr0 * 16L) + (long)ptr1) = *(__int128*)((long)(long*)((long)(long*)((long)(long*)((long)*(param2 + 1) * (long)ptr0) + v1) * 4L) + (long)*param2);
                ptr0 = (char*)ptr0 + 1L;
            }
            while(param3 != ptr0);
            v1 += 4L;
        }
        while(v2 > v1);
        goto loc_8623AC;
    }
    else {
        v0 = 0L;
        if(param4 > v2) {
            goto loc_8623B4;
        }
    }
}
