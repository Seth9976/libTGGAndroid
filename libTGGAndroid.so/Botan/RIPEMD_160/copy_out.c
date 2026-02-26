// Package: Botan::RIPEMD_160

uint64_t* Botan::RIPEMD_160::copy_out(uint64_t* param0, int* param1) {
    int* ptr0 = *(param0 + 10);
    *param1 = *ptr0;
    *(param1 + 1) = *(ptr0 + 1);
    *(param1 + 2) = *(ptr0 + 2);
    *(param1 + 3) = *(ptr0 + 3);
    *(param1 + 4) = *(ptr0 + 4);
    return param0;
}
