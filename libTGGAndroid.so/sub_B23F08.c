// Stale decompilation - Refresh this view to re-decompile this code
void sub_B23F08(uint8_t* param0, long param1, long param2, long param3, long param4, long param5, long param6, long param7) {
    long* ptr0;
    long* ptr1;
    long* ptr2;
    void* ptr3;
    void* ptr3;
    uint64_t v0;
    size_t v1;
    void* ptr4;
    if(*(param0 + 165L) == 0) {
        char* ptr5 = *(uint64_t*)(param0 + 48L);
        ptr2 = *(uint64_t*)(param0 + 56L);
        if(*(param0 + 166L) != 0 && (uint64_t)ptr5 < (uint64_t)ptr2) {
            *ptr5 = (uint8_t)param1;
            ptr1 = ptr5 + 1L;
            *(uint64_t*)(param0 + 48L) = ptr1;
            return;
        }
        else if(*(param0 + 166L) != 0) {
            ptr4 = *(void**)(param0 + 40L);
            v1 = ptr5 - ptr4;
            ptr0 = v1 + 1L;
            if((long)ptr0 < 0L) {
                goto loc_B240D4;
            }
            else {
                long* ptr6 = (long*)((long)ptr2 - (long)ptr4);
                v0 = (uint64_t)ptr6 < 0x3fffffffffffffffL ? (long*)((long)ptr6 * 2L) >= ptr0 ? (long*)((long)ptr6 * 2L): ptr0: 0x7fffffffffffffffL;
                if(v0 != 0L) {
                loc_B23FA4:
                    ptr3 = operator new((long)v0, param1, param2, param3, param4, param5, param6, param7);
                loc_B2408C:
                    char* ptr7 = (char*)(v1 + (long)ptr3);
                    long* ptr8 = (long*)((long)ptr3 + v0);
                    *ptr7 = (uint8_t)param1;
                    if((long)v1 >= 1L) {
                        memcpy(ptr3, ptr4, v1);
                    }
                    *(void**)(param0 + 40L) = ptr3;
                    *(uint64_t*)(param0 + 48L) = (long*)(ptr7 + 1L);
                    *(uint64_t*)(param0 + 56L) = ptr8;
                    if(ptr4 != 0L) {
                        operator delete();
                    }
                    return;
                }
                ptr3 = NULL;
                goto loc_B2408C;
            }
        }
        if(ptr5 == ptr2) {
            ptr4 = *(void**)(param0 + 40L);
            v1 = ptr5 - ptr4;
            ptr0 = v1 + 1L;
            if((long)ptr0 < 0L) {
                goto loc_B240D4;
            }
            v0 = v1 < 0x3fffffffffffffffL ? (long*)(v1 * 2L) >= ptr0 ? (long*)(v1 * 2L): ptr0: 0x7fffffffffffffffL;
            if(v0 != 0L) {
                goto loc_B23FA4;
            }
            ptr3 = NULL;
            goto loc_B2408C;
        }
        else {
            *ptr5 = (uint8_t)param1;
            ptr1 = ptr5 + 1L;
            *(uint64_t*)(param0 + 48L) = ptr1;
        }
        return;
    }
    long* ptr9 = *(uint64_t*)(param0 + 24L);
    void* ptr10 = (void*)*(long*)(*ptr9 + 40L)((long)ptr9, (uint64_t)(uint32_t)param1, param2, param3, param4, param5, param6, param7);
    char* ptr11 = *(uint64_t*)(param0 + 48L);
    ptr2 = *(uint64_t*)(param0 + 56L);
    if((uint64_t)ptr11 < (uint64_t)ptr2) {
        *ptr11 = (uint8_t)ptr10;
        ptr1 = ptr11 + 1L;
        *(uint64_t*)(param0 + 48L) = ptr1;
        return;
    }
    void* ptr12 = *(void**)(param0 + 40L);
    size_t v2 = (size_t)(ptr11 - ptr12);
    ptr0 = v2 + 1L;
    if((long)ptr0 >= 0L) {
        long* ptr13 = (long*)((long)ptr2 - (long)ptr12);
        uint64_t v3 = (uint64_t)ptr13 < 0x3fffffffffffffffL ? (long*)((long)ptr13 * 2L) >= ptr0 ? (long*)((long)ptr13 * 2L): ptr0: 0x7fffffffffffffffL;
        void* ptr14 = v3 == 0L ? NULL: (void*)operator new((long)v3, param1, param2, param3, param4, param5, param6, param7);
        char* ptr15 = (char*)(v2 + (long)ptr14);
        long* ptr16 = (long*)((long)ptr14 + v3);
        *ptr15 = (uint8_t)ptr10;
        if((long)v2 >= 1L) {
            memcpy(ptr14, ptr12, v2);
        }
        *(void**)(param0 + 40L) = ptr14;
        *(uint64_t*)(param0 + 48L) = (long*)(ptr15 + 1L);
        *(uint64_t*)(param0 + 56L) = ptr16;
        if(ptr12 == 0L) {
            return;
        }
        operator delete();
        return;
    }
loc_B240D4:
    /*NO_RETURN*/ std::__ndk1::__vector_base_common<true>::__throw_length_error((long)ptr0);
}
