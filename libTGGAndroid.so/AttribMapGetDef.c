long AttribMapGetDef(long* param0, int* param1, long param2, uint32_t param3) {
    long* ptr0;
    long v0 = (uint64_t)*param1;
    if(*param1 >= 1) {
        ptr0 = *(long*)(param1 + 2) + 8L;
        while(*(int*)(ptr0 - 1) != param3) {
            long v1 = v0 - 1L;
            --v0;
            ptr0 += 2;
            if(v1 != 0L) {
                continue;
            }
            ptr0 = *(long*)(param3 * 8L + *(param0 + 3)) + 72L;
            return *ptr0;
        }
    }
    else {
        ptr0 = *(long*)(param3 * 8L + *(param0 + 3)) + 72L;
    }
    return *ptr0;
}
