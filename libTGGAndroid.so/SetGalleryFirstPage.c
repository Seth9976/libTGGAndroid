long SetGalleryFirstPage(int param0, int param1) {
    return param0 >= 4 ? (param1 > 8 ? param1: 8) - 8 < param0 - 4 ? (uint64_t)((param1 > 8 ? param1: 8) - 8): (uint64_t)(param0 - 4): 0L;
}
