// Package: Botan::PK_Signer

uint64_t* Botan::PK_Signer::~PK_Signer(uint64_t* param0) {
    uint64_t* ptr0 = *param0;
    *param0 = NULL;
    if(ptr0 != 0L) {
        jump *(*ptr0 + 4);
    }
    return 0L;
}
