long* RandomizerDeck_Reject(long* param0, long* param1) {
    int v0 = *(int*)((char*)param0 + 16012L);
    *(int*)((char*)param0 + 16012L) = v0 + 1;
    *(long*)((char*)(v0 * 8L + (long)param0) + 9612L) = *param1;
    return param0;
}
