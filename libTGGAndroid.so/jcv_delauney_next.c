int jcv_delauney_next(uint64_t* param0, uint64_t* param1) {
    uint64_t* ptr0 = *param0;
    if(ptr0 == 0L) {
        ptr0 = *(param0 + 1);
        do {
            ptr0 = *ptr0;
            if(ptr0 == 0L) {
                *(param0 + 1) = NULL;
                return 0;
            }
        }
        while((*(uint32_t*)((char*)ptr0 + 28L) - *(uint32_t*)((char*)ptr0 + 36L) >= 0.0 ? *(uint32_t*)((char*)ptr0 + 28L) - *(uint32_t*)((char*)ptr0 + 36L): (float)(0.0 - (*(uint32_t*)((char*)ptr0 + 28L) - *(uint32_t*)((char*)ptr0 + 36L)))) < 1.1920929E-7 && (*(uint32_t*)(ptr0 + 3) - *(uint32_t*)(ptr0 + 4) >= 0.0 ? *(uint32_t*)(ptr0 + 3) - *(uint32_t*)(ptr0 + 4): (float)(0.0 - (*(uint32_t*)(ptr0 + 3) - *(uint32_t*)(ptr0 + 4)))) < 1.1920929E-7);
        *(param0 + 1) = ptr0;
        if(*(ptr0 + 1) != 0L) {
        loc_821908:
            if(*(ptr0 + 2) != 0L) {
                *param1 = ptr0;
                uint64_t* ptr1 = *(ptr0 + 1);
                *(param1 + 1) = *(ptr0 + 1);
                uint64_t* ptr2 = *(ptr0 + 2);
                *(param1 + 2) = *(ptr0 + 2);
                *(param1 + 3) = *ptr1;
                *(param1 + 4) = *ptr2;
                return 1;
            }
        }
    loc_82190C:
        while(1) {
            ptr0 = *ptr0;
            if(ptr0 == 0L) {
                break;
            }
            if((*(uint32_t*)((char*)ptr0 + 28L) - *(uint32_t*)((char*)ptr0 + 36L) >= 0.0 ? *(uint32_t*)((char*)ptr0 + 28L) - *(uint32_t*)((char*)ptr0 + 36L): (float)(0.0 - (*(uint32_t*)((char*)ptr0 + 28L) - *(uint32_t*)((char*)ptr0 + 36L)))) < 1.1920929E-7 && (*(uint32_t*)(ptr0 + 3) - *(uint32_t*)(ptr0 + 4) >= 0.0 ? *(uint32_t*)(ptr0 + 3) - *(uint32_t*)(ptr0 + 4): (float)(0.0 - (*(uint32_t*)(ptr0 + 3) - *(uint32_t*)(ptr0 + 4)))) < 1.1920929E-7) {
                continue;
            }
            *(param0 + 1) = ptr0;
            if(*(ptr0 + 1) != 0L) {
                goto loc_821908;
            }
        }
    }
    else {
        *param0 = NULL;
        *(param0 + 1) = ptr0;
        if(*(ptr0 + 1) == 0L) {
            goto loc_82190C;
        }
        else {
            goto loc_821908;
        }
    }
    *(param0 + 1) = NULL;
    return 0;
}
