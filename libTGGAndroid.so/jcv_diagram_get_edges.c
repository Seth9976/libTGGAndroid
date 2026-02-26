uint64_t* jcv_diagram_get_edges(long* param0) {
    uint64_t* result = (uint64_t*)(*param0 + 8L);
    do {
        result = *result;
    }
    while(result != 0L && (*(uint32_t*)((char*)result + 28L) - *(uint32_t*)((char*)result + 36L) >= 0.0 ? *(uint32_t*)((char*)result + 28L) - *(uint32_t*)((char*)result + 36L): (float)(0.0 - (*(uint32_t*)((char*)result + 28L) - *(uint32_t*)((char*)result + 36L)))) < 1.1920929E-7 && (*(uint32_t*)(result + 3) - *(uint32_t*)(result + 4) >= 0.0 ? *(uint32_t*)(result + 3) - *(uint32_t*)(result + 4): (float)(0.0 - (*(uint32_t*)(result + 3) - *(uint32_t*)(result + 4)))) < 1.1920929E-7);
    return result;
}
