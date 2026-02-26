int IsSeaStamp(long param0, int param1) {
    if(param1 - 58 <= 19) {
        return (uint64_t)((&gvar_10308+6fdf9h >>> param0) & 1);
    }
    return 0;
}
