long* AwardLandscapeAdjustment(long* param0, int param1, uint32_t param2) {
    if(*(char*)((char*)param0 + 4740L) != 0) {
        int v0 = *(int*)(*((long*)(param2 * 104L + (long)param0) + 845) + 192L);
        if(*(int*)((long*)(param1 * 23088L + (long)param0) + 12343) != v0 && *(int*)((long)(long*)((long)(long*)((long)param1 * 23088L) + (long)&gvar_10308) + (long)(long*)((char*)param0 + 32436L)) != v0 && *(int*)((long)(long*)((long)(long*)((long)param1 * 23088L) + (long)&gvar_10308) + (long)(param0 + 4055)) != v0 && *(int*)((long)(long*)((long)(long*)((long)param1 * 23088L) + (long)&gvar_10308) + (long)(long*)((char*)param0 + 32444L)) != v0) {
            int* ptr0 = (int*)((long*)((long)(long*)((long)param1 * 23088L) + (long)param0) + 12354);
            if(*(int*)((char*)param0 + 0x117cL) == v0) {
                *ptr0 += *(int*)(param0 + 560);
            }
            if(*(int*)((char*)param0 + 4484L) == v0) {
                *ptr0 += *(int*)(param0 + 561);
                if(*(int*)((char*)param0 + 0x118cL) != v0) {
                    goto loc_7F2BFC;
                }
            loc_7F2C3C:
                *ptr0 += *(int*)(param0 + 0x232);
                if(*(int*)((char*)param0 + 0x1194L) != v0) {
                    return param0;
                loc_7F2BFC:
                    if(*(int*)((char*)param0 + 0x1194L) != v0) {
                        return param0;
                    }
                }
                *ptr0 += *(int*)(param0 + 0x233);
                return param0;
            }
            else if(*(int*)((char*)param0 + 0x118cL) == v0) {
                goto loc_7F2C3C;
            }
            else {
                goto loc_7F2BFC;
            }
        }
    }
    return param0;
}
