// Package: Botan::Threaded_Fork

void Botan::Threaded_Fork::name(char* param0) {
    *param0 = 26;
    *(long*)(param0 + 6L) = 0x6b726f4620646564L;
    *(long*)(param0 + 1L) = 7234298745917171796L;
    *(param0 + 14L) = 0;
}
