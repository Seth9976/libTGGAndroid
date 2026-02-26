// Package: Botan::Filter

uint64_t* Botan::Filter::attach(uint64_t* param0, long* param1) {
    if(param1 != 0L) {
        uint64_t* ptr0 = *(param0 + 4);
        long* ptr1 = *(param0 + 7);
        if((long*)((long)(uint64_t*)((long)*(param0 + 5) - (long)ptr0) >> 3L) > ptr1) {
            do {
                uint64_t* ptr2 = *(uint64_t*)((long)(uint64_t*)((long)ptr1 * 8L) + (long)ptr0);
                if(ptr2 == 0L) {
                    goto loc_9896FC;
                }
                else {
                    ptr0 = *(ptr2 + 4);
                    ptr1 = *(ptr2 + 7);
                }
            }
            while((long*)((long)(uint64_t*)((long)*(ptr2 + 5) - (long)ptr0) >> 3L) > ptr1);
        loc_9896FC:
        }
        *(uint64_t*)((long)(uint64_t*)((long)ptr1 * 8L) + (long)ptr0) = param1;
    }
    return param0;
}
