// Package: Botan::McEliece_PublicKey

void Botan::McEliece_PublicKey::algo_name(char* param0) {
    *param0 = 16;
    *(long*)(param0 + 1L) = 0x656365696c45634dL;
    *(param0 + 9L) = 0;
}
