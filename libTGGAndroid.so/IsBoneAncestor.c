long IsBoneAncestor(long* param0, int* param1, int param2) {
    long v0;
    int v1;
    int v2 = *(param1 + 27);
    if(*(param1 + 27) != -1) {
        do {
            v0 = param2 == v2;
            if(param2 == v2) {
                break;
            }
            v2 = *(int*)(v1 * 216L + *(param0 + 3) + 108L);
        }
        while(v2 != -1);
        return (uint64_t)(uint32_t)v0;
    }
    return 0L;
}
