long PileAnyCounts(int* param0) {
    if(*(param0 + 2) != 0 || *(param0 + 8) != 0 || *(param0 + 3) != 0 || *(param0 + 9) != 0 || *(param0 + 4) != 0 || *(param0 + 10) != 0 || *(param0 + 5) != 0 || *(param0 + 11) != 0 || *(param0 + 6) != 0 || *(param0 + 12) != 0 || *(param0 + 7) != 0) {
        return 1L;
    }
    return *(param0 + 13);
}
