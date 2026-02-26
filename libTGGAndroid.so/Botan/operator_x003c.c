// Package: Botan

long Botan::operator<(uint64_t* param0, uint64_t* param1) {
    int* ptr0 = *(param1 + 1);
    long* ptr1 = *(param1 + 2);
    if(ptr0 != ptr1) {
        int* ptr2 = *(param0 + 1);
        long* ptr3 = *(param0 + 2);
        while(ptr3 != ptr2) {
            int v0 = *ptr2;
            int v1 = *ptr0;
            if(*ptr0 > v0) {
                return 1L;
            }
            if(v0 <= v1) {
                ++ptr0;
                ++ptr2;
                if(ptr0 != ptr1) {
                    continue;
                }
            }
            return 0L;
        }
        return 1L;
    }
    return 0L;
}
