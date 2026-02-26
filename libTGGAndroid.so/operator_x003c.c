long operator<(int* param0, int* param1) {
    int v0 = *param0;
    int v1 = *param1;
    char v2 = *param1 > v0;
    char v3 = v0 == v1;
    char v4 = (((v0 - v1) ^ v0) & (v0 ^ v1)) < 0;
    if(v0 < v1) {
        return 1L;
    }
    if(!v3 && v4 == v2) {
        return 0L;
    }
    v0 = *(param0 + 1);
    v1 = *(param1 + 1);
    v2 = *(param1 + 1) > v0;
    v3 = v0 == v1;
    v4 = (((v0 - v1) ^ v0) & (v0 ^ v1)) < 0;
    if(v0 < v1) {
        return 1L;
    }
    if(!v3 && v4 == v2) {
        return 0L;
    }
    v0 = *(param0 + 2);
    v1 = *(param1 + 2);
    v2 = *(param1 + 2) > v0;
    v3 = v0 == v1;
    v4 = (((v0 - v1) ^ v0) & (v0 ^ v1)) < 0;
    if(v0 < v1) {
        return 1L;
    }
    if(!v3 && v4 == v2) {
        return 0L;
    }
    if(*(param0 + 3) != 0) {
        return 0L;
    }
    return *(param1 + 3);
}
