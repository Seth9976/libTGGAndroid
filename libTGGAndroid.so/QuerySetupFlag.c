long QuerySetupFlag(int param0, int param1, int param2) {
    return param0 & param2 ? param1 == 0: 0L;
}
