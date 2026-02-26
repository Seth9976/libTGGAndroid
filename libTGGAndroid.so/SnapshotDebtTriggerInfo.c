int SnapshotDebtTriggerInfo(__int128* param0, int param1) {
    *(long*)(param0 + 4) = 0L;
    *(param0 + 2) = 0x0X;
    *(param0 + 3) = 0x0X;
    *param0 = 0x0X;
    *(param0 + 1) = 0x0X;
    *(int*)param0 = 4;
    *(int*)((char*)param0 + 8L) = param1;
    return param1;
}
