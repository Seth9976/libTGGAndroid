long sub_C04160(long* param0) {
    long result;
    if(*(param0 + 2) == 0L) {
    loc_C0418C:
        result = *(param0 + 23) >= *(param0 + 24);
    }
    else {
        result = *(param0 + 4)(*(param0 + 5));
        if((uint32_t)result != 0) {
            if(*(int*)(param0 + 6) == 0) {
                return 1L;
            }
            goto loc_C0418C;
        }
    }
    return result;
}
