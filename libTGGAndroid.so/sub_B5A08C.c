// Stale decompilation - Refresh this view to re-decompile this code
void sub_B5A08C(uint64_t* param0, char* param1) {
    size_t v0;
    long v1;
    uint64_t* ptr0 = *param0;
    char* ptr1 = *(ptr0 + 1);
    if(*(ptr0 + 2) != ptr1) {
        *ptr1 = *param1;
        *(ptr0 + 1) = (long*)(ptr1 + 1L);
        return;
    }
    void* ptr2 = *ptr0;
    size_t v2 = (size_t)(ptr1 - ptr2);
    if((long)v2 >= -1L) {
        long* ptr3 = v2 < 0x3fffffffffffffffL ? (long*)(v2 + 1L) > (long*)(v2 * 2L) ? (long*)(v2 + 1L): (long*)(v2 * 2L): &g7FFFFFFFFFFFFFFF;
        if(ptr3 == 0L) {
            v1 = 0L;
            v0 = v2;
        }
        else {
            v1 = Botan::allocate_memory((long)ptr3, 1L);
            ptr2 = *ptr0;
            v0 = (long)*(ptr0 + 1) - (long)ptr2;
        }
        char* ptr4 = (char*)(v1 + v2);
        long* ptr5 = (long*)(v1 + (long)ptr3);
        void* ptr6 = (void*)(ptr4 - v0);
        *ptr4 = *param1;
        if((long)v0 >= 1L) {
            memcpy(ptr6, ptr2, v0);
        }
        long* ptr7 = *(ptr0 + 2);
        *ptr0 = ptr6;
        *(ptr0 + 1) = (long*)(ptr4 + 1L);
        *(ptr0 + 2) = ptr5;
        if(ptr2 != 0L) {
            Botan::deallocate_memory((long)ptr2, (long)(long*)((long)ptr7 - (long)ptr2), 1L);
        }
        return;
    }
    /*NO_RETURN*/ std::__ndk1::__vector_base_common<true>::__throw_length_error((long)(long*)(v2 + 1L));
}
