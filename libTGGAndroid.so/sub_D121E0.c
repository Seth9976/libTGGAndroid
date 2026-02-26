long sub_D121E0(long* param0, long param1, long param2) {
    char v0;
    long v1;
    long v2 = *(long*)(*param0 + 16L)((long)param0, param1, param2);
    if(v2 & 0x1L) {
        *(long*)(*param0 + 32L)((long)param0, (uint64_t)(uint32_t)param1, param2);
        if((uint32_t)param1 == -1) {
            *(long*)(*param0 + 72L)((long)param0, (long)&v0);
            *(long*)(*param0 + 104L)((long)param0, 0L);
            if(v1 != 0L) {
                long v3 = *(long*)(*param0 + 24L)((long)param0, 0xfffffffeL);
                *(long*)(*param0 + 32L)((long)param0, 0xfffffffeL, v3 + v1);
            }
        }
        return 0L;
    }
    return 0xffffe672L;
}
