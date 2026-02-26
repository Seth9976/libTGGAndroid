// Package: Botan::Pipe

long Botan::Pipe::message_count(long* param0) {
    long* ptr0 = (long*)(*(param0 + 2) + 40L);
    return *(ptr0 + 1) + *ptr0;
}
