void sub_B5EDB8(long param0, uint64_t* param1, long param2, long param3, long param4, long param5, long param6, long param7) {
    long* ptr0;
    long* ptr1;
    if(param1 != 0L) {
        long* ptr2 = *(param1 + 7);
        *param1 = (long*)&vftable_Botan::TLS::Certificate_Req;
        if(ptr2 != 0L) {
            *(param1 + 8) = ptr2;
            operator delete((long)ptr2, (long)param1, param2, param3, param4, param5, param6, param7);
        }
        long* ptr3 = *(param1 + 4);
        if(ptr3 != 0L) {
            long* ptr4 = *(param1 + 5);
            if(ptr4 == ptr3) {
                ptr1 = ptr3;
            }
            else {
                char* ptr5 = (char*)ptr4;
                do {
                    long v0 = (uint64_t)*(ptr5 - 24L);
                    ptr5 -= 24L;
                    if(v0 & 0x1L) {
                        operator delete(*(ptr4 - 1), (long)param1, param2, param3, param4, param5, param6, param7);
                    }
                    ptr4 = ptr5;
                }
                while(ptr3 != ptr5);
                ptr1 = *(param1 + 4);
            }
            *(param1 + 5) = ptr3;
            operator delete((long)ptr1, (long)param1, param2, param3, param4, param5, param6, param7);
        }
        long* ptr6 = *(param1 + 1);
        if(ptr6 != 0L) {
            uint64_t* ptr7 = *(uint64_t**)(param1 + 2);
            if(ptr7 == ptr6) {
                ptr0 = ptr6;
            }
            else {
                do {
                    ptr7 -= 7;
                    sub_B376A8((long)(param1 + 3), ptr7);
                }
                while(ptr7 != ptr6);
                ptr0 = *(param1 + 1);
            }
            *(param1 + 2) = ptr6;
            operator delete((long)ptr0, (long)param1, param2, param3, param4, param5, param6, param7);
        }
        operator delete((long)param1, (long)param1, param2, param3, param4, param5, param6, param7);
        return;
    }
}
