long SortAndGroupCards(int* param0, uint32_t param1, int* param2, long param3) {
    if((int)param1 >= 1) {
        long v0 = 0L;
        uint32_t result = 0;
        while(1) {
            int v1 = *(int*)(v0 * 4L + (long)param0);
            long v2 = result;
            if((int)result >= 1) {
                long v3 = 0L;
                long v4 = 0L;
                while(*(int*)(v4 * 4L + (long)param2) != v1) {
                    ++v4;
                    v3 += 0x100000000L;
                    if(v2 != v4) {
                        continue;
                    }
                    goto loc_81D8D8;
                }
                if((uint32_t)v4 == -1) {
                    goto loc_81D8D8;
                }
                ++*(int*)((v3 >> 30L) + param3);
                result = v2;
                ++v0;
                if(param1 != v0) {
                    continue;
                }
                return result;
            }
        loc_81D8D8:
            result = (uint32_t)v2 + 1;
            v2 = (long)(uint32_t)v2 * 4L;
            *(int*)((long)param2 + v2) = v1;
            *(int*)(param3 + v2) = 1;
            ++v0;
            if(param1 == v0) {
                return result;
            }
        }
        return result;
    }
    return 0L;
}
