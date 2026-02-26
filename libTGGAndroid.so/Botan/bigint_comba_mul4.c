// Package: Botan

int* Botan::bigint_comba_mul4(int* param0, int* param1, int* param2) {
    long v0 = (uint64_t)*param1 * (uint64_t)*param2;
    *param0 = (uint32_t)v0;
    long v1 = (uint64_t)*(param2 + 1) * (uint64_t)*param1 + (v0 >>> 32L);
    long v2 = (uint64_t)*(param1 + 1) * (uint64_t)*param2 + (uint64_t)(uint32_t)v1;
    *(param0 + 1) = (uint32_t)v2;
    int v3 = __carry__((uint32_t)(v1 >>> 32L), (uint32_t)(v2 >>> 32L));
    long v4 = (uint64_t)*(param2 + 2) * (uint64_t)*param1 + (uint64_t)((uint32_t)(v1 >>> 32L) + (uint32_t)(v2 >>> 32L));
    long v5 = (uint64_t)*(param1 + 1) * (uint64_t)*(param2 + 1) + (uint64_t)(uint32_t)v4;
    char v6 = __carry__((uint32_t)(v4 >>> 32L), v3);
    long v7 = (uint64_t)*(param1 + 2) * (uint64_t)*param2 + (uint64_t)(uint32_t)v5;
    int v8 = (uint32_t)(v4 >>> 32L) + v3;
    *(param0 + 2) = (uint32_t)v7;
    int v9 = !__carry__((uint32_t)(v5 >>> 32L), v8) ? v6: !v6 ? 1: 2;
    long v10 = (uint64_t)*(param2 + 3) * (uint64_t)*param1 + (uint64_t)((uint32_t)(v5 >>> 32L) + (uint32_t)(v7 >>> 32L) + v8);
    long v11 = (uint64_t)*(param1 + 1) * (uint64_t)*(param2 + 2) + (uint64_t)(uint32_t)v10;
    int v12 = __carry__((uint32_t)(v5 >>> 32L) + v8, (uint32_t)(v7 >>> 32L)) ? v9 + 1: v9;
    char v13 = __carry__((uint32_t)(v10 >>> 32L), v12);
    long v14 = (uint64_t)*(param1 + 2) * (uint64_t)*(param2 + 1) + (uint64_t)(uint32_t)v11;
    int v15 = (uint32_t)(v10 >>> 32L) + v12;
    long v16 = (uint64_t)*(param1 + 3) * (uint64_t)*param2 + (uint64_t)(uint32_t)v14;
    int v17 = !__carry__((uint32_t)(v11 >>> 32L), v15) ? v13: !v13 ? 1: 2;
    int v18 = (uint32_t)(v11 >>> 32L) + v15;
    *(param0 + 3) = (uint32_t)v16;
    int v19 = __carry__((uint32_t)(v14 >>> 32L), v18) ? v17 + 1: v17;
    int v20 = (uint32_t)(v14 >>> 32L) + v18;
    long v21 = (uint64_t)*(param1 + 1) * (uint64_t)*(param2 + 3) + (uint64_t)((uint32_t)(v16 >>> 32L) + v20);
    long v22 = (uint64_t)*(param1 + 2) * (uint64_t)*(param2 + 2) + (uint64_t)(uint32_t)v21;
    int v23 = __carry__((uint32_t)(v16 >>> 32L), v20) ? v19 + 1: v19;
    char v24 = __carry__((uint32_t)(v21 >>> 32L), v23);
    long v25 = (uint64_t)*(param1 + 3) * (uint64_t)*(param2 + 1) + (uint64_t)(uint32_t)v22;
    int v26 = (uint32_t)(v21 >>> 32L) + (uint32_t)(v22 >>> 32L) + v23;
    *(param0 + 4) = (uint32_t)v25;
    int v27 = !__carry__((uint32_t)(v21 >>> 32L) + v23, (uint32_t)(v22 >>> 32L)) ? v24: !v24 ? 1: 2;
    long v28 = (uint64_t)*(param1 + 2) * (uint64_t)*(param2 + 3) + (uint64_t)((uint32_t)(v25 >>> 32L) + v26);
    long v29 = (uint64_t)*(param1 + 3) * (uint64_t)*(param2 + 2) + (uint64_t)(uint32_t)v28;
    *(param0 + 5) = (uint32_t)v29;
    int v30 = __carry__((uint32_t)(v25 >>> 32L), v26) ? v27 + 1: v27;
    char v31 = __carry__((uint32_t)(v28 >>> 32L), v30);
    long v32 = (uint64_t)*(param1 + 3) * (uint64_t)*(param2 + 3) + (uint64_t)((uint32_t)(v28 >>> 32L) + (uint32_t)(v29 >>> 32L) + v30);
    *(param0 + 6) = (uint32_t)v32;
    *(param0 + 7) = (uint32_t)(v32 >>> 32L) + (!__carry__((uint32_t)(v28 >>> 32L) + v30, (uint32_t)(v29 >>> 32L)) ? v31: !v31 ? 1: 2);
    return param0;
}
