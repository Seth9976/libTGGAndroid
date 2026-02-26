long CollectActiveExpansions_Old(int param0, long param1, int* param2) {
    uint32_t result;
    if(!(param1 & 0x1L)) {
        result = 0;
        if((param1 >>> 1L) & 0x1L) {
            goto loc_5F61C0;
        }
    }
    else {
        *param2 = 2;
        result = 1;
        if((param1 >>> 1L) & 0x1L) {
        loc_5F61C0:
            *(int*)(result * 4L + (long)param2) = 3;
            result = param0 + 1;
        }
    }
    if((param1 >>> 2L) & 0x1L) {
        *(int*)(result * 4L + (long)param2) = 4;
        result = param0 + 1;
        if(!((param1 >>> 3L) & 0x1L)) {
            goto loc_5F61D0;
        }
        else {
        loc_5F622C:
            *(int*)(result * 4L + (long)param2) = 5;
            result = param0 + 1;
        }
        if((param1 >>> 4L) & 0x1L) {
            goto loc_5F6240;
        loc_5F61D0:
            if((param1 >>> 4L) & 0x1L) {
                goto loc_5F6240;
            }
        }
        if(!((param1 >>> 5L) & 0x1L)) {
            goto loc_5F61D8;
        loc_5F6240:
            *(int*)(result * 4L + (long)param2) = 6;
            result = param0 + 1;
            if(!((param1 >>> 5L) & 0x1L)) {
                goto loc_5F61D8;
            }
        }
        *(int*)(result * 4L + (long)param2) = 7;
        result = param0 + 1;
        if((param1 >>> 6L) & 0x1L) {
            goto loc_5F6268;
        loc_5F61D8:
            if((param1 >>> 6L) & 0x1L) {
                goto loc_5F6268;
            }
        }
        if(!((param1 >>> 7L) & 0x1L)) {
            goto loc_5F61E0;
        loc_5F6268:
            *(int*)(result * 4L + (long)param2) = 8;
            result = param0 + 1;
            if(!((param1 >>> 7L) & 0x1L)) {
                goto loc_5F61E0;
            }
        }
        *(int*)(result * 4L + (long)param2) = 9;
        result = param0 + 1;
        if((param1 >>> 8L) & 0x1L) {
            goto loc_5F6290;
        loc_5F61E0:
            if((param1 >>> 8L) & 0x1L) {
                goto loc_5F6290;
            }
        }
        if(!((param1 >>> 9L) & 0x1L)) {
            goto loc_5F61E8;
        loc_5F6290:
            *(int*)(result * 4L + (long)param2) = 10;
            result = param0 + 1;
            if(!((param1 >>> 9L) & 0x1L)) {
                goto loc_5F61E8;
            }
        }
        *(int*)(result * 4L + (long)param2) = 11;
        result = param0 + 1;
        if((param1 >>> 10L) & 0x1L) {
            goto loc_5F62B8;
        loc_5F61E8:
            if((param1 >>> 10L) & 0x1L) {
                goto loc_5F62B8;
            }
        }
        if(!((param1 >>> 11L) & 0x1L)) {
            goto loc_5F61F0;
        loc_5F62B8:
            *(int*)(result * 4L + (long)param2) = 12;
            result = param0 + 1;
            if(!((param1 >>> 11L) & 0x1L)) {
                goto loc_5F61F0;
            }
        }
        *(int*)(result * 4L + (long)param2) = 13;
        result = param0 + 1;
        if((param1 >>> 12L) & 0x1L) {
            goto loc_5F62E0;
        loc_5F61F0:
            if((param1 >>> 12L) & 0x1L) {
                goto loc_5F62E0;
            }
        }
        if(!((param1 >>> 13L) & 0x1L)) {
            goto loc_5F61F8;
        loc_5F62E0:
            *(int*)(result * 4L + (long)param2) = 14;
            result = param0 + 1;
            if(!((param1 >>> 13L) & 0x1L)) {
                goto loc_5F61F8;
            }
        }
        *(int*)(result * 4L + (long)param2) = 0xF;
        result = param0 + 1;
        if((param1 >>> 14L) & 0x1L) {
            goto loc_5F6308;
        loc_5F61F8:
            if((param1 >>> 14L) & 0x1L) {
                goto loc_5F6308;
            }
        }
        if(!((param1 >>> 15L) & 0x1L)) {
            goto loc_5F6200;
        loc_5F6308:
            *(int*)(result * 4L + (long)param2) = 16;
            result = param0 + 1;
            if(!((param1 >>> 15L) & 0x1L)) {
                goto loc_5F6200;
            }
        }
        *(int*)(result * 4L + (long)param2) = 17;
        result = param0 + 1;
        if((param1 >>> 16L) & 0x1L) {
            goto loc_5F6330;
        loc_5F6200:
            if((param1 >>> 16L) & 0x1L) {
                goto loc_5F6330;
            }
        }
        if(!((param1 >>> 17L) & 0x1L)) {
            return result;
        loc_5F6330:
            *(int*)(result * 4L + (long)param2) = 18;
            result = param0 + 1;
            if(!((param1 >>> 17L) & 0x1L)) {
                return result;
            }
        }
        *(int*)(result * 4L + (long)param2) = 19;
        return (uint64_t)(param0 + 1);
    }
    else if((param1 >>> 3L) & 0x1L) {
        goto loc_5F622C;
    }
    else {
        goto loc_5F61D0;
    }
}
