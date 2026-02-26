long jcv_diagram_free(uint64_t* param0) {
    uint64_t* ptr0 = *param0;
    long* ptr1 = *(uint64_t*)((char*)ptr0 + 156L);
    uint64_t* ptr2 = *(uint64_t*)((char*)ptr0 + 76L);
    long* ptr3 = *(uint64_t*)((char*)ptr0 + 172L);
    if(ptr2 != 0L) {
        long* ptr4 = ptr3;
        do {
            *(uint64_t*)((char*)ptr0 + 76L) = *(ptr2 + 1);
            ptr4((long)ptr1, (long)ptr2);
            ptr3 = ptr4;
            ptr2 = *(uint64_t*)((char*)ptr0 + 76L);
        }
        while(ptr2 != 0L);
    }
    jump ptr3;
}
