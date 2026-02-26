int* GetCardWhere(int* param0, int* param1, int* param2, int* param3) {
    *param1 = 0;
    *param2 = 0;
    *param3 = 0;
    int v0 = *(param0 + 41);
    if(*(param0 + 2014) != 0) {
        *param1 = v0;
        *param2 = *(param0 + 41);
        return param0;
    }
    *param3 = v0;
    return param0;
}
