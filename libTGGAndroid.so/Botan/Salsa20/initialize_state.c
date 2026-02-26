// Package: Botan::Salsa20

uint64_t* Botan::Salsa20::initialize_state(uint64_t* param0) {
    long v0;
    long v1;
    int* ptr0;
    long v2;
    *(int*)((char*)*(param0 + 4) + 4L) = **(param0 + 1);
    *(int*)(*(param0 + 4) + 1) = *(int*)((char*)*(param0 + 1) + 4L);
    *(int*)((char*)*(param0 + 4) + 12L) = *(int*)(*(param0 + 1) + 1);
    *(int*)(*(param0 + 4) + 2) = *(int*)((char*)*(param0 + 1) + 12L);
    long* ptr1 = *(param0 + 1);
    long* ptr2 = *(param0 + 2);
    **(param0 + 4) = 0x61707865;
    int* ptr3 = *(param0 + 4);
    if((long*)((long)ptr2 - (long)ptr1) == 16L) {
        *(ptr3 + 5) = 824206446;
        v2 = 1L;
        *(int*)(*(param0 + 4) + 5) = 2036477238;
        *(int*)((char*)*(param0 + 4) + 60L) = 1797285236;
        ptr0 = *(param0 + 1);
        v1 = 3L;
        v0 = 2L;
    }
    else {
        *(ptr3 + 5) = 857760878;
        v2 = 5L;
        *(int*)(*(param0 + 4) + 5) = 2036477234;
        *(int*)((char*)*(param0 + 4) + 60L) = 1797285236;
        v1 = 7L;
        v0 = 6L;
        ptr0 = *(param0 + 1) + 2;
    }
    *(int*)((char*)*(param0 + 4) + 44L) = *ptr0;
    *(int*)(*(param0 + 4) + 6) = *(int*)(v2 * 4L + (long)*(param0 + 1));
    *(int*)((char*)*(param0 + 4) + 52L) = *(int*)(v0 * 4L + (long)*(param0 + 1));
    *(int*)(*(param0 + 4) + 7) = *(int*)(v1 * 4L + (long)*(param0 + 1));
    *(int*)(*(param0 + 4) + 3) = 0;
    *(int*)((char*)*(param0 + 4) + 28L) = 0;
    *(int*)(*(param0 + 4) + 4) = 0;
    *(int*)((char*)*(param0 + 4) + 36L) = 0;
    *(param0 + 10) = NULL;
    return param0;
}
