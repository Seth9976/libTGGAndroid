int sub_CFDF5C(uint64_t* param0) {
    char* ptr0;
    char* ptr1;
    char* ptr2;
    char* ptr3 = *param0;
    char* ptr4 = *(param0 + 1);
    if(ptr4 != ptr3) {
        if(*ptr3 == 104) {
            ptr2 = ptr3 + 1L;
            *param0 = ptr3 + 1L;
            if(ptr2 != ptr4) {
                ptr1 = ptr2;
                if(*ptr2 == 110) {
                    ptr1 = ptr3 + 2L;
                    *param0 = ptr3 + 2L;
                }
                if(ptr4 != ptr1 && (uint32_t)*ptr1 - 48 <= 9) {
                    char* ptr5 = ptr1 + 1L;
                    do {
                        ptr3 = ptr5;
                        *param0 = ptr5;
                        if(ptr4 == ptr5) {
                            ptr1 = ptr4;
                        loc_CFE06C:
                            if(ptr2 == ptr1 || ptr4 == ptr3) {
                                return 1L;
                            }
                            else if(*ptr3 == 95) {
                                ptr4 = ptr3 + 1L;
                                *param0 = ptr4;
                                return 0L;
                            }
                            return 1;
                        }
                        ptr5 = ptr3 + 1L;
                    }
                    while((uint32_t)*ptr3 - 48 < 10);
                    ptr1 = ptr5 - 1L;
                    goto loc_CFE06C;
                }
            }
        }
        else if(*ptr3 == 118) {
            ptr2 = ptr3 + 1L;
            *param0 = ptr3 + 1L;
            if(ptr2 != ptr4) {
                ptr1 = ptr2;
                if(*ptr2 == 110) {
                    ptr1 = ptr3 + 2L;
                    *param0 = ptr3 + 2L;
                }
                if(ptr4 != ptr1 && (uint32_t)*ptr1 - 48 <= 9) {
                    long* ptr6 = (long*)(ptr4 - 1L);
                    do {
                        ptr3 = ptr1;
                        ++ptr1;
                        *param0 = ptr1;
                        if(ptr3 == ptr6) {
                            ptr1 = ptr4;
                        loc_CFE0A0:
                            if(ptr2 == ptr1 || ptr3 == ptr6) {
                                return 1L;
                            }
                            if(*(ptr3 + 1L) == 95) {
                                ptr2 = ptr3 + 2L;
                                *param0 = ptr3 + 2L;
                                if((long*)(ptr4 - 2L) != ptr3) {
                                    if(*ptr2 == 110) {
                                        ptr2 = ptr3 + 3L;
                                        *param0 = ptr3 + 3L;
                                    }
                                    if(ptr2 != ptr4 && (uint32_t)*ptr2 - 48 <= 9) {
                                        char* ptr7 = ptr2 + 1L;
                                        do {
                                            ptr1 = ptr7;
                                            *param0 = ptr7;
                                            if(ptr7 == ptr4) {
                                                ptr0 = ptr4;
                                            loc_CFE140:
                                                if((long*)(ptr0 - 2L) == ptr3 || ptr4 == ptr1) {
                                                    return 1L;
                                                }
                                                if(*ptr1 == 95) {
                                                    ptr4 = ptr1 + 1L;
                                                    *param0 = ptr4;
                                                    return 0L;
                                                }
                                                return 1;
                                            }
                                            ptr7 = ptr1 + 1L;
                                        }
                                        while((uint32_t)*ptr1 - 48 < 10);
                                        ptr0 = ptr7 - 1L;
                                        goto loc_CFE140;
                                    }
                                }
                            }
                            return 1;
                        }
                    }
                    while((uint32_t)*ptr1 - 48 < 10);
                    goto loc_CFE0A0;
                }
            }
        }
    }
    return 1;
}
