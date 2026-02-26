int* sub_612940(int* param0, char* param1, int* param2, uint32_t param3) {
    int v0;
    long* ptr0;
    int v1;
    if((int)param3 >= 1) {
        long* ptr1 = param3;
        int* ptr2 = param2;
        char* ptr3 = param1;
        int* ptr4 = param0;
        long v2 = 0L;
        long* ptr5 = ptr1;
        char* ptr6 = param1;
        int* ptr7 = param0;
        do {
            if(*ptr6 == 0) {
                *(int*)((long)(uint32_t)v2 * 4L + (long)&v1) = *ptr7;
                v2 = (uint64_t)((uint32_t)v2 + 1);
            }
            ++ptr7;
            ptr0 = (char*)ptr5 - 1L;
            ptr5 = (char*)ptr5 - 1L;
            ++ptr6;
        }
        while(ptr0 != 0L);
        do {
            if(*ptr3 == 0) {
                param0 = RandomInt2(&gvar_10B71E8, (uint64_t)(uint32_t)v2);
                v2 = (long)(uint32_t)v2 - 1L;
                v0 = *(int*)((long)(long*)((long)(long*)((long)(long*)__ror__((long)param0, 62L) & 0x3fffffffcL) | ((long*)((long)(long*)((long)param0 >>> 31L) & 0x1L) ? 0xfffffffc00000000L: 0L)) + (long)&v1);
                *(int*)((long)(long*)((long)(long*)((long)(long*)__ror__((long)param0, 62L) & 0x3fffffffcL) | ((long*)((long)(long*)((long)param0 >>> 31L) & 0x1L) ? 0xfffffffc00000000L: 0L)) + (long)&v1) = *(int*)(v2 * 4L + (long)&v1);
            }
            else {
                v0 = *ptr4;
            }
            *ptr2 = v0;
            ++ptr2;
            ++ptr4;
            ptr0 = (char*)ptr1 - 1L;
            ptr1 = (char*)ptr1 - 1L;
            ++ptr3;
        }
        while(ptr0 != 0L);
    }
    return param0;
}
