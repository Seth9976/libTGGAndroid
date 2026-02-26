long UpdateBestColors(long param0, int* param1, int* param2, long* param3, long param4) {
    float* ptr0;
    long v0;
    long v1;
    __int128 v2;
    __int128 v3;
    int v4;
    long v5 = 0L;
    *(long*)&v4 = *param3;
    int v6 = *(int*)(param3 + 1);
    do {
        int v7 = *param1;
        if(v7 == -1) {
            v1 = (uint64_t)*(int*)(v5 + (long)&v4);
        loc_82E50C:
            *param1 = (uint32_t)v1;
            *param2 = *(int*)(param4 + v5);
            v0 = *(param1 + 1);
            ptr0 = (long)(uint32_t)v1 * 12L + param0;
            if((uint32_t)v0 == -1) {
                goto loc_82E564;
            }
            else {
            loc_82E52C:
                float* ptr1 = (float*)(v0 * 12L + param0);
                __int128 v8 = (unsigned __int128)((uint64_t)(float)(2.0 - *ptr1) | ((uint64_t)(float)(2.0 - *ptr0) << 32));
                v3 = (unsigned __int128)((uint64_t)((uint32_t)v8 * (uint32_t)v8) | ((uint64_t)((uint32_t)(v8 >>> 0x20X) * (uint32_t)(v8 >>> 0x20X)) << 32));
                __int128 v9 = (unsigned __int128)((uint64_t)(float)(0.0 - *(ptr1 + 1)) | ((uint64_t)(float)(0.0 - *(ptr0 + 1)) << 32));
                v2 = (unsigned __int128)((uint64_t)((uint32_t)v9 * (uint32_t)v9) | ((uint64_t)((uint32_t)(v9 >>> 0x20X) * (uint32_t)(v9 >>> 0x20X)) << 32));
                FCMGT((uint64_t)((uint32_t)v3 + (uint32_t)v2) | ((uint64_t)((uint32_t)(v3 >>> 0x20X) + (uint32_t)(v2 >>> 0x20X)) << 32), (uint64_t)((uint32_t)v3 + (uint32_t)v2) | ((uint64_t)((uint32_t)(v3 >>> 0x20X) + (uint32_t)(v2 >>> 0x20X)) << 32), (uint64_t)(uint32_t)(uint64_t)((uint32_t)(v3 >>> 0x20X) + (uint32_t)(v2 >>> 0x20X)) | ((uint64_t)(uint32_t)(uint64_t)((uint32_t)(v3 >>> 0x20X) + (uint32_t)(v2 >>> 0x20X)) << 32));
            }
            if(((uint64_t)((uint32_t)v3 + (uint32_t)v2) | ((uint64_t)((uint32_t)(v3 >>> 0x20X) + (uint32_t)(v2 >>> 0x20X)) << 32)) & 0x1L) {
            loc_82E564:
                *(param1 + 1) = (uint32_t)v1;
                *(param2 + 1) = *(int*)(param4 + v5);
            }
        }
        else {
            float* ptr2 = (float*)(v7 * 12L + param0);
            v1 = *(int*)(v5 + (long)&v4);
            float* ptr3 = (float*)(v1 * 12L + param0);
            __int128 v10 = (unsigned __int128)((uint64_t)(float)(0.0 - *ptr2) | ((uint64_t)(float)(0.0 - *ptr3) << 32));
            __int128 v11 = (unsigned __int128)((uint64_t)((uint32_t)v10 * (uint32_t)v10) | ((uint64_t)((uint32_t)(v10 >>> 0x20X) * (uint32_t)(v10 >>> 0x20X)) << 32));
            __int128 v12 = (unsigned __int128)((uint64_t)(float)(0.0 - *(ptr2 + 1)) | ((uint64_t)(float)(0.0 - *(ptr3 + 1)) << 32));
            __int128 v13 = (unsigned __int128)((uint64_t)((uint32_t)v12 * (uint32_t)v12) | ((uint64_t)((uint32_t)(v12 >>> 0x20X) * (uint32_t)(v12 >>> 0x20X)) << 32));
            FCMGT((uint64_t)((uint32_t)v11 + (uint32_t)v13) | ((uint64_t)((uint32_t)(v11 >>> 0x20X) + (uint32_t)(v13 >>> 0x20X)) << 32), (uint64_t)((uint32_t)v11 + (uint32_t)v13) | ((uint64_t)((uint32_t)(v11 >>> 0x20X) + (uint32_t)(v13 >>> 0x20X)) << 32), (uint64_t)(uint32_t)(uint64_t)((uint32_t)(v11 >>> 0x20X) + (uint32_t)(v13 >>> 0x20X)) | ((uint64_t)(uint32_t)(uint64_t)((uint32_t)(v11 >>> 0x20X) + (uint32_t)(v13 >>> 0x20X)) << 32));
            if(((uint64_t)((uint32_t)v11 + (uint32_t)v13) | ((uint64_t)((uint32_t)(v11 >>> 0x20X) + (uint32_t)(v13 >>> 0x20X)) << 32)) & 0x1L) {
                goto loc_82E50C;
            }
            else {
                v0 = *(param1 + 1);
                ptr0 = (long)(uint32_t)v1 * 12L + param0;
                if((uint32_t)v0 == -1) {
                    goto loc_82E564;
                }
                else {
                    goto loc_82E52C;
                }
            }
        }
        int v14 = *(param1 + 2);
        if(v14 == -1) {
        loc_82E5B4:
            *(param1 + 2) = (uint32_t)v1;
            *(param2 + 2) = *(int*)(param4 + v5);
        }
        else {
            float* ptr4 = (float*)(v14 * 12L + param0);
            __int128 v15 = (unsigned __int128)((uint64_t)(float)(0.0 - *ptr4) | ((uint64_t)(float)(0.0 - *ptr0) << 32));
            __int128 v16 = (unsigned __int128)((uint64_t)((uint32_t)v15 * (uint32_t)v15) | ((uint64_t)((uint32_t)(v15 >>> 0x20X) * (uint32_t)(v15 >>> 0x20X)) << 32));
            __int128 v17 = (unsigned __int128)((uint64_t)(float)(1.0 - *(ptr4 + 1)) | ((uint64_t)(float)(1.0 - *(ptr0 + 1)) << 32));
            __int128 v18 = (unsigned __int128)((uint64_t)((uint32_t)v17 * (uint32_t)v17) | ((uint64_t)((uint32_t)(v17 >>> 0x20X) * (uint32_t)(v17 >>> 0x20X)) << 32));
            FCMGT((uint64_t)((uint32_t)v16 + (uint32_t)v18) | ((uint64_t)((uint32_t)(v16 >>> 0x20X) + (uint32_t)(v18 >>> 0x20X)) << 32), (uint64_t)((uint32_t)v16 + (uint32_t)v18) | ((uint64_t)((uint32_t)(v16 >>> 0x20X) + (uint32_t)(v18 >>> 0x20X)) << 32), (uint64_t)(uint32_t)(uint64_t)((uint32_t)(v16 >>> 0x20X) + (uint32_t)(v18 >>> 0x20X)) | ((uint64_t)(uint32_t)(uint64_t)((uint32_t)(v16 >>> 0x20X) + (uint32_t)(v18 >>> 0x20X)) << 32));
            if(((uint64_t)((uint32_t)v16 + (uint32_t)v18) | ((uint64_t)((uint32_t)(v16 >>> 0x20X) + (uint32_t)(v18 >>> 0x20X)) << 32)) & 0x1L) {
                goto loc_82E5B4;
            }
        }
        int v19 = *(param1 + 3);
        if(v19 == -1) {
        loc_82E48C:
            *(param1 + 3) = (uint32_t)v1;
            *(param2 + 3) = *(int*)(param4 + v5);
        }
        else {
            float* ptr5 = (float*)((long)(double*)((long)v19 * 12L) + param0);
            __int128 v20 = (unsigned __int128)((uint64_t)(float)(2.0 - *ptr5) | ((uint64_t)(float)(2.0 - *ptr0) << 32));
            __int128 v21 = (unsigned __int128)((uint64_t)((uint32_t)v20 * (uint32_t)v20) | ((uint64_t)((uint32_t)(v20 >>> 0x20X) * (uint32_t)(v20 >>> 0x20X)) << 32));
            __int128 v22 = (unsigned __int128)((uint64_t)(float)(1.0 - *(ptr5 + 1)) | ((uint64_t)(float)(1.0 - *(ptr0 + 1)) << 32));
            __int128 v23 = (unsigned __int128)((uint64_t)((uint32_t)v22 * (uint32_t)v22) | ((uint64_t)((uint32_t)(v22 >>> 0x20X) * (uint32_t)(v22 >>> 0x20X)) << 32));
            FCMGT((uint64_t)((uint32_t)v21 + (uint32_t)v23) | ((uint64_t)((uint32_t)(v21 >>> 0x20X) + (uint32_t)(v23 >>> 0x20X)) << 32), (uint64_t)((uint32_t)v21 + (uint32_t)v23) | ((uint64_t)((uint32_t)(v21 >>> 0x20X) + (uint32_t)(v23 >>> 0x20X)) << 32), (uint64_t)(uint32_t)(uint64_t)((uint32_t)(v21 >>> 0x20X) + (uint32_t)(v23 >>> 0x20X)) | ((uint64_t)(uint32_t)(uint64_t)((uint32_t)(v21 >>> 0x20X) + (uint32_t)(v23 >>> 0x20X)) << 32));
            if(((uint64_t)((uint32_t)v21 + (uint32_t)v23) | ((uint64_t)((uint32_t)(v21 >>> 0x20X) + (uint32_t)(v23 >>> 0x20X)) << 32)) & 0x1L) {
                goto loc_82E48C;
            }
        }
        v5 += 4L;
    }
    while(v5 != 12L);
    return param0;
}
