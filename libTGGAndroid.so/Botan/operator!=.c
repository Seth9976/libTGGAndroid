// Package: Botan

long Botan::operator!=(uint64_t* param0, uint64_t* param1) {
    int* ptr0 = *(param0 + 2);
    char* ptr1 = *(param0 + 3);
    int* ptr2 = *(param1 + 2);
    if((long*)((long)*(param1 + 3) - (long)ptr2) == (long*)(ptr1 - ptr0)) {
        if(ptr1 == ptr0) {
            goto loc_8BE2E8;
        }
        while(*ptr0 == *ptr2) {
            ++ptr0;
            ++ptr2;
            if(ptr1 == ptr0) {
            loc_8BE2E8:
                ptr1 = *(param0 + 5);
                ptr0 = *(param0 + 6);
                if(ptr1 == ptr0 || ((long*)((long)ptr0 - (long)ptr1) == 2L && *ptr1 == 5 && *(ptr1 + 1L) == 0)) {
                    char* ptr3 = *(param1 + 5);
                    char* ptr4 = *(param1 + 6);
                    if(ptr3 == ptr4 || ((long*)(ptr4 - ptr3) == 2L && *ptr3 == 5 && *(ptr3 + 1L) == 0)) {
                        return 0L;
                    }
                }
                ptr4 = *(param1 + 5);
                long* ptr5 = (long*)((long)*(param1 + 6) - (long)ptr4);
                ptr2 = (long*)((long)ptr0 - (long)ptr1) != ptr5 ? NULL: &g1;
                if(ptr1 != ptr0 && (long*)((long)ptr0 - (long)ptr1) == ptr5) {
                    do {
                        int v0 = (uint32_t)*ptr1;
                        ptr2 = (uint32_t)*ptr4 != v0 ? NULL: &g1;
                        if((uint32_t)*ptr4 == v0) {
                            ++ptr1;
                            ++ptr4;
                        }
                        else {
                            goto loc_8BE38C;
                        }
                    }
                    while(ptr1 != ptr0);
                }
            loc_8BE38C:
                return (uint64_t)((uint32_t)ptr2 ^ 1);
            }
        }
    }
    return 1L;
}
