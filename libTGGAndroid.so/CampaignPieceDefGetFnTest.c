long CampaignPieceDefGetFnTest(long* param0) {
    if(*(int*)(param0 + 3) == 2) {
        return *(param0 + 4);
    }
    if(*(int*)(param0 + 81) == 2) {
        return *(param0 + 82);
    }
    if(*(int*)(param0 + 159) == 2) {
        return *(param0 + 160);
    }
    if(*(int*)(param0 + 237) == 2) {
        return *(param0 + 0xee);
    }
    return 0L;
}
