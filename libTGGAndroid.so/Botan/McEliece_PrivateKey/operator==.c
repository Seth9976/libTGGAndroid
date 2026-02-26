// Package: Botan::McEliece_PrivateKey

long Botan::McEliece_PrivateKey::operator==(uint64_t* param0, uint64_t* param1) {
    short* ptr0;
    uint64_t* ptr1;
    uint16_t* ptr2;
    uint8_t* ptr3 = *(param0 + 16);
    uint64_t* ptr4 = *(param0 + 17);
    uint8_t* ptr5 = *(param1 + 16);
    if((uint64_t*)((long)*(param1 + 17) - (long)ptr5) == (uint64_t*)((long)ptr4 - (long)ptr3)) {
        if(ptr4 == ptr3) {
        loc_9B55C4:
            if(*(param0 + 19) == *(param1 + 19) && *(param0 + 20) == *(param1 + 20)) {
                ptr3 = *(param0 + 1);
                ptr4 = *(param0 + 2);
                ptr5 = *(param1 + 1);
                if((uint64_t*)((long)*(param1 + 2) - (long)ptr5) == (uint64_t*)((long)ptr4 - (long)ptr3)) {
                    if(ptr4 == ptr3) {
                    loc_9B55F8:
                        ptr3 = *(param0 + 4);
                        ptr4 = *(param0 + 5);
                        ptr5 = *(param1 + 4);
                        if((uint64_t*)((long)*(param1 + 5) - (long)ptr5) == (uint64_t*)((long)ptr4 - (long)ptr3)) {
                            if(ptr4 == ptr3) {
                            loc_9B5618:
                                ptr3 = *(param0 + 7);
                                ptr4 = *(param0 + 8);
                                ptr5 = *(param1 + 7);
                                if((uint64_t*)((long)*(param1 + 8) - (long)ptr5) == (uint64_t*)((long)ptr4 - (long)ptr3)) {
                                    if(ptr4 == ptr3) {
                                    loc_9B5658:
                                        ptr3 = *(param0 + 10);
                                        ptr4 = *(param0 + 11);
                                        ptr5 = *(param1 + 10);
                                        if((uint64_t*)((long)*(param1 + 11) - (long)ptr5) == (uint64_t*)((long)ptr4 - (long)ptr3)) {
                                            if(ptr4 == ptr3) {
                                            loc_9B56A4:
                                                if(*(param0 + 13) == *(param1 + 13)) {
                                                    return *(param0 + 14) == *(param1 + 14);
                                                }
                                            }
                                            else {
                                                while(*(int*)ptr3 == *(int*)ptr5) {
                                                    ptr3 += 4L;
                                                    ptr5 += 4L;
                                                    if(ptr4 != ptr3) {
                                                        continue;
                                                    }
                                                    goto loc_9B56A4;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        while((uint32_t)*(short*)ptr3 == (uint32_t)*(short*)ptr5) {
                                            ptr3 += 2L;
                                            ptr5 += 2L;
                                            if(ptr4 != ptr3) {
                                                continue;
                                            }
                                            goto loc_9B5658;
                                        }
                                    }
                                }
                            }
                            else {
                            loc_9B573C:
                                while(*(int*)ptr3 == *(int*)ptr5) {
                                    ptr2 = *(uint64_t*)(ptr3 + 8L);
                                    ptr1 = *(uint64_t*)(ptr3 + 16L);
                                    ptr0 = *(uint64_t*)(ptr5 + 8L);
                                    if((long*)((long)*(uint64_t*)(ptr5 + 16L) - (long)ptr0) != (uint64_t*)((long)ptr1 - (long)ptr2)) {
                                        return 0L;
                                    }
                                    if(ptr1 == ptr2) {
                                        goto loc_9B5720;
                                    }
                                    while((uint32_t)*ptr2 == (uint32_t)*ptr0) {
                                        ++ptr2;
                                        ++ptr0;
                                        if(ptr1 != ptr2) {
                                            continue;
                                        }
                                    loc_9B5720:
                                        ptr3 += 48L;
                                        ptr5 += 48L;
                                        if(ptr4 != ptr3) {
                                            continue loc_9B573C;
                                        }
                                        goto loc_9B5618;
                                    }
                                }
                            }
                        }
                    }
                    else {
                    loc_9B56D8:
                        while(*(int*)ptr3 == *(int*)ptr5) {
                            ptr2 = *(uint64_t*)(ptr3 + 8L);
                            ptr1 = *(uint64_t*)(ptr3 + 16L);
                            ptr0 = *(uint64_t*)(ptr5 + 8L);
                            if((long*)((long)*(uint64_t*)(ptr5 + 16L) - (long)ptr0) != (uint64_t*)((long)ptr1 - (long)ptr2)) {
                                return 0L;
                            }
                            if(ptr1 == ptr2) {
                                goto loc_9B56BC;
                            }
                            while((uint32_t)*ptr2 == (uint32_t)*ptr0) {
                                ++ptr2;
                                ++ptr0;
                                if(ptr1 != ptr2) {
                                    continue;
                                }
                            loc_9B56BC:
                                ptr3 += 48L;
                                ptr5 += 48L;
                                if(ptr4 != ptr3) {
                                    continue loc_9B56D8;
                                }
                                goto loc_9B55F8;
                            }
                        }
                    }
                }
            }
        }
        else {
            while((uint32_t)*ptr3 == (uint32_t)*ptr5) {
                ++ptr3;
                ++ptr5;
                if(ptr4 != ptr3) {
                    continue;
                }
                goto loc_9B55C4;
            }
        }
    }
    return 0L;
}
