long DomConfigHasExpansion(long* param0, int param1, int* param2, long* param3) {
    long v0;
    if(*(int*)(param0 + 313) == param1) {
        v0 = 0L;
        goto loc_5FBBF4;
    }
    else {
        if(*(int*)(param0 + 315) == param1) {
            v0 = 1L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 317) == param1) {
            v0 = 2L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 319) == param1) {
            v0 = 3L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 321) == param1) {
            v0 = 4L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 323) == param1) {
            v0 = 5L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 325) == param1) {
            v0 = 6L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 327) == param1) {
            v0 = 7L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 329) == param1) {
            v0 = 8L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 331) == param1) {
            v0 = 9L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 333) == param1) {
            v0 = 10L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 335) == param1) {
            v0 = 11L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 0x151) == param1) {
            v0 = 12L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 339) == param1) {
            v0 = 13L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 0x155) == param1) {
            v0 = 14L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 343) == param1) {
            v0 = 15L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 345) == param1) {
            v0 = 16L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 347) == param1) {
            v0 = 17L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 349) == param1) {
            v0 = 18L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 351) == param1) {
            v0 = 19L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 0x161) == param1) {
            v0 = 20L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 355) == param1) {
            v0 = 21L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 357) == param1) {
            v0 = 22L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 359) == param1) {
            v0 = 23L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 361) == param1) {
            v0 = 24L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 363) == param1) {
            v0 = 25L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 365) == param1) {
            v0 = 26L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 367) == param1) {
            v0 = 27L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 0x171) == param1) {
            v0 = 28L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 371) == param1) {
            v0 = 29L;
            goto loc_5FBBF4;
        }
        if(*(int*)(param0 + 373) == param1) {
            v0 = 30L;
            goto loc_5FBBF4;
        }
    }
    if(*(int*)(param0 + 0x177) == param1) {
        v0 = 31L;
    loc_5FBBF4:
        if(param2 != 0L) {
            *param2 = param1 != 19 ? *(int*)((char*)(v0 * 16L + (long)param0) + 0x9ccL): 0;
        }
        if(param3 != 0L) {
            *param3 = *((long*)(v0 * 16L + (long)param0) + 314);
        }
        return 1L;
    }
    return 0L;
}
