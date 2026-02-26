// Stale decompilation - Refresh this view to re-decompile this code
void sub_CED360(uint64_t* param0, void* param1, size_t param2, long param3, long param4, long param5, long param6, long param7) {
    uint64_t* ptr0;
    char v0;
    long v1;
    long v2;
    long v3;
    long v4;
    long v5;
    long v6;
    long v7;
    long v8;
    long v9 = v1;
    long v10 = (uint64_t)(v2 & 0xffffffffffffL) | ((uint64_t)80 << 48);
    long v11 = v3;
    long v12 = v6;
    long v13 = v4;
    long v14 = v7;
    long v15 = v5;
    long v16 = v8;
    uint64_t* ptr1 = param0;
    void* __dst1 = *(void**)(param0 + 1);
    long* ptr2 = *(param0 + 2);
    void* ptr3 = param1;
    if((uint64_t)(long*)((long)(long*)((long)ptr2 - (long)__dst1) >> 3L) < (uint64_t)param1) {
        long* ptr4 = *param0;
        uint64_t* ptr5 = param0 + 4;
        long* ptr6 = (long*)((long)(long*)((long)__dst1 - (long)ptr4) >> 3L);
        long* ptr7 = (long*)((long)param1 + (long)ptr6);
        if((long*)((long)ptr7 >>> 61L) == 0L) {
            long* ptr8 = (long*)((long)ptr2 - (long)ptr4);
            long* ptr9 = (long*)((long)ptr8 >> 2L);
            long v17 = 0xfffffffffffffffL;
            long* ptr10 = (long*)((long)ptr8 >> 2L) >= ptr7 ? (long*)((long)ptr8 >> 2L): ptr7;
            long* ptr11 = (uint64_t)(long*)((long)ptr8 >> 3L) < 0xfffffffffffffffL ? (long*)((long)ptr8 >> 2L) >= ptr7 ? (long*)((long)ptr8 >> 2L): ptr7: &g1FFFFFFFFFFFFFFF;
            if(ptr11 == 0L) {
                ptr0 = NULL;
            }
            else if((uint64_t)ptr11 <= 28L && *(uint8_t*)(param0 + 32) == 0) {
                *(uint8_t*)(param0 + 32) = 1;
                ptr0 = param0 + 4;
            }
            else {
                ptr0 = operator new((long)(long*)((long)ptr11 * 8L), (long)param1, (long)param2, param3, param4, param5, param6, param7);
            }
            void* __dst = (void*)((long)(long*)((long)ptr6 * 8L) + (long)ptr0);
            uint64_t* ptr12 = (uint64_t*)((long)(uint64_t*)((long)ptr11 * 8L) + (long)ptr0);
            size_t v18 = (size_t)((long)param1 * 8L);
            long* ptr13 = (long*)((size_t)((long)param1 * 8L) + (long)__dst);
            memset2(__dst, 0, (size_t)((long)param1 * 8L));
            param1 = *param0;
            ptr2 = *(param0 + 1);
            param2 = (long)*(param0 + 1) - (long)param1;
            void* ptr14 = (void*)((long)__dst - param2);
            if((long)param2 >= 1L) {
                memcpy(ptr14, param1, param2);
                param1 = *param0;
            }
            *param0 = ptr14;
            *(param0 + 1) = ptr13;
            *(param0 + 2) = ptr12;
            if(param1 != 0L) {
                if(param0 + 4 != param1) {
                    long v19 = v5;
                    long v20 = v8;
                    long v21 = v4;
                    long v22 = v7;
                    long v23 = v3;
                    long v24 = v6;
                    long v25 = v1;
                    long v26 = v10;
                    long* ptr15 = &v0;
                    __dst1 = /*BAD_CALL!*/ operator delete();
                }
                *(uint8_t*)(param0 + 32) = 0;
            }
            jump (uint64_t)(v10 & 0xffffffffffffL);
        }
        /*NO_RETURN*/ std::__ndk1::__vector_base_common<true>::__throw_length_error((long)ptr2);
    }
    if(param1 != 0L) {
        memset2(__dst1, 0, (size_t)((long)param1 * 8L));
        __dst1 = (size_t)((long)param1 * 8L) + (long)__dst1;
    }
    *(void**)(param0 + 1) = __dst1;
    jump (uint64_t)(v10 & 0xffffffffffffL);
}
