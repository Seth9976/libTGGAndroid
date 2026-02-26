// Stale decompilation - Refresh this view to re-decompile this code
long sub_D149A8(uint8_t* param0, long param1, uint64_t* param2, long param3) {
    uint64_t* ptr0;
    uint8_t* ptr1;
    uint8_t* ptr2;
    long v0;
    long v1;
    long* ptr3;
    long v2;
    uint8_t* ptr4;
    long v3;
    long v4;
    long* ptr5;
    long v5;
    long* ptr6;
    uint8_t* ptr7;
    long v6;
    long v7;
    long v8;
    long v9;
    long v10 = (uint64_t)(v9 & 0xffffffffffffL) | ((uint64_t)80 << 48);
    uint8_t* ptr8 = NULL;
    uint64_t* ptr9 = NULL;
    uint8_t* ptr10 = param0 + 20L;
    uint8_t* ptr11 = 0L - param0;
loc_D149D0:
    while(param0 != ptr10 && (uint64_t)ptr8 <= 63L) {
        long v11 = (uint64_t)*param0;
        uint8_t* ptr12 = (uint8_t*)(v11 & 0x7fL);
        uint64_t* ptr13 = (uint64_t*)((long)ptr12 << (long)ptr8);
        if((long*)((long)ptr13 >>> (long)ptr8) == ptr12) {
            ptr9 = (long)ptr9 | (long)ptr13;
            ptr8 += 7L;
            ++param0;
            --ptr11;
            if((v11 >>> 7L) & 0x1L) {
                continue;
            }
            uint8_t* ptr14 = 0L - ptr11;
            uint64_t* ptr15 = (uint64_t*)((long)ptr9 - (long)ptr11);
            if((uint64_t)ptr15 > (uint64_t)ptr14) {
                ptr13 = &v8;
                ptr8 = param2 + 33;
                ptr11 = param2 + 31;
                ptr10 = param2 + 32;
                ptr12 = ptr14;
                do {
                    uint8_t* ptr16 = (uint64_t)*ptr12;
                    ++ptr12;
                    uint8_t* ptr17 = (uint64_t)((uint32_t)ptr16 - 3);
                    uint64_t* ptr18 = gvar_48BEBA[ptr17];
                    switch(ptr17) {
                        case 0: 
                        case 11: 
                        case 12: {
                            ptr12 = ptr14 + 9L;
                            *(ptr13 + 1) = *(uint64_t*)(ptr14 + 1L);
                            ++ptr13;
                            goto loc_D14A58;
                        }
                        case 3: {
                            ptr6 = **ptr13;
                            *ptr13 = ptr6;
                            goto loc_D14A58;
                        }
                        case 5: {
                            ptr16 = (uint64_t)*(ptr14 + 1L);
                            ptr12 = ptr14 + 2L;
                            *(ptr13 + 1) = ptr16;
                            ++ptr13;
                            goto loc_D14A58;
                        }
                        case 6: {
                            ptr16 = *(ptr14 + 1L);
                            ptr12 = ptr14 + 2L;
                            *(ptr13 + 1) = ptr16;
                            ++ptr13;
                            goto loc_D14A58;
                        }
                        case 7: {
                            ptr16 = (uint64_t)*(uint16_t*)(ptr14 + 1L);
                            ptr12 = ptr14 + 3L;
                            *(ptr13 + 1) = ptr16;
                            ++ptr13;
                            goto loc_D14A58;
                        }
                        case 8: {
                            ptr16 = *(uint16_t*)(ptr14 + 1L);
                            ptr12 = ptr14 + 3L;
                            *(ptr13 + 1) = ptr16;
                            ++ptr13;
                            goto loc_D14A58;
                        }
                        case 9: {
                            ptr16 = (uint64_t)*(uint32_t*)(ptr14 + 1L);
                            ptr12 = ptr14 + 5L;
                            *(ptr13 + 1) = ptr16;
                            ++ptr13;
                            goto loc_D14A58;
                        }
                        case 10: {
                            ptr16 = *(uint32_t*)(ptr14 + 1L);
                            ptr12 = ptr14 + 5L;
                            *(ptr13 + 1) = ptr16;
                            ++ptr13;
                            goto loc_D14A58;
                        }
                        case 13: {
                            ptr16 = NULL;
                            ptr0 = NULL;
                            ptr17 = ptr12;
                            goto loc_D14C98;
                        }
                        case 14: {
                            v7 = 0L;
                            v6 = 0L;
                            ptr7 = ptr12;
                            goto loc_D14CEC;
                        }
                        case 15: {
                            ptr0 = *ptr13;
                            goto loc_D14A50;
                        }
                        case 16: {
                            --ptr13;
                            goto loc_D14A58;
                        }
                        case 17: {
                            ptr0 = *(ptr13 - 1);
                            goto loc_D14A50;
                        }
                        case 18: {
                            ptr16 = *(uint64_t*)((long)ptr13 - (uint64_t)*(ptr14 + 1L) * 8L);
                            ptr12 = ptr14 + 2L;
                            *(ptr13 + 1) = ptr16;
                            ++ptr13;
                            goto loc_D14A58;
                        }
                        case 19: {
                            __int128* ptr19 = *(unsigned __int128*)(ptr13 - 1);
                            *(unsigned __int128*)(ptr13 - 1) = (__int128*)((((__SyntheticTypeUnknownU)ptr19 | ((__SyntheticTypeUnknownU)ptr19 << 128)) >>> 0x40X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFX);
                            goto loc_D14A58;
                        }
                        case 20: {
                            long* ptr20 = *ptr13;
                            *(unsigned __int128*)(ptr13 - 1) = *(unsigned __int128*)(ptr13 - 2);
                            *(ptr13 - 2) = ptr20;
                            goto loc_D14A58;
                        }
                        case 21: {
                            *(ptr13 - 1) = **ptr13;
                            --ptr13;
                            goto loc_D14A58;
                        }
                        case 22: {
                            long* ptr21 = *ptr13;
                            if((long)ptr21 >= 0L) {
                                goto loc_D14A58;
                            }
                            ptr6 = 0L - (long)ptr21;
                            *ptr13 = ptr6;
                            goto loc_D14A58;
                        }
                        case 23: {
                            long* ptr22 = *(ptr13 - 1);
                            uint64_t* ptr23 = ptr13 - 1;
                            ptr17 = *ptr13;
                            ptr13 = ptr23;
                            *ptr23 = (long*)((long)ptr22 & (long)ptr17);
                            goto loc_D14A58;
                        }
                        case 24: {
                            long* ptr24 = *(ptr13 - 1);
                            uint64_t* ptr25 = ptr13 - 1;
                            ptr17 = *ptr13;
                            ptr13 = ptr25;
                            *ptr25 = ptr17 != 0L ? (long*)((long)ptr24 / (long)ptr17): NULL;
                            goto loc_D14A58;
                        }
                        case 25: {
                            uint64_t* ptr26 = *(ptr13 - 1);
                            uint64_t* ptr27 = ptr13 - 1;
                            ptr17 = *ptr13;
                            ptr13 = ptr27;
                            *ptr27 = (uint64_t*)((long)ptr26 - (long)ptr17);
                            goto loc_D14A58;
                        }
                        case 26: {
                            long* ptr28 = *(ptr13 - 1);
                            uint64_t* ptr29 = ptr13 - 1;
                            ptr17 = *ptr13;
                            ptr13 = ptr29;
                            *ptr29 = (long*)((long)ptr28 % (long)ptr17);
                            goto loc_D14A58;
                        }
                        case 27: {
                            long* ptr30 = *(ptr13 - 1);
                            uint64_t* ptr31 = ptr13 - 1;
                            ptr17 = *ptr13;
                            ptr13 = ptr31;
                            *ptr31 = (long*)((long)ptr30 * (long)ptr17);
                            goto loc_D14A58;
                        }
                        case 28: {
                            ptr6 = 0L - (long)*ptr13;
                            *ptr13 = ptr6;
                            goto loc_D14A58;
                        }
                        case 29: {
                            ptr6 = ~(long)*ptr13;
                            *ptr13 = ptr6;
                            goto loc_D14A58;
                        }
                        case 30: {
                            long* ptr32 = *(ptr13 - 1);
                            uint64_t* ptr33 = ptr13 - 1;
                            ptr17 = *ptr13;
                            ptr13 = ptr33;
                            *ptr33 = (long*)((long)ptr32 | (long)ptr17);
                            goto loc_D14A58;
                        }
                        case 31: {
                            uint64_t* ptr34 = *(ptr13 - 1);
                            uint64_t* ptr35 = ptr13 - 1;
                            ptr17 = *ptr13;
                            ptr13 = ptr35;
                            *ptr35 = (uint64_t*)((long)ptr34 + (long)ptr17);
                            goto loc_D14A58;
                        }
                        case 32: {
                            v5 = 0L;
                            ptr5 = NULL;
                            ptr17 = ptr12;
                            goto loc_D14EE0;
                        }
                        case 33: {
                            long* ptr36 = *(ptr13 - 1);
                            uint64_t* ptr37 = ptr13 - 1;
                            ptr17 = *ptr13;
                            ptr13 = ptr37;
                            *ptr37 = (long*)((long)ptr36 << (long)ptr17);
                            goto loc_D14A58;
                        }
                        case 34: {
                            long* ptr38 = *(ptr13 - 1);
                            uint64_t* ptr39 = ptr13 - 1;
                            ptr17 = *ptr13;
                            ptr13 = ptr39;
                            *ptr39 = (long*)((long)ptr38 >>> (long)ptr17);
                            goto loc_D14A58;
                        }
                        case 35: {
                            long* ptr40 = *(ptr13 - 1);
                            uint64_t* ptr41 = ptr13 - 1;
                            ptr17 = *ptr13;
                            ptr13 = ptr41;
                            *ptr41 = (long*)((long)ptr40 >> (long)ptr17);
                            goto loc_D14A58;
                        }
                        case 36: {
                            long* ptr42 = *(ptr13 - 1);
                            uint64_t* ptr43 = ptr13 - 1;
                            ptr17 = *ptr13;
                            ptr13 = ptr43;
                            *ptr43 = (long*)((long)ptr42 ^ (long)ptr17);
                            goto loc_D14A58;
                        }
                        case 37: {
                            ptr16 = *ptr13;
                            --ptr13;
                            uint8_t* ptr44 = ptr14 + 3L;
                            if(ptr16 == 0L) {
                                ptr12 = ptr44;
                                goto loc_D14A58;
                            loc_D14CEC:
                                while(1) {
                                    if(ptr15 == ptr7) {
                                        break loc_D149D0;
                                    }
                                    long v12 = (uint64_t)*ptr7;
                                    ++ptr7;
                                    ++ptr12;
                                    long v13 = (v12 & 0x7fL) << v7;
                                    v7 += 7L;
                                    v6 |= v13;
                                    if((v12 >>> 7L) & 0x1L) {
                                        continue;
                                    }
                                    ptr0 = (((((uint32_t)v12 & 0x40) >>> 6) & (uint32_t)v7 - 7 < 57) ? -1L << v7: 0L) | v6;
                                    goto loc_D14A50;
                                loc_D14EE0:
                                    while(1) {
                                        if(ptr15 == ptr17 || v5 > 63L) {
                                            break loc_D149D0;
                                        }
                                        long v14 = (uint64_t)*ptr17;
                                        long v15 = v14 & 0x7fL;
                                        ptr18 = v15 << v5;
                                        if((long*)((long)ptr18 >>> v5) != v15) {
                                            break loc_D149D0;
                                        }
                                        ptr5 = (long)ptr18 | (long)ptr5;
                                        v5 += 7L;
                                        ++ptr17;
                                        ++ptr12;
                                        if((v14 >>> 7L) & 0x1L) {
                                            continue;
                                        }
                                        ptr6 = (long)*ptr13 + (long)ptr5;
                                        *ptr13 = ptr6;
                                        break loc_D14CEC;
                                    loc_D14AA4:
                                        while(1) {
                                            if(ptr4 == ptr15) {
                                                break loc_D149D0;
                                            }
                                            long v16 = (uint64_t)*ptr4;
                                            ++ptr4;
                                            ++ptr12;
                                            long v17 = (v16 & 0x7fL) << v4;
                                            v4 += 7L;
                                            v3 |= v17;
                                            if((v16 >>> 7L) & 0x1L) {
                                                continue;
                                            }
                                            long v18 = ((((uint32_t)v16 & 0x40) >>> 6) & (uint32_t)v4 - 7 < 57) ? -1L << v4: 0L;
                                            ptr18 = ptr8;
                                            if((uint32_t)ptr16 != 146) {
                                                ptr18 = ptr10;
                                                if((uint32_t)ptr16 != 111) {
                                                    ptr18 = ptr11;
                                                    if((uint32_t)ptr16 != 110) {
                                                        if((uint32_t)ptr17 > 31) {
                                                            break loc_D149D0;
                                                        }
                                                        ptr18 = (uint64_t)(uint32_t)ptr17 * 8L + (long)param2;
                                                    }
                                                }
                                            }
                                            ptr0 = (v18 | v3) + (long)*ptr18;
                                            goto loc_D14A50;
                                        loc_D15104:
                                            while(1) {
                                                if(ptr15 == ptr17 || v2 > 63L) {
                                                    break loc_D149D0;
                                                }
                                                long v19 = (uint64_t)*ptr17;
                                                long v20 = v19 & 0x7fL;
                                                ptr18 = v20 << v2;
                                                if((long*)((long)ptr18 >>> v2) != v20) {
                                                    break loc_D149D0;
                                                }
                                                ptr3 = (long)ptr18 | (long)ptr3;
                                                v2 += 7L;
                                                ++ptr17;
                                                ++ptr12;
                                                if((v19 >>> 7L) & 0x1L) {
                                                    continue;
                                                }
                                                ptr16 = ptr8;
                                                if((uint32_t)ptr3 != 34) {
                                                    ptr16 = ptr10;
                                                    if((uint32_t)ptr3 != -1) {
                                                        ptr16 = ptr11;
                                                        if((uint32_t)ptr3 != -2) {
                                                            if((uint32_t)ptr3 > 31) {
                                                                break loc_D149D0;
                                                            }
                                                            ptr16 = (uint64_t)(uint32_t)ptr3 * 8L + (long)param2;
                                                        }
                                                    }
                                                }
                                                ptr0 = *(uint64_t**)ptr16;
                                                goto loc_D14A50;
                                            loc_D14C98:
                                                while(1) {
                                                    if(ptr15 == ptr17 || (uint64_t)ptr16 > 63L) {
                                                        break loc_D149D0;
                                                    }
                                                    long v21 = (uint64_t)*ptr17;
                                                    long v22 = v21 & 0x7fL;
                                                    ptr18 = v22 << (long)ptr16;
                                                    if((long*)((long)ptr18 >>> (long)ptr16) != v22) {
                                                        break loc_D149D0;
                                                    }
                                                    ptr0 = (long)ptr18 | (long)ptr0;
                                                    ptr16 += 7L;
                                                    ++ptr17;
                                                    ++ptr12;
                                                    if((v21 >>> 7L) & 0x1L) {
                                                        continue;
                                                    }
                                                    goto loc_D14A50;
                                                loc_D14B50:
                                                    while(1) {
                                                        if(ptr15 == ptr1 || v1 > 63L) {
                                                            break loc_D149D0;
                                                        }
                                                        ptr12 = ptr2;
                                                        long v23 = (uint64_t)*ptr1;
                                                        long v24 = v23 & 0x7fL;
                                                        long v25 = v24 << v1;
                                                        if(v25 >>> v1 != v24) {
                                                            break loc_D149D0;
                                                        }
                                                        v0 |= v25;
                                                        v1 += 7L;
                                                        ++ptr1;
                                                        ptr2 = ptr12 + 1L;
                                                        if((v23 >>> 7L) & 0x1L) {
                                                            continue;
                                                        }
                                                        long v26 = 0L;
                                                        ptr17 = NULL;
                                                        while(1) {
                                                            if(ptr15 == ptr1) {
                                                                break loc_D149D0;
                                                            }
                                                            long v27 = (uint64_t)*ptr1;
                                                            ++ptr1;
                                                            ++ptr12;
                                                            long v28 = (v27 & 0x7fL) << v26;
                                                            v26 += 7L;
                                                            ptr17 = v28 | (long)ptr17;
                                                            if((v27 >>> 7L) & 0x1L) {
                                                                continue;
                                                            }
                                                            long v29 = ((((uint32_t)v27 & 0x40) >>> 6) & (uint32_t)v26 - 7 < 57) ? -1L << v26: 0L;
                                                            uint8_t* ptr45 = ptr8;
                                                            if((uint32_t)v0 != 34) {
                                                                ptr45 = ptr10;
                                                                if((uint32_t)v0 != -1) {
                                                                    ptr45 = ptr11;
                                                                    if((uint32_t)v0 != -2) {
                                                                        if((uint32_t)v0 > 31) {
                                                                            break loc_D149D0;
                                                                        }
                                                                        ptr45 = (uint64_t*)((uint64_t)(uint32_t)v0 * 8L + (long)param2);
                                                                    }
                                                                }
                                                            }
                                                            ptr0 = (long)(uint64_t*)(v29 | (long)ptr17) + (long)*(uint64_t**)ptr45;
                                                        loc_D14A50:
                                                            *(ptr13 + 1) = ptr0;
                                                            ++ptr13;
                                                            break loc_D14CEC;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else {
                                ptr12 = *(short*)ptr12 + ptr44;
                            }
                            goto loc_D14A58;
                        }
                        case 38: {
                            long* ptr46 = *(ptr13 - 1);
                            uint64_t* ptr47 = ptr13 - 1;
                            ptr17 = *ptr13;
                            ptr13 = ptr47;
                            *ptr47 = ptr46 != ptr17 ? NULL: &g1;
                            goto loc_D14A58;
                        }
                        case 39: {
                            long* ptr48 = *(ptr13 - 1);
                            uint64_t* ptr49 = ptr13 - 1;
                            ptr17 = *ptr13;
                            ptr13 = ptr49;
                            *ptr49 = (uint64_t)ptr48 < (uint64_t)ptr17 ? NULL: &g1;
                            goto loc_D14A58;
                        }
                        case 40: {
                            long* ptr50 = *(ptr13 - 1);
                            uint64_t* ptr51 = ptr13 - 1;
                            ptr17 = *ptr13;
                            ptr13 = ptr51;
                            *ptr51 = (uint64_t)ptr50 <= (uint64_t)ptr17 ? NULL: &g1;
                            goto loc_D14A58;
                        }
                        case 41: {
                            long* ptr52 = *(ptr13 - 1);
                            uint64_t* ptr53 = ptr13 - 1;
                            ptr17 = *ptr13;
                            ptr13 = ptr53;
                            *ptr53 = (uint64_t)ptr52 > (uint64_t)ptr17 ? NULL: &g1;
                            goto loc_D14A58;
                        }
                        case 42: {
                            long* ptr54 = *(ptr13 - 1);
                            uint64_t* ptr55 = ptr13 - 1;
                            ptr17 = *ptr13;
                            ptr13 = ptr55;
                            *ptr55 = (uint64_t)ptr54 >= (uint64_t)ptr17 ? NULL: &g1;
                            goto loc_D14A58;
                        }
                        case 43: {
                            long* ptr56 = *(ptr13 - 1);
                            uint64_t* ptr57 = ptr13 - 1;
                            ptr17 = *ptr13;
                            ptr13 = ptr57;
                            *ptr57 = ptr56 == ptr17 ? NULL: &g1;
                            goto loc_D14A58;
                        }
                        case 44: {
                            ptr12 = (uint8_t*)(*(uint16_t*)(ptr14 + 1L) + ptr14) + 3L;
                            goto loc_D14A58;
                        }
                        case 45: 
                        case 46: 
                        case 47: 
                        case 48: 
                        case 49: 
                        case 50: 
                        case 51: 
                        case 52: 
                        case 53: 
                        case 54: 
                        case 55: 
                        case 56: 
                        case 57: 
                        case 58: 
                        case 59: 
                        case 60: 
                        case 61: 
                        case 62: 
                        case 63: 
                        case 64: 
                        case 65: 
                        case 66: 
                        case 67: 
                        case 68: 
                        case 69: 
                        case 70: 
                        case 71: 
                        case 72: 
                        case 73: 
                        case 74: 
                        case 75: 
                        case 76: {
                            break;
                        }
                        case 77: 
                        case 78: 
                        case 79: 
                        case 80: 
                        case 81: 
                        case 82: 
                        case 83: 
                        case 84: 
                        case 85: 
                        case 86: 
                        case 87: 
                        case 88: 
                        case 89: 
                        case 90: 
                        case 91: 
                        case 92: 
                        case 93: 
                        case 94: 
                        case 95: 
                        case 96: 
                        case 97: 
                        case 98: 
                        case 99: 
                        case 100: 
                        case 101: 
                        case 102: 
                        case 103: 
                        case 104: 
                        case 105: 
                        case 106: 
                        case 107: 
                        case 108: {
                            ptr0 = *(uint64_t*)((uint64_t)((uint32_t)ptr16 - 80) * 8L + (long)param2);
                            goto loc_D14A50;
                        }
                        case 109: 
                        case 110: 
                        case 111: 
                        case 112: 
                        case 113: 
                        case 114: 
                        case 115: 
                        case 116: 
                        case 117: 
                        case 118: 
                        case 119: 
                        case 120: 
                        case 121: 
                        case 122: 
                        case 123: 
                        case 124: 
                        case 125: 
                        case 126: 
                        case 127: 
                        case 128: 
                        case 129: 
                        case 130: 
                        case 131: 
                        case 132: 
                        case 133: 
                        case 134: 
                        case 135: 
                        case 136: 
                        case 137: 
                        case 138: 
                        case 139: 
                        case 140: {
                            v4 = 0L;
                            v3 = 0L;
                            ptr17 = (uint64_t)((uint32_t)ptr16 - 112);
                            ptr4 = ptr12;
                            goto loc_D14AA4;
                        }
                        case 141: {
                            v2 = 0L;
                            ptr3 = NULL;
                            ptr17 = ptr12;
                            goto loc_D15104;
                        }
                        case 143: {
                            v1 = 0L;
                            v0 = 0L;
                            ptr2 = ptr12 + 1L;
                            ptr1 = ptr12;
                            goto loc_D14B50;
                        }
                        case 145: {
                            ptr16 = *ptr13;
                            ptr12 = ptr14 + 2L;
                            switch((uint64_t)((uint32_t)*(ptr14 + 1L) - 1)) {
                                case 0: {
                                    ptr6 = (uint64_t)*ptr16;
                                    *ptr13 = ptr6;
                                    goto loc_D14A58;
                                }
                                case 1: {
                                    ptr6 = (uint64_t)*(short*)ptr16;
                                    *ptr13 = ptr6;
                                    goto loc_D14A58;
                                }
                                case 3: {
                                    ptr6 = (uint64_t)*(int*)ptr16;
                                    *ptr13 = ptr6;
                                    goto loc_D14A58;
                                }
                                case 7: {
                                    ptr6 = *(long**)ptr16;
                                    *ptr13 = ptr6;
                                    goto loc_D14A58;
                                }
                                default: {
                                    break loc_D149D0;
                                }
                            }
                        }
                        default: {
                            break loc_D149D0;
                        }
                    }
                    ptr0 = ptr16 - 48L;
                    goto loc_D14A50;
                loc_D14A58:
                    ptr14 = ptr12;
                }
                while((uint64_t)ptr15 > (uint64_t)ptr12);
            }
            jump (uint64_t)(v10 & 0xffffffffffffL);
        }
        break;
    }
    fprintf(&g130, "libunwind: %s - %s\n");
    fflush(&g130);
    /*NO_RETURN*/ abort();
}
