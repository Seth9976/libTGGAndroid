long TraitTargetPiles(int param0, int* param1, int* param2) {
    int v0;
    uint32_t result;
    *param2 = *param1;
    *(param2 + 1) = *(param1 + 1);
    *(param2 + 2) = *(param1 + 2);
    *(param2 + 3) = *(param1 + 3);
    *(param2 + 4) = *(param1 + 4);
    *(param2 + 5) = *(param1 + 5);
    *(param2 + 6) = *(param1 + 6);
    *(param2 + 7) = *(param1 + 7);
    *(param2 + 8) = *(param1 + 8);
    *(param2 + 9) = *(param1 + 9);
    int v1 = *(param1 + 70);
    if(*(param1 + 70) == 0) {
        result = 10;
        v0 = *(param1 + 92);
        if(*(param1 + 92) == 0) {
            return 10L;
        }
    loc_64232C:
        *(int*)(result * 4L + (long)param2) = v0;
        result = param0 + 1;
    }
    else {
        *(param2 + 10) = v1;
        result = 11;
        v0 = *(param1 + 92);
        if(*(param1 + 92) != 0) {
            goto loc_64232C;
        }
    }
    return result;
}
