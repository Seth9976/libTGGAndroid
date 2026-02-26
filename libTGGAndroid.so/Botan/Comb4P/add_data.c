// Package: Botan::Comb4P

long Botan::Comb4P::add_data(uint64_t* param0, long param1, long param2) {
    long* ptr0 = *(param0 + 1);
    *(long*)(*ptr0 + 24L)((long)ptr0, param1, param2);
    jump *(long*)(**(param0 + 2) + 24L);
}
