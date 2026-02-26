// Stale decompilation - Refresh this view to re-decompile this code
void sub_CFDE98(void* param0, long* param1) {
    void* __dst;
    long v0;
    long v1 = (uint64_t)(v0 & 0xffffffffffffL) | ((uint64_t)80 << 48);
    long* ptr0 = *(uint64_t*)((long)param0 + 8L);
    void* ptr1 = param0;
    if(*(long*)((long)param0 + 16L) == ptr0) {
        void* __src = *(void**)ptr1;
        size_t __n = (size_t)((long)ptr0 - (long)__src);
        if((long*)((long)ptr1 + 24L) == __src) {
            param0 = malloc2(__n * 2L);
            if(param0 == 0L) {
                /*NO_RETURN*/ std::terminate(0L);
            }
            __dst = param0;
            if(__n != 0L) {
                memmove(__dst, __src, __n);
            }
            *(void**)ptr1 = __dst;
        }
        else {
            param0 = realloc2(__src, __n * 2L);
            __dst = param0;
            *(void**)ptr1 = param0;
            if(param0 == 0L) {
                /*NO_RETURN*/ std::terminate(0L);
            }
        }
        ptr0 = (__n >> 3L) * 8L + (long)__dst;
        *(uint64_t*)((long)ptr1 + 8L) = (long*)((__n >> 3L) * 8L + (long)__dst);
        *(uint64_t*)((long)ptr1 + 16L) = (long*)((__n >> 2L) * 8L + (long)__dst);
    }
    long v2 = *param1;
    *(uint64_t*)((long)ptr1 + 8L) = ptr0 + 1;
    *ptr0 = v2;
    jump (uint64_t)(v1 & 0xffffffffffffL);
}
