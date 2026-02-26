long DomExpSetupFromBitset(int param0, long param1, int param2, long* param3) {
    long* ptr0;
    uint32_t result;
    if(!((param1 >>> 1L) & 0x1L)) {
        result = 0;
        if((param1 >>> 2L) & 0x1L) {
            goto loc_5FC4A8;
        }
    }
    else {
        *(param3 + 1) = 0xa00000000L;
        result = 1;
        *param3 = 0xffffffff00000002L;
        if((param1 >>> 2L) & 0x1L) {
        loc_5FC4A8:
            ptr0 = result * 16L + (long)param3;
            result = param0 + 1;
            *ptr0 = 0xffffffff00000003L;
            *(ptr0 + 1) = 0xa00000000L;
        }
    }
    if((param1 >>> 3L) & 0x1L) {
        ptr0 = result * 16L + (long)param3;
        result = param0 + 1;
        *ptr0 = 0xffffffff00000004L;
        *(ptr0 + 1) = 0xa00000000L;
        if(!((param1 >>> 4L) & 0x1L)) {
            goto loc_5FC4C4;
        }
        else {
        loc_5FC52C:
            ptr0 = result * 16L + (long)param3;
            result = param0 + 1;
            *ptr0 = 0xffffffff00000005L;
            *(ptr0 + 1) = 0xa00000000L;
        }
        if((param1 >>> 5L) & 0x1L) {
            goto loc_5FC54C;
        loc_5FC4C4:
            if((param1 >>> 5L) & 0x1L) {
                goto loc_5FC54C;
            }
        }
        if(!((param1 >>> 6L) & 0x1L)) {
            goto loc_5FC4CC;
        loc_5FC54C:
            ptr0 = result * 16L + (long)param3;
            result = param0 + 1;
            *ptr0 = 0xffffffff00000006L;
            *(ptr0 + 1) = 0xa00000000L;
            if(!((param1 >>> 6L) & 0x1L)) {
                goto loc_5FC4CC;
            }
        }
        ptr0 = result * 16L + (long)param3;
        result = param0 + 1;
        *ptr0 = 0xffffffff00000007L;
        *(ptr0 + 1) = 0xa00000000L;
        if((param1 >>> 7L) & 0x1L) {
            goto loc_5FC58C;
        loc_5FC4CC:
            if((param1 >>> 7L) & 0x1L) {
                goto loc_5FC58C;
            }
        }
        if(!((param1 >>> 8L) & 0x1L)) {
            goto loc_5FC4D4;
        loc_5FC58C:
            ptr0 = result * 16L + (long)param3;
            result = param0 + 1;
            *ptr0 = 0xffffffff00000008L;
            *(ptr0 + 1) = 0xa00000000L;
            if(!((param1 >>> 8L) & 0x1L)) {
                goto loc_5FC4D4;
            }
        }
        ptr0 = result * 16L + (long)param3;
        result = param0 + 1;
        *ptr0 = 0xffffffff00000009L;
        *(ptr0 + 1) = 0xa00000000L;
        if((param1 >>> 9L) & 0x1L) {
            goto loc_5FC5CC;
        loc_5FC4D4:
            if((param1 >>> 9L) & 0x1L) {
                goto loc_5FC5CC;
            }
        }
        if(!((param1 >>> 10L) & 0x1L)) {
            goto loc_5FC4DC;
        loc_5FC5CC:
            ptr0 = result * 16L + (long)param3;
            result = param0 + 1;
            *ptr0 = 0xffffffff0000000aL;
            *(ptr0 + 1) = 0xa00000000L;
            if(!((param1 >>> 10L) & 0x1L)) {
                goto loc_5FC4DC;
            }
        }
        ptr0 = result * 16L + (long)param3;
        result = param0 + 1;
        *ptr0 = 0xffffffff0000000bL;
        *(ptr0 + 1) = 0xa00000000L;
        if((param1 >>> 11L) & 0x1L) {
            goto loc_5FC60C;
        loc_5FC4DC:
            if((param1 >>> 11L) & 0x1L) {
                goto loc_5FC60C;
            }
        }
        if(!((param1 >>> 12L) & 0x1L)) {
            goto loc_5FC4E4;
        loc_5FC60C:
            ptr0 = result * 16L + (long)param3;
            result = param0 + 1;
            *ptr0 = 0xffffffff0000000cL;
            *(ptr0 + 1) = 0xa00000000L;
            if(!((param1 >>> 12L) & 0x1L)) {
                goto loc_5FC4E4;
            }
        }
        ptr0 = result * 16L + (long)param3;
        result = param0 + 1;
        *ptr0 = 0xffffffff0000000dL;
        *(ptr0 + 1) = 0xa00000000L;
        if((param1 >>> 13L) & 0x1L) {
            goto loc_5FC64C;
        loc_5FC4E4:
            if((param1 >>> 13L) & 0x1L) {
                goto loc_5FC64C;
            }
        }
        if(!((param1 >>> 14L) & 0x1L)) {
            goto loc_5FC4EC;
        loc_5FC64C:
            ptr0 = result * 16L + (long)param3;
            result = param0 + 1;
            *ptr0 = 0xffffffff0000000eL;
            *(ptr0 + 1) = 0xa00000000L;
            if(!((param1 >>> 14L) & 0x1L)) {
                goto loc_5FC4EC;
            }
        }
        ptr0 = result * 16L + (long)param3;
        result = param0 + 1;
        *ptr0 = 0xffffffff0000000fL;
        *(ptr0 + 1) = 0xa00000000L;
        if((param1 >>> 15L) & 0x1L) {
            goto loc_5FC68C;
        loc_5FC4EC:
            if((param1 >>> 15L) & 0x1L) {
                goto loc_5FC68C;
            }
        }
        if(!((param1 >>> 16L) & 0x1L)) {
            goto loc_5FC4F4;
        loc_5FC68C:
            ptr0 = result * 16L + (long)param3;
            result = param0 + 1;
            *ptr0 = 0xffffffff00000010L;
            *(ptr0 + 1) = 0xa00000000L;
            if(!((param1 >>> 16L) & 0x1L)) {
                goto loc_5FC4F4;
            }
        }
        ptr0 = result * 16L + (long)param3;
        result = param0 + 1;
        *ptr0 = 0xffffffff00000011L;
        *(ptr0 + 1) = 0xa00000000L;
        if((param1 >>> 17L) & 0x1L) {
            goto loc_5FC6CC;
        loc_5FC4F4:
            if((param1 >>> 17L) & 0x1L) {
                goto loc_5FC6CC;
            }
        }
        if(param2 == 0) {
            return result;
        loc_5FC6CC:
            ptr0 = result * 16L + (long)param3;
            result = param0 + 1;
            *ptr0 = 0xffffffff00000012L;
            *(ptr0 + 1) = 0xa00000000L;
            if(param2 == 0) {
                return result;
            }
        }
        if(param1 & 0x1L) {
            ptr0 = result * 16L + (long)param3;
            *(int*)ptr0 = 19;
            *(int*)((char*)ptr0 + 4L) = param2;
            *(ptr0 + 1) = 0xa00000000L;
            return (uint64_t)(param0 + 1);
        }
    }
    else if((param1 >>> 4L) & 0x1L) {
        goto loc_5FC52C;
    }
    else {
        goto loc_5FC4C4;
    }
    return result;
}
