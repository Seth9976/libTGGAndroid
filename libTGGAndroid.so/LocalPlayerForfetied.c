long LocalPlayerForfetied(int* param0) {
    int v0 = *(param0 + 8);
    if(v0 <= 1001) {
        if(v0 - 3 < 2 || v0 != 1001) {
            return 0L;
        }
    }
    else if(v0 - 1004 >= 2) {
        return 0L;
    }
    return 1L;
}
