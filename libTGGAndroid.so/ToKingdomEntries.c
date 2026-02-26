long ToKingdomEntries(int param0, __int128* param1, __int128* param2) {
    __int128 v0 = *(param1 + 1);
    *param2 = *param1;
    *(param2 + 1) = v0;
    __int128 v1 = *(param1 + 5);
    __int128 v2 = *(param1 + 2);
    __int128 v3 = *(param1 + 3);
    *(param2 + 4) = *(param1 + 4);
    *(param2 + 5) = v1;
    *(param2 + 2) = v2;
    *(param2 + 3) = v3;
    __int128 v4 = *(param1 + 9);
    __int128 v5 = *(param1 + 6);
    __int128 v6 = *(param1 + 7);
    *(param2 + 8) = *(param1 + 8);
    *(param2 + 9) = v4;
    *(param2 + 6) = v5;
    *(param2 + 7) = v6;
    int v7 = *(int*)param1;
    if(*(int*)param1 != 0) {
        if(*(int*)(param1 + 1) == 0) {
            v7 = 1;
        }
        else if(*(int*)(param1 + 2) == 0) {
            v7 = 2;
        }
        else if(*(int*)(param1 + 3) == 0) {
            v7 = 3;
        }
        else if(*(int*)(param1 + 4) == 0) {
            v7 = 4;
        }
        else if(*(int*)(param1 + 5) == 0) {
            v7 = 5;
        }
        else if(*(int*)(param1 + 6) == 0) {
            v7 = 6;
        }
        else if(*(int*)(param1 + 7) == 0) {
            v7 = 7;
        }
        else if(*(int*)(param1 + 8) != 0) {
            v7 = *(int*)(param1 + 9) ? -1: 9;
        }
        else {
            v7 = 8;
        }
    }
    long v8 = 0L;
    long* ptr0 = (long*)((char*)param2 + 4L);
    do {
        int* ptr1 = (int*)(v8 * 16L + (long)param1);
        if(*(ptr1 + 628) >= 1) {
            long v9 = 0L;
            int* ptr2 = ptr1 + 628;
            ptr1 += 0x272;
            long v10 = v7;
            param2 = v7 * 16L + (long)ptr0;
            do {
                *(int*)((char*)param2 - 4L) = 2;
                *(int*)param2 = *ptr1 != 18 ? *ptr1 + 5118: 0x1416;
                long v11 = v9 + v10 - 8L;
                ++v9;
                *(int*)((char*)param2 + 4L) = *ptr1;
                if(v11 > 0L) {
                    break;
                }
                ++param2;
            }
            while((uint32_t)v9 < *ptr2);
            v7 = (uint32_t)v9 + param0;
        }
        if(v8 > 30L) {
            break;
        }
        ++v8;
    }
    while(v7 < 10);
    return (uint64_t)v7;
}
