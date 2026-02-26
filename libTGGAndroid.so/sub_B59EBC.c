void sub_B59EBC(long param0, long* param1, long param2, long param3, long param4, long param5, long param6, long param7) {
    if(param1 != 0L) {
        long v0 = *(param1 + 4);
        *param1 = &vftable_Botan::Threefish_512;
        if(v0 != 0L) {
            long v1 = *(param1 + 6);
            *(param1 + 5) = v0;
            Botan::deallocate_memory(v0, (v1 - v0) >> 3L, 8L);
        }
        long v2 = *(param1 + 1);
        if(v2 != 0L) {
            long v3 = *(param1 + 3);
            *(param1 + 2) = v2;
            Botan::deallocate_memory(v2, (v3 - v2) >> 3L, 8L);
        }
        operator delete((long)param1, (long)param1, param2, param3, param4, param5, param6, param7);
        return;
    }
}
