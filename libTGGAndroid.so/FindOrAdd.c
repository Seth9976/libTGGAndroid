int* FindOrAdd(int* param0, int* param1, int param2) {
    int* result;
    int v0;
    int v1 = *param1;
    if(v1 >= 1) {
        long v2 = (uint64_t)v1;
        result = param0;
        while(*result != param2) {
            long v3 = v2 - 1L;
            --v2;
            result += 3;
            if(v3 != 0L) {
                continue;
            }
            result = (long)v1 * 12L + (long)param0;
            *param1 = v0 + 1;
            *(result + 1) = 0;
            *(result + 2) = 0;
            *result = param2;
            return result;
        }
    }
    else {
        result = (long)v1 * 12L + (long)param0;
        *param1 = v0 + 1;
        *(result + 1) = 0;
        *(result + 2) = 0;
        *result = param2;
    }
    return result;
}
