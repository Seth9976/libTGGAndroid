__int128* AbilityAllocRegistered(int* param0) {
    int v0 = *(param0 + 1648);
    *(param0 + 1648) = v0 + 1;
    __int128* result = (__int128*)((long*)(v0 * 184L + (long)param0) + 30785);
    *(long*)(result + 11) = 0L;
    *(result + 9) = 0x0X;
    *(result + 10) = 0x0X;
    *(result + 7) = 0x0X;
    *(result + 8) = 0x0X;
    *(result + 5) = 0x0X;
    *(result + 6) = 0x0X;
    *(result + 3) = 0x0X;
    *(result + 4) = 0x0X;
    *(result + 1) = 0x0X;
    *(result + 2) = 0x0X;
    *result = 0x0X;
    int v1 = *(param0 + 1649);
    ++*(param0 + 1649);
    *(int*)((char*)result + 44L) = v1;
    int v2 = *(param0 + 1650);
    *(param0 + 1650) = v2 + 1;
    *(int*)(result + 4) = v2;
    return result;
}
