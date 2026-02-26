long* CardsetGetUI(long* param0, int param1) {
    *(int*)(param0 + 75) = 1;
    *(char*)(param0 + 684) = 1;
    *(int*)(param0 + 676) = *(int*)(param0 + 676) <= param1 ? param1 + 1: *(int*)(param0 + 676);
    return (long*)(param1 * 4L + (long)param0);
}
