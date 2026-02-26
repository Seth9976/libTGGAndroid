// Package: Botan::ANSI_X923_Padding

long Botan::ANSI_X923_Padding::unpad(long param0, long param1, long param2) {
    long v0;
    long result = param2;
    if(param2 - 3L <= 252L) {
        long v1 = (uint64_t)*(char*)(result - 1L + param1);
        long v2 = result - v1;
        long v3 = result ^ v2;
        long v4 = (~result & v2) >> 63L;
        if(result - 1L < 2L) {
            v0 = 0L;
            goto loc_9BE3E4;
        }
        else {
            long v5 = 0L;
            long v6 = 0L;
            v0 = (result - 1L) & 0xfffffffffffffffeL;
            long v7 = v1 - result;
            do {
                long v8 = v5 + v7;
                long v9 = v2 ^ v5;
                char* ptr0 = (char*)(param1 + v5);
                long v10 = ((v8 ^ v5) | v9) ^ v5;
                long v11 = (((v8 + 1L) ^ v5) | v9) ^ v5;
                v5 += 2L;
                v4 |= ~((((uint64_t)*ptr0 - 1L) | v10) >> 63L);
                v6 |= ~((((uint64_t)*(ptr0 + 1L) - 1L) | v11) >> 63L);
            }
            while(v0 != v5);
            v4 |= v6;
            if(result - 1L != v0) {
            loc_9BE3E4:
                v1 -= result;
                do {
                    long v12 = (((v0 + v1) ^ v0) | (v2 ^ v0)) ^ v0;
                    v5 = (uint64_t)*(char*)(param1 + v0) - 1L;
                    ++v0;
                    v4 |= ~((v12 | v5) >> 63L);
                }
                while(result - 1L != v0);
            }
        }
        result = (v3 & v4) ^ v2;
    }
    return result;
}
