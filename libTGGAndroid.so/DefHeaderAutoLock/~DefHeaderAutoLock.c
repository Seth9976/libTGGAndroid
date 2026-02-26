// Package: DefHeaderAutoLock

uint64_t* DefHeaderAutoLock::~DefHeaderAutoLock(uint64_t* param0) {
    int* ptr0 = *param0;
    if(ptr0 != 0L) {
        --*(ptr0 + 9);
        *param0 = NULL;
    }
    return param0;
}
