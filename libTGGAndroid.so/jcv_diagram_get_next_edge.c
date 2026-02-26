uint64_t* jcv_diagram_get_next_edge(uint64_t* param0) {
    do {
        param0 = *param0;
    }
    while(param0 != 0L && (*(uint32_t*)((char*)param0 + 28L) - *(uint32_t*)((char*)param0 + 36L) >= 0.0 ? *(uint32_t*)((char*)param0 + 28L) - *(uint32_t*)((char*)param0 + 36L): (float)(0.0 - (*(uint32_t*)((char*)param0 + 28L) - *(uint32_t*)((char*)param0 + 36L)))) < 1.1920929E-7 && (*(uint32_t*)(param0 + 3) - *(uint32_t*)(param0 + 4) >= 0.0 ? *(uint32_t*)(param0 + 3) - *(uint32_t*)(param0 + 4): (float)(0.0 - (*(uint32_t*)(param0 + 3) - *(uint32_t*)(param0 + 4)))) < 1.1920929E-7);
    return param0;
}
