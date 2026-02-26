long IsBannedThemeCard(int param0) {
    long v0;
    if(param0 <= 2328) {
        if((param0 - 1281 > 11 || ((1 << v0) & 0x901) == 0) && param0 != 520) {
            return 0L;
        }
    }
    else if(param0 != 2329 && param0 != 2335) {
        return 0L;
    }
    return 1L;
}
