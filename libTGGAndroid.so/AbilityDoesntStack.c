long AbilityDoesntStack(int* param0) {
    long v0;
    long v1 = (uint64_t)*(param0 + 1);
    if(*(param0 + 1) <= 0x1009) {
        if((uint32_t)v1 > 3340) {
            if((uint32_t)v1 <= 3587) {
                if((uint32_t)v1 - 3341 > 34 || ((1L << ((uint8_t)(v1 & 0x3fL) - 13)) & 0x400000201L) == 0L) {
                    return 0L;
                }
            }
            else if((uint32_t)v1 != 3588 && (uint32_t)v1 != 3597 && (uint32_t)v1 != 3870) {
                return 0L;
            }
        }
        else if((uint32_t)v1 > 1822) {
            if((uint32_t)v1 != 1823 && (uint32_t)v1 != 2824 && (uint32_t)v1 != 3093) {
                return 0L;
            }
        }
        else if((uint32_t)v1 != 1025 && (uint32_t)v1 != 1054) {
            return 0L;
        }
    }
    else if((uint32_t)v1 <= 0x1224) {
        if(((uint32_t)v1 - 0x100a > 48 || ((1L << ((uint8_t)(v1 & 0x3fL) - 10)) & 0x1000008000011L) == 0L) && (uint32_t)v1 != 0x111d) {
            v0 = 0x1121L;
            goto loc_7591D0;
        }
    }
    else if(((uint32_t)v1 - 4866 > 10 || ((1 << ((uint8_t)(v1 & 0x1fL) - 2)) & 0x601) == 0) && (uint32_t)v1 != 0x1225) {
        v0 = 0x1510L;
    loc_7591D0:
        if((uint32_t)v1 != (uint32_t)v0) {
            return 0L;
        }
    }
    return 1L;
}
