// Package: Botan::FE_25519

long Botan::FE_25519::sqr2(int* param0, int* param1) {
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
    long v10 = (v1 * v9 * 76L + v2 * v8 * 38L + (v3 * v7 * 76L + v4 * v6 * 38L) + (v5 * v5 * 38L + v0 * v0)) * 2L;
    long v11 = (v0 * v4 * 2L + v1 * v3 * 4L + (v5 * v9 * 76L + v6 * v8 * 38L) + (v7 * v7 * 38L + v2 * v2)) * 2L;
    long v12 = (v0 * v1 * 2L + v2 * v9 * 38L + (v3 * v8 * 38L + v4 * v7 * 38L) + v5 * v6 * 38L) * 2L + ((v10 + &gGameCenter+1068h) >> 26L);
    long v13 = (v0 * v5 * 2L + v1 * v4 * 2L + (v2 * v3 * 2L + v6 * v9 * 38L) + v7 * v8 * 38L) * 2L + ((v11 + &gGameCenter+1068h) >> 26L);
    long v14 = (v0 * v2 * 2L + v1 * v1 * 2L + (v3 * v9 * 76L + v4 * v8 * 38L) + (v5 * v7 * 76L + v6 * v6 * 19L)) * 2L + ((v12 + 0x1000000L) >> 25L);
    long v15 = (v0 * v6 * 2L + v1 * v5 * 4L + (v2 * v4 * 2L + v3 * v3 * 2L) + (v7 * v9 * 76L + v8 * v8 * 19L)) * 2L + ((v13 + 0x1000000L) >> 25L);
    long v16 = (v0 * v7 * 2L + v1 * v6 * 2L + (v2 * v5 * 2L + v3 * v4 * 2L) + v8 * v9 * 38L) * 2L + ((v15 + &gGameCenter+1068h) >> 26L);
    long v17 = (v0 * v8 * 2L + v1 * v7 * 4L + (v2 * v6 * 2L + v3 * v5 * 4L) + (v9 * v9 * 38L + v4 * v4)) * 2L + ((v16 + 0x1000000L) >> 25L);
    long v18 = (v0 * v9 * 2L + v1 * v8 * 2L + (v2 * v7 * 2L + v3 * v6 * 2L) + v4 * v5 * 2L) * 2L + ((v17 + &gGameCenter+1068h) >> 26L);
    long v19 = v10 - ((v10 + &gGameCenter+1068h) & 0xfffffffffc000000L) + ((v18 + 0x1000000L) >> 25L) * 19L;
    long v20 = (v0 * v3 * 2L + v1 * v2 * 2L + (v4 * v9 * 38L + v5 * v8 * 38L) + v6 * v7 * 38L) * 2L + ((v14 + &gGameCenter+1068h) >> 26L);
    long v21 = v11 - ((v11 + &gGameCenter+1068h) & 0xfffffffffc000000L) + ((v20 + 0x1000000L) >> 25L);
    *(param0 + 2) = (uint32_t)v14 - (((uint32_t)v14 + &gGameCenter+1068h) & 0xfc000000);
    *(param0 + 3) = (uint32_t)v20 - (((uint32_t)v20 + 0x1000000) & 0xfe000000);
    *(param0 + 6) = (uint32_t)v15 - (((uint32_t)v15 + &gGameCenter+1068h) & 0xfc000000);
    *(param0 + 7) = (uint32_t)v16 - (((uint32_t)v16 + 0x1000000) & 0xfe000000);
    *(param0 + 4) = (uint32_t)v21 - (((uint32_t)v21 + &gGameCenter+1068h) & 0xfc000000);
    *(param0 + 5) = (uint32_t)v13 - (((uint32_t)v13 + 0x1000000) & 0xfe000000) + (uint32_t)((v21 + &gGameCenter+1068h) >>> 26L);
    *param0 = (uint32_t)v19 - (((uint32_t)v19 + &gGameCenter+1068h) & 0xfc000000);
    *(param0 + 1) = (uint32_t)v12 - (((uint32_t)v12 + 0x1000000) & 0xfe000000) + (uint32_t)((v19 + &gGameCenter+1068h) >>> 26L);
    *(param0 + 8) = (uint32_t)v17 - (((uint32_t)v17 + &gGameCenter+1068h) & 0xfc000000);
    *(param0 + 9) = (uint32_t)v18 - (((uint32_t)v18 + 0x1000000) & 0xfe000000);
    return (uint64_t)((uint32_t)v16 - (((uint32_t)v16 + 0x1000000) & 0xfe000000));
}
