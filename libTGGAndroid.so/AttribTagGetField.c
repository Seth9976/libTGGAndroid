long AttribTagGetField(long* param0, uint32_t param1) {
    return *(long*)(param1 * 8L + *(param0 + 3));
}
