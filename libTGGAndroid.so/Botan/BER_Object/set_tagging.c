// Package: Botan::BER_Object

int* Botan::BER_Object::set_tagging(int* param0, int param1, int param2) {
    *param0 = param1;
    *(param0 + 1) = param2;
    return param0;
}
