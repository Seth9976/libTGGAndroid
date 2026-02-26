void hue() {
    float v0;
    float v1;
    float v2;
    float v3 = v0 < v1 ? 0.0: 1.0;
    float v4 = v0 * v3 + v1 * (float)(1.0 - v3);
    float v5 = v2 < v4 ? 0.0: 1.0;
    float v6 = v1 * v3 + v0 * (float)(1.0 - v3);
    float v7 = v4 * v5 + v2 * (float)(1.0 - v5);
    float v8 = v6 * v5 + v6 * (float)(1.0 - v5);
    float v9 = (v7 - v8) / ((v2 * v5 + v4 * (float)(1.0 - v5) - (v7 < v8 ? v7: v8)) * 6.0 + 9.999999747378752E-6) + ((v3 * 0.0 - (float)(1.0 - v3)) * v5 + ((float)(1.0 - v3) * 0.6666667 - v3 * 0.33333334) * (float)(1.0 - v5)) < 0.0 ? (float)(0.0 - ((v7 - v8) / ((v2 * v5 + v4 * (float)(1.0 - v5) - (v7 < v8 ? v7: v8)) * 6.0 + 9.999999747378752E-6) + ((v3 * 0.0 - (float)(1.0 - v3)) * v5 + ((float)(1.0 - v3) * 0.6666667 - v3 * 0.33333334) * (float)(1.0 - v5)))): (v7 - v8) / ((v2 * v5 + v4 * (float)(1.0 - v5) - (v7 < v8 ? v7: v8)) * 6.0 + 9.999999747378752E-6) + ((v3 * 0.0 - (float)(1.0 - v3)) * v5 + ((float)(1.0 - v3) * 0.6666667 - v3 * 0.33333334) * (float)(1.0 - v5));
    FCVTL(0x40C00000X, (uint64_t)((float)(1.0 * v9) + 1.0) | ((uint64_t)((float)(1.0 * v9) + 0.6666667) << 32));
    FCVTN(0L, 0x0X);
    __int128 v10 = (unsigned __int128)((uint64_t)((float)(1.0 * v9) + 1.0 - 0.0) | ((uint64_t)((float)(1.0 * v9) + 0.6666667 - 0.0) << 32));
    float v11 = (v9 * 1.0 + 0.33333334 - (v9 * 1.0 + 0.33333334)) * 6.0 + -3.0;
    __int128 v12 = (unsigned __int128)((uint64_t)((uint32_t)((uint64_t)((uint32_t)v10 * 6.0) | ((uint64_t)((uint32_t)(v10 >>> 0x20X) * 6.0) << 32)) + -3.0) | ((uint64_t)((uint32_t)((unsigned __int128)((uint64_t)((uint32_t)v10 * 6.0) | ((uint64_t)((uint32_t)(v10 >>> 0x20X) * 6.0) << 32)) >>> 0x20X) + -3.0) << 32));
    __int128 v13 = (unsigned __int128)((uint64_t)((uint32_t)v12 >= 0.0 ? (uint32_t)v12: (float)(0.0 - (uint32_t)v12)) | ((uint64_t)((uint32_t)(v12 >>> 0x20X) >= 0.0 ? (uint32_t)(v12 >>> 0x20X): (float)(0.0 - (uint32_t)(v12 >>> 0x20X))) << 32));
    FCMLT((v11 < 0.0 ? (float)(0.0 - v11): v11) - 1.0 <= 1.0 ? (uint64_t)((v11 < 0.0 ? (float)(0.0 - v11): v11) - 1.0): 0x3f800000L, (uint64_t)((uint32_t)v13 - 1.0) | ((uint64_t)((uint32_t)(v13 >>> 0x20X) - 1.0) << 32), 0.0);
}
