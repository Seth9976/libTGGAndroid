// Package: std::__ndk1

void std::__ndk1::__insertion_sort_3<bool (*&)(DomGfx const*, DomGfx const*), DomGfx**>(DomGfx** param0, DomGfx** param1, bool (*&)(DomGfx const*, DomGfx const*) param2) {
    DomGfx** ptr0;
    DomGfx** ptr1 = param1;
    long v0 = *(long*)param2((long)param0[1], (long)param0[0], (long)param2);
    DomGfx** ptr2 = param0 + 2;
    long v1 = *(long*)param2((long)param0[2], (long)param0[1]);
    if(v0 & 0x1L) {
        param1 = param0[0];
        if(v1 & 0x1L) {
            DomGfx* ptr3 = param0[2];
            param0[2] = (DomGfx*)param1;
            param0[0] = ptr3;
        }
        else {
            DomGfx* ptr4 = param0[2];
            param0[0] = param0[1];
            param0[1] = (DomGfx*)param1;
            v1 = *(long*)param2((long)ptr4, (long)param1);
            if(v1 & 0x1L) {
                DomGfx* ptr5 = *(__int128*)&param0[1];
                *(__int128*)&param0[1] = (DomGfx*)(((__SyntheticTypeUnknownU)ptr5 | ((__SyntheticTypeUnknownU)ptr5 << 128)) >>> 0x40X);
            }
        }
    }
    else if(v1 & 0x1L) {
        DomGfx* ptr6 = *(__int128*)&param0[1];
        DomGfx* ptr7 = param0[0];
        *(__int128*)&param0[1] = (DomGfx*)(((__SyntheticTypeUnknownU)ptr6 | ((__SyntheticTypeUnknownU)ptr6 << 128)) >>> 0x40X);
        v1 = *(long*)param2((uint64_t)(long*)((long)ptr6 >>> 0x40X), (long)ptr7);
        if(v1 & 0x1L) {
            DomGfx* ptr8 = *(__int128*)&param0[0];
            *(__int128*)&param0[0] = (DomGfx*)(((__SyntheticTypeUnknownU)ptr8 | ((__SyntheticTypeUnknownU)ptr8 << 128)) >>> 0x40X);
        }
    }
    DomGfx** ptr9 = param0 + 3;
    if(ptr9 != ptr1) {
        long v2 = 0L;
        do {
            DomGfx* ptr10 = ptr2[0];
            ptr2 = ptr9;
            v1 = *(long*)param2((long)ptr2[0], (long)ptr10);
            if(v1 & 0x1L) {
                DomGfx* ptr11 = ptr2[0];
                long v3 = v2;
                while(1) {
                    long* ptr12 = (long*)((long)param0 + v3);
                    *(ptr12 + 3) = *(ptr12 + 2);
                    if(v3 != -16L) {
                        v1 = *(long*)param2((long)ptr11, *(ptr12 + 1));
                        v3 -= 8L;
                        if(v1 & 0x1L) {
                            continue;
                        }
                        break;
                    }
                    ptr0 = param0;
                    goto loc_7C4BB0;
                }
                ptr0 = (long*)((long)param0 + v3) + 3;
            loc_7C4BB0:
                ptr0[0] = ptr11;
            }
            ptr9 = ptr2 + 1;
            v2 += 8L;
        }
        while(ptr9 != ptr1);
    }
}
