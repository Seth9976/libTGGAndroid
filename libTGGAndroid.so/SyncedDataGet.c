long* SyncedDataGet(long* param0, int param1) {
    uint32_t* ptr0 = *(uint64_t*)(((uint64_t)((param1 >> 4) | param1) & (uint64_t)*(int*)(param0 + 2146)) * 8L + *(param0 + 2145));
    if(ptr0 != 0L) {
        while(*ptr0 != param1) {
            ptr0 = *(uint64_t*)(ptr0 + 6);
            if(ptr0 == 0L) {
                return NULL;
            }
        }
        return *(uint64_t*)(ptr0 + 4);
    }
    return NULL;
}
