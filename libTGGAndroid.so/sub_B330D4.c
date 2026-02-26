// Stale decompilation - Refresh this view to re-decompile this code
long* sub_B330D4(long param0, uint64_t* param1) {
    long* ptr0;
    long* ptr1 = *(param1 + 4);
    if(ptr1 != 0L) {
        long* ptr2 = *(param1 + 5);
        if(ptr2 == ptr1) {
            ptr0 = ptr1;
        }
        else {
            long* ptr3 = ptr2;
            do {
                long v0 = *(ptr3 - 3);
                ptr3 -= 3;
                if(v0 != 0L) {
                    long v1 = *(ptr2 - 1);
                    *(ptr2 - 2) = v0;
                    Botan::deallocate_memory(v0, v1 - v0, 1L);
                }
                ptr2 = ptr3;
            }
            while(ptr1 != ptr3);
            ptr0 = *(param1 + 4);
        }
        *(param1 + 5) = ptr1;
        operator delete((long)ptr0);
    }
    long* result = *(param1 + 1);
    if(result != 0L) {
        long* ptr4 = *(param1 + 3);
        *(param1 + 2) = result;
        Botan::deallocate_memory((long)result, (long)(long*)((long)ptr4 - (long)result), 1L);
    }
    return result;
}
