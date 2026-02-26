long IsInCardGallery(long* param0) {
    return ((uint32_t)*(char*)((char*)param0 + 206L) & 1) == 0 ? *(int*)(param0 + 24) != 0x1301: 0L;
}
