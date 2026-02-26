long CardIsAffectedByCapitalism(int param0, int param1) {
    long v0;
    int v1 = param1;
    if(v1 <= 0x1000) {
        if(v1 == 1052 || v1 == 1056 || v1 == 1564) {
            return 1L;
        }
        else if(v1 > 1566) {
            long v2 = (uint64_t)(v1 - 1812);
            if(v1 - 1812 <= 9 && ((1 << v2) & 0x209) != 0) {
                return 1L;
            }
            if((v1 - 2075 <= 9 && ((1 << (v1 - 2075)) & 0x221) != 0) || v1 == 1567) {
                return 1L;
            }
        }
        goto loc_7CE50C;
    }
    else {
        long v3 = (uint64_t)(v1 - 0x1001);
        if(v1 - 0x1001 <= 48 && ((1L << v3) & 0x1205880119ca5L) != 0L) {
            return 1L;
        }
        if((v1 - 0x1104 <= 30 && ((1 << (v1 - 0x1104)) & 0x42c00563) != 0) || (v1 - 4613 <= 56 && ((1L << (v1 - 4613)) & 0x10000000000a40bL) != 0L)) {
            return 1L;
        }
    loc_7CE50C:
        if(v1 <= 1282) {
            long v4 = (uint64_t)(v1 - 770);
            if(v1 - 770 <= 29 && ((1 << v4) & 0x21015dd9) != 0) {
                return 1L;
            }
            if(v1 - 0x400 <= 24 && ((1 << (v1 - 0x400)) & 0x124e845) != 0) {
                return 1L;
            }
            if(param0 - 516 > 23) {
                return 0L;
            }
            v1 = 1 << param0;
            v0 = 0xc241c3L;
            goto loc_7CE698;
        }
        else if(v1 <= 0x700) {
            if((v1 - 1539 <= 23 && ((1 << (v1 - 1539)) & 0x83488d) != 0) || v1 == 1283) {
                return 1L;
            }
            return 0L;
        }
        else if(v1 <= 0x8ff) {
            if(v1 - 2049 <= 20 && ((1 << (v1 - 2049)) & "DS_FX_LANDPLAY_CROSSROADS") != 0) {
                return 1L;
            }
            if(param0 - 1793 > 17) {
                return 0L;
            }
            v1 = 1 << param0;
            v0 = &gvar_10308+101a1h;
        loc_7CE698:
            if(((uint32_t)v0 & v1) == 0) {
                return 0L;
            }
        }
        else if(v1 <= 3078) {
            long v5 = (uint64_t)(v1 - 0x900);
            if(v1 - 0x900 <= 51 && ((1L << v5) & 0x8201128844915L) != 0L) {
                return 1L;
            }
            if((v1 - 2818 > 54 || ((1L << (v1 - 2818)) & 0x63000005048c19L) == 0L) && v1 != 2571) {
                return 0L;
            }
        }
        else if(v1 > 3587) {
            if((v1 - 3845 > 24 || ((1 << (v1 - 3845)) & 0x12b4831) == 0) && (v1 - 3588 > 19 || ((1 << (v1 - 3588)) & &gvar_10308+6fe85h) == 0) && v1 != 0x1300) {
                return 0L;
            }
        }
        else if((v1 - 3079 > 39 || ((1L << (v1 - 3079)) & 0x8000102b51L) == 0L) && (v1 - 3333 > 23 || ((1 << (v1 - 3333)) & 0xc004c1) == 0) && v1 != 3407) {
            return 0L;
        }
    }
    return 1L;
}
