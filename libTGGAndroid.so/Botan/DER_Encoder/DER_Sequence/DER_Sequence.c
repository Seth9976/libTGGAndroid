// Package: Botan::DER_Encoder::DER_Sequence

int* Botan::DER_Encoder::DER_Sequence::DER_Sequence(int* param0, int param1, int param2) {
    *param0 = param1;
    *(param0 + 1) = param2;
    *(__int128*)(param0 + 2) = 0x0X;
    *(__int128*)(param0 + 6) = 0x0X;
    *(__int128*)(param0 + 10) = 0x0X;
    return param0;
}
