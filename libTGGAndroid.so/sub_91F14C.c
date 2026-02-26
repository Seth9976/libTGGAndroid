uint64_t* sub_91F14C(uint64_t* param0, long param1, long param2, long param3, long param4, long param5, long param6, long param7) {
    uint64_t* ptr0 = param0;
    param0 = *param0;
    if(param0 != 0L) {
        *(ptr0 + 1) = param0;
        operator delete((long)param0, param1, param2, param3, param4, param5, param6, param7);
        return param0;
    }
    return 0L;
}
