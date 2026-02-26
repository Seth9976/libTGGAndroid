long CampaignPieceDefGetCards(int* param0, long* param1, int param2) {
    long v0;
    if(*(param0 + 6) == 6 && *(param0 + 161) == param2) {
        v0 = 0L;
        long* ptr0 = (long*)(v0 * 624L + (long)param0);
        *param1 = *(ptr0 + 4);
        return (uint64_t)*(int*)(ptr0 + 80);
    }
    if(*(param0 + 162) == 6 && *(param0 + 317) == param2) {
        v0 = 1L;
        long* ptr0 = (long*)(v0 * 624L + (long)param0);
        *param1 = *(ptr0 + 4);
        return (uint64_t)*(int*)(ptr0 + 80);
    }
    if(*(param0 + 318) == 6 && *(param0 + 473) == param2) {
        v0 = 2L;
        long* ptr0 = (long*)(v0 * 624L + (long)param0);
        *param1 = *(ptr0 + 4);
        return (uint64_t)*(int*)(ptr0 + 80);
    }
    if(*(param0 + 474) == 6 && *(param0 + 629) == param2) {
        v0 = 3L;
        long* ptr0 = (long*)(v0 * 624L + (long)param0);
        *param1 = *(ptr0 + 4);
        return (uint64_t)*(int*)(ptr0 + 80);
    }
    return 0L;
}
