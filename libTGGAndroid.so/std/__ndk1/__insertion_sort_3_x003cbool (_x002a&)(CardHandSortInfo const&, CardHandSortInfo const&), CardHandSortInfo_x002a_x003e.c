// Package: std::__ndk1

void std::__ndk1::__insertion_sort_3<bool (*&)(CardHandSortInfo const&, CardHandSortInfo const&), CardHandSortInfo*>(CardHandSortInfo* param0, CardHandSortInfo* param1, bool (*&)(CardHandSortInfo const&, CardHandSortInfo const&) param2) {
    CardHandSortInfo* ptr0;
    CardHandSortInfo v0;
    CardHandSortInfo* ptr1 = (CardHandSortInfo*)((long)param0 + 32L);
    long v1 = *(long*)param2((long)(CardHandSortInfo*)((long)param0 + 16L), (long)param0, (long)param2);
    long v2 = *(long*)param2((long)ptr1, (long)(CardHandSortInfo*)((long)param0 + 16L));
    if(v1 & 0x1L) {
        v0 = *(CardHandSortInfo*)param0;
        if(v2 & 0x1L) {
            *(CardHandSortInfo*)param0 = *(CardHandSortInfo*)ptr1;
            goto loc_7BDBC0;
        }
        else {
            *(CardHandSortInfo*)param0 = *(CardHandSortInfo*)((long)param0 + 16L);
            *(CardHandSortInfo*)((long)param0 + 16L) = v0;
            v2 = *(long*)param2((long)ptr1, (long)(CardHandSortInfo*)((long)param0 + 16L));
            if(v2 & 0x1L) {
                v0 = *(CardHandSortInfo*)((long)param0 + 16L);
                *(CardHandSortInfo*)((long)param0 + 16L) = *(CardHandSortInfo*)ptr1;
            loc_7BDBC0:
                *(CardHandSortInfo*)ptr1 = v0;
            }
        }
    }
    else if(v2 & 0x1L) {
        v0 = *(CardHandSortInfo*)((long)param0 + 16L);
        *(CardHandSortInfo*)((long)param0 + 16L) = *(CardHandSortInfo*)ptr1;
        *(CardHandSortInfo*)ptr1 = v0;
        v2 = *(long*)param2((long)(CardHandSortInfo*)((long)param0 + 16L), (long)param0);
        if(v2 & 0x1L) {
            v0 = *(CardHandSortInfo*)param0;
            *(CardHandSortInfo*)param0 = *(CardHandSortInfo*)((long)param0 + 16L);
            *(CardHandSortInfo*)((long)param0 + 16L) = v0;
        }
    }
    CardHandSortInfo* ptr2 = (CardHandSortInfo*)((long)param0 + 48L);
    if(param1 != ptr2) {
        long v3 = 0L;
        do {
            CardHandSortInfo* ptr3 = ptr1;
            ptr1 = ptr2;
            v2 = *(long*)param2((long)ptr2, (long)ptr3);
            if(v2 & 0x1L) {
                long v4 = v3;
                v0 = *(CardHandSortInfo*)ptr1;
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
                    goto loc_7BDBE0;
                }
                ptr0 = (long*)((long)param0 + v4) + 6;
            loc_7BDBE0:
                *(CardHandSortInfo*)ptr0 = v0;
            }
            ptr2 = (long)ptr1 + 16L;
            v3 += 16L;
        }
        while(param1 != ptr2);
    }
}
