long IsOncePerSourceOnlyTrigger(int param0) {
    if(param0 <= 2053 && param0 != 1048 && param0 != 1287) {
        return 0L;
    }
    else if(param0 > 2053 && param0 != 2054 && param0 != 0x1115) {
        return 0L;
    }
    return 1L;
}
