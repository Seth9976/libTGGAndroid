// Package: SpookyHash

long* SpookyHash::Init(long* param0, long param1, long param2) {
    *(param0 + 36) = 0L;
    *(char*)(param0 + 37) = 0;
    *(param0 + 24) = param1;
    *(param0 + 25) = param2;
    return param0;
}
