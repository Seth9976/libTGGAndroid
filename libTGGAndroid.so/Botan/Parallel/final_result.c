// Package: Botan::Parallel

uint64_t* Botan::Parallel::final_result(uint64_t* param0, long param1) {
    uint64_t* ptr0 = *(param0 + 1);
    long* ptr1 = *(param0 + 2);
    if(ptr0 != ptr1) {
        uint64_t* ptr2 = NULL;
        do {
            long* ptr3 = *ptr0;
            *(long*)(*ptr3 + 32L)((long)ptr3, (long)(uint64_t*)(param1 + (long)ptr2));
            uint64_t* ptr4 = *ptr0;
            ++ptr0;
            param0 = **ptr4((long)ptr4);
            ptr2 = (long)param0 + (long)ptr2;
        }
        while(ptr0 != ptr1);
    }
    return param0;
}
