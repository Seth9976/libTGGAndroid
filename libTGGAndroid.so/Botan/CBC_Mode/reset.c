// Package: Botan::CBC_Mode

long* Botan::CBC_Mode::reset(long* param0) {
    *(param0 + 4) = *(param0 + 3);
    return param0;
}
