// Stale decompilation - Refresh this view to re-decompile this code
void sub_D07304(long* param0, void* __src, long param2) {
    void* __dst;
    void* ptr0;
    long v0;
    long v1 = (uint64_t)(v0 & 0xffffffffffffL) | ((uint64_t)80 << 48);
    void* ptr1 = *(void**)(param0 + 0x266);
    size_t __n = (size_t)(param2 - (long)__src);
    long v2 = *(long*)((long)ptr1 + 8L);
    if(((uint64_t)((uint32_t)__n + 0xF) & 0xfffffff0L) + v2 >= 0xff0L) {
        if(((uint64_t)((uint32_t)__n + 0xF) & 0xfffffff0L) < 0xff1L) {
            goto loc_D07374;
        }
        else {
            ptr0 = malloc2((size_t)(((uint64_t)((uint32_t)__n + 0xF) & 0xfffffff0L) + 16L));
            if(ptr0 == 0L) {
                /*NO_RETURN*/ std::terminate(0L);
            }
            __dst = (long)ptr0 + 16L;
            *(long*)ptr0 = *(long*)ptr1;
            *(long*)((long)ptr0 + 8L) = 0L;
            *(void**)ptr1 = ptr0;
        }
        if(__n != 0L) {
            memmove(__dst, __src, __n);
            jump (uint64_t)(v1 & 0xffffffffffffL);
        }
        jump (uint64_t)(v1 & 0xffffffffffffL);
    loc_D07374:
        ptr0 = malloc2(0x1000L);
        if(ptr0 == 0L) {
            /*NO_RETURN*/ std::terminate(0L);
        }
        v2 = 0L;
        *(void**)ptr0 = ptr1;
        *(long*)((long)ptr0 + 8L) = 0L;
        ptr1 = ptr0;
        *(void**)(param0 + 0x266) = ptr0;
    }
    __dst = (long*)(v2 + (long)ptr1) + 2;
    *(long*)((long)ptr1 + 8L) = ((uint64_t)((uint32_t)__n + 0xF) & 0xfffffff0L) + v2;
    if(__n != 0L) {
        memmove(__dst, __src, __n);
    }
    jump (uint64_t)(v1 & 0xffffffffffffL);
}
