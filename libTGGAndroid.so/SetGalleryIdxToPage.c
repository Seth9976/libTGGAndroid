long SetGalleryIdxToPage(int param0, int param1, int param2) {
    return (uint64_t)((param1 >= 4 ? (param2 > 8 ? param2: 8) - 8 < param1 - 4 ? (param2 > 8 ? param2: 8) - 8: param1 - 4: 0) + param0);
}
