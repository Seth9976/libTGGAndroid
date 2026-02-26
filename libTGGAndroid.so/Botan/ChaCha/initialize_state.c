// Package: Botan::ChaCha

uint64_t* Botan::ChaCha::initialize_state(uint64_t* param0) {
    long v0;
    long v1;
    int* ptr0;
    long v2;
    *(int*)(*(param0 + 5) + 2) = **(param0 + 2);
    *(int*)((char*)*(param0 + 5) + 20L) = *(int*)((char*)*(param0 + 2) + 4L);
    *(int*)(*(param0 + 5) + 3) = *(int*)(*(param0 + 2) + 1);
    *(int*)((char*)*(param0 + 5) + 28L) = *(int*)((char*)*(param0 + 2) + 12L);
    long* ptr1 = *(param0 + 2);
    long* ptr2 = *(param0 + 3);
    **(param0 + 5) = 0x61707865;
    int* ptr3 = *(param0 + 5);
    if((long*)((long)ptr2 - (long)ptr1) == 16L) {
        *(ptr3 + 1) = 824206446;
        v2 = 1L;
        *(int*)(*(param0 + 5) + 1) = 2036477238;
        *(int*)((char*)*(param0 + 5) + 12L) = 1797285236;
        ptr0 = *(param0 + 2);
        v1 = 3L;
        v0 = 2L;
    }
    else {
        *(ptr3 + 1) = 857760878;
        v2 = 5L;
        *(int*)(*(param0 + 5) + 1) = 2036477234;
        *(int*)((char*)*(param0 + 5) + 12L) = 1797285236;
        v1 = 7L;
        v0 = 6L;
        ptr0 = *(param0 + 2) + 2;
    }
    *(int*)(*(param0 + 5) + 4) = *ptr0;
    *(int*)((char*)*(param0 + 5) + 36L) = *(int*)(v2 * 4L + (long)*(param0 + 2));
    *(int*)(*(param0 + 5) + 5) = *(int*)(v0 * 4L + (long)*(param0 + 2));
    *(int*)((char*)*(param0 + 5) + 44L) = *(int*)(v1 * 4L + (long)*(param0 + 2));
    *(int*)(*(param0 + 5) + 6) = 0;
    *(int*)((char*)*(param0 + 5) + 52L) = 0;
    *(int*)(*(param0 + 5) + 7) = 0;
    *(int*)((char*)*(param0 + 5) + 60L) = 0;
    *(param0 + 11) = NULL;
    return param0;
}
