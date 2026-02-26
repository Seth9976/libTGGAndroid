float* BoneTransformInverse(float* param0, float* param1) {
    __int128 v0 = (unsigned __int128)*(double*)(param1 + 7);
    float v1 = (float)(1.0 / *(param1 + 9));
    *(double*)(param0 + 7) = (uint64_t)(float)(1.0 / (uint32_t)v0) | ((uint64_t)(float)(1.0 / (uint32_t)(v0 >>> 0x20X)) << 32);
    *(param0 + 9) = v1;
    float v2 = *param1;
    float v3 = *(param1 + 1);
    float v4 = *(param1 + 2);
    float v5 = *(param1 + 3);
    *param0 = (float)(0.0 - v2);
    *(param0 + 1) = (float)(0.0 - v3);
    *(param0 + 2) = (float)(0.0 - v4);
    *(param0 + 3) = v5;
    float v6 = v2 * v3;
    float v7 = v2 * v4;
    float v8 = v3 * v4;
    float v9 = v5 * (float)(0.0 - v4);
    float v10 = v5 * (float)(0.0 - v3);
    float v11 = v5 * v5 - v2 * v2;
    float v12 = v5 * (float)(0.0 - v2);
    float v13 = *(param1 + 4);
    float v14 = *(param1 + 5);
    float v15 = *(param1 + 6);
    *(param0 + 4) = (v13 * (v5 * v5 + v2 * v2 - v3 * v3 - v4 * v4) + (v6 - v9) * (v14 + v14) + (v10 + v7) * (v15 + v15)) * (float)(0.0 - (float)(1.0 / (uint32_t)v0));
    *(param0 + 5) = ((v13 + v13) * (v6 + v9) + v14 * (v11 + v3 * v3 - v4 * v4) + (v8 - v12) * (v15 + v15)) * (float)(0.0 - (float)(1.0 / (uint32_t)(v0 >>> 0x20X)));
    *(param0 + 6) = ((v11 - v3 * v3 + v4 * v4) * v15 + ((v13 + v13) * (v7 - v10) + (v12 + v8) * (v14 + v14))) * (float)(0.0 - v1);
    return param1;
}
