// Package: Botan::CTR_BE

uint64_t* Botan::CTR_BE::add_counter(uint64_t* param0, uint64_t* param1) {
    uint64_t* ptr0;
    uint64_t* ptr1;
    uint64_t* ptr2;
    uint64_t* ptr3;
    long* ptr4;
    uint64_t* ptr5;
    uint64_t* ptr6;
    int v0;
    uint64_t* ptr7 = *(param0 + 3);
    long* ptr8 = *(param0 + 4);
    uint64_t* ptr9 = *(param0 + 2);
    if(ptr7 != 4L) {
        if(ptr7 != 8L) {
            if(ptr7 == 16L) {
                if(ptr8 != 0L) {
                    uint64_t* ptr10 = *(param0 + 5);
                    long* ptr11 = *(uint64_t*)((long)(ptr9 - 2) + (long)ptr10);
                    long* ptr12 = *((uint64_t*)((long)ptr9 + (long)ptr10) - 1);
                    uint64_t* ptr13 = (uint64_t)(uint8_t)(long*)((long)ptr11 >>> 56L) | ((uint64_t)(uint8_t)(long*)((long)ptr11 >>> 48L) << 8) | ((uint64_t)(uint8_t)(long*)((long)ptr11 >>> 40L) << 16) | ((uint64_t)(uint8_t)(long*)((long)ptr11 >>> 32L) << 24) | ((uint64_t)(uint8_t)(long*)((long)ptr11 >>> 24L) << 32) | ((uint64_t)(uint8_t)(long*)((long)ptr11 >>> 16L) << 40) | ((uint64_t)(uint8_t)(long*)((long)ptr11 >>> 8L) << 48) | ((uint64_t)(uint8_t)ptr11 << 56);
                    ptr7 = (uint64_t)(uint8_t)(long*)((long)ptr12 >>> 56L) | ((uint64_t)(uint8_t)(long*)((long)ptr12 >>> 48L) << 8) | ((uint64_t)(uint8_t)(long*)((long)ptr12 >>> 40L) << 16) | ((uint64_t)(uint8_t)(long*)((long)ptr12 >>> 32L) << 24) | ((uint64_t)(uint8_t)(long*)((long)ptr12 >>> 24L) << 32) | ((uint64_t)(uint8_t)(long*)((long)ptr12 >>> 16L) << 40) | ((uint64_t)(uint8_t)(long*)((long)ptr12 >>> 8L) << 48) | ((uint64_t)(uint8_t)ptr12 << 56);
                    ptr6 = (long)param1 + (long)ptr7;
                    ptr5 = param1 > ptr6 ? (uint64_t*)((char*)ptr13 + 1L): ptr13;
                    *(uint64_t*)((long)(ptr9 - 2) + (long)ptr10) = (uint64_t)(uint8_t)(long*)((long)ptr5 >>> 56L) | ((uint64_t)(uint8_t)(long*)((long)ptr5 >>> 48L) << 8) | ((uint64_t)(uint8_t)(long*)((long)ptr5 >>> 40L) << 16) | ((uint64_t)(uint8_t)(long*)((long)ptr5 >>> 32L) << 24) | ((uint64_t)(uint8_t)(long*)((long)ptr5 >>> 24L) << 32) | ((uint64_t)(uint8_t)(long*)((long)ptr5 >>> 16L) << 40) | ((uint64_t)(uint8_t)(long*)((long)ptr5 >>> 8L) << 48) | ((uint64_t)(uint8_t)ptr5 << 56);
                    ptr4 = (char*)ptr8 - 1L;
                    ptr8 = (char*)ptr8 - 1L;
                    *((uint64_t*)((long)*(param0 + 5) + (long)ptr9) - 1) = (uint64_t)(uint8_t)(long*)((long)ptr6 >>> 56L) | ((uint64_t)(uint8_t)(long*)((long)ptr6 >>> 48L) << 8) | ((uint64_t)(uint8_t)(long*)((long)ptr6 >>> 40L) << 16) | ((uint64_t)(uint8_t)(long*)((long)ptr6 >>> 32L) << 24) | ((uint64_t)(uint8_t)(long*)((long)ptr6 >>> 24L) << 32) | ((uint64_t)(uint8_t)(long*)((long)ptr6 >>> 16L) << 40) | ((uint64_t)(uint8_t)(long*)((long)ptr6 >>> 8L) << 48) | ((uint64_t)(uint8_t)ptr6 << 56);
                    if(ptr4 != 0L) {
                        ptr3 = (long)ptr9 * 2L;
                        ptr7 = (char*)((long)param1 + (long)ptr7) + 1L;
                        do {
                            ptr5 = ptr7 ? ptr5: (uint64_t*)((char*)ptr5 + 1L);
                            *((uint64_t*)((long)*(param0 + 5) + (long)ptr3) - 2) = (uint64_t)(uint8_t)(long*)((long)ptr5 >>> 56L) | ((uint64_t)(uint8_t)(long*)((long)ptr5 >>> 48L) << 8) | ((uint64_t)(uint8_t)(long*)((long)ptr5 >>> 40L) << 16) | ((uint64_t)(uint8_t)(long*)((long)ptr5 >>> 32L) << 24) | ((uint64_t)(uint8_t)(long*)((long)ptr5 >>> 24L) << 32) | ((uint64_t)(uint8_t)(long*)((long)ptr5 >>> 16L) << 40) | ((uint64_t)(uint8_t)(long*)((long)ptr5 >>> 8L) << 48) | ((uint64_t)(uint8_t)ptr5 << 56);
                            ptr2 = (uint64_t)(uint8_t)(long*)((long)ptr7 >>> 56L) | ((uint64_t)(uint8_t)(long*)((long)ptr7 >>> 48L) << 8) | ((uint64_t)(uint8_t)(long*)((long)ptr7 >>> 40L) << 16) | ((uint64_t)(uint8_t)(long*)((long)ptr7 >>> 32L) << 24) | ((uint64_t)(uint8_t)(long*)((long)ptr7 >>> 24L) << 32) | ((uint64_t)(uint8_t)(long*)((long)ptr7 >>> 16L) << 40) | ((uint64_t)(uint8_t)(long*)((long)ptr7 >>> 8L) << 48) | ((uint64_t)(uint8_t)ptr7 << 56);
                            ptr4 = (char*)ptr8 - 1L;
                            ptr8 = (char*)ptr8 - 1L;
                            ptr7 = (char*)ptr7 + 1L;
                            ptr1 = (long)*(param0 + 5) + (long)ptr3;
                            ptr3 = (long)ptr9 + (long)ptr3;
                            *(ptr1 - 1) = ptr2;
                        }
                        while(ptr4 != 0L);
                    }
                }
            }
            else if(ptr8 != 0L && ((uint8_t)param1 != 0 || param1 != 0L) && ptr7 != 0L) {
                ptr3 = NULL;
                ptr7 = (char*)ptr7 - 1L;
                ptr1 = (char*)ptr9 - 1L;
                do {
                    ptr2 = ptr1;
                    uint64_t* ptr14 = ptr7;
                    int v1 = (uint32_t)(uint8_t)param1;
                    ptr6 = param1;
                    do {
                        uint64_t* ptr15 = *(param0 + 5);
                        ptr0 = ptr14;
                        ptr6 = (long)ptr6 >>> 8L;
                        ptr14 = (uint64_t)((uint32_t)*(uint8_t*)((long)ptr15 + (long)ptr2) + v1);
                        v1 = (uint32_t)(uint8_t)__ror__((uint32_t)*(uint8_t*)((long)ptr15 + (long)ptr2) + v0, 8) + (uint32_t)(uint8_t)ptr6;
                        *(uint8_t*)((long)ptr15 + (long)ptr2) = (uint8_t)ptr14;
                        if(v1 == 0 && ptr6 == 0L) {
                            break;
                        }
                        ptr14 = (char*)ptr0 - 1L;
                        ptr2 = (char*)ptr2 - 1L;
                    }
                    while(ptr0 != 0L);
                    ptr3 = (char*)ptr3 + 1L;
                    ptr1 = (long)ptr9 + (long)ptr1;
                }
                while(ptr8 != ptr3);
            }
        }
        else if(ptr8 != 0L) {
            ptr3 = *(param0 + 5);
            ptr4 = (char*)ptr8 - 1L;
            ptr8 = (char*)ptr8 - 1L;
            long* ptr16 = *(uint64_t*)((long)(ptr9 - 1) + (long)ptr3);
            ptr5 = (uint64_t)(uint8_t)(long*)((long)ptr16 >>> 56L) | ((uint64_t)(uint8_t)(long*)((long)ptr16 >>> 48L) << 8) | ((uint64_t)(uint8_t)(long*)((long)ptr16 >>> 40L) << 16) | ((uint64_t)(uint8_t)(long*)((long)ptr16 >>> 32L) << 24) | ((uint64_t)(uint8_t)(long*)((long)ptr16 >>> 24L) << 32) | ((uint64_t)(uint8_t)(long*)((long)ptr16 >>> 16L) << 40) | ((uint64_t)(uint8_t)(long*)((long)ptr16 >>> 8L) << 48) | ((uint64_t)(uint8_t)ptr16 << 56);
            uint64_t* ptr17 = (uint64_t*)((long)param1 + (long)ptr5);
            *(uint64_t*)((long)(ptr9 - 1) + (long)ptr3) = (uint64_t)(uint8_t)(long*)((long)ptr17 >>> 56L) | ((uint64_t)(uint8_t)(long*)((long)ptr17 >>> 48L) << 8) | ((uint64_t)(uint8_t)(long*)((long)ptr17 >>> 40L) << 16) | ((uint64_t)(uint8_t)(long*)((long)ptr17 >>> 32L) << 24) | ((uint64_t)(uint8_t)(long*)((long)ptr17 >>> 24L) << 32) | ((uint64_t)(uint8_t)(long*)((long)ptr17 >>> 16L) << 40) | ((uint64_t)(uint8_t)(long*)((long)ptr17 >>> 8L) << 48) | ((uint64_t)(uint8_t)ptr17 << 56);
            if(ptr4 != 0L) {
                ptr5 = (char*)((long)param1 + (long)ptr5) + 1L;
                ptr3 = (uint64_t*)((long)ptr9 * 2L) - 1;
                do {
                    ptr1 = (uint64_t)(uint8_t)(long*)((long)ptr5 >>> 56L) | ((uint64_t)(uint8_t)(long*)((long)ptr5 >>> 48L) << 8) | ((uint64_t)(uint8_t)(long*)((long)ptr5 >>> 40L) << 16) | ((uint64_t)(uint8_t)(long*)((long)ptr5 >>> 32L) << 24) | ((uint64_t)(uint8_t)(long*)((long)ptr5 >>> 24L) << 32) | ((uint64_t)(uint8_t)(long*)((long)ptr5 >>> 16L) << 40) | ((uint64_t)(uint8_t)(long*)((long)ptr5 >>> 8L) << 48) | ((uint64_t)(uint8_t)ptr5 << 56);
                    ptr5 = (char*)ptr5 + 1L;
                    ptr4 = (char*)ptr8 - 1L;
                    ptr8 = (char*)ptr8 - 1L;
                    *(uint64_t*)((long)*(param0 + 5) + (long)ptr3) = ptr1;
                    ptr3 = (long)ptr9 + (long)ptr3;
                }
                while(ptr4 != 0L);
            }
        }
    }
    else if(ptr8 != 0L) {
        ptr3 = *(param0 + 5);
        ptr4 = (char*)ptr8 - 1L;
        ptr8 = (char*)ptr8 - 1L;
        long v2 = (uint64_t)*(uint32_t*)((long)(uint64_t*)((char*)ptr9 - 4L) + (long)ptr3);
        long v3 = (uint64_t)((uint32_t)param1 + ((uint32_t)(uint8_t)(v2 >>> 24L) | ((uint32_t)(uint8_t)(v2 >>> 16L) << 8) | ((uint32_t)(uint8_t)(v2 >>> 8L) << 16) | ((uint32_t)(uint8_t)v2 << 24)));
        *(uint32_t*)((long)(uint64_t*)((char*)ptr9 - 4L) + (long)ptr3) = (uint32_t)(uint8_t)(v3 >>> 24L) | ((uint32_t)(uint8_t)(v3 >>> 16L) << 8) | ((uint32_t)(uint8_t)(v3 >>> 8L) << 16) | ((uint32_t)(uint8_t)v3 << 24);
        if(ptr4 != 0L) {
            ptr5 = (uint64_t)((uint32_t)param1 + ((uint32_t)(uint8_t)(v2 >>> 24L) | ((uint32_t)(uint8_t)(v2 >>> 16L) << 8) | ((uint32_t)(uint8_t)(v2 >>> 8L) << 16) | ((uint32_t)(uint8_t)v2 << 24)) + 1);
            ptr3 = (char*)((long)ptr9 * 2L) - 4L;
            do {
                ptr1 = (uint64_t)((uint32_t)(uint8_t)(long*)((long)ptr5 >>> 24L) | ((uint32_t)(uint8_t)(long*)((long)ptr5 >>> 16L) << 8) | ((uint32_t)(uint8_t)(long*)((long)ptr5 >>> 8L) << 16) | ((uint32_t)(uint8_t)ptr5 << 24));
                ptr5 = (uint64_t)((uint32_t)ptr5 + 1);
                ptr4 = (char*)ptr8 - 1L;
                ptr8 = (char*)ptr8 - 1L;
                *(uint32_t*)((long)*(param0 + 5) + (long)ptr3) = (uint32_t)ptr1;
                ptr3 = (long)ptr9 + (long)ptr3;
            }
            while(ptr4 != 0L);
        }
    }
    return param0;
}
