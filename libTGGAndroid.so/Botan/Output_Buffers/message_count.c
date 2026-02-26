// Package: Botan::Output_Buffers

long Botan::Output_Buffers::message_count(long* param0) {
    return *(param0 + 5) + *(param0 + 6);
}
