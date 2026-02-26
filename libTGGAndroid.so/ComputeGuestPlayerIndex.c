long ComputeGuestPlayerIndex(int param0, int* param1, long param2) {
    int v0;
    int v1 = *(param1 + 24);
    int v2 = v1 == 1001;
    int v3 = (uint64_t)(long*)(param1 + 19) < param2 ? v2 & 1: 0;
    if(*(param1 + 163) == 1001) {
        v3 = (uint64_t)(long*)(param1 + 158) < param2 ? param0 + 1: param0;
        v2 = v1 != 1001 ? 1: 2;
        if(*(param1 + 302) != 1001) {
            goto loc_5BCB88;
        }
        else {
        loc_5BCBF4:
            v3 = (uint64_t)(long*)(param1 + 297) < param2 ? param0 + 1: param0;
            v2 = v0 + 1;
        }
        if(*(param1 + 441) == 1001) {
            goto loc_5BCC10;
        loc_5BCB88:
            if(*(param1 + 441) == 1001) {
                goto loc_5BCC10;
            }
        }
        if(*(param1 + 0x244) != 1001) {
            goto loc_5BCBA0;
        loc_5BCC10:
            v3 = (uint64_t)(long*)(param1 + 436) < param2 ? param0 + 1: param0;
            v2 = v0 + 1;
            if(*(param1 + 0x244) != 1001) {
                goto loc_5BCBA0;
            }
        }
        v3 = (uint64_t)(long*)(param1 + 575) < param2 ? param0 + 1: param0;
        v2 = v0 + 1;
        if(*(param1 + 719) == 1001) {
            goto loc_5BCC48;
        loc_5BCBA0:
            if(*(param1 + 719) == 1001) {
                goto loc_5BCC48;
            }
        }
        if(*(param1 + 858) != 1001) {
            goto loc_5BCBB8;
        loc_5BCC48:
            v3 = (uint64_t)(long*)(param1 + 714) < param2 ? param0 + 1: param0;
            v2 = v0 + 1;
            if(*(param1 + 858) != 1001) {
            loc_5BCBB8:
                if(*(param1 + 997) != 1001) {
                    return v2 != 1 ? (uint64_t)(v3 + 1): 0L;
                }
                return v0 != 0 ? (uint64_t)(((uint64_t)(long*)(param1 + 992) < param2 ? param0 + 1: param0) + 1): 0L;
            }
        }
        v3 = (uint64_t)(long*)(param1 + 0x355) < param2 ? param0 + 1: param0;
        v2 = v0 + 1;
        if(*(param1 + 997) == 1001) {
            return v0 != 0 ? (uint64_t)(((uint64_t)(long*)(param1 + 992) < param2 ? param0 + 1: param0) + 1): 0L;
        }
        return v2 != 1 ? (uint64_t)(v3 + 1): 0L;
    }
    else if(*(param1 + 302) == 1001) {
        goto loc_5BCBF4;
    }
    else {
        goto loc_5BCB88;
    }
}
