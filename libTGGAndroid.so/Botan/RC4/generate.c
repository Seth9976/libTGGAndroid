// Package: Botan::RC4

uint64_t* Botan::RC4::generate(uint64_t* param0) {
    if(*(param0 + 6) != *(param0 + 7)) {
        char* ptr0 = NULL;
        do {
            long* ptr1 = *(param0 + 3);
            char* ptr2 = (char*)((uint64_t)*(uint8_t*)(param0 + 2) + (long)ptr1);
            int v0 = (uint32_t)*(ptr2 + 1L);
            long v1 = (uint64_t)((uint32_t)*(uint8_t*)((uint8_t*)param0 + 17L) + (uint32_t)*(ptr2 + 1L));
            *(uint8_t*)((uint8_t*)param0 + 17L) = (uint8_t)v1;
            int v2 = (uint32_t)*(char*)((v1 & 0xffL) + (long)ptr1);
            *(ptr2 + 1L) = *(char*)((v1 & 0xffL) + (long)ptr1);
            *(char*)((uint64_t)*(uint8_t*)((uint8_t*)param0 + 17L) + (long)*(param0 + 3)) = (uint8_t)v0;
            *(char*)((long)*(param0 + 6) + (long)ptr0) = *(char*)(((uint64_t)(v2 + v0) & 0xffL) + (long)*(param0 + 3));
            long* ptr3 = *(param0 + 3);
            char* ptr4 = (char*)((uint64_t)*(uint8_t*)(param0 + 2) + (long)ptr3);
            int v3 = (uint32_t)*(ptr4 + 2L);
            long v4 = (uint64_t)((uint32_t)*(uint8_t*)((uint8_t*)param0 + 17L) + (uint32_t)*(ptr4 + 2L));
            *(uint8_t*)((uint8_t*)param0 + 17L) = (uint8_t)v4;
            int v5 = (uint32_t)*(char*)((v4 & 0xffL) + (long)ptr3);
            *(ptr4 + 2L) = *(char*)((v4 & 0xffL) + (long)ptr3);
            *(char*)((uint64_t)*(uint8_t*)((uint8_t*)param0 + 17L) + (long)*(param0 + 3)) = (uint8_t)v3;
            *(char*)((char*)((long)*(param0 + 6) + (long)ptr0) + 1L) = *(char*)(((uint64_t)(v5 + v3) & 0xffL) + (long)*(param0 + 3));
            long* ptr5 = *(param0 + 3);
            char* ptr6 = (char*)((uint64_t)*(uint8_t*)(param0 + 2) + (long)ptr5);
            int v6 = (uint32_t)*(ptr6 + 3L);
            long v7 = (uint64_t)((uint32_t)*(uint8_t*)((uint8_t*)param0 + 17L) + (uint32_t)*(ptr6 + 3L));
            *(uint8_t*)((uint8_t*)param0 + 17L) = (uint8_t)v7;
            int v8 = (uint32_t)*(char*)((v7 & 0xffL) + (long)ptr5);
            *(ptr6 + 3L) = *(char*)((v7 & 0xffL) + (long)ptr5);
            *(char*)((uint64_t)*(uint8_t*)((uint8_t*)param0 + 17L) + (long)*(param0 + 3)) = (uint8_t)v6;
            *(char*)((char*)((long)*(param0 + 6) + (long)ptr0) + 2L) = *(char*)(((uint64_t)(v8 + v6) & 0xffL) + (long)*(param0 + 3));
            char* ptr7 = *(param0 + 3);
            int v9 = (uint32_t)*(uint8_t*)((uint8_t*)param0 + 17L);
            long v10 = (uint64_t)((uint32_t)*(uint8_t*)(param0 + 2) + 4);
            *(uint8_t*)(param0 + 2) = (uint8_t)v10;
            int v11 = (uint32_t)*((v10 & 0xffL) + ptr7);
            long v12 = (uint64_t)((uint32_t)*((v10 & 0xffL) + ptr7) + v9);
            *(uint8_t*)((uint8_t*)param0 + 17L) = (uint8_t)v12;
            int v13 = (uint32_t)*((v12 & 0xffL) + ptr7);
            *((v10 & 0xffL) + ptr7) = *((v12 & 0xffL) + ptr7);
            *(char*)((uint64_t)*(uint8_t*)((uint8_t*)param0 + 17L) + (long)*(param0 + 3)) = (uint8_t)v11;
            *(char*)((char*)((long)*(param0 + 6) + (long)ptr0) + 3L) = *(char*)(((uint64_t)(v13 + v11) & 0xffL) + (long)*(param0 + 3));
            ptr0 += 4L;
        }
        while((long*)((long)*(param0 + 7) - (long)*(param0 + 6)) != ptr0);
    }
    *(param0 + 9) = NULL;
    return param0;
}
