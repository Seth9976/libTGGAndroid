long GetLandscapeInsertIndex(int* param0) {
    if(*(param0 + 40) != 0) {
        if(*(param0 + 58) != 0) {
            if(*(param0 + 76) != 0) {
                return *(param0 + 94) ? 4L: 3L;
            }
            return 2L;
        }
        return 1L;
    }
    return 0L;
}
