// Package: Botan::Cascade_Cipher

long Botan::Cascade_Cipher::decrypt_n(uint64_t* param0, long param1, long param2, long param3) {
    long* ptr0 = *(param0 + 2);
    *(long*)(*ptr0 + 48L)((long)ptr0, param1, param2, param3);
    long* ptr1 = *(param0 + 3);
    uint64_t v0 = *(param0 + 1);
    uint64_t v1 = (uint64_t)*(long*)(*ptr1 + 48L)((long)ptr1);
    long* ptr2 = *(param0 + 3);
    *(long*)(*ptr2 + 80L)((long)ptr2, param1, param2, (long)((v1 != 0L ? v0 / v1: 0L) * param3));
    jump *(**(param0 + 2) + 10);
}
