long DomExpansionsFromBitset(int param0, long param1, int* param2) {
    uint32_t result;
    if(!((param1 >>> 1L) & 0x1L)) {
        result = 0;
        if((param1 >>> 2L) & 0x1L) {
            goto loc_5FC2E0;
        }
    }
    else {
        *param2 = 2;
        result = 1;
        if((param1 >>> 2L) & 0x1L) {
        loc_5FC2E0:
            *(int*)(result * 4L + (long)param2) = 3;
            result = param0 + 1;
        }
    }
    if((param1 >>> 3L) & 0x1L) {
        *(int*)(result * 4L + (long)param2) = 4;
        result = param0 + 1;
        if(!((param1 >>> 4L) & 0x1L)) {
            goto loc_5FC2F0;
        }
        else {
        loc_5FC34C:
            *(int*)(result * 4L + (long)param2) = 5;
            result = param0 + 1;
        }
        if((param1 >>> 5L) & 0x1L) {
            goto loc_5FC360;
        loc_5FC2F0:
            if((param1 >>> 5L) & 0x1L) {
                goto loc_5FC360;
            }
        }
        if(!((param1 >>> 6L) & 0x1L)) {
            goto loc_5FC2F8;
        loc_5FC360:
            *(int*)(result * 4L + (long)param2) = 6;
            result = param0 + 1;
            if(!((param1 >>> 6L) & 0x1L)) {
                goto loc_5FC2F8;
            }
        }
        *(int*)(result * 4L + (long)param2) = 7;
        result = param0 + 1;
        if((param1 >>> 7L) & 0x1L) {
            goto loc_5FC388;
        loc_5FC2F8:
            if((param1 >>> 7L) & 0x1L) {
                goto loc_5FC388;
            }
        }
        if(!((param1 >>> 8L) & 0x1L)) {
            goto loc_5FC300;
        loc_5FC388:
            *(int*)(result * 4L + (long)param2) = 8;
            result = param0 + 1;
            if(!((param1 >>> 8L) & 0x1L)) {
                goto loc_5FC300;
            }
        }
        *(int*)(result * 4L + (long)param2) = 9;
        result = param0 + 1;
        if((param1 >>> 9L) & 0x1L) {
            goto loc_5FC3B0;
        loc_5FC300:
            if((param1 >>> 9L) & 0x1L) {
                goto loc_5FC3B0;
            }
        }
        if(!((param1 >>> 10L) & 0x1L)) {
            goto loc_5FC308;
        loc_5FC3B0:
            *(int*)(result * 4L + (long)param2) = 10;
            result = param0 + 1;
            if(!((param1 >>> 10L) & 0x1L)) {
                goto loc_5FC308;
            }
        }
        *(int*)(result * 4L + (long)param2) = 11;
        result = param0 + 1;
        if((param1 >>> 11L) & 0x1L) {
            goto loc_5FC3D8;
        loc_5FC308:
            if((param1 >>> 11L) & 0x1L) {
                goto loc_5FC3D8;
            }
        }
        if(!((param1 >>> 12L) & 0x1L)) {
            goto loc_5FC310;
        loc_5FC3D8:
            *(int*)(result * 4L + (long)param2) = 12;
            result = param0 + 1;
            if(!((param1 >>> 12L) & 0x1L)) {
                goto loc_5FC310;
            }
        }
        *(int*)(result * 4L + (long)param2) = 13;
        result = param0 + 1;
        if((param1 >>> 13L) & 0x1L) {
            goto loc_5FC400;
        loc_5FC310:
            if((param1 >>> 13L) & 0x1L) {
                goto loc_5FC400;
            }
        }
        if(!((param1 >>> 14L) & 0x1L)) {
            goto loc_5FC318;
        loc_5FC400:
            *(int*)(result * 4L + (long)param2) = 14;
            result = param0 + 1;
            if(!((param1 >>> 14L) & 0x1L)) {
                goto loc_5FC318;
            }
        }
        *(int*)(result * 4L + (long)param2) = 0xF;
        result = param0 + 1;
        if((param1 >>> 15L) & 0x1L) {
            goto loc_5FC428;
        loc_5FC318:
            if((param1 >>> 15L) & 0x1L) {
                goto loc_5FC428;
            }
        }
        if(!((param1 >>> 16L) & 0x1L)) {
            goto loc_5FC320;
        loc_5FC428:
            *(int*)(result * 4L + (long)param2) = 16;
            result = param0 + 1;
            if(!((param1 >>> 16L) & 0x1L)) {
                goto loc_5FC320;
            }
        }
        *(int*)(result * 4L + (long)param2) = 17;
        result = param0 + 1;
        if((param1 >>> 17L) & 0x1L) {
            goto loc_5FC450;
        loc_5FC320:
            if((param1 >>> 17L) & 0x1L) {
                goto loc_5FC450;
            }
        }
        if(!(param1 & 0x1L)) {
            return result;
        loc_5FC450:
            *(int*)(result * 4L + (long)param2) = 18;
            result = param0 + 1;
            if(!(param1 & 0x1L)) {
                return result;
            }
        }
        *(int*)(result * 4L + (long)param2) = 19;
        return (uint64_t)(param0 + 1);
    }
    else if((param1 >>> 4L) & 0x1L) {
        goto loc_5FC34C;
    }
    else {
        goto loc_5FC2F0;
    }
}
