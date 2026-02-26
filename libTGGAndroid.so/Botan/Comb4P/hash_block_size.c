// Package: Botan::Comb4P

long* Botan::Comb4P::hash_block_size(uint64_t* param0) {
    long* ptr0 = *(param0 + 1);
    long v0 = *(long*)(*ptr0 + 72L)((long)ptr0);
    long* ptr1 = *(param0 + 2);
    long v1 = *(long*)(*ptr1 + 72L)((long)ptr1);
    if(v0 == v1) {
        jump *(long*)(**(param0 + 1) + 72L);
    }
    return NULL;
}
