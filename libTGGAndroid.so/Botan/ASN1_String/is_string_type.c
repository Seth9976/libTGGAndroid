// Package: Botan::ASN1_String

int Botan::ASN1_String::is_string_type(long param0, int param1) {
    if(param1 - 12 <= 18) {
        return (uint64_t)((&gvar_10308+442b9h >>> param0) & 1);
    }
    return 0;
}
