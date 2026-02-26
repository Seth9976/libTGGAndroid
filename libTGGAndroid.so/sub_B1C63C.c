void sub_B1C63C(long param0, __int128* param1, __int128* param2) {
    long v0 = param0;
    __int128* ptr0 = (__int128*)Botan::allocate_memory(64L, 1L);
    __int128* ptr1 = (__int128*)(v0 * 128L + (long)param1);
    __int128 v1 = *(ptr1 - 1);
    __int128 v2 = *(ptr1 - 4);
    __int128 v3 = *(ptr1 - 3);
    long v4 = v0 * 2L;
    *(ptr0 + 2) = *(ptr1 - 2);
    *(ptr0 + 3) = v1;
    *ptr0 = v2;
    *(ptr0 + 1) = v3;
    if(v4 != 0L) {
        if(param2 == 0L) {
            goto loc_B1C770;
        }
        else {
            __int128* ptr2 = param1 + 2;
            __int128* ptr3 = param2;
        }
    loc_B1C694:
        do {
            __int128 v5 = *ptr0;
            __int128 v6 = *(ptr0 + 1);
            __int128 v7 = *(ptr2 - 2);
            __int128 v8 = *(ptr2 - 1);
            *ptr0 = (unsigned __int128)((uint8_t)v5 ^ (uint8_t)v7) | ((unsigned __int128)((uint8_t)(v5 >>> 0x8X) ^ (uint8_t)(v7 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(v5 >>> 0x10X) ^ (uint8_t)(v7 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(v5 >>> 0x18X) ^ (uint8_t)(v7 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(v5 >>> 0x20X) ^ (uint8_t)(v7 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(v5 >>> 0x28X) ^ (uint8_t)(v7 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(v5 >>> 0x30X) ^ (uint8_t)(v7 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(v5 >>> 0x38X) ^ (uint8_t)(v7 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(v5 >>> 0x40X) ^ (uint8_t)(v7 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(v5 >>> 0x48X) ^ (uint8_t)(v7 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(v5 >>> 0x50X) ^ (uint8_t)(v7 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(v5 >>> 0x58X) ^ (uint8_t)(v7 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(v5 >>> 0x60X) ^ (uint8_t)(v7 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(v5 >>> 0x68X) ^ (uint8_t)(v7 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(v5 >>> 0x70X) ^ (uint8_t)(v7 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(v5 >>> 0x78X) ^ (uint8_t)(v7 >>> 0x78X)) << 120);
            *(ptr0 + 1) = (unsigned __int128)((uint8_t)v6 ^ (uint8_t)v8) | ((unsigned __int128)((uint8_t)(v6 >>> 0x8X) ^ (uint8_t)(v8 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(v6 >>> 0x10X) ^ (uint8_t)(v8 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(v6 >>> 0x18X) ^ (uint8_t)(v8 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(v6 >>> 0x20X) ^ (uint8_t)(v8 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(v6 >>> 0x28X) ^ (uint8_t)(v8 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(v6 >>> 0x30X) ^ (uint8_t)(v8 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(v6 >>> 0x38X) ^ (uint8_t)(v8 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(v6 >>> 0x40X) ^ (uint8_t)(v8 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(v6 >>> 0x48X) ^ (uint8_t)(v8 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(v6 >>> 0x50X) ^ (uint8_t)(v8 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(v6 >>> 0x58X) ^ (uint8_t)(v8 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(v6 >>> 0x60X) ^ (uint8_t)(v8 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(v6 >>> 0x68X) ^ (uint8_t)(v8 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(v6 >>> 0x70X) ^ (uint8_t)(v8 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(v6 >>> 0x78X) ^ (uint8_t)(v8 >>> 0x78X)) << 120);
            __int128 v9 = *(ptr0 + 2);
            __int128 v10 = *(ptr0 + 3);
            __int128 v11 = *ptr2;
            __int128 v12 = *(ptr2 + 1);
            *(ptr0 + 2) = (unsigned __int128)((uint8_t)v11 ^ (uint8_t)v9) | ((unsigned __int128)((uint8_t)(v11 >>> 0x8X) ^ (uint8_t)(v9 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(v11 >>> 0x10X) ^ (uint8_t)(v9 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(v11 >>> 0x18X) ^ (uint8_t)(v9 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(v11 >>> 0x20X) ^ (uint8_t)(v9 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(v11 >>> 0x28X) ^ (uint8_t)(v9 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(v11 >>> 0x30X) ^ (uint8_t)(v9 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(v11 >>> 0x38X) ^ (uint8_t)(v9 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(v11 >>> 0x40X) ^ (uint8_t)(v9 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(v11 >>> 0x48X) ^ (uint8_t)(v9 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(v11 >>> 0x50X) ^ (uint8_t)(v9 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(v11 >>> 0x58X) ^ (uint8_t)(v9 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(v11 >>> 0x60X) ^ (uint8_t)(v9 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(v11 >>> 0x68X) ^ (uint8_t)(v9 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(v11 >>> 0x70X) ^ (uint8_t)(v9 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(v11 >>> 0x78X) ^ (uint8_t)(v9 >>> 0x78X)) << 120);
            *(ptr0 + 3) = (unsigned __int128)((uint8_t)v12 ^ (uint8_t)v10) | ((unsigned __int128)((uint8_t)(v12 >>> 0x8X) ^ (uint8_t)(v10 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(v12 >>> 0x10X) ^ (uint8_t)(v10 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(v12 >>> 0x18X) ^ (uint8_t)(v10 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(v12 >>> 0x20X) ^ (uint8_t)(v10 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(v12 >>> 0x28X) ^ (uint8_t)(v10 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(v12 >>> 0x30X) ^ (uint8_t)(v10 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(v12 >>> 0x38X) ^ (uint8_t)(v10 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(v12 >>> 0x40X) ^ (uint8_t)(v10 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(v12 >>> 0x48X) ^ (uint8_t)(v10 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(v12 >>> 0x50X) ^ (uint8_t)(v10 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(v12 >>> 0x58X) ^ (uint8_t)(v10 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(v12 >>> 0x60X) ^ (uint8_t)(v10 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(v12 >>> 0x68X) ^ (uint8_t)(v10 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(v12 >>> 0x70X) ^ (uint8_t)(v10 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(v12 >>> 0x78X) ^ (uint8_t)(v10 >>> 0x78X)) << 120);
            __int128 v13 = *(ptr0 + 3);
            __int128 v14 = *ptr0;
            __int128 v15 = *(ptr0 + 1);
            __int128 v16 = *(ptr0 + 2);
            __int128 v17 = v13;
            __int128 v18 = v14;
            __int128 v19 = v15;
            Botan::Salsa20::salsa_core((long)ptr1, (long)ptr0, (long)&v18, 8L);
            v1 = *(ptr0 + 3);
            v3 = *ptr0;
            v2 = *(ptr0 + 1);
            long v20 = v4 - 1L;
            --v4;
            ptr2 += 4;
            *(ptr3 + 2) = *(ptr0 + 2);
            *(ptr3 + 3) = v1;
            *ptr3 = v3;
            *(ptr3 + 1) = v2;
            ptr3 += 4;
            if(v20 != 0L) {
                goto loc_B1C694;
            }
            goto loc_B1C6F8;
        loc_B1C770:
            __int128 v21 = *ptr0;
            __int128 v22 = *(ptr0 + 1);
            __int128 v23 = *param1;
            __int128 v24 = *(param1 + 1);
            *ptr0 = (unsigned __int128)((uint8_t)v21 ^ (uint8_t)v23) | ((unsigned __int128)((uint8_t)(v21 >>> 0x8X) ^ (uint8_t)(v23 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(v21 >>> 0x10X) ^ (uint8_t)(v23 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(v21 >>> 0x18X) ^ (uint8_t)(v23 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(v21 >>> 0x20X) ^ (uint8_t)(v23 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(v21 >>> 0x28X) ^ (uint8_t)(v23 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(v21 >>> 0x30X) ^ (uint8_t)(v23 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(v21 >>> 0x38X) ^ (uint8_t)(v23 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(v21 >>> 0x40X) ^ (uint8_t)(v23 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(v21 >>> 0x48X) ^ (uint8_t)(v23 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(v21 >>> 0x50X) ^ (uint8_t)(v23 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(v21 >>> 0x58X) ^ (uint8_t)(v23 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(v21 >>> 0x60X) ^ (uint8_t)(v23 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(v21 >>> 0x68X) ^ (uint8_t)(v23 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(v21 >>> 0x70X) ^ (uint8_t)(v23 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(v21 >>> 0x78X) ^ (uint8_t)(v23 >>> 0x78X)) << 120);
            *(ptr0 + 1) = (unsigned __int128)((uint8_t)v22 ^ (uint8_t)v24) | ((unsigned __int128)((uint8_t)(v22 >>> 0x8X) ^ (uint8_t)(v24 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(v22 >>> 0x10X) ^ (uint8_t)(v24 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(v22 >>> 0x18X) ^ (uint8_t)(v24 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(v22 >>> 0x20X) ^ (uint8_t)(v24 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(v22 >>> 0x28X) ^ (uint8_t)(v24 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(v22 >>> 0x30X) ^ (uint8_t)(v24 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(v22 >>> 0x38X) ^ (uint8_t)(v24 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(v22 >>> 0x40X) ^ (uint8_t)(v24 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(v22 >>> 0x48X) ^ (uint8_t)(v24 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(v22 >>> 0x50X) ^ (uint8_t)(v24 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(v22 >>> 0x58X) ^ (uint8_t)(v24 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(v22 >>> 0x60X) ^ (uint8_t)(v24 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(v22 >>> 0x68X) ^ (uint8_t)(v24 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(v22 >>> 0x70X) ^ (uint8_t)(v24 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(v22 >>> 0x78X) ^ (uint8_t)(v24 >>> 0x78X)) << 120);
            __int128 v25 = *(ptr0 + 2);
            __int128 v26 = *(ptr0 + 3);
            __int128 v27 = *(param1 + 2);
            __int128 v28 = *(param1 + 3);
            *(ptr0 + 2) = (unsigned __int128)((uint8_t)v27 ^ (uint8_t)v25) | ((unsigned __int128)((uint8_t)(v27 >>> 0x8X) ^ (uint8_t)(v25 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(v27 >>> 0x10X) ^ (uint8_t)(v25 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(v27 >>> 0x18X) ^ (uint8_t)(v25 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(v27 >>> 0x20X) ^ (uint8_t)(v25 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(v27 >>> 0x28X) ^ (uint8_t)(v25 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(v27 >>> 0x30X) ^ (uint8_t)(v25 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(v27 >>> 0x38X) ^ (uint8_t)(v25 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(v27 >>> 0x40X) ^ (uint8_t)(v25 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(v27 >>> 0x48X) ^ (uint8_t)(v25 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(v27 >>> 0x50X) ^ (uint8_t)(v25 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(v27 >>> 0x58X) ^ (uint8_t)(v25 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(v27 >>> 0x60X) ^ (uint8_t)(v25 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(v27 >>> 0x68X) ^ (uint8_t)(v25 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(v27 >>> 0x70X) ^ (uint8_t)(v25 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(v27 >>> 0x78X) ^ (uint8_t)(v25 >>> 0x78X)) << 120);
            *(ptr0 + 3) = (unsigned __int128)((uint8_t)v28 ^ (uint8_t)v26) | ((unsigned __int128)((uint8_t)(v28 >>> 0x8X) ^ (uint8_t)(v26 >>> 0x8X)) << 8) | ((unsigned __int128)((uint8_t)(v28 >>> 0x10X) ^ (uint8_t)(v26 >>> 0x10X)) << 16) | ((unsigned __int128)((uint8_t)(v28 >>> 0x18X) ^ (uint8_t)(v26 >>> 0x18X)) << 24) | ((unsigned __int128)((uint8_t)(v28 >>> 0x20X) ^ (uint8_t)(v26 >>> 0x20X)) << 32) | ((unsigned __int128)((uint8_t)(v28 >>> 0x28X) ^ (uint8_t)(v26 >>> 0x28X)) << 40) | ((unsigned __int128)((uint8_t)(v28 >>> 0x30X) ^ (uint8_t)(v26 >>> 0x30X)) << 48) | ((unsigned __int128)((uint8_t)(v28 >>> 0x38X) ^ (uint8_t)(v26 >>> 0x38X)) << 56) | ((unsigned __int128)((uint8_t)(v28 >>> 0x40X) ^ (uint8_t)(v26 >>> 0x40X)) << 64) | ((unsigned __int128)((uint8_t)(v28 >>> 0x48X) ^ (uint8_t)(v26 >>> 0x48X)) << 72) | ((unsigned __int128)((uint8_t)(v28 >>> 0x50X) ^ (uint8_t)(v26 >>> 0x50X)) << 80) | ((unsigned __int128)((uint8_t)(v28 >>> 0x58X) ^ (uint8_t)(v26 >>> 0x58X)) << 88) | ((unsigned __int128)((uint8_t)(v28 >>> 0x60X) ^ (uint8_t)(v26 >>> 0x60X)) << 96) | ((unsigned __int128)((uint8_t)(v28 >>> 0x68X) ^ (uint8_t)(v26 >>> 0x68X)) << 104) | ((unsigned __int128)((uint8_t)(v28 >>> 0x70X) ^ (uint8_t)(v26 >>> 0x70X)) << 112) | ((unsigned __int128)((uint8_t)(v28 >>> 0x78X) ^ (uint8_t)(v26 >>> 0x78X)) << 120);
            __int128 v29 = *(ptr0 + 3);
            __int128 v30 = *ptr0;
            __int128 v31 = *(ptr0 + 1);
            v16 = *(ptr0 + 2);
            v17 = v29;
            v18 = v30;
            v19 = v31;
            Botan::Salsa20::salsa_core((long)ptr1, (long)ptr0, (long)&v18, 8L);
            /*NO_RETURN*/ Botan::assertion_failure();
        }
        while(1);
    }
loc_B1C6F8:
    if(v0 != 0L) {
        if(param2 == 0L) {
            goto loc_B1C804;
        }
        else {
            __int128* ptr4 = param2;
            __int128* ptr5 = param1;
            long v32 = v0;
            do {
                __int128 v33 = *(ptr4 + 2);
                __int128 v34 = *(ptr4 + 3);
                __int128 v35 = *ptr4;
                __int128 v36 = *(ptr4 + 1);
                ptr4 += 8;
                long v37 = v32 - 1L;
                --v32;
                *(ptr5 + 2) = v33;
                *(ptr5 + 3) = v34;
                *ptr5 = v35;
                *(ptr5 + 1) = v36;
                ptr5 += 4;
            }
            while(v37 != 0L);
            __int128* ptr6 = (__int128*)(v0 * 64L + (long)param1);
            __int128* ptr7 = param2 + 4;
        }
    loc_B1C730:
        while(1) {
            __int128 v38 = *(ptr7 + 2);
            v1 = *(ptr7 + 3);
            v3 = *ptr7;
            v2 = *(ptr7 + 1);
            ptr7 += 8;
            v20 = v0 - 1L;
            --v0;
            *(ptr6 + 2) = v38;
            *(ptr6 + 3) = v1;
            *ptr6 = v3;
            *(ptr6 + 1) = v2;
            ptr6 += 4;
            if(v20 != 0L) {
                goto loc_B1C730;
            loc_B1C804:
                /*NO_RETURN*/ Botan::assertion_failure();
            }
            goto loc_B1C754;
        }
    }
loc_B1C754:
    Botan::deallocate_memory((long)ptr0, 64L, 1L);
}
