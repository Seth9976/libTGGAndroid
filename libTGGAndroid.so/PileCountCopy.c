long* PileCountCopy(long* param0, long* param1) {
    __int128 v0 = *(__int128*)(param1 + 1);
    *(param0 + 4) = *(param1 + 3);
    *(__int128*)(param0 + 2) = v0;
    __int128 v1 = *(__int128*)(param1 + 4);
    *(param0 + 7) = *(param1 + 6);
    *(__int128*)(param0 + 5) = v1;
    return param0;
}
