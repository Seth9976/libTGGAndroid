void MoveToRoll(__int128* param0, long param1, __int128* param2, char* param3) {
    *param3 = 0;
    __int128 v0 = *(param2 + 1);
    *param0 = *param2;
    *(param0 + 1) = v0;
}
