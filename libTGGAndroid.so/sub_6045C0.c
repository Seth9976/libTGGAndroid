int sub_6045C0(char* param0, int* param1, uint64_t* param2) {
    char* ptr0;
    long v0;
    uint32_t v1;
    char* ptr1;
    char v2;
    char __s = 0;
    uint64_t* ptr2 = param2;
    char* ptr3 = param0;
    switch((uint64_t)(*(param1 + 47) - 2)) {
        case 0: {
            int v3 = *(uint32_t*)(ptr2 + 3);
            if(*(uint32_t*)(ptr2 + 3) >= 1) {
                int* ptr4 = NULL;
                long v4 = 0L;
                do {
                    long v5 = (uint64_t)*(int*)((long)*(ptr2 + 2) + (long)ptr4);
                    if(*(int*)((long)*(ptr2 + 2) + (long)ptr4) == 0) {
                        ptr1 = "(none)";
                    }
                    else {
                        long* ptr5 = (long*)DomDefGet(v5, 24L);
                        char* ptr6 = strchr(*(char**)(ptr5 + 20), 95);
                        v3 = *(uint32_t*)(ptr2 + 3);
                        ptr1 = ptr6 + 1L;
                    }
                    sub_D19380(&__s, ptr1);
                    if(v3 - 1 > v4) {
                        size_t v6 = strlen(&__s);
                        *(short*)(v6 + &__s) = 44;
                    }
                    ++v4;
                    ptr4 += 3;
                }
                while(v3 > v4);
            }
            v1 = 90;
            return sub_D19390(ptr3, 0x400L, "%c:%s", v1, &__s);
        }
        case 1: {
            long v7 = (uint64_t)**(ptr2 + 2);
            if(**(ptr2 + 2) != 0) {
                long* ptr7 = (long*)DomDefGet(v7, 24L);
                strchr(*(char**)(ptr7 + 20), 95);
            }
            sub_D19390(&__s, 1000L, "%s->%d");
            v1 = 82;
            return sub_D19390(ptr3, 0x400L, "%c:%s", v1, &__s);
        }
        case 2: {
            if(*(uint32_t*)(ptr2 + 3) >= 1) {
                long v8 = 0L;
                do {
                    sub_D19390(&v2, 100L, "%d");
                    sub_D19380(&__s, &v2);
                    v0 = *(uint32_t*)(ptr2 + 3);
                    if(v0 - 1L > v8) {
                        size_t v9 = strlen(&__s);
                        *(short*)(v9 + &__s) = 44;
                    }
                    ++v8;
                }
                while(v8 < v0);
            }
            v1 = 79;
            return sub_D19390(ptr3, 0x400L, "%c:%s", v1, &__s);
        }
        case 3: {
            sub_D19390(&__s, 1000L, "%d");
            v1 = 78;
            return sub_D19390(ptr3, 0x400L, "%c:%s", v1, &__s);
        }
        case 4: {
            if(*(uint32_t*)(ptr2 + 3) == 0) {
                *(int*)&__s = '(';
            }
            else {
                long v10 = (uint64_t)**(ptr2 + 2);
                if(**(ptr2 + 2) != 0) {
                    long* ptr8 = (long*)DomDefGet(v10, 24L);
                    strchr(*(char**)(ptr8 + 20), 95);
                }
                sub_D19390(&__s, 1000L, "%s");
            }
            v1 = 85;
            return sub_D19390(ptr3, 0x400L, "%c:%s", v1, &__s);
        }
        case 7: {
            sub_D19390(&__s, 1000L, "%d");
            v1 = 67;
            return sub_D19390(ptr3, 0x400L, "%c:%s", v1, &__s);
        }
        default: {
            v1 = 65;
            switch((uint64_t)(*(param1 + 48) - 1)) {
                case 0: {
                    break;
                }
                case 1: {
                    v1 = 84;
                    break;
                }
                case 2: {
                    v1 = 66;
                    break;
                }
                case 4: {
                    v1 = 68;
                    break;
                }
                case 6: {
                    v1 = 72;
                    break;
                }
                case 8: {
                    v1 = 80;
                    break;
                }
                case 10: {
                    v1 = 89;
                    break;
                }
                case 11: {
                    v1 = 71;
                    break;
                }
                case 17: {
                    v1 = 83;
                    break;
                }
                case 23: {
                    v1 = 87;
                    break;
                }
                case 50: {
                    v1 = 69;
                    break;
                }
                default: {
                    v1 = 88;
                }
            }
            int v11 = *(uint32_t*)(ptr2 + 3);
            if(*(uint32_t*)(ptr2 + 3) == 0) {
                *(int*)&__s = '(';
            }
            else if(v11 >= 1) {
                int* ptr9 = NULL;
                long v12 = 0L;
                do {
                    long v13 = (uint64_t)*(int*)((long)*(ptr2 + 2) + (long)ptr9);
                    if(*(int*)((long)*(ptr2 + 2) + (long)ptr9) == 0) {
                        ptr0 = "(none)";
                    }
                    else {
                        long* ptr10 = (long*)DomDefGet(v13, 24L);
                        char* ptr11 = strchr(*(char**)(ptr10 + 20), 95);
                        v11 = *(uint32_t*)(ptr2 + 3);
                        ptr0 = ptr11 + 1L;
                    }
                    sub_D19380(&__s, ptr0);
                    if(v11 - 1 > v12) {
                        size_t v14 = strlen(&__s);
                        *(short*)(v14 + &__s) = 44;
                    }
                    ++v12;
                    ptr9 += 3;
                }
                while(v11 > v12);
            }
            return sub_D19390(ptr3, 0x400L, "%c:%s", v1, &__s);
        }
    }
}
