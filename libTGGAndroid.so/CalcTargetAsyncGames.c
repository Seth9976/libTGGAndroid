long CalcTargetAsyncGames(int param0, int param1) {
    return (uint64_t)((((__ror__(param1, 0)) & 1) | (param1 & 1 ? -2: 0)) & (param0 > 1 ? param0: 1));
}
