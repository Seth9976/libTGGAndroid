long CampaignIsComplete(int* param0) {
    return (*(param0 + 30) & 0xfffffffe) == 4;
}
