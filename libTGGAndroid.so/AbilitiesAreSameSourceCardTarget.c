long AbilitiesAreSameSourceCardTarget(long param0, long param1, long param2) {
    long result;
    long v0;
    if((param1 & 0x30L) != 0L) {
        if((param2 & 0x30L) != 0L) {
            v0 = param1 ^ param2;
            if((v0 & &gvar_10308+2fcc7h) == 0L) {
                if((uint32_t)param1 == (uint32_t)param2) {
                    return 1L;
                }
                if(((__ror__((uint32_t)param1, 4)) & 0x3) != 3) {
                    result = 0L;
                    if(((__ror__((uint32_t)param1, 4)) & 0x3) == 2 || ((param2 >>> 5L) & 0x1L)) {
                        return result;
                    }
                    return (uint32_t)v0 < &gvar_10308+2fcf8h;
                }
            }
        }
    }
    else if((param2 & 0x30L) == 0L) {
        v0 = param1 ^ param2;
        if((v0 & &gvar_10308+2fcb8h) == 0L) {
            return (uint32_t)v0 < &gvar_10308+2fcf8h;
        }
    }
    return 0L;
}
