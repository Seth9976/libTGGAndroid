long sub_C041A4(uint64_t* param0) {
    uint8_t* ptr0 = *(param0 + 23);
    if((uint64_t)*(param0 + 24) > (uint64_t)ptr0) {
        *(param0 + 23) = (uint64_t*)(ptr0 + 1L);
        return (uint64_t)*ptr0;
    }
    if(*(uint32_t*)(param0 + 6) != 0) {
        long result = *(param0 + 2)((long)*(param0 + 5), (long)(param0 + 7), (uint64_t)*(uint32_t*)((char*)param0 + 52L));
        if((uint32_t)result != 0) {
            int v0 = (uint32_t)result;
            result = (uint64_t)*(uint8_t*)(param0 + 7);
            *(param0 + 23) = (uint64_t*)((char*)param0 + 57L);
            *(param0 + 24) = (uint64_t*)(v0 + (long)param0) + 7;
            return result;
        }
        *(uint32_t*)(param0 + 6) = 0;
        *(uint8_t*)(param0 + 7) = 0;
        *(param0 + 23) = (uint64_t*)((char*)param0 + 57L);
        *(param0 + 24) = (uint64_t*)((char*)param0 + 57L);
        return result;
    }
    return 0L;
}
