long AssetPtrCanGoInXPack(long param0, int* param1) {
    if(*(param1 + 3) <= 4) {
        return (uint64_t)((6 >>> param0) & 1);
    }
    return 1L;
}
