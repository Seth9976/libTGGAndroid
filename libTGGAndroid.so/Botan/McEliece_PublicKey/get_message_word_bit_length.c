// Package: Botan::McEliece_PublicKey

long Botan::McEliece_PublicKey::get_message_word_bit_length(long* param0) {
    long result = *(param0 + 5);
    if(result >= 0L) {
        if(result >= 2L) {
            long v0 = 0L;
            long v1 = 1L;
            do {
                v1 *= 2L;
                v0 = (uint64_t)((uint32_t)v0 + 1);
            }
            while(result > v1);
            return result - (v0 & 0xffL) * *(param0 + 4);
        }
        return result;
    }
    return result - *(param0 + 4) * 64L;
}
