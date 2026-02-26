long ElemOfCard(long param0, uint32_t param1, int param2) {
    if((int)param1 >= 1) {
        long v0 = param1;
        int* ptr0 = (int*)(param0 + 4L);
    loc_73752C:
        do {
            int v1 = *(ptr0 - 1);
            if(*(ptr0 - 1) == 1) {
                if(*ptr0 != param2) {
                loc_737520:
                    long v2 = v0 - 1L;
                    --v0;
                    ptr0 += 4;
                    if(v2 == 0L) {
                        goto loc_737540;
                    }
                    else {
                        goto loc_73752C;
                    }
                }
                return 1L;
            }
            else if(v1 != 0) {
                goto loc_737520;
            }
        }
        while(v1 != 0);
    }
loc_737540:
    return 0L;
}
