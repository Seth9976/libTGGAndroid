uint64_t* sub_CF7D70(uint8_t* param0, uint32_t param1) {
    long v0;
    long v1;
    uint16_t* ptr0;
    if(param1 >>> 4 <= 624) {
        if(param1 <= 9) {
            *param0 = (uint8_t)((uint8_t)param1 + 48);
            return (uint64_t*)(param0 + 1L);
        }
        else if(param1 <= 99) {
            *(uint16_t*)param0 = gvar_48A1A0[param1];
            return (uint64_t*)(param0 + 2L);
        }
        if(param1 <= 999) {
            ptr0 = gvar_48A1A0[(uint64_t)((uint32_t)(uint16_t)param1 - (uint32_t)(((uint64_t)(uint16_t)param1 * 1374389535L) >>> 37L) * 100)];
            *param0 = (uint8_t)((uint8_t)(((uint64_t)(uint16_t)param1 * 1374389535L) >>> 37L) + 48);
            *(uint16_t*)(param0 + 1L) = (uint16_t)ptr0;
            return (uint64_t*)(param0 + 3L);
        }
        v1 = gvar_48A1A0[(uint64_t)(param1 - (uint32_t)(((uint64_t)(uint16_t)param1 * 1374389535L) >>> 37L) * 100) & 0xffffL];
        *(uint16_t*)param0 = gvar_48A1A0[(uint64_t)(uint32_t)(((uint64_t)(uint16_t)param1 * 1374389535L) >>> 37L)];
        *(uint16_t*)(param0 + 2L) = (uint16_t)v1;
        return (uint64_t*)(param0 + 4L);
    }
    if(param1 < &aMacro_map_JoinG+18h) {
        if(param1 >>> 5 <= 3124) {
            *param0 = (uint8_t)((uint8_t)((param1 * 0xd1b71759L) >>> 45L) + 48);
            v0 = 1L;
        }
        else {
            *(uint16_t*)param0 = gvar_48A1A0[(uint64_t)(uint32_t)((param1 * 0xd1b71759L) >>> 45L)];
            v0 = 2L;
        }
    }
    else if(param1 <= 9999999) {
        long v2 = gvar_48A1A0[(uint64_t)((uint32_t)((param1 * 0xd1b71759L) >>> 45L) - (uint32_t)(((uint64_t)(uint16_t)((param1 * 0xd1b71759L) >>> 45L) * 1374389535L) >>> 37L) * 100) & 0xffffL];
        *param0 = (uint8_t)((uint8_t)(((uint64_t)(uint16_t)((param1 * 0xd1b71759L) >>> 45L) * 1374389535L) >>> 37L) + 48);
        v0 = 3L;
        *(uint16_t*)(param0 + 1L) = (uint16_t)v2;
    }
    else {
        long v3 = gvar_48A1A0[(uint64_t)((uint32_t)((param1 * 0xd1b71759L) >>> 45L) - (uint32_t)(((uint64_t)(uint32_t)((param1 * 0xd1b71759L) >>> 45L) * 1374389535L) >>> 37L) * 100)];
        *(uint16_t*)param0 = gvar_48A1A0[param1 / &aMacro_map_JoinG+18h];
        v0 = 4L;
        *(uint16_t*)(param0 + 2L) = (uint16_t)v3;
    }
    v1 = gvar_48A1A0[(uint64_t)(param1 - (uint32_t)((param1 * 0xd1b71759L) >>> 45L) * 10000 - (uint32_t)(((uint64_t)((uint16_t)param1 - (uint16_t)((param1 * 0xd1b71759L) >>> 45L) * 10000) * 1374389535L) >>> 37L) * 100) & 0xffffL];
    ptr0 = param0 + v0;
    *ptr0 = gvar_48A1A0[((uint64_t)((uint16_t)param1 - (uint16_t)((param1 * 0xd1b71759L) >>> 45L) * 10000) * 1374389535L) >>> 37L];
    *(ptr0 + 1) = (uint16_t)v1;
    return (uint64_t*)(ptr0 + 2);
}
