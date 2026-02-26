// Package: Botan

void Botan::bigint_mod_sub_n<4ul>(unsigned int* param0, unsigned int const* param1, unsigned int const* param2, unsigned int* param3) {
    unsigned int v0 = param0[0];
    unsigned int v1 = param0[1];
    unsigned int const v2 = *(unsigned int const*)param1;
    unsigned int const v3 = *(unsigned int const*)((long)param1 + 4L);
    unsigned int v4 = param0[2];
    unsigned int v5 = param0[3];
    unsigned int const v6 = *(unsigned int const*)((long)param1 + 8L);
    unsigned int const v7 = *(unsigned int const*)((long)param1 + 12L);
    unsigned int const v8 = *(unsigned int const*)param2;
    uint32_t v9 = v1 ^ v3;
    uint32_t v10 = v4 ^ v6;
    uint32_t v11 = v0 ^ v2;
    unsigned int v12 = (unsigned int)(v8 - v2);
    uint32_t v13 = v5 ^ v7;
    param3[0] = v12;
    unsigned int const v14 = *(unsigned int const*)((long)param1 + 4L);
    int v15 = v2 > v8;
    unsigned int const v16 = *(unsigned int const*)((long)param2 + 4L);
    int v17 = v16 - v14;
    param3[1] = (unsigned int)(v17 - v15);
    unsigned int const v18 = *(unsigned int const*)((long)param2 + 8L);
    unsigned int const v19 = *(unsigned int const*)((long)param1 + 8L);
    param3[2] = (unsigned int)(v18 - v19 - (v14 > v16 | v15 > v17));
    param3[3] = (unsigned int)(*(unsigned int const*)((long)param2 + 12L) - *(unsigned int const*)((long)param1 + 12L) - (v18 - v19 < (v14 > v16 | v15 > v17) | v18 < v19));
    unsigned int v20 = param0[0];
    unsigned int v21 = param0[1];
    unsigned int const v22 = *(unsigned int const*)param1;
    int v23 = (((((~(((v11 - 1) & ~v11) >> 31) & (((((v0 - v2) ^ v0) | v11) ^ v0) >> 31) & (((v9 - 1) & ~v9) >> 31)) | (~(((v9 - 1) & ~v9) >> 31) & (((((v1 - v3) ^ v1) | v9) ^ v1) >> 31))) & (((v10 - 1) & ~v10) >> 31)) | (~(((v10 - 1) & ~v10) >> 31) & (((((v4 - v6) ^ v4) | v10) ^ v4) >> 31))) & (((v13 - 1) & ~v13) >> 31)) | (~(((v13 - 1) & ~v13) >> 31) & (((((v5 - v7) ^ v5) | v13) ^ v5) >> 31));
    int v24 = __carry__(v20, v12);
    param0[0] = (unsigned int)(((v20 + v12) & v23) | ((v20 - v22) & ~v23));
    int v25 = v20 < v22;
    int v26 = v21 - *(unsigned int const*)((long)param1 + 4L);
    int v27 = __carry__(param3[1] + v21, v24) | __carry__(param3[1], v21);
    long v28 = *(unsigned int const*)((long)param1 + 4L) > v21;
    param0[1] = (unsigned int)(((param3[1] + v21 + v24) & v23) | ((v26 - v25) & ~v23));
    unsigned int v29 = param0[2];
    unsigned int v30 = param0[3];
    int v31 = (uint32_t)v28 | v25 > v26;
    int v32 = v29 - *(unsigned int const*)((long)param1 + 8L);
    char v33 = *(unsigned int const*)((long)param1 + 8L) <= v29;
    int v34 = __carry__(param3[2] + v29, v27) | __carry__(param3[2], v29);
    param0[2] = (unsigned int)(((param3[2] + v29 + v27) & v23) | ((v32 - v31) & ~v23));
    param0[3] = (unsigned int)(((param3[3] + v34 + v30) & v23) | ((v30 - *(unsigned int const*)((long)param1 + 12L) - (v31 > v32 | !v33)) & ~v23));
}
