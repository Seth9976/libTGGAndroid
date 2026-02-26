uint64_t* AddIBTri(uint64_t* param0, short param1, short param2, short param3) {
    short* ptr0 = *param0;
    *param0 = (long*)(ptr0 + 1);
    *ptr0 = param1;
    short* ptr1 = *param0;
    *param0 = (long*)(ptr1 + 1);
    *ptr1 = param2;
    short* ptr2 = *param0;
    *param0 = (long*)(ptr2 + 1);
    *ptr2 = param3;
    return param0;
}
