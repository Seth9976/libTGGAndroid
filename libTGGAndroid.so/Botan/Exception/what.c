// Package: Botan::Exception

uint64_t* Botan::Exception::what(uint64_t* param0) {
    if(!(*(uint8_t*)(param0 + 1) & 1)) {
        return (uint64_t*)((char*)param0 + 9L);
    }
    return *(param0 + 3);
}
