double* ReflectPointAboutPlane(double* param0, double* param1) {
    FADDP(((uint32_t)*param1 - (uint32_t)*param0 * (float)(0.0 - *(float*)((char*)param0 + 12L))) * (uint32_t)*param0, (uint64_t)(((uint32_t)*param1 - (uint32_t)*param0 * (float)(0.0 - *(float*)((char*)param0 + 12L))) * (uint32_t)*param0) | ((uint64_t)(((uint32_t)(*param1 >>> 32L) - (uint32_t)(*param0 >>> 32L) * (float)(0.0 - *(float*)((char*)param0 + 12L))) * (uint32_t)(*param0 >>> 32L)) << 32));
    return param0;
}
