// Package: Botan::EAX_Mode

long Botan::EAX_Mode::clear(uint64_t* param0) {
    long* ptr0 = *(param0 + 2);
    *(long*)(*ptr0 + 16L)((long)ptr0);
    long* ptr1 = *(param0 + 3);
    *(long*)(*ptr1 + 16L)((long)ptr1);
    long* ptr2 = *(param0 + 4);
    *(long*)(*(ptr2 + 1) + 16L)((long)(ptr2 + 1));
    jump *(*param0 + 14);
}
