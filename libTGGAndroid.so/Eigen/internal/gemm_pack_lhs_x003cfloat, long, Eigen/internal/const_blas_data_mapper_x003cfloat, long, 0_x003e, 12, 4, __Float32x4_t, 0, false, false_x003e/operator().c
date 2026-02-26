// Package: Eigen::internal::gemm_pack_lhs<float, long, Eigen::internal::const_blas_data_mapper<float, long, 0>, 12, 4, __Float32x4_t, 0, false, false>

__int128* Eigen::internal::gemm_pack_lhs<float, long, Eigen::internal::const_blas_data_mapper<float, long, 0>, 12, 4, __Float32x4_t, 0, false, false>::operator()(__int128* param0, long param1, uint64_t* param2, long param3, long param4) {
    long v0;
    __int128 v1;
    __int128* ptr0;
    __int128* ptr1;
    long* ptr2;
    long* ptr3;
    long* ptr4;
    long v2 = param4 / 12L * 12L;
    long* ptr5 = (long*)(param4 - v2);
    long v3 = (uint64_t)(((__ror__(((__ror__((int)(uint8_t)ptr5, 12)) & 0x7) + (uint32_t)ptr5, 3)) & 0x1f) | (((((__ror__((int)(uint8_t)ptr5, 12)) & 0x7) + (uint32_t)ptr5) >>> 7) & 1 ? -32: 0));
    long* ptr6 = (long*)(((__ror__(v3, 61L)) & 0x7fffffff8L) | ((v3 >>> 31L) & 0x1L ? 0xfffffff800000000L: 0L));
    long* ptr7 = (long*)((long)ptr6 + v2);
    long* ptr8 = (long*)(param4 - (long)ptr7);
    long* ptr9 = (long*)(((long)ptr8 < 0L ? (long*)((char*)ptr8 + 3L): ptr8) & 0xfffffffffffffffcL);
    long* ptr10 = (long*)((long)ptr9 + (long)ptr7);
    long* ptr11 = (long*)(param4 - (long)ptr10);
    long v4 = (long)ptr11 < 0L ? (long*)((char*)ptr11 + 1L): ptr11;
    if(v2 < 1L) {
        ptr2 = NULL;
        ptr3 = NULL;
    loc_85DE8C:
        v0 = v4 & 0xfffffffffffffffeL;
        if((long)ptr3 >= (long)ptr7) {
            goto loc_85DF18;
        }
    loc_85DE98:
        if(param3 >= 1L) {
            v2 = param1 + 16L;
            do {
                ptr1 = NULL;
                param0 = (long)(long*)((long)ptr2 * 4L) + v2;
                do {
                    ++ptr2;
                    ptr0 = (long)(long*)((long)(long*)((long)(long*)((long)*(param2 + 1) * (long)ptr1) + (long)ptr3) * 4L) + (long)*param2;
                    v1 = *(ptr0 + 1);
                    ptr1 = (char*)ptr1 + 1L;
                    *(param0 - 1) = *ptr0;
                    *param0 = v1;
                    param0 += 2;
                }
                while(param3 != ptr1);
                ++ptr3;
            }
            while((long)ptr3 < (long)ptr7);
            goto loc_85DF18;
        }
        ptr3 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)~(long)ptr3 + param4 + (long)ptr6) - (long)ptr5) & 0xfffffffffffffff8L) + (long)ptr3) + 1;
        ptr4 = (long)ptr10 + v0;
        if((long)ptr3 >= (long)ptr10) {
            goto loc_85DFB4;
        loc_85DF18:
            ptr4 = (long)ptr10 + v0;
            if((long)ptr3 >= (long)ptr10) {
                goto loc_85DFB4;
            }
        }
        if(param3 >= 1L) {
            do {
                v2 = 0L;
                ptr1 = (long)(long*)((long)ptr2 * 4L) + param1;
                do {
                    ptr2 = (char*)ptr2 + 4L;
                    param0 = (long)(long*)((long)(long*)((long)*(param2 + 1) * v2) + (long)ptr3) * 4L;
                    *(__int128*)(v2 * 16L + (long)ptr1) = *(__int128*)((long)(long*)((long)(long*)((long)(long*)((long)*(param2 + 1) * v2) + (long)ptr3) * 4L) + (long)*param2);
                    ++v2;
                }
                while(param3 != v2);
                ptr3 = (char*)ptr3 + 4L;
            }
            while((long)ptr3 < (long)ptr10);
        }
        else {
            ptr3 = (char*)((long)(long*)((long)(long*)((long)(long*)((long)~(long)ptr3 + param4 + (long)(long*)((long)ptr6 + (long)ptr9)) - (long)ptr5) & 0xfffffffffffffffcL) + (long)ptr3) + 4L;
        }
    }
    else if(param3 >= 1L) {
        ptr3 = NULL;
        ptr2 = NULL;
        ptr1 = param1 + 32L;
        do {
            param0 = NULL;
            ptr0 = (long)(long*)((long)ptr2 * 4L) + (long)ptr1;
            do {
                ptr2 = (char*)ptr2 + 12L;
                __int128* ptr12 = (__int128*)((long)(long*)((long)(long*)((long)(long*)((long)*(param2 + 1) * (long)param0) + (long)ptr3) * 4L) + (long)*param2);
                v1 = *(ptr12 + 1);
                __int128 v5 = *(ptr12 + 2);
                param0 = (char*)param0 + 1L;
                *(ptr0 - 2) = *ptr12;
                *(ptr0 - 1) = v1;
                *ptr0 = v5;
                ptr0 += 3;
            }
            while(param0 != param3);
            ptr3 = (char*)ptr3 + 12L;
        }
        while((long)ptr3 < v2);
        goto loc_85DE8C;
    }
    else {
        ptr2 = NULL;
        ptr3 = (uint64_t)((long)~(long)ptr5 + param4) / 12L * 12L + 12L;
        v0 = v4 & 0xfffffffffffffffeL;
        if((long)ptr3 < (long)ptr7) {
            goto loc_85DE98;
        }
        else {
            goto loc_85DF18;
        }
    }
loc_85DFB4:
    if((long)ptr3 < (long)ptr4) {
        if(param3 < 1L) {
            goto loc_85E064;
        }
    loc_85DFC0:
        do {
            ptr5 = NULL;
            ptr6 = (long)(long*)((long)ptr2 * 4L) + param1;
            do {
                ptr2 = (char*)ptr2 + 2L;
                *(long*)((long)(long*)((long)ptr5 * 8L) + (long)ptr6) = *(long*)((long)(long*)((long)(long*)((long)(long*)((long)*(param2 + 1) * (long)ptr5) + (long)ptr3) * 4L) + (long)*param2);
                ptr5 = (char*)ptr5 + 1L;
            }
            while(param3 != ptr5);
            ptr3 = (char*)ptr3 + 2L;
            if((long)ptr3 < (long)ptr4) {
                goto loc_85DFC0;
            }
            goto loc_85DFFC;
        loc_85E064:
            ptr3 = (char*)((long)(long*)((long)(long*)((long)(long*)((long)(long*)((long)~(long)ptr3 + param4 + (long)(long*)((long)ptr6 + (long)ptr9)) + v0) - (long)ptr5) & 0xfffffffffffffffeL) + (long)ptr3) + 2L;
            if(param4 > (long)ptr3) {
                goto loc_85E004;
            }
        }
        while(param4 > (long)ptr3);
    }
    else {
    loc_85DFFC:
        if(param4 > (long)ptr3) {
        loc_85E004:
            if(param3 >= 1L) {
                do {
                    ptr5 = NULL;
                    ptr6 = (long)(long*)((long)ptr2 * 4L) + param1;
                    do {
                        *(int*)((long)(long*)((long)ptr5 * 4L) + (long)ptr6) = *(int*)((long)(long*)((long)(long*)((long)(long*)((long)*(param2 + 1) * (long)ptr5) + (long)ptr3) * 4L) + (long)*param2);
                        ptr5 = (char*)ptr5 + 1L;
                    }
                    while(param3 != ptr5);
                    ptr3 = (char*)ptr3 + 1L;
                    ptr2 = (long)ptr2 + (long)ptr5;
                }
                while(param4 != ptr3);
                return param0;
            }
        }
    }
    return param0;
}
