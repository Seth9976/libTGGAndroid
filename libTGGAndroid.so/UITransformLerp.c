long double* UITransformLerp(long double* param0, long double* param1, long double* param2) {
    float v0;
    long double v1 = *(param1 + 1);
    *param0 = *param1;
    *(param0 + 1) = v1;
    long double v2 = *(param1 + 5);
    long double v3 = *(param1 + 2);
    long double v4 = *(param1 + 3);
    *(param0 + 4) = *(param1 + 4);
    *(param0 + 5) = v2;
    *(param0 + 2) = v3;
    *(param0 + 3) = v4;
    long double v5 = *param1;
    long double v6 = *param2;
    long double v7 = *(param2 + 1);
    long double v8 = *(param1 + 1);
    *param0 = (unsigned __int128)((uint32_t)v5 + ((uint32_t)v6 - (uint32_t)v5) * v0) | ((unsigned __int128)((uint32_t)(v5 >>> 0x20X) + ((uint32_t)(v6 >>> 0x20X) - (uint32_t)(v5 >>> 0x20X)) * v0) << 32) | ((unsigned __int128)((uint32_t)(v5 >>> 0x40X) + ((uint32_t)(v6 >>> 0x40X) - (uint32_t)(v5 >>> 0x40X)) * v0) << 64) | ((unsigned __int128)((uint32_t)(v5 >>> 0x60X) + ((uint32_t)(v6 >>> 0x60X) - (uint32_t)(v5 >>> 0x60X)) * v0) << 96);
    *(param0 + 1) = (unsigned __int128)((uint32_t)v8 + ((uint32_t)v7 - (uint32_t)v8) * v0) | ((unsigned __int128)((uint32_t)(v8 >>> 0x20X) + ((uint32_t)(v7 >>> 0x20X) - (uint32_t)(v8 >>> 0x20X)) * v0) << 32) | ((unsigned __int128)((uint32_t)(v8 >>> 0x40X) + ((uint32_t)(v7 >>> 0x40X) - (uint32_t)(v8 >>> 0x40X)) * v0) << 64) | ((unsigned __int128)((uint32_t)(v8 >>> 0x60X) + ((uint32_t)(v7 >>> 0x60X) - (uint32_t)(v8 >>> 0x60X)) * v0) << 96);
    float v9 = *(float*)((char*)param1 + 88L);
    *(float*)((char*)param0 + 88L) = v9 + (*(float*)((char*)param2 + 88L) - v9) * v0;
    long double v10 = *(long double*)((char*)param1 + 40L);
    long double v11 = *(long double*)((char*)param2 + 40L);
    *(long double*)((char*)param0 + 40L) = (unsigned __int128)((uint32_t)v10 + ((uint32_t)v11 - (uint32_t)v10) * v0) | ((unsigned __int128)((uint32_t)(v10 >>> 0x20X) + ((uint32_t)(v11 >>> 0x20X) - (uint32_t)(v10 >>> 0x20X)) * v0) << 32) | ((unsigned __int128)((uint32_t)(v10 >>> 0x40X) + ((uint32_t)(v11 >>> 0x40X) - (uint32_t)(v10 >>> 0x40X)) * v0) << 64) | ((unsigned __int128)((uint32_t)(v10 >>> 0x60X) + ((uint32_t)(v11 >>> 0x60X) - (uint32_t)(v10 >>> 0x60X)) * v0) << 96);
    long double v12 = *(long double*)((char*)param1 + 56L);
    long double v13 = *(long double*)((char*)param2 + 56L);
    long double v14 = *(long double*)((char*)param1 + 72L);
    long double v15 = *(long double*)((char*)param2 + 72L);
    *(long double*)((char*)param0 + 56L) = (unsigned __int128)((uint32_t)v12 + ((uint32_t)v13 - (uint32_t)v12) * v0) | ((unsigned __int128)((uint32_t)(v12 >>> 0x20X) + ((uint32_t)(v13 >>> 0x20X) - (uint32_t)(v12 >>> 0x20X)) * v0) << 32) | ((unsigned __int128)((uint32_t)(v12 >>> 0x40X) + ((uint32_t)(v13 >>> 0x40X) - (uint32_t)(v12 >>> 0x40X)) * v0) << 64) | ((unsigned __int128)((uint32_t)(v12 >>> 0x60X) + ((uint32_t)(v13 >>> 0x60X) - (uint32_t)(v12 >>> 0x60X)) * v0) << 96);
    *(long double*)((char*)param0 + 72L) = (unsigned __int128)((uint32_t)v14 + ((uint32_t)v15 - (uint32_t)v14) * v0) | ((unsigned __int128)((uint32_t)(v14 >>> 0x20X) + ((uint32_t)(v15 >>> 0x20X) - (uint32_t)(v14 >>> 0x20X)) * v0) << 32) | ((unsigned __int128)((uint32_t)(v14 >>> 0x40X) + ((uint32_t)(v15 >>> 0x40X) - (uint32_t)(v14 >>> 0x40X)) * v0) << 64) | ((unsigned __int128)((uint32_t)(v14 >>> 0x60X) + ((uint32_t)(v15 >>> 0x60X) - (uint32_t)(v14 >>> 0x60X)) * v0) << 96);
    if(v0 < 1.0) {
        float v16 = *(float*)((char*)param1 + 92L);
        *(float*)((char*)param0 + 92L) = (int)*(float*)((char*)param2 + 92L) >= (int)v16 ? *(float*)((char*)param2 + 92L): v16;
        return param1;
    }
    *(float*)((char*)param0 + 92L) = *(float*)((char*)param2 + 92L);
    return param1;
}
