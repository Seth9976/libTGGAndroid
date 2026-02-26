long sub_830410(float* param0, float* param1, float* param2) {
    double v0;
    char v1;
    float v2 = *param1;
    if(*param0 > *param1 || (*param0 == v2 && *(param0 + 1) > *(param1 + 1))) {
        v1 = *param2 == v2;
        if(*param2 >= v2 && (!v1 || *(param1 + 1) <= *(param2 + 1))) {
            double v3 = *(double*)param0;
            *(double*)param0 = *(double*)param1;
            *(double*)param1 = v3;
            v2 = *param2;
            v1 = (uint32_t)v3 == v2;
            if((uint32_t)v3 <= v2) {
                if(!v1) {
                    return 1L;
                }
                if((uint32_t)(v3 >>> 32L) <= *(param2 + 1)) {
                    return 1L;
                }
            }
            *(double*)param1 = *(double*)param2;
            *(double*)param2 = v3;
            return 2L;
        }
        v0 = *(double*)param0;
        *(double*)param0 = *(double*)param2;
        *(double*)param2 = v0;
        return 1L;
    }
    v1 = *param2 == v2;
    if(*param2 >= v2) {
        if(!v1) {
            return 0L;
        }
        if(*(param1 + 1) <= *(param2 + 1)) {
            return 0L;
        }
    }
    v0 = *(double*)param1;
    *(double*)param1 = *(double*)param2;
    *(double*)param2 = v0;
    v2 = *param1;
    v1 = *param0 == v2;
    if(*param0 <= v2) {
        if(!v1) {
            return 1L;
        }
        if(*(param0 + 1) <= *(param1 + 1)) {
            return 1L;
        }
    }
    v0 = *(double*)param0;
    *(double*)param0 = *(double*)param1;
    *(double*)param1 = v0;
    return 2L;
}
