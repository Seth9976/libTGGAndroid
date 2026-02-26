// Stale decompilation - Refresh this view to re-decompile this code
void sub_8BFE1C(long* param0, char* param1, char* __s, long param3, long param4, long param5, long param6, long param7, long param8) {
    void* ptr0;
    void* ptr1;
    size_t v0;
    size_t v1;
    *param0 = 0L;
    *(param0 + 1) = 0L;
    *(param0 + 2) = 0L;
    long v2 = (uint64_t)*param1;
    if(!(v2 & 0x1L)) {
        v1 = v2 >>> 1L;
        v0 = strlen(__s);
        ptr1 = param1 + 1L;
    }
    else {
        v1 = *(size_t*)(param1 + 8L);
        size_t v3 = strlen(__s);
        ptr1 = *(void**)(param1 + 16L);
        v0 = v3;
    }
    uint64_t v4 = v1 + v0;
    if(v4 < -16L) {
        if(v4 <= 22L) {
            *(char*)param0 = (uint8_t)((uint32_t)0 | ((uint32_t)(v1 & 0x7fffffffL) << 1));
            ptr0 = (char*)param0 + 1L;
            if(v1 != 0L) {
                memcpy(ptr0, ptr1, v1);
                *(char*)(v1 + (long)ptr0) = 0;
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append((long)param0, (long)__s, (long)v0);
                return;
            }
        }
        else {
            void* ptr2 = (void*)operator new((v4 + 16L) & 0xfffffffffffffff0L, (long)__s, param3, param4, param5, param6, param7, param8);
            ptr0 = ptr2;
            *(size_t*)(param0 + 1) = v1;
            *(void**)(param0 + 2) = ptr2;
            *param0 = ((v4 + 16L) & 0xfffffffffffffff0L) | 0x1L;
            if(v1 != 0L) {
                memcpy(ptr0, ptr1, v1);
            }
        }
        *(char*)(v1 + (long)ptr0) = 0;
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append((long)param0, (long)__s, (long)v0);
        return;
    }
    /*NO_RETURN*/ std::__ndk1::__basic_string_common<true>::__throw_length_error((long)v4);
}
