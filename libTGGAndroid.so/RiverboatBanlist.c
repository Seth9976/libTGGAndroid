long RiverboatBanlist(int param0) {
    if(param0 <= 2834 && param0 != 1814 && param0 != 2334) {
        return 0L;
    }
    else if(param0 > 2834 && param0 != 2835 && param0 != 2840 && param0 != 0xc2c) {
        return 0L;
    }
    return 1L;
}
