// Package: Botan::PK_Key_Agreement

uint64_t* Botan::PK_Key_Agreement::operator=(uint64_t* param0, uint64_t* param1) {
    if(param0 != param1) {
        long* ptr0 = *param1;
        *param1 = NULL;
        long* ptr1 = *param0;
        *param0 = ptr0;
        if(ptr1 != 0L) {
            *(long*)(*ptr1 + 24L)((long)ptr1, (long)param1);
        }
    }
    return param0;
}
