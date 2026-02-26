uint64_t* DefParseTreeHandleNoNewLineFlag(uint64_t* param0, int param1) {
    if(*(uint32_t*)(param0 + 3) >= 1) {
        char* ptr0 = **(param0 + 2);
        *(ptr0 + 40L) = (uint8_t)__ror__(param1, 9) & 1;
        *(ptr0 + 41L) = (uint8_t)__ror__(param1, 10) & 1;
    }
    return param0;
}
