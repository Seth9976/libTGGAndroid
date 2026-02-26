// Package: Botan::PKCS7_Padding

long Botan::PKCS7_Padding::unpad(long param0, long param1, long param2) {
    long v0;
    long result = param2;
    if(param2 - 3L <= 252L) {
        long v1 = (uint64_t)*(char*)(result - 1L + param1);
        long v2 = result - v1;
        long v3 = result ^ v2;
        long v4 = (~result & v2) >> 63L;
        if(result - 1L < 2L) {
            v0 = 0L;
            goto loc_9BE1E4;
        }
        else {
            long v5 = 0L;
            long v6 = 0L;
            v0 = (result - 1L) & 0xfffffffffffffffeL;
            long v7 = v1 - result;
            do {
                char* ptr0 = (char*)(param1 + v5);
                long v8 = v5 + v7;
                long v9 = v2 ^ v5;
                long v10 = ((v8 ^ v5) | v9) ^ v5;
                param2 = (((v8 + 1L) ^ v5) | v9) ^ v5;
                v5 += 2L;
                v4 |= ~(((((uint64_t)((uint32_t)*ptr0 ^ (uint32_t)v1) & 0xffL) - 1L) | v10) >> 63L);
                v6 |= ~(((((uint64_t)((uint32_t)*(ptr0 + 1L) ^ (uint32_t)v1) & 0xffL) - 1L) | param2) >> 63L);
            }
            while(v0 != v5);
            v4 |= v6;
            if(result - 1L != v0) {
            loc_9BE1E4:
                v6 = v1 - result;
                do {
                    v7 = (((v0 + v6) ^ v0) | (v2 ^ v0)) ^ v0;
                    long v11 = ((uint64_t)((uint32_t)*(char*)(param1 + v0) ^ (uint32_t)v1) & 0xffL) - 1L;
                    ++v0;
                    v4 |= ~((v11 | v7) >> 63L);
                }
                while(result - 1L != v0);
            }
        }
        result = (v3 & v4) ^ v2;
    }
    return result;
}
