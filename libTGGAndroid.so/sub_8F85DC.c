long sub_8F85DC(long param0, long param1, long param2, uint64_t* param3, long param4) {
    long* ptr0;
    long v0 = param0;
    if(param2 != 0L) {
        long v1 = 0L;
        long v2 = param4 - 2L;
        long v3 = param4 - 1L;
        do {
            long v4 = v1 * 16L;
            long* ptr1 = *(param3 + 1);
            long* ptr2 = (long*)(v4 + v0);
            long v5 = *ptr2;
            long v6 = *(ptr2 + 1);
            long* ptr3 = ptr1 - 5;
            long v7 = ((uint64_t)(uint8_t)(v5 >>> 56L) | ((uint64_t)(uint8_t)(v5 >>> 48L) << 8) | ((uint64_t)(uint8_t)(v5 >>> 40L) << 16) | ((uint64_t)(uint8_t)(v5 >>> 32L) << 24) | ((uint64_t)(uint8_t)(v5 >>> 24L) << 32) | ((uint64_t)(uint8_t)(v5 >>> 16L) << 40) | ((uint64_t)(uint8_t)(v5 >>> 8L) << 48) | ((uint64_t)(uint8_t)v5 << 56)) ^ *(ptr1 - 2);
            long v8 = *(ptr1 - 3) ^ v7;
            int v9 = (uint32_t)*(char*)((v8 & 0xffL) + (long)&gvar_45A680);
            int v10 = (uint32_t)*(char*)((v8 >>> 56L) + (long)&gvar_45A680);
            int v11 = (uint32_t)*(char*)(((uint64_t)((uint32_t)((__ror__((uint32_t)(v8 >>> 32L), 7)) & 1) | ((uint32_t)((v8 >>> 32L) & 0x7fffffffL) << 1)) & 0xffL) + (long)&gvar_45A680);
            int v12 = (uint32_t)*(char*)(((uint64_t)((uint32_t)((__ror__((uint32_t)(v8 >>> 8L), 7)) & 1) | ((uint32_t)((v8 >>> 8L) & 0x7fffffffL) << 1)) & 0xffL) + (long)&gvar_45A680);
            int v13 = (uint32_t)(uint8_t)((*(char*)(((__ror__(v8, 40L)) & 0xffL) + (long)&gvar_45A680) >>> 1) & 0x7f) | ((uint32_t)*(char*)(((__ror__(v8, 40L)) & 0xffL) + (long)&gvar_45A680) << 7) | ((uint32_t)((((uint32_t)*(char*)(((__ror__(v8, 40L)) & 0xffL) + (long)&gvar_45A680) >>> 1) >>> 0xF) & &gvar_10308+fcf7h) << 0xF);
            int v14 = (uint32_t)(*(char*)(((__ror__(v8, 48L)) & 0xffL) + (long)&gvar_45A680) < 0) | ((uint32_t)*(char*)(((__ror__(v8, 48L)) & 0xffL) + (long)&gvar_45A680) << 1) | ((uint32_t)((((uint32_t)*(char*)(((__ror__(v8, 48L)) & 0xffL) + (long)&gvar_45A680) >>> 7) >>> 9) & 0x7fffff) << 9);
            int v15 = (uint32_t)(*(char*)(((__ror__(v8, 24L)) & 0xffL) + (long)&gvar_45A680) < 0) | ((uint32_t)*(char*)(((__ror__(v8, 24L)) & 0xffL) + (long)&gvar_45A680) << 1) | ((uint32_t)((((uint32_t)*(char*)(((__ror__(v8, 24L)) & 0xffL) + (long)&gvar_45A680) >>> 7) >>> 9) & 0x7fffff) << 9);
            int v16 = v9 ^ v13;
            int v17 = (uint32_t)(uint8_t)((*(char*)(((__ror__(v8, 16L)) & 0xffL) + (long)&gvar_45A680) >>> 1) & 0x7f) | ((uint32_t)*(char*)(((__ror__(v8, 16L)) & 0xffL) + (long)&gvar_45A680) << 7) | ((uint32_t)((((uint32_t)*(char*)(((__ror__(v8, 16L)) & 0xffL) + (long)&gvar_45A680) >>> 1) >>> 0xF) & &gvar_10308+fcf7h) << 0xF);
            int v18 = v10 ^ v14;
            int v19 = v14 ^ v13;
            int v20 = v15 ^ v11;
            int v21 = v20 ^ v12;
            long v22 = (uint64_t)((v21 ^ v10) ^ v17) & 0xffL;
            long v23 = (uint64_t)(v22 & 0xffffffffffffL) | ((uint64_t)(((uint8_t)v21 ^ (uint8_t)v18) ^ (uint8_t)v9) << 48) | ((uint64_t)(uint8_t)(v22 >>> 56L) << 56);
            long v24 = (uint64_t)(uint32_t)v23 | ((uint64_t)(((uint8_t)v21 ^ (uint8_t)v19) ^ (uint8_t)v17) << 32) | ((uint64_t)(uint32_t)((v23 >>> 40L) & 0xffffffL) << 40);
            long v25 = (uint64_t)(uint16_t)v24 | ((uint64_t)((((uint8_t)v12 ^ (uint8_t)v19) ^ (uint8_t)v15) ^ (uint8_t)v9) << 16) | ((uint64_t)((v24 >>> 24L) & 0xffffffffffL) << 24);
            long v26 = (uint64_t)(uint8_t)v25 | ((uint64_t)((((uint8_t)v20 ^ (uint8_t)v17) ^ (uint8_t)v13) ^ (uint8_t)v9) << 8) | ((uint64_t)((v25 >>> 16L) & 0xffffffffffffL) << 16);
            long v27 = (((uint64_t)(((v10 ^ v16) ^ v11) ^ (v17 ^ v12)) * 0x100000000000000L) | ((uint64_t)((((uint8_t)v16 ^ (uint8_t)v18) ^ (uint8_t)v15) ^ (uint8_t)v17) * 0x10000000000L) | (uint64_t)(uint32_t)(v26 & 0xffffffL) | ((uint64_t)(((uint8_t)v17 ^ (uint8_t)v12) ^ ((uint8_t)v9 ^ (uint8_t)v18)) << 24) | ((uint64_t)(uint32_t)(v26 >>> 32L) << 32)) ^ (((uint64_t)(uint8_t)(v6 >>> 56L) | ((uint64_t)(uint8_t)(v6 >>> 48L) << 8) | ((uint64_t)(uint8_t)(v6 >>> 40L) << 16) | ((uint64_t)(uint8_t)(v6 >>> 32L) << 24) | ((uint64_t)(uint8_t)(v6 >>> 24L) << 32) | ((uint64_t)(uint8_t)(v6 >>> 16L) << 40) | ((uint64_t)(uint8_t)(v6 >>> 8L) << 48) | ((uint64_t)(uint8_t)v6 << 56)) ^ *(ptr1 - 1));
            long v28 = *(ptr1 - 4) ^ v27;
            int v29 = (uint32_t)*(char*)(((uint64_t)((uint32_t)((__ror__((uint32_t)(v28 >>> 32L), 7)) & 1) | ((uint32_t)((v28 >>> 32L) & 0x7fffffffL) << 1)) & 0xffL) + (long)&gvar_45A680);
            int v30 = (uint32_t)*(char*)((v28 >>> 56L) + (long)&gvar_45A680);
            int v31 = (uint32_t)*(char*)((v28 & 0xffL) + (long)&gvar_45A680);
            int v32 = (uint32_t)*(char*)(((uint64_t)((uint32_t)((__ror__((uint32_t)(v28 >>> 8L), 7)) & 1) | ((uint32_t)((v28 >>> 8L) & 0x7fffffffL) << 1)) & 0xffL) + (long)&gvar_45A680);
            int v33 = (uint32_t)(*(char*)(((__ror__(v28, 48L)) & 0xffL) + (long)&gvar_45A680) < 0) | ((uint32_t)*(char*)(((__ror__(v28, 48L)) & 0xffL) + (long)&gvar_45A680) << 1) | ((uint32_t)((((uint32_t)*(char*)(((__ror__(v28, 48L)) & 0xffL) + (long)&gvar_45A680) >>> 7) >>> 9) & 0x7fffff) << 9);
            int v34 = (uint32_t)(uint8_t)((*(char*)(((__ror__(v28, 40L)) & 0xffL) + (long)&gvar_45A680) >>> 1) & 0x7f) | ((uint32_t)*(char*)(((__ror__(v28, 40L)) & 0xffL) + (long)&gvar_45A680) << 7) | ((uint32_t)((((uint32_t)*(char*)(((__ror__(v28, 40L)) & 0xffL) + (long)&gvar_45A680) >>> 1) >>> 0xF) & &gvar_10308+fcf7h) << 0xF);
            int v35 = (uint32_t)(*(char*)(((__ror__(v28, 24L)) & 0xffL) + (long)&gvar_45A680) < 0) | ((uint32_t)*(char*)(((__ror__(v28, 24L)) & 0xffL) + (long)&gvar_45A680) << 1) | ((uint32_t)((((uint32_t)*(char*)(((__ror__(v28, 24L)) & 0xffL) + (long)&gvar_45A680) >>> 7) >>> 9) & 0x7fffff) << 9);
            int v36 = (uint32_t)(uint8_t)((*(char*)(((__ror__(v28, 16L)) & 0xffL) + (long)&gvar_45A680) >>> 1) & 0x7f) | ((uint32_t)*(char*)(((__ror__(v28, 16L)) & 0xffL) + (long)&gvar_45A680) << 7) | ((uint32_t)((((uint32_t)*(char*)(((__ror__(v28, 16L)) & 0xffL) + (long)&gvar_45A680) >>> 1) >>> 0xF) & &gvar_10308+fcf7h) << 0xF);
            int v37 = v33 ^ v34;
            int v38 = v29 ^ v35;
            int v39 = v31 ^ v34;
            int v40 = v32 ^ v38;
            long v41 = (uint64_t)((v30 ^ v40) ^ v36) & 0xffL;
            long v42 = (uint64_t)(v41 & 0xffffffffffffL) | ((uint64_t)((((uint8_t)v30 ^ (uint8_t)v33) ^ (uint8_t)v40) ^ (uint8_t)v31) << 48) | ((uint64_t)(uint8_t)(v41 >>> 56L) << 56);
            long v43 = (uint64_t)(uint32_t)v42 | ((uint64_t)(((uint8_t)v37 ^ (uint8_t)v40) ^ (uint8_t)v36) << 32) | ((uint64_t)(uint32_t)((v42 >>> 40L) & 0xffffffL) << 40);
            long v44 = (uint64_t)(uint16_t)v43 | ((uint64_t)((((uint8_t)v37 ^ (uint8_t)v32) ^ (uint8_t)v35) ^ (uint8_t)v31) << 16) | ((uint64_t)((v43 >>> 24L) & 0xffffffffffL) << 24);
            long v45 = (uint64_t)(uint8_t)v44 | ((uint64_t)((((uint8_t)v36 ^ (uint8_t)v38) ^ (uint8_t)v34) ^ (uint8_t)v31) << 8) | ((uint64_t)((v44 >>> 16L) & 0xffffffffffffL) << 16);
            long v46 = (((uint64_t)(((v39 ^ v30) ^ v29) ^ (v32 ^ v36)) * 0x100000000000000L) | ((uint64_t)(((((uint8_t)v30 ^ (uint8_t)v33) ^ (uint8_t)v39) ^ (uint8_t)v35) ^ (uint8_t)v36) * 0x10000000000L) | (uint64_t)(uint32_t)(v45 & 0xffffffL) | ((uint64_t)((((uint8_t)v30 ^ (uint8_t)v33) ^ (uint8_t)v31) ^ ((uint8_t)v32 ^ (uint8_t)v36)) << 24) | ((uint64_t)(uint32_t)(v45 >>> 32L) << 32)) ^ v7;
            if(v3 == 1L) {
                ptr0 = ptr3;
            }
            else {
                long v47 = v2;
                long v48 = -1L;
                uint64_t v49 = 1L;
                do {
                    if(v49 / 3L * 3L + v48 == 0L) {
                        int v50 = (__ror__((uint32_t)(v46 >>> 32L) & *(int*)((char*)ptr3 + 4L), 31)) ^ (uint32_t)v46;
                        long v51 = *(ptr3 - 1);
                        int v52 = (*(int*)ptr3 | v50) ^ (uint32_t)(v46 >>> 32L);
                        ptr3 -= 2;
                        long v53 = (v51 | v27) ^ (v27 >>> 32L);
                        v46 = (uint64_t)v50 | ((uint64_t)v52 << 32);
                        v27 = (uint64_t)((__ror__((uint32_t)(v51 >>> 32L) & (uint32_t)v53, 31)) ^ (uint32_t)v27) | ((uint64_t)(uint32_t)v53 << 32);
                    }
                    ptr0 = ptr3 - 2;
                    ++v49;
                    --v47;
                    long v54 = *ptr3 ^ v46;
                    v27 = (((((((*(long*)&aP2[(v54 >>> 53L) & 0x7f8L] ^ v27) ^ *(uint64_t*)(((__ror__(v54, 48L)) & 0xffL) * 8L + (long)&gvar_45AF80)) ^ *(uint64_t*)(((__ror__(v54, 40L)) & 0xffL) * 8L + (long)&gvar_45B780)) ^ *(uint64_t*)(((__ror__(v54, 32L)) & 0xffL) * 8L + (long)&gvar_45BF80)) ^ *(uint64_t*)(((__ror__(v54, 24L)) & 0xffL) * 8L + (long)&gvar_45C780)) ^ *(long*)&a88[((__ror__(v54, 16L)) & 0xffL) * 8L]) ^ *(uint64_t*)(((__ror__(v54, 8L)) & 0xffL) * 8L + (long)&gvar_45D780)) ^ *(uint64_t*)((v54 & 0xffL) * 8L + (long)&gvar_45DF80);
                    long v55 = *(ptr3 - 1) ^ v27;
                    v46 = (((((((*(long*)&aP2[(v55 >>> 53L) & 0x7f8L] ^ v46) ^ *(uint64_t*)(((__ror__(v55, 48L)) & 0xffL) * 8L + (long)&gvar_45AF80)) ^ *(uint64_t*)(((__ror__(v55, 40L)) & 0xffL) * 8L + (long)&gvar_45B780)) ^ *(uint64_t*)(((__ror__(v55, 32L)) & 0xffL) * 8L + (long)&gvar_45BF80)) ^ *(uint64_t*)(((__ror__(v55, 24L)) & 0xffL) * 8L + (long)&gvar_45C780)) ^ *(long*)&a88[((__ror__(v55, 16L)) & 0xffL) * 8L]) ^ *(uint64_t*)(((__ror__(v55, 8L)) & 0xffL) * 8L + (long)&gvar_45D780)) ^ *(uint64_t*)((v55 & 0xffL) * 8L + (long)&gvar_45DF80);
                    --v48;
                    ptr3 = ptr0;
                }
                while(v47 != 0L);
            }
            ++v1;
            long* ptr4 = (long*)(param1 + v4);
            long v56 = *ptr0 ^ v46;
            int v57 = (uint32_t)*(char*)((v56 & 0xffL) + (long)&gvar_45A680);
            int v58 = (uint32_t)*(char*)((v56 >>> 56L) + (long)&gvar_45A680);
            int v59 = (uint32_t)*(char*)(((uint64_t)((uint32_t)((__ror__((uint32_t)(v56 >>> 32L), 7)) & 1) | ((uint32_t)((v56 >>> 32L) & 0x7fffffffL) << 1)) & 0xffL) + (long)&gvar_45A680);
            int v60 = (uint32_t)*(char*)(((uint64_t)((uint32_t)((__ror__((uint32_t)(v56 >>> 8L), 7)) & 1) | ((uint32_t)((v56 >>> 8L) & 0x7fffffffL) << 1)) & 0xffL) + (long)&gvar_45A680);
            int v61 = (uint32_t)(uint8_t)((*(char*)(((__ror__(v56, 40L)) & 0xffL) + (long)&gvar_45A680) >>> 1) & 0x7f) | ((uint32_t)*(char*)(((__ror__(v56, 40L)) & 0xffL) + (long)&gvar_45A680) << 7) | ((uint32_t)((((uint32_t)*(char*)(((__ror__(v56, 40L)) & 0xffL) + (long)&gvar_45A680) >>> 1) >>> 0xF) & &gvar_10308+fcf7h) << 0xF);
            int v62 = (uint32_t)(*(char*)(((__ror__(v56, 48L)) & 0xffL) + (long)&gvar_45A680) < 0) | ((uint32_t)*(char*)(((__ror__(v56, 48L)) & 0xffL) + (long)&gvar_45A680) << 1) | ((uint32_t)((((uint32_t)*(char*)(((__ror__(v56, 48L)) & 0xffL) + (long)&gvar_45A680) >>> 7) >>> 9) & 0x7fffff) << 9);
            int v63 = (uint32_t)(*(char*)(((__ror__(v56, 24L)) & 0xffL) + (long)&gvar_45A680) < 0) | ((uint32_t)*(char*)(((__ror__(v56, 24L)) & 0xffL) + (long)&gvar_45A680) << 1) | ((uint32_t)((((uint32_t)*(char*)(((__ror__(v56, 24L)) & 0xffL) + (long)&gvar_45A680) >>> 7) >>> 9) & 0x7fffff) << 9);
            int v64 = v57 ^ v61;
            int v65 = (uint32_t)(uint8_t)((*(char*)(((__ror__(v56, 16L)) & 0xffL) + (long)&gvar_45A680) >>> 1) & 0x7f) | ((uint32_t)*(char*)(((__ror__(v56, 16L)) & 0xffL) + (long)&gvar_45A680) << 7) | ((uint32_t)((((uint32_t)*(char*)(((__ror__(v56, 16L)) & 0xffL) + (long)&gvar_45A680) >>> 1) >>> 0xF) & &gvar_10308+fcf7h) << 0xF);
            int v66 = v62 ^ v61;
            int v67 = v59 ^ v63;
            long v68 = (uint64_t)(v60 ^ v67);
            long v69 = (uint64_t)(((v60 ^ v67) ^ v58) ^ v65) & 0xffL;
            long v70 = (uint64_t)(v69 & 0xffffffffffffL) | ((uint64_t)((((uint8_t)v58 ^ (uint8_t)v62) ^ (uint8_t)v68) ^ (uint8_t)v57) << 48) | ((uint64_t)(uint8_t)(v69 >>> 56L) << 56);
            long v71 = (uint64_t)(uint32_t)v70 | ((uint64_t)(((uint8_t)v66 ^ (uint8_t)v68) ^ (uint8_t)v65) << 32) | ((uint64_t)(uint32_t)((v70 >>> 40L) & 0xffffffL) << 40);
            long v72 = (uint64_t)(uint16_t)v71 | ((uint64_t)((((uint8_t)v66 ^ (uint8_t)v60) ^ (uint8_t)v63) ^ (uint8_t)v57) << 16) | ((uint64_t)((v71 >>> 24L) & 0xffffffffffL) << 24);
            long v73 = (uint64_t)(uint8_t)v72 | ((uint64_t)((((uint8_t)v65 ^ (uint8_t)v67) ^ (uint8_t)v61) ^ (uint8_t)v57) << 8) | ((uint64_t)((v72 >>> 16L) & 0xffffffffffffL) << 16);
            long v74 = (((uint64_t)(((v64 ^ v58) ^ v59) ^ (v60 ^ v65)) * 0x100000000000000L) | ((uint64_t)(((((uint8_t)v58 ^ (uint8_t)v62) ^ (uint8_t)v64) ^ (uint8_t)v63) ^ (uint8_t)v65) * 0x10000000000L) | (uint64_t)(uint32_t)(v73 & 0xffffffL) | ((uint64_t)((((uint8_t)v58 ^ (uint8_t)v62) ^ (uint8_t)v57) ^ ((uint8_t)v60 ^ (uint8_t)v65)) << 24) | ((uint64_t)(uint32_t)(v73 >>> 32L) << 32)) ^ v27;
            long v75 = *(ptr0 - 1) ^ v74;
            long v76 = *(ptr0 - 3) ^ v74;
            int v77 = (uint32_t)*(char*)(((uint64_t)((uint32_t)((__ror__((uint32_t)(v75 >>> 32L), 7)) & 1) | ((uint32_t)((v75 >>> 32L) & 0x7fffffffL) << 1)) & 0xffL) + (long)&gvar_45A680);
            int v78 = (uint32_t)*(char*)((v75 >>> 56L) + (long)&gvar_45A680);
            int v79 = (uint32_t)*(char*)((v75 & 0xffL) + (long)&gvar_45A680);
            int v80 = (uint32_t)*(char*)(((uint64_t)((uint32_t)((__ror__((uint32_t)(v75 >>> 8L), 7)) & 1) | ((uint32_t)((v75 >>> 8L) & 0x7fffffffL) << 1)) & 0xffL) + (long)&gvar_45A680);
            int v81 = (uint32_t)(*(char*)(((__ror__(v75, 48L)) & 0xffL) + (long)&gvar_45A680) < 0) | ((uint32_t)*(char*)(((__ror__(v75, 48L)) & 0xffL) + (long)&gvar_45A680) << 1) | ((uint32_t)((((uint32_t)*(char*)(((__ror__(v75, 48L)) & 0xffL) + (long)&gvar_45A680) >>> 7) >>> 9) & 0x7fffff) << 9);
            int v82 = (uint32_t)(uint8_t)((*(char*)(((__ror__(v75, 40L)) & 0xffL) + (long)&gvar_45A680) >>> 1) & 0x7f) | ((uint32_t)*(char*)(((__ror__(v75, 40L)) & 0xffL) + (long)&gvar_45A680) << 7) | ((uint32_t)((((uint32_t)*(char*)(((__ror__(v75, 40L)) & 0xffL) + (long)&gvar_45A680) >>> 1) >>> 0xF) & &gvar_10308+fcf7h) << 0xF);
            int v83 = (uint32_t)(*(char*)(((__ror__(v75, 24L)) & 0xffL) + (long)&gvar_45A680) < 0) | ((uint32_t)*(char*)(((__ror__(v75, 24L)) & 0xffL) + (long)&gvar_45A680) << 1) | ((uint32_t)((((uint32_t)*(char*)(((__ror__(v75, 24L)) & 0xffL) + (long)&gvar_45A680) >>> 7) >>> 9) & 0x7fffff) << 9);
            int v84 = (uint32_t)(uint8_t)((*(char*)(((__ror__(v75, 16L)) & 0xffL) + (long)&gvar_45A680) >>> 1) & 0x7f) | ((uint32_t)*(char*)(((__ror__(v75, 16L)) & 0xffL) + (long)&gvar_45A680) << 7) | ((uint32_t)((((uint32_t)*(char*)(((__ror__(v75, 16L)) & 0xffL) + (long)&gvar_45A680) >>> 1) >>> 0xF) & &gvar_10308+fcf7h) << 0xF);
            int v85 = v81 ^ v82;
            int v86 = v77 ^ v83;
            int v87 = v79 ^ v82;
            int v88 = v78 ^ v81;
            int v89 = v80 ^ v84;
            int v90 = v80 ^ v86;
            long v91 = (uint64_t)((v78 ^ v90) ^ v84) & 0xffL;
            long v92 = (uint64_t)(v91 & 0xffffffffffffL) | ((uint64_t)(((uint8_t)v88 ^ (uint8_t)v90) ^ (uint8_t)v79) << 48) | ((uint64_t)(uint8_t)(v91 >>> 56L) << 56);
            long v93 = (uint64_t)(uint32_t)v92 | ((uint64_t)(((uint8_t)v85 ^ (uint8_t)v90) ^ (uint8_t)v84) << 32) | ((uint64_t)(uint32_t)((v92 >>> 40L) & 0xffffffL) << 40);
            param0 = (uint64_t)(((v84 ^ v86) ^ v82) ^ v79) & 0xffL;
            long v94 = (uint64_t)(uint16_t)v93 | ((uint64_t)((((uint8_t)v85 ^ (uint8_t)v80) ^ (uint8_t)v83) ^ (uint8_t)v79) << 16) | ((uint64_t)((v93 >>> 24L) & 0xffffffffffL) << 24);
            long v95 = (uint64_t)(uint8_t)v94 | ((uint64_t)((((uint8_t)v84 ^ (uint8_t)v86) ^ (uint8_t)v82) ^ (uint8_t)v79) << 8) | ((uint64_t)((v94 >>> 16L) & 0xffffffffffffL) << 16);
            long v96 = (((uint64_t)(((v87 ^ v78) ^ v77) ^ v89) * 0x100000000000000L) | ((uint64_t)((((uint8_t)v87 ^ (uint8_t)v88) ^ (uint8_t)v83) ^ (uint8_t)v84) * 0x10000000000L) | (uint64_t)(uint32_t)(v95 & 0xffffffL) | ((uint64_t)(((uint8_t)v79 ^ (uint8_t)v88) ^ (uint8_t)v89) << 24) | ((uint64_t)(uint32_t)(v95 >>> 32L) << 32)) ^ (*(ptr0 - 2) ^ v46);
            *ptr4 = (uint64_t)(uint8_t)(v76 >>> 56L) | ((uint64_t)(uint8_t)(v76 >>> 48L) << 8) | ((uint64_t)(uint8_t)(v76 >>> 40L) << 16) | ((uint64_t)(uint8_t)(v76 >>> 32L) << 24) | ((uint64_t)(uint8_t)(v76 >>> 24L) << 32) | ((uint64_t)(uint8_t)(v76 >>> 16L) << 40) | ((uint64_t)(uint8_t)(v76 >>> 8L) << 48) | ((uint64_t)(uint8_t)v76 << 56);
            *(ptr4 + 1) = (uint64_t)(uint8_t)(v96 >>> 56L) | ((uint64_t)(uint8_t)(v96 >>> 48L) << 8) | ((uint64_t)(uint8_t)(v96 >>> 40L) << 16) | ((uint64_t)(uint8_t)(v96 >>> 32L) << 24) | ((uint64_t)(uint8_t)(v96 >>> 24L) << 32) | ((uint64_t)(uint8_t)(v96 >>> 16L) << 40) | ((uint64_t)(uint8_t)(v96 >>> 8L) << 48) | ((uint64_t)(uint8_t)v96 << 56);
        }
        while(param2 != v1);
    }
    return param0;
}
