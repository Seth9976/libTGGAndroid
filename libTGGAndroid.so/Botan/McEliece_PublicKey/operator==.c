// Package: Botan::McEliece_PublicKey

long Botan::McEliece_PublicKey::operator==(uint64_t* param0, uint64_t* param1) {
    char* ptr0 = *(param0 + 1);
    long* ptr1 = *(param0 + 2);
    char* ptr2 = *(param1 + 1);
    if((long*)((long)*(param1 + 2) - (long)ptr2) == (long*)((long)ptr1 - (long)ptr0)) {
        if(ptr1 == ptr0) {
        loc_9B57D8:
            if(*(param0 + 4) == *(param1 + 4)) {
                return *(param0 + 5) == *(param1 + 5);
            }
        }
        else {
            while((uint32_t)*ptr0 == (uint32_t)*ptr2) {
                ++ptr0;
                ++ptr2;
                if(ptr1 != ptr0) {
                    continue;
                }
                goto loc_9B57D8;
            }
        }
    }
    return 0L;
}
