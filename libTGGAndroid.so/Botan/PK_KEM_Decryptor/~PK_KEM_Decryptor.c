// Package: Botan::PK_KEM_Decryptor

uint64_t* Botan::PK_KEM_Decryptor::~PK_KEM_Decryptor(uint64_t* param0) {
    uint64_t* ptr0 = *param0;
    *param0 = NULL;
    if(ptr0 != 0L) {
        jump *(*ptr0 + 2);
    }
    return 0L;
}
