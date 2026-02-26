// Package: Botan::MD4

uint64_t* Botan::MD4::copy_out(uint64_t* param0, int* param1) {
    int* ptr0 = *(param0 + 7);
    *param1 = *ptr0;
    *(param1 + 1) = *(ptr0 + 1);
    *(param1 + 2) = *(ptr0 + 2);
    *(param1 + 3) = *(ptr0 + 3);
    return param0;
}
