// Package: Botan::OFB

long Botan::OFB::valid_iv_length(uint64_t* param0, long param1) {
    long* ptr0 = *(param0 + 1);
    long v0 = *(long*)(*ptr0 + 48L)((long)ptr0, param1);
    return v0 >= param1;
}
