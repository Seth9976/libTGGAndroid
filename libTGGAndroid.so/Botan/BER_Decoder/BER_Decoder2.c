// Package: Botan::BER_Decoder

long* Botan::BER_Decoder::BER_Decoder2(long* param0, long param1) {
    *param0 = 0L;
    *(long*)((char*)param0 + 12L) = 0L;
    *(long*)((char*)param0 + 28L) = 0L;
    *(long*)((char*)param0 + 20L) = 0L;
    *(int*)((char*)param0 + 36L) = 0;
    *(int*)(param0 + 1) = 0xff00;
    *(param0 + 5) = param1;
    *(param0 + 6) = 0L;
    return param0;
}
