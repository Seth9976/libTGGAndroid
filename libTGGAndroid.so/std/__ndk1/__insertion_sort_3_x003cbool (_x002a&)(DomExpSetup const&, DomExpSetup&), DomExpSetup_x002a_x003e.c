// Package: std::__ndk1

void std::__ndk1::__insertion_sort_3<bool (*&)(DomExpSetup const&, DomExpSetup&), DomExpSetup*>(DomExpSetup* param0, DomExpSetup* param1, bool (*&)(DomExpSetup const&, DomExpSetup&) param2) {
    DomExpSetup* ptr0;
    DomExpSetup v0;
    DomExpSetup* ptr1 = (DomExpSetup*)((long)param0 + 32L);
    long v1 = *(long*)param2((long)(DomExpSetup*)((long)param0 + 16L), (long)param0, (long)param2);
    long v2 = *(long*)param2((long)ptr1, (long)(DomExpSetup*)((long)param0 + 16L));
    if(v1 & 0x1L) {
        v0 = *(DomExpSetup*)param0;
        if(v2 & 0x1L) {
            *(DomExpSetup*)param0 = *(DomExpSetup*)ptr1;
            goto loc_7C1F50;
        }
        else {
            *(DomExpSetup*)param0 = *(DomExpSetup*)((long)param0 + 16L);
            *(DomExpSetup*)((long)param0 + 16L) = v0;
            v2 = *(long*)param2((long)ptr1, (long)(DomExpSetup*)((long)param0 + 16L));
            if(v2 & 0x1L) {
                v0 = *(DomExpSetup*)((long)param0 + 16L);
                *(DomExpSetup*)((long)param0 + 16L) = *(DomExpSetup*)ptr1;
            loc_7C1F50:
                *(DomExpSetup*)ptr1 = v0;
            }
        }
    }
    else if(v2 & 0x1L) {
        v0 = *(DomExpSetup*)((long)param0 + 16L);
        *(DomExpSetup*)((long)param0 + 16L) = *(DomExpSetup*)ptr1;
        *(DomExpSetup*)ptr1 = v0;
        v2 = *(long*)param2((long)(DomExpSetup*)((long)param0 + 16L), (long)param0);
        if(v2 & 0x1L) {
            v0 = *(DomExpSetup*)param0;
            *(DomExpSetup*)param0 = *(DomExpSetup*)((long)param0 + 16L);
            *(DomExpSetup*)((long)param0 + 16L) = v0;
        }
    }
    DomExpSetup* ptr2 = (DomExpSetup*)((long)param0 + 48L);
    if(param1 != ptr2) {
        long v3 = 0L;
        do {
            DomExpSetup* ptr3 = ptr1;
            ptr1 = ptr2;
            v2 = *(long*)param2((long)ptr2, (long)ptr3);
            if(v2 & 0x1L) {
                long v4 = v3;
                v0 = *(DomExpSetup*)ptr1;
                while(1) {
                    __int128* ptr4 = (__int128*)((long)param0 + v4);
                    *(ptr4 + 3) = *(ptr4 + 2);
                    if(v4 != -32L) {
                        v2 = *(long*)param2((long)&v0, (long)(long*)(ptr4 + 1));
                        v4 -= 16L;
                        if(v2 & 0x1L) {
                            continue;
                        }
                        break;
                    }
                    ptr0 = param0;
                    goto loc_7C1F70;
                }
                ptr0 = (long*)((long)param0 + v4) + 6;
            loc_7C1F70:
                *(DomExpSetup*)ptr0 = v0;
            }
            ptr2 = (long)ptr1 + 16L;
            v3 += 16L;
        }
        while(param1 != ptr2);
    }
}
