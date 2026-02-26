// Stale decompilation - Refresh this view to re-decompile this code
void sub_CED1D8(void* param0, void* __src, void* param2, long param3, long param4, long param5, long param6, long param7) {
    void* ptr0;
    long v0;
    long v1 = (uint64_t)(v0 & 0xffffffffffffL) | ((uint64_t)80 << 48);
    uint64_t v2 = *(uint64_t*)((long)param0 + 16L);
    void* __dst = *(void**)param0;
    size_t v3 = (size_t)((long)param2 - (long)__src);
    void* ptr1 = param0;
    if((long*)((long)(long*)(v2 - (long)__dst) >> 3L) < (long*)(v3 >> 3L)) {
        if(__dst != 0L) {
            *(void**)((long)ptr1 + 8L) = __dst;
            if((long*)((long)ptr1 + 32L) == __dst) {
                *(char*)((long)ptr1 + 0x100L) = 0;
            }
            else {
                operator delete((long)__dst);
            }
            v2 = 0L;
            *(long*)ptr1 = 0L;
            *(long*)((long)ptr1 + 8L) = 0L;
            *(long*)((long)ptr1 + 16L) = 0L;
        }
        if(v3 < 0x8000000000000000L) {
            uint64_t v4 = v2 >> 3L < 0xfffffffffffffffL ? (long*)(v2 >> 2L) >= (long*)(v3 >> 3L) ? (long*)(v2 >> 2L): (long*)(v3 >> 3L): 0x1fffffffffffffffL;
            v2 = v4 >>> 61L;
            if(v2 == 0L) {
                if(v4 <= 28L && *(char*)((long)ptr1 + 0x100L) == 0) {
                    ptr0 = (long)ptr1 + 32L;
                    *(char*)((long)ptr1 + 0x100L) = 1;
                }
                else {
                    ptr0 = operator new((long)(v4 * 8L), (long)__src, (long)param2, param3, param4, param5, param6, param7);
                }
                *(void**)ptr1 = ptr0;
                *(void**)((long)ptr1 + 8L) = ptr0;
                *(uint64_t*)((long)ptr1 + 16L) = (long*)(v4 * 8L + (long)ptr0);
                if((long)v3 >= 1L) {
                    memcpy(ptr0, __src, v3);
                    ptr0 = v3 + (long)ptr0;
                }
                *(void**)((long)ptr1 + 8L) = ptr0;
                jump (uint64_t)(v1 & 0xffffffffffffL);
            }
        }
        /*NO_RETURN*/ std::__ndk1::__vector_base_common<true>::__throw_length_error((long)v2);
    }
    long* ptr2 = (long*)(*(long*)((long)ptr1 + 8L) - (long)__dst);
    void* ptr3 = (long*)((long)ptr2 >> 3L) < (long*)(v3 >> 3L) ? (void*)((long)__src + (long)ptr2): param2;
    size_t __n = (size_t)((long)ptr3 - (long)__src);
    if(__src != ptr3) {
        memmove(__dst, __src, __n);
    }
    if((long*)((long)ptr2 >> 3L) < (long*)(v3 >> 3L)) {
        void* ptr4 = *(void**)((long)ptr1 + 8L);
        size_t v5 = (size_t)((long)param2 - (long)ptr3);
        if((long)v5 >= 1L) {
            memcpy(ptr4, ptr3, v5);
            ptr4 = (long)ptr4 + v5;
        }
        *(void**)((long)ptr1 + 8L) = ptr4;
        jump (uint64_t)(v1 & 0xffffffffffffL);
    }
    *(uint64_t*)((long)ptr1 + 8L) = (long*)((long)__dst + __n);
    jump (uint64_t)(v1 & 0xffffffffffffL);
}
