// Package: Botan::SecureQueue

long* Botan::SecureQueue::size(uint64_t* param0) {
    uint64_t* ptr0 = *(param0 + 12);
    if(ptr0 != 0L) {
        long* result = NULL;
        do {
            long* ptr1 = *(ptr0 + 4);
            long* ptr2 = *(ptr0 + 5);
            ptr0 = *ptr0;
            result = (long)(long*)((long)result + (long)ptr2) - (long)ptr1;
        }
        while(ptr0 != 0L);
        return result;
    }
    return NULL;
}
