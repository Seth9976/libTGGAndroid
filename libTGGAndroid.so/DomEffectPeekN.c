long DomEffectPeekN(long param0, int param1, long* param2) {
    Elf64_Word v0 = *(Elf64_Word*)((long*)((long)&gvar_10308 + param0) + 8295);
    int v1 = *(int*)((long*)((long)&gvar_10308 + param0) + 8296) + param1;
    if(*(int*)((long*)((long)&gvar_10308 + param0) + 8296) + param1 < (int)v0) {
        *param2 = v1 * 56L + *(Elf64_Xword*)((long*)((long)&gvar_10308 + param0) + 0x2066);
    }
    return (int)v0 > v1;
}
