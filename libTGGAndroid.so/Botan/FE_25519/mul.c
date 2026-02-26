// Package: Botan::FE_25519

long Botan::FE_25519::mul(int* param0, int* param1, int* param2) {
    int v0 = *param1;
    int v1 = *(param1 + 1);
    int v2 = *(param1 + 2);
    int v3 = *(param1 + 3);
    int v4 = *(param1 + 4);
    int v5 = *(param1 + 5);
    int v6 = *(param1 + 6);
    int v7 = *(param1 + 7);
    int v8 = *(param1 + 8);
    int v9 = *(param1 + 9);
    int v10 = *param2;
    int v11 = *(param2 + 1);
    int v12 = *(param2 + 2);
    int v13 = *(param2 + 3);
    int v14 = *(param2 + 4);
    int v15 = *(param2 + 5);
    int v16 = *(param2 + 6);
    int v17 = *(param2 + 7);
    int v18 = *(param2 + 8);
    int v19 = *(param2 + 9);
    long v20 = v1 * v13 * 2L + v11 * v3 * 2L + (v15 * v9 * 38L + v16 * v8 * 19L) + (v17 * v7 * 38L + v18 * v6 * 19L + (v19 * v5 * 38L + v0 * v14)) + (v10 * v4 + v12 * v2);
    long v21 = v1 * v19 * 38L + v11 * v9 * 38L + (v12 * v8 * 19L + v13 * v7 * 38L) + (v14 * v6 * 19L + v15 * v5 * 38L + (v16 * v4 * 19L + v17 * v3 * 38L)) + (v18 * v2 * 19L + v0 * v10);
    long v22 = v16 * v9 * 19L + v17 * v8 * 19L + (v18 * v7 * 19L + v19 * v6 * 19L) + (v0 * v15 + v1 * v14 + (v10 * v5 + v11 * v4)) + (v12 * v3 + v13 * v2 + ((v20 + &gGameCenter+1068h) >> 26L));
    long v23 = v1 * v15 * 2L + v11 * v5 * 2L + (v13 * v3 * 2L + v17 * v9 * 38L) + (v18 * v8 * 19L + v19 * v7 * 38L + (v0 * v16 + v10 * v6)) + (v12 * v4 + v14 * v2 + ((v22 + 0x1000000L) >> 25L));
    long v24 = v18 * v9 * 19L + v19 * v8 * 19L + (v0 * v17 + v1 * v16) + (v10 * v7 + v11 * v6 + (v12 * v5 + v13 * v4)) + (v14 * v3 + v15 * v2 + ((v23 + &gGameCenter+1068h) >> 26L));
    long v25 = v1 * v17 * 2L + v11 * v7 * 2L + (v13 * v5 * 2L + v15 * v3 * 2L) + (v19 * v9 * 38L + v0 * v18 + (v10 * v8 + v12 * v6)) + (v14 * v4 + v16 * v2 + ((v24 + 0x1000000L) >> 25L));
    long v26 = v0 * v19 + v1 * v18 + (v10 * v9 + v11 * v8) + (v12 * v7 + v13 * v6 + (v14 * v5 + v15 * v4)) + (v16 * v3 + v17 * v2 + ((v25 + &gGameCenter+1068h) >> 26L));
    long v27 = v21 - ((v21 + &gGameCenter+1068h) & 0xfffffffffc000000L) + ((v26 + 0x1000000L) >> 25L) * 19L;
    long v28 = v12 * v9 * 19L + v13 * v8 * 19L + (v14 * v7 * 19L + v15 * v6 * 19L) + (v16 * v5 * 19L + v17 * v4 * 19L + (v18 * v3 * 19L + v19 * v2 * 19L)) + (v0 * v11 + v1 * v10 + ((v21 + &gGameCenter+1068h) >> 26L));
    long v29 = v1 * v11 * 2L + v13 * v9 * 38L + (v14 * v8 * 19L + v15 * v7 * 38L) + (v16 * v6 * 19L + v17 * v5 * 38L + (v18 * v4 * 19L + v19 * v3 * 38L)) + (v0 * v12 + v10 * v2 + ((v28 + 0x1000000L) >> 25L));
    long v30 = v14 * v9 * 19L + v15 * v8 * 19L + (v16 * v7 * 19L + v17 * v6 * 19L) + (v18 * v5 * 19L + v19 * v4 * 19L + (v0 * v13 + v1 * v12)) + (v10 * v3 + v11 * v2 + ((v29 + &gGameCenter+1068h) >> 26L));
    long v31 = v20 - ((v20 + &gGameCenter+1068h) & 0xfffffffffc000000L) + ((v30 + 0x1000000L) >> 25L);
    *(param0 + 6) = (uint32_t)v23 - (((uint32_t)v23 + &gGameCenter+1068h) & 0xfc000000);
    *(param0 + 7) = (uint32_t)v24 - (((uint32_t)v24 + 0x1000000) & 0xfe000000);
    *(param0 + 2) = (uint32_t)v29 - (((uint32_t)v29 + &gGameCenter+1068h) & 0xfc000000);
    *(param0 + 3) = (uint32_t)v30 - (((uint32_t)v30 + 0x1000000) & 0xfe000000);
    *(param0 + 4) = (uint32_t)v31 - (((uint32_t)v31 + &gGameCenter+1068h) & 0xfc000000);
    *(param0 + 5) = (uint32_t)v22 - (((uint32_t)v22 + 0x1000000) & 0xfe000000) + (uint32_t)((v31 + &gGameCenter+1068h) >>> 26L);
    *param0 = (uint32_t)v27 - (((uint32_t)v27 + &gGameCenter+1068h) & 0xfc000000);
    *(param0 + 1) = (uint32_t)v28 - (((uint32_t)v28 + 0x1000000) & 0xfe000000) + (uint32_t)((v27 + &gGameCenter+1068h) >>> 26L);
    *(param0 + 8) = (uint32_t)v25 - (((uint32_t)v25 + &gGameCenter+1068h) & 0xfc000000);
    *(param0 + 9) = (uint32_t)v26 - (((uint32_t)v26 + 0x1000000) & 0xfe000000);
    return (uint64_t)((uint32_t)v23 - (((uint32_t)v23 + &gGameCenter+1068h) & 0xfc000000));
}
