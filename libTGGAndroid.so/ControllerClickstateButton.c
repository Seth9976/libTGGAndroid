long* ControllerClickstateButton(int* param0, int param1) {
    int v0;
    if(param1 <= 35) {
        return (long*)(param1 * 0x330L + (long)param0) + 2;
    }
    return (long*)((long)(v0 - 36) * 0x330L + (long)(*(param0 + 2) ? (long*)(param0 + 8980): (long*)(param0 + 7348)));
}
