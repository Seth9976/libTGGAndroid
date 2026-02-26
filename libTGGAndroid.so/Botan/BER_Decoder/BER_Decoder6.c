// Package: Botan::BER_Decoder

long* Botan::BER_Decoder::BER_Decoder6(long* param0, long* param1) {
    *param0 = 0L;
    *(long*)((char*)param0 + 12L) = 0L;
    *(long*)((char*)param0 + 28L) = 0L;
    *(long*)((char*)param0 + 20L) = 0L;
    *(int*)((char*)param0 + 36L) = 0;
    *(int*)(param0 + 1) = 0xff00;
    *(param0 + 6) = 0L;
    *(param0 + 5) = *(param1 + 5);
    *(param0 + 6) = *(param1 + 6);
    long v0 = *param1;
    *(param1 + 6) = 0L;
    *param0 = v0;
    return param0;
}
