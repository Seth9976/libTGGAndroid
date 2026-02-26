// Stale decompilation - Refresh this view to re-decompile this code
uint64_t* sub_B3410C(uint64_t* param0, uint64_t* param1, long param2, long param3, long param4, long param5, long param6, long param7) {
    long v0;
    long* ptr0;
    long* ptr0 = read_TPIDR_EL0();
    long v1 = *(ptr0 + 5);
    if(param0 == param1) {
    loc_B341DC:
        if(*(ptr0 + 5) == v1) {
            return param0;
        }
    }
    else {
        uint64_t* ptr1 = param0;
        param0 = *(param0 + 4);
        if(param0 == ptr1) {
            if(*(param1 + 4) == param1) {
                *(*param0 + 3)();
                long* ptr2 = *(ptr1 + 4);
                *(long*)(*ptr2 + 32L)((long)ptr2);
                *(ptr1 + 4) = NULL;
                long* ptr3 = *(param1 + 4);
                *(long*)(*ptr3 + 24L)((long)ptr3, (long)ptr1);
                long* ptr4 = *(param1 + 4);
                *(long*)(*ptr4 + 32L)((long)ptr4);
                *(param1 + 4) = NULL;
                *(ptr1 + 4) = ptr1;
                *(v0 + 3)((long)&v0, (long)param1);
                param0 = *(v0 + 4)((long)&v0);
            }
            else {
                *(*param0 + 3)();
                long* ptr5 = *(ptr1 + 4);
                param0 = *(long*)(*ptr5 + 32L)((long)ptr5);
                *(ptr1 + 4) = *(param1 + 4);
            }
            *(param1 + 4) = param1;
            if(*(ptr0 + 5) == v1) {
                return param0;
            }
        }
        else {
            long* ptr6 = *(param1 + 4);
            if(param1 == ptr6) {
                *(long*)(*ptr6 + 24L)((long)ptr6, (long)ptr1, param2, param3, param4, param5, param6, param7);
                long* ptr7 = *(param1 + 4);
                param0 = *(long*)(*ptr7 + 32L)((long)ptr7);
                *(param1 + 4) = *(ptr1 + 4);
                *(ptr1 + 4) = ptr1;
                goto loc_B341DC;
            }
            else {
                *(ptr1 + 4) = ptr6;
                *(param1 + 4) = param0;
                if(*(ptr0 + 5) == v1) {
                    return param0;
                }
            }
        }
    }
    /*NO_RETURN*/ __stack_chk_fail();
}
