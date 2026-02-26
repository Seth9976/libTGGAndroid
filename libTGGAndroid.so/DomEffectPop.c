long DomEffectPop(__int128* param0, long param1) {
    int v0 = *(int*)((long*)((long)&gvar_10308 + param1) + 8296);
    __int128* ptr0 = (__int128*)(v0 * 56L + *(Elf64_Xword*)((long*)((long)&gvar_10308 + param1) + 0x2066));
    __int128 v1 = *(ptr0 + 1);
    __int128 v2 = *(ptr0 + 2);
    __int128 v3 = *ptr0;
    Elf64_Word v4 = *(Elf64_Word*)((long*)((long)&gvar_10308 + param1) + 8295);
    *(long*)(param0 + 3) = *(long*)(ptr0 + 3);
    *(param0 + 1) = v1;
    *(param0 + 2) = v2;
    *param0 = v3;
    *(int*)((long*)((long)&gvar_10308 + param1) + 8296) = v0 + 1;
    if(v0 + 1 == v4) {
        *(Elf64_Word*)((long*)((long)&gvar_10308 + param1) + 8295) = 0;
        *(int*)((long*)((long)&gvar_10308 + param1) + 8296) = 0;
    }
    return param1;
}
