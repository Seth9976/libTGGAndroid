int* TestPair(int* param0, int param1, int param2, int param3, int param4, int* param5) {
    int v0;
    int v1;
    long v2;
    long v3;
    int* ptr0;
    int v4;
    long v5;
    if(param1 == param2) {
        v5 = (uint64_t)*(param0 + 1354);
        if(*(param0 + 1354) >= 1) {
            if(*(param0 + 1692) == param3) {
            loc_6FF9C4:
                int* ptr1 = (int*)(*(param5 + 516) * 1032L + (long)param5);
                v4 = *(ptr1 + 0x100);
                *(ptr1 + 0x101) = param4;
                *(ptr1 + 0x100) = v4 + 1;
                *(int*)((long)(long*)((long)v4 * 4L) + (long)ptr1) = param3;
                ++*(param5 + 516);
            }
            else {
                ptr0 = param0 + 0x6b6;
                v3 = 1L;
                do {
                    v2 = v3;
                    if(v5 == v3) {
                        break;
                    }
                    v1 = *ptr0;
                    ptr0 += 26;
                    v3 = v2 + 1L;
                }
                while(param3 != v1);
                if(v5 > v2) {
                    goto loc_6FF9C4;
                }
            }
        }
    }
    if(param1 == param3) {
        v5 = (uint64_t)*(param0 + 1354);
        if(*(param0 + 1354) >= 1) {
            if(*(param0 + 1692) == param2) {
            loc_6FFA40:
                int* ptr2 = (int*)(*(param5 + 516) * 1032L + (long)param5);
                v4 = *(ptr2 + 0x100);
                *(ptr2 + 0x101) = param4;
                *(ptr2 + 0x100) = v4 + 1;
                *(int*)((long)(long*)((long)v4 * 4L) + (long)ptr2) = param2;
                ++*(param5 + 516);
            }
            else {
                ptr0 = param0 + 0x6b6;
                v3 = 1L;
                do {
                    v2 = v3;
                    if(v5 == v3) {
                        break;
                    }
                    v0 = *ptr0;
                    ptr0 += 26;
                    v3 = v2 + 1L;
                }
                while(param2 != v0);
                if(v5 > v2) {
                    goto loc_6FFA40;
                }
            }
        }
    }
    return param0;
}
