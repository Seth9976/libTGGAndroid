// Stale decompilation - Refresh this view to re-decompile this code
long sub_A85D58(long param0) {
    long result;
    long v0;
    long v1;
    long v2;
    long v3 = *(long*)(param0 + 72L);
    long v4 = param0;
    if(v3 != 0L) {
        long* ptr0 = *(uint64_t*)(v4 + 80L);
        if(ptr0 == v3) {
            v1 = v3;
        }
        else {
            char* ptr1 = (char*)ptr0;
            do {
                v2 = (uint64_t)*(ptr1 - 24L);
                ptr1 -= 24L;
                if(v2 & 0x1L) {
                    operator delete(*(ptr0 - 1));
                }
                ptr0 = ptr1;
            }
            while(v3 != ptr1);
            v1 = *(long*)(v4 + 72L);
        }
        *(long*)(v4 + 80L) = v3;
        operator delete(v1);
    }
    long v5 = *(long*)(v4 + 48L);
    if(v5 != 0L) {
        long* ptr2 = *(uint64_t*)(v4 + 56L);
        if(ptr2 == v5) {
            v0 = v5;
        }
        else {
            char* ptr3 = (char*)ptr2;
            do {
                v2 = (uint64_t)*(ptr3 - 24L);
                ptr3 -= 24L;
                if(v2 & 0x1L) {
                    operator delete(*(ptr2 - 1));
                }
                ptr2 = ptr3;
            }
            while(v5 != ptr3);
            v0 = *(long*)(v4 + 48L);
        }
        *(long*)(v4 + 56L) = v5;
        operator delete(v0);
    }
    long v6 = *(long*)(v4 + 24L);
    if(v6 != 0L) {
        long* ptr4 = *(uint64_t*)(v4 + 32L);
        if(ptr4 == v6) {
            result = v6;
        }
        else {
            char* ptr5 = (char*)ptr4;
            do {
                v2 = (uint64_t)*(ptr5 - 24L);
                ptr5 -= 24L;
                if(v2 & 0x1L) {
                    operator delete(*(ptr4 - 1));
                }
                ptr4 = ptr5;
            }
            while(v6 != ptr5);
            result = *(long*)(v4 + 24L);
        }
        *(long*)(v4 + 32L) = v6;
        operator delete(result);
    }
    long v7 = *(long*)v4;
    if(v7 != 0L) {
        long* ptr6 = *(uint64_t*)(v4 + 8L);
        if(ptr6 != v7) {
            char* ptr7 = (char*)ptr6;
            do {
                v2 = (uint64_t)*(ptr7 - 24L);
                ptr7 -= 24L;
                if(v2 & 0x1L) {
                    operator delete(*(ptr6 - 1));
                }
                ptr6 = ptr7;
            }
            while(v7 != ptr7);
            *(long*)(v4 + 8L) = v7;
            return operator delete();
        }
        *(long*)(v4 + 8L) = v7;
        return operator delete();
    }
    return result;
}
