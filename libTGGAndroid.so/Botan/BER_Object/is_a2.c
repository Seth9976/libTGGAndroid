// Package: Botan::BER_Object

long Botan::BER_Object::is_a2(int* param0, int param1, int param2) {
    if(*param0 == param1) {
        return *(param0 + 1) == param2;
    }
    return 0L;
}
