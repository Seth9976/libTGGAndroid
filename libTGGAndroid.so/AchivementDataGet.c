long* AchivementDataGet(int* param0, int param1, int param2) {
    long v0;
    long v1 = (uint64_t)*(param0 + &gvar_10308+7efah);
    if(*(param0 + &gvar_10308+7efah) >= 1) {
        v0 = 0L;
        int* ptr0 = param0 + &gvar_10308+1b7ah;
        while(1) {
            int v2 = *ptr0;
            if(*ptr0 != 0 && param2 == v2) {
                break;
            }
            else if(*ptr0 != 0) {
                ++v0;
                ptr0 += 199;
                if(v0 != v1) {
                    continue;
                }
            }
            v0 = (uint32_t)v1;
            *(param0 + &gvar_10308+7efah) = (uint32_t)v1 + 1;
            *(int*)((long*)((long)(uint32_t)v1 * 796L + (long)param0) + 36673) = param2;
            return (long*)(param1 * 132L + v0 * 796L + (long)(long*)(param0 + &gvar_10308+1b7bh));
        }
    }
    else {
        v0 = (uint32_t)v1;
        *(param0 + &gvar_10308+7efah) = (uint32_t)v1 + 1;
        *(int*)((long*)((long)(uint32_t)v1 * 796L + (long)param0) + 36673) = param2;
    }
    return (long*)(param1 * 132L + v0 * 796L + (long)(long*)(param0 + &gvar_10308+1b7bh));
}
