long CardCostParse(int* param0, long param1) {
    int v0;
    int v1;
    *(long*)(param0 + 3) = 0L;
    *param0 = (uint32_t)(uint8_t)param1;
    *(param0 + 1) = (__ror__((uint32_t)param1, 16)) & 1;
    *(param0 + 2) = (uint32_t)param1 >> 24;
    if(!((param1 >>> 19L) & 0x1L)) {
        v0 = 0;
        if((param1 >>> 17L) & 0x1L) {
            goto loc_7D5C80;
        }
    }
    else {
        v0 = &gvar_10308+6fcf8h;
        *(param0 + 3) = &gvar_10308+6fcf8h;
        if((param1 >>> 17L) & 0x1L) {
        loc_7D5C80:
            v0 = v1 | &gvar_10308+fcf8h;
            *(param0 + 3) = v1 | &gvar_10308+fcf8h;
        }
    }
    if(!((param1 >>> 20L) & 0x1L)) {
        *(char*)(param0 + 4) = (uint8_t)__ror__((uint32_t)param1, 18) & 1;
        return param1;
    }
    *(param0 + 3) = v0 | "GainCard6CardID8DomWhere7LogFlag16TriggerEventFlag13CardMoveStyle";
    *(char*)(param0 + 4) = (uint8_t)__ror__((uint32_t)param1, 18) & 1;
    return param1;
}
