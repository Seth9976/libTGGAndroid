long TestFourCC(char* param0, char* param1) {
    if((uint32_t)*param0 == (uint32_t)*param1 && (uint32_t)*(param0 + 1L) == (uint32_t)*(param1 + 1L) && (uint32_t)*(param0 + 2L) == (uint32_t)*(param1 + 2L)) {
        return (uint32_t)*(param0 + 3L) == (uint32_t)*(param1 + 3L);
    }
    return 0L;
}
