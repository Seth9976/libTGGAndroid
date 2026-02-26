long* jcv_delauney_begin(long* param0, uint64_t* param1) {
    *(param1 + 1) = NULL;
    uint64_t* ptr0 = (uint64_t*)(*param0 + 8L);
    do {
        ptr0 = *ptr0;
    }
    while(ptr0 != 0L && (*(uint32_t*)((char*)ptr0 + 28L) - *(uint32_t*)((char*)ptr0 + 36L) >= 0.0 ? *(uint32_t*)((char*)ptr0 + 28L) - *(uint32_t*)((char*)ptr0 + 36L): (float)(0.0 - (*(uint32_t*)((char*)ptr0 + 28L) - *(uint32_t*)((char*)ptr0 + 36L)))) < 1.1920929E-7 && (*(uint32_t*)(ptr0 + 3) - *(uint32_t*)(ptr0 + 4) >= 0.0 ? *(uint32_t*)(ptr0 + 3) - *(uint32_t*)(ptr0 + 4): (float)(0.0 - (*(uint32_t*)(ptr0 + 3) - *(uint32_t*)(ptr0 + 4)))) < 1.1920929E-7);
    *param1 = ptr0;
    return param0;
}
