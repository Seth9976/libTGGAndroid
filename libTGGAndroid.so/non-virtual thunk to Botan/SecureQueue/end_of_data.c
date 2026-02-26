// Package: non-virtual thunk to Botan::SecureQueue

long non-virtual thunk to Botan::SecureQueue::end_of_data(uint64_t* param0) {
    uint64_t* ptr0 = *(param0 + 2);
    if(ptr0 != 0L) {
        long* ptr1 = NULL;
        do {
            long* ptr2 = *(ptr0 + 4);
            long* ptr3 = *(ptr0 + 5);
            ptr0 = *ptr0;
            ptr1 = (long)(long*)((long)ptr1 + (long)ptr3) - (long)ptr2;
        }
        while(ptr0 != 0L);
        return ptr1 == 0L;
    }
    return 1L;
}
