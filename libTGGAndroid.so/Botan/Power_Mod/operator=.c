// Package: Botan::Power_Mod

uint64_t* Botan::Power_Mod::operator=(uint64_t* param0, uint64_t* param1, long param2, long param3, long param4, long param5, long param6, long param7) {
    if(param0 != param1) {
        long* ptr0 = *(param1 + 1);
        if(ptr0 == 0L) {
            long* ptr1 = *(param0 + 1);
            *(param0 + 1) = NULL;
            if(ptr1 != 0L) {
                *(long*)(*ptr1 + 40L)((long)ptr1, (long)param1, param2, param3, param4, param5, param6, param7);
                return param0;
            }
        }
        else {
            long* ptr2 = (long*)*(long*)(*ptr0 + 24L)((long)ptr0, (long)param1, param2, param3, param4, param5, param6, param7);
            long* ptr3 = *(param0 + 1);
            *(param0 + 1) = ptr2;
            if(ptr3 != 0L) {
                *(long*)(*ptr3 + 40L)((long)ptr3);
            }
        }
    }
    return param0;
}
