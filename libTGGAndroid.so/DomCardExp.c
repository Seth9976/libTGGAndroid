long DomCardExp(int param0, int* param1) {
    *param1 = param0 - ((param0 < 0 ? param0 + 0xff: param0) & 0xffffff00);
    return (uint64_t)(param0 / 0x100);
}
