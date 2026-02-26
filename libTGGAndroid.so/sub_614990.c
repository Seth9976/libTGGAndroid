long sub_614990(int* param0, int* param1, int* param2) {
    int v0;
    int v1;
    int v2 = *param1;
    int v3 = *(param1 + 1);
    int v4 = *param0;
    int v5 = *param2;
    int v6 = v2 != v5 ? v2 > v5: *(param2 + 1) < v3;
    if(v2 != v4 ? v2 < v4: *(param0 + 1) > v3) {
        if(v6 != 0) {
            long v7 = *(long*)param0;
            v1 = *(param0 + 2);
            long v8 = *(long*)param2;
            *(param0 + 2) = *(param2 + 2);
            *(long*)param0 = v8;
            *(param2 + 2) = v1;
            *(long*)param2 = v7;
            return 1L;
        }
        long v9 = *(long*)param0;
        v1 = *(param0 + 2);
        long v10 = *(long*)param1;
        *(param0 + 2) = *(param1 + 2);
        *(long*)param0 = v10;
        *(param1 + 2) = v1;
        *(long*)param1 = v9;
        v0 = *param2;
        if(((uint32_t)v9 == v0 ? (uint32_t)(v9 >>> 32L) > *(param2 + 1): (uint32_t)v9 > v0) == 1) {
            long v11 = *(long*)param1;
            v1 = *(param1 + 2);
            long v12 = *(long*)param2;
            *(param1 + 2) = *(param2 + 2);
            *(long*)param1 = v12;
            *(param2 + 2) = v1;
            *(long*)param2 = v11;
            return 2L;
        }
        return 1L;
    }
    if(v6 != 0) {
        long v13 = *(long*)param1;
        v1 = *(param1 + 2);
        long v14 = *(long*)param2;
        *(param1 + 2) = *(param2 + 2);
        *(long*)param1 = v14;
        *(param2 + 2) = v1;
        *(long*)param2 = v13;
        v0 = *param1;
        if((*param0 == v0 ? *(param0 + 1) > *(param1 + 1): *param0 > v0) != 1) {
            return 1L;
        }
        long v15 = *(long*)param0;
        v1 = *(param0 + 2);
        long v16 = *(long*)param1;
        *(param0 + 2) = *(param1 + 2);
        *(long*)param0 = v16;
        *(param1 + 2) = v1;
        *(long*)param1 = v15;
        return 2L;
    }
    return 0L;
}
