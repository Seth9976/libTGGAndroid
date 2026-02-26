int TestList(int param0, int* param1, uint32_t param2, int param3, int* param4) {
    int* ptr0;
    if((int)param2 >= 1) {
        int v0 = *param1;
        if(param0 == v0) {
        loc_6FFAA8:
            ptr0 = param1 + 1;
            long v1 = param2 - 1L;
            if(param0 == v0) {
            loc_6FFADC:
                while(v1 != 0L) {
                    v0 = *ptr0;
                    ++ptr0;
                    --v1;
                    if(param0 != v0) {
                        int* ptr1 = (int*)(*(param4 + 516) * 1032L + (long)param4);
                        int v2 = *(ptr1 + 0x100);
                        *(ptr1 + 0x101) = param3;
                        *(ptr1 + 0x100) = v2 + 1;
                        *(int*)(v2 * 4L + (long)ptr1) = v0;
                    }
                }
                ++*(param4 + 516);
                return param0;
            }
            int* ptr1 = (int*)(*(param4 + 516) * 1032L + (long)param4);
            int v2 = *(ptr1 + 0x100);
            *(ptr1 + 0x101) = param3;
            *(ptr1 + 0x100) = v2 + 1;
            *(int*)(v2 * 4L + (long)ptr1) = v0;
            goto loc_6FFADC;
        }
        else {
            int* ptr2 = (int*)&g1;
            do {
                ptr0 = ptr2;
                if(param2 == ptr2) {
                    break;
                }
                ptr2 = (char*)ptr0 + 1L;
            }
            while(*(int*)((long)(long*)((long)ptr0 * 4L) + (long)param1) != param0);
            if(param2 > (uint64_t)ptr0) {
                goto loc_6FFAA8;
            }
        }
    }
    return param0;
}
