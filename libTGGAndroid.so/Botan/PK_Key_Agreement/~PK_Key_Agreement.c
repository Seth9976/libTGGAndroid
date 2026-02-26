// Package: Botan::PK_Key_Agreement

uint64_t* Botan::PK_Key_Agreement::~PK_Key_Agreement(uint64_t* param0) {
    uint64_t* ptr0 = *param0;
    *param0 = NULL;
    if(ptr0 != 0L) {
        jump *(*ptr0 + 3);
    }
    return 0L;
}
