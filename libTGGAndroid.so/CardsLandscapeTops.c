uint32_t CardsLandscapeTops(uint32_t* param0, uint32_t* param1) {
    uint32_t v0;
    uint32_t result;
    int v1;
    uint32_t v2 = *(param0 + 0x5d5);
    if(v2 == 0) {
        result = 0;
        v0 = *(param0 + 1497);
        if(*(param0 + 1497) != 0) {
        loc_7D4D50:
            *(uint32_t*)(result * 4L + (long)param1) = v0;
            result = v1 + 1;
        }
    }
    else {
        result = 1;
        *param1 = v2;
        v0 = *(param0 + 1497);
        if(*(param0 + 1497) != 0) {
            goto loc_7D4D50;
        }
    }
    uint32_t v3 = *(param0 + 0x5dd);
    if(*(param0 + 0x5dd) != 0) {
        *(uint32_t*)(result * 4L + (long)param1) = v3;
        result = v1 + 1;
    }
    uint32_t v4 = *(param0 + 1505);
    if(*(param0 + 1505) != 0) {
        *(uint32_t*)(result * 4L + (long)param1) = v4;
        result = v1 + 1;
    }
    return result;
}
