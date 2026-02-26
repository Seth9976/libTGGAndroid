long sub_C1E458(char* param0) {
    int v0 = (uint32_t)*param0;
    if(*param0 <= 78) {
        if(v0 != 0) {
            if(v0 == 49 && *(param0 + 1L) == 0 && *(param0 + 2L) == 0 && *(param0 + 3L) == 0) {
                return 1L;
            }
        }
        else if(*(param0 + 1L) == 1 && *(param0 + 2L) == 0 && *(param0 + 3L) == 0) {
            return 1L;
        }
    }
    else if(v0 == 116) {
        v0 = (uint32_t)*(param0 + 1L);
        if(*(param0 + 1L) != 114) {
            if(v0 == 121 && *(param0 + 2L) == 112 && *(param0 + 3L) == 49) {
                return 1L;
            }
        }
        else if(*(param0 + 2L) == 117 && *(param0 + 3L) == 101) {
            return 1L;
        }
    }
    else if(v0 == 79 && *(param0 + 1L) == 84 && *(param0 + 2L) == 84 && *(param0 + 3L) == 79) {
        return 1L;
    }
    return 0L;
}
