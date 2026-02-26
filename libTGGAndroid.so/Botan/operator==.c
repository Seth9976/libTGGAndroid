// Package: Botan

long Botan::operator==(uint64_t* param0, uint64_t* param1) {
    int* ptr0 = *(param0 + 2);
    char* ptr1 = *(param0 + 3);
    int* ptr2 = *(param1 + 2);
    if((long*)((long)*(param1 + 3) - (long)ptr2) == (long*)(ptr1 - ptr0)) {
        if(ptr1 == ptr0) {
            goto loc_8BE1F8;
        }
        while(*ptr0 == *ptr2) {
            ++ptr0;
            ++ptr2;
            if(ptr1 == ptr0) {
            loc_8BE1F8:
                ptr1 = *(param0 + 5);
                ptr0 = *(param0 + 6);
                if(ptr1 == ptr0 || ((long*)((long)ptr0 - (long)ptr1) == 2L && *ptr1 == 5 && *(ptr1 + 1L) == 0)) {
                    ptr2 = *(param1 + 5);
                    long* ptr3 = *(param1 + 6);
                    if(ptr2 == ptr3 || ((long*)((long)ptr3 - (long)ptr2) == 2L && *(char*)ptr2 == 5 && *(char*)((char*)ptr2 + 1L) == 0)) {
                        return 1L;
                    }
                }
                ptr2 = *(param1 + 5);
                long* ptr4 = (long*)((long)ptr0 - (long)ptr1);
                ptr3 = (long)*(param1 + 6) - (long)ptr2;
                long result = ptr3 == ptr4;
                if(ptr3 == ptr4 && ptr1 != ptr0) {
                    do {
                        result = (uint32_t)*ptr1 == (uint32_t)*(char*)ptr2;
                        if((uint32_t)*ptr1 == (uint32_t)*(char*)ptr2) {
                            ++ptr1;
                            ptr2 = (char*)ptr2 + 1L;
                        }
                        else {
                            goto loc_8BE294;
                        }
                    }
                    while(ptr1 != ptr0);
                loc_8BE294:
                }
                return result;
            }
        }
    }
    return 0L;
}
