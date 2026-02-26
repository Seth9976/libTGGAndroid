// Package: Botan::DER_Encoder::DER_Sequence

long Botan::DER_Encoder::DER_Sequence::tag_of(int* param0) {
    return (uint64_t)(*(param0 + 1) | *param0);
}
