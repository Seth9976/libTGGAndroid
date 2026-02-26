// Package: Botan::Salsa20

int* Botan::Salsa20::hsalsa20(int* param0, int* param1) {
    long v0;
    int v1 = *param1;
    int v2 = *(param1 + 1);
    int v3 = *(param1 + 2);
    int v4 = *(param1 + 3);
    int v5 = *(param1 + 4);
    int v6 = *(param1 + 5);
    int v7 = *(param1 + 6);
    int v8 = *(param1 + 7);
    int v9 = *(param1 + 8);
    int v10 = *(param1 + 9);
    int v11 = *(param1 + 10);
    int v12 = *(param1 + 11);
    int v13 = *(param1 + 12);
    int v14 = *(param1 + 13);
    int v15 = *(param1 + 14);
    int v16 = *(param1 + 0xF);
    long v17 = 10L;
    do {
        int v18 = (__ror__(v13 + v1, 25)) ^ v5;
        int v19 = (__ror__(v2 + v6, 25)) ^ v10;
        int v20 = (__ror__(v11 + v7, 25)) ^ v15;
        int v21 = (__ror__(v16 + v12, 25)) ^ v4;
        int v22 = (__ror__(v18 + v1, 23)) ^ v9;
        int v23 = (__ror__(v19 + v6, 23)) ^ v14;
        int v24 = (__ror__(v11 + v20, 23)) ^ v3;
        int v25 = (__ror__(v16 + v21, 23)) ^ v8;
        int v26 = (__ror__(v18 + v22, 19)) ^ v13;
        int v27 = (__ror__(v23 + v19, 19)) ^ v2;
        int v28 = (__ror__(v20 + v24, 19)) ^ v7;
        int v29 = (__ror__(v25 + v21, 19)) ^ v12;
        int v30 = (__ror__(v26 + v22, 14)) ^ v1;
        int v31 = (__ror__(v23 + v27, 14)) ^ v6;
        int v32 = (__ror__(v28 + v24, 14)) ^ v11;
        int v33 = (__ror__(v25 + v29, 14)) ^ v16;
        v2 = (__ror__(v30 + v21, 25)) ^ v27;
        v7 = (__ror__(v18 + v31, 25)) ^ v28;
        v12 = (__ror__(v32 + v19, 25)) ^ v29;
        v13 = (__ror__(v33 + v20, 25)) ^ v26;
        v3 = (__ror__(v2 + v30, 23)) ^ v24;
        v8 = (__ror__(v7 + v31, 23)) ^ v25;
        v9 = (__ror__(v32 + v12, 23)) ^ v22;
        v14 = (__ror__(v33 + v13, 23)) ^ v23;
        v4 = (__ror__(v2 + v3, 19)) ^ v21;
        v5 = (__ror__(v7 + v8, 19)) ^ v18;
        v10 = (__ror__(v9 + v12, 19)) ^ v19;
        v15 = (__ror__(v13 + v14, 19)) ^ v20;
        v1 = (__ror__(v3 + v4, 14)) ^ v30;
        v6 = (__ror__(v5 + v8, 14)) ^ v31;
        v11 = (__ror__(v10 + v9, 14)) ^ v32;
        v0 = v17 - 1L;
        --v17;
        v16 = (__ror__(v14 + v15, 14)) ^ v33;
    }
    while(v0 != 0L);
    *param0 = v1;
    *(param0 + 1) = v6;
    *(param0 + 2) = v11;
    *(param0 + 3) = v16;
    *(param0 + 4) = v7;
    *(param0 + 5) = v8;
    *(param0 + 6) = v9;
    *(param0 + 7) = v10;
    return param0;
}
