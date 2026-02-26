// Package: Botan::polyn_gf2m

long Botan::polyn_gf2m::operator==(uint32_t* param0, uint32_t* param1) {
    long result;
    if(*param0 == *param1) {
        short* ptr0 = *(uint64_t*)(param0 + 2);
        long* ptr1 = *(uint64_t*)(param0 + 4);
        short* ptr2 = *(uint64_t*)(param1 + 2);
        if((long*)((long)*(uint64_t*)(param1 + 4) - (long)ptr2) == (long*)((long)ptr1 - (long)ptr0)) {
            if(ptr1 != ptr0) {
                do {
                    result = (uint32_t)*ptr0 == (uint32_t)*ptr2;
                    if((uint32_t)*ptr0 != (uint32_t)*ptr2) {
                        return result;
                    }
                    ++ptr0;
                    ++ptr2;
                }
                while(ptr1 != ptr0);
                return result;
            }
            return 1L;
        }
    }
    return 0L;
}
