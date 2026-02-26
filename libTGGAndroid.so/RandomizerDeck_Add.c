int* RandomizerDeck_Add(int* param0, int param1) {
    int v0 = *(param0 + 800);
    *(param0 + 800) = v0 + 1;
    *(int*)(v0 * 4L + (long)param0) = param1;
    return param0;
}
