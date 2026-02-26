// Package: Botan::OCB_Mode

long Botan::OCB_Mode::update_granularity(long* param0) {
    return *(param0 + 11) * *(param0 + 12);
}
