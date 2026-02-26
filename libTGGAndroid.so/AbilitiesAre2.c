int AbilitiesAre2(long param0, int param1, int param2, int param3, int param4) {
    if(param1 == param3 && param2 == param4) {
        return 1;
    }
    return param1 == param4 ? param2 == param3: 0L;
}
