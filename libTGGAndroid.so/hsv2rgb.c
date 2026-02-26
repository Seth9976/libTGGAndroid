void hsv2rgb() {
    float v0;
    FCVTL(0x40C00000X, (uint64_t)((float)(1.0 * v0) + 1.0) | ((uint64_t)((float)(1.0 * v0) + 0.6666667) << 32));
    FCVTN(0L, 0x0X);
    __int128 v1 = (unsigned __int128)((uint64_t)((float)(1.0 * v0) + 1.0 - 0.0) | ((uint64_t)((float)(1.0 * v0) + 0.6666667 - 0.0) << 32));
    __int128 v2 = (unsigned __int128)((uint64_t)((uint32_t)((uint64_t)((uint32_t)v1 * 6.0) | ((uint64_t)((uint32_t)(v1 >>> 0x20X) * 6.0) << 32)) + -3.0) | ((uint64_t)((uint32_t)((unsigned __int128)((uint64_t)((uint32_t)v1 * 6.0) | ((uint64_t)((uint32_t)(v1 >>> 0x20X) * 6.0) << 32)) >>> 0x20X) + -3.0) << 32));
    __int128 v3 = (unsigned __int128)((uint64_t)((uint32_t)v2 >= 0.0 ? (uint32_t)v2: (float)(0.0 - (uint32_t)v2)) | ((uint64_t)((uint32_t)(v2 >>> 0x20X) >= 0.0 ? (uint32_t)(v2 >>> 0x20X): (float)(0.0 - (uint32_t)(v2 >>> 0x20X))) << 32));
    FCMLT(0L, (uint64_t)((uint32_t)v3 - 1.0) | ((uint64_t)((uint32_t)(v3 >>> 0x20X) - 1.0) << 32), 0.0);
}
