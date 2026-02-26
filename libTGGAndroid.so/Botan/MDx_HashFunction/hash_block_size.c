// Package: Botan::MDx_HashFunction

long Botan::MDx_HashFunction::hash_block_size(long* param0) {
    return *(param0 + 4) - *(param0 + 3);
}
