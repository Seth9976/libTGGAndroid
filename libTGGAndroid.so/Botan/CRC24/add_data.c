// Package: Botan::CRC24

int* Botan::CRC24::add_data(int param0, int* param1, char* param2, long param3) {
    int v0 = *(param1 + 2);
    if(param3 != 0L && (long*)((long)param2 & 0x3L) != 0L) {
        long* ptr0 = (long*)(param2 + 1L);
        do {
            int v1 = (uint32_t)*param2;
            ++param2;
            long v2 = param3 - 1L;
            --param3;
            v0 = (param0 >>> 8) ^ *(int*)((uint64_t)((uint32_t)(uint8_t)param0 ^ v1) * 4L + 4585344L);
            if(v2 == 0L) {
                goto loc_91727C;
            }
            else {
                long* ptr1 = (long*)((long)ptr0 & 0x3L);
                ptr0 = (char*)ptr0 + 1L;
            }
        }
        while(ptr1 != 0L);
    }
loc_91727C:
    if(param3 >= 16L) {
        do {
            param3 -= 16L;
            int v3 = *(int*)param2 ^ v0;
            int v4 = (((*(int*)((uint64_t)(uint8_t)v3 * 4L + 4586368L) ^ *(int*)(param2 + 4L)) ^ *(int*)((uint64_t)(uint8_t)__ror__(v3, 8) * 4L + 0x45ff80L)) ^ *(int*)((uint64_t)(uint8_t)__ror__(v3, 16) * 4L + 4588416L)) ^ *(int*)((uint64_t)(v3 >>> 24) * 4L + 4585344L);
            int v5 = (((*(int*)((uint64_t)(uint8_t)v4 * 4L + 4586368L) ^ *(int*)(param2 + 8L)) ^ *(int*)((uint64_t)(uint8_t)__ror__(v4, 8) * 4L + 0x45ff80L)) ^ *(int*)((uint64_t)(uint8_t)__ror__(v4, 16) * 4L + 4588416L)) ^ *(int*)((uint64_t)(v4 >>> 24) * 4L + 4585344L);
            int v6 = (((*(int*)((uint64_t)(uint8_t)v5 * 4L + 4586368L) ^ *(int*)(param2 + 12L)) ^ *(int*)((uint64_t)(uint8_t)__ror__(v5, 8) * 4L + 0x45ff80L)) ^ *(int*)((uint64_t)(uint8_t)__ror__(v5, 16) * 4L + 4588416L)) ^ *(int*)((uint64_t)(v5 >>> 24) * 4L + 4585344L);
            param2 += 16L;
            v0 = ((*(int*)((uint64_t)(uint8_t)__ror__(v6, 8) * 4L + 0x45ff80L) ^ *(int*)((uint64_t)(uint8_t)v6 * 4L + 4586368L)) ^ *(int*)((uint64_t)(uint8_t)__ror__(v6, 16) * 4L + 4588416L)) ^ *(int*)((uint64_t)(v6 >>> 24) * 4L + 4585344L);
        }
        while(param3 > 15L);
    }
    if(param3 != 0L) {
        do {
            int v7 = (uint32_t)*param2;
            ++param2;
            v2 = param3 - 1L;
            --param3;
            v0 = (param0 >>> 8) ^ *(int*)((uint64_t)((uint32_t)(uint8_t)param0 ^ v7) * 4L + 4585344L);
        }
        while(v2 != 0L);
    }
    *(param1 + 2) = (uint32_t)(v0 & 0xffffff);
    return param1;
}
