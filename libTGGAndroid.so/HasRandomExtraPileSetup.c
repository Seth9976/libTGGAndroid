long HasRandomExtraPileSetup(uint64_t* param0, int* param1, int* param2, uint64_t* param3) {
    uint64_t* ptr0;
    long v0;
    long* ptr1 = (long*)*(uint32_t*)(param0 + 28);
    if(*(uint32_t*)(param0 + 28) != 0) {
        if((uint32_t)ptr1 == 13 && *(param0 + 33) != 0L) {
            v0 = 0L;
            ptr0 = param0 + 33;
            goto loc_806D90;
        }
        else {
            ptr1 = *(uint32_t*)(param0 + 52);
            if(*(uint32_t*)(param0 + 52) != 13 && (uint32_t)ptr1 == 0) {
                return (uint64_t)(uint32_t)ptr1;
            }
            else if(*(uint32_t*)(param0 + 52) == 13 && *(param0 + 57) != 0L) {
                ptr0 = param0 + 57;
                v0 = 1L;
                goto loc_806D90;
            }
            else {
                ptr1 = *(uint32_t*)(param0 + 76);
                if(*(uint32_t*)(param0 + 76) == 0) {
                    return (uint64_t)(uint32_t)ptr1;
                }
                if((uint32_t)ptr1 == 13 && *(param0 + 81) != 0L) {
                    ptr0 = param0 + 81;
                    v0 = 2L;
                    goto loc_806D90;
                }
                ptr1 = *(uint32_t*)(param0 + 100);
                if(*(uint32_t*)(param0 + 100) == 0) {
                    return (uint64_t)(uint32_t)ptr1;
                }
                if((uint32_t)ptr1 == 13 && *(param0 + 105) != 0L) {
                    ptr0 = param0 + 105;
                    v0 = 3L;
                    goto loc_806D90;
                }
                ptr1 = *(uint32_t*)(param0 + 124);
                if(*(uint32_t*)(param0 + 124) == 0) {
                    return (uint64_t)(uint32_t)ptr1;
                }
                if((uint32_t)ptr1 == 13 && *(param0 + 129) != 0L) {
                    ptr0 = param0 + 129;
                    v0 = 4L;
                    goto loc_806D90;
                }
                ptr1 = *(uint32_t*)(param0 + 148);
                if(*(uint32_t*)(param0 + 148) == 0) {
                    return (uint64_t)(uint32_t)ptr1;
                }
                if((uint32_t)ptr1 == 13 && *(param0 + 0x99) != 0L) {
                    ptr0 = param0 + 0x99;
                    v0 = 5L;
                    goto loc_806D90;
                }
                ptr1 = *(uint32_t*)(param0 + 172);
                if(*(uint32_t*)(param0 + 172) == 0) {
                    return (uint64_t)(uint32_t)ptr1;
                }
                if((uint32_t)ptr1 == 13 && *(param0 + 177) != 0L) {
                    ptr0 = param0 + 177;
                    v0 = 6L;
                    goto loc_806D90;
                }
            }
            if(*(uint32_t*)(param0 + 196) != 13) {
                return 0L;
            }
            ptr1 = *(param0 + 201);
            if(ptr1 == 0L) {
                return (uint64_t)(uint32_t)ptr1;
            }
            ptr0 = param0 + 201;
            v0 = 7L;
        loc_806D90:
            uint32_t* ptr2 = (uint32_t*)(v0 * 192L + (long)param0);
            *param1 = *(ptr2 + 62);
            ptr1 = *(ptr2 + 0x3F);
            if(param3 != 0L) {
                *param3 = *ptr0;
            }
            if(param2 != 0L) {
                *param2 = *(uint32_t*)((char*)(v0 * 192L + (long)param0) + 404L);
                return (uint64_t)(uint32_t)ptr1;
            }
        }
    }
    return (uint64_t)(uint32_t)ptr1;
}
