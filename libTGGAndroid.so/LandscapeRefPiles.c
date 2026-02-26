long* LandscapeRefPiles(int* param0, int param1) {
    if(*(param0 + 10) == param1) {
        return (long*)(param0 + 11);
    }
    if(*(param0 + 25) == param1) {
        return (long*)(param0 + 26);
    }
    if(*(param0 + 40) == param1) {
        return (long*)(param0 + 41);
    }
    if(*(param0 + 55) == param1) {
        return (long*)(param0 + 56);
    }
    return NULL;
}
