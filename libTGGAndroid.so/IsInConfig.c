long IsInConfig(int* param0, int param1) {
    int v0 = *param0;
    if(*param0 == 0) {
    loc_8036C0:
        int v1 = *(param0 + 40);
        if(*(param0 + 40) != 1) {
            if(v1 == 0) {
                goto loc_8036D0;
            }
            else {
                goto loc_803720;
            }
        }
        else if(*(param0 + 41) != param1) {
        loc_803720:
            if(*(param0 + 44) != param1 && *(param0 + 45) != param1 && *(param0 + 46) != param1 && *(param0 + 47) != param1 && *(param0 + 48) != param1 && *(param0 + 49) != param1 && *(param0 + 50) != param1 && *(param0 + 51) != param1 && *(param0 + 52) != param1 && *(param0 + 53) != param1 && *(param0 + 54) != param1 && *(param0 + 55) != param1 && *(param0 + 56) != param1 && *(param0 + 57) != param1) {
                if(*(param0 + 58) != 0 && ((*(param0 + 58) == 1 && *(param0 + 59) == param1) || *(param0 + 62) == param1 || *(param0 + 0x3F) == param1 || *(param0 + 64) == param1 || *(param0 + 65) == param1 || *(param0 + 66) == param1 || *(param0 + 67) == param1 || *(param0 + 68) == param1 || *(param0 + 69) == param1 || *(param0 + 70) == param1 || *(param0 + 71) == param1 || *(param0 + 72) == param1 || *(param0 + 73) == param1 || *(param0 + 74) == param1 || *(param0 + 75) == param1 || (*(param0 + 76) != 0 && ((*(param0 + 76) == 1 && *(param0 + 77) == param1) || *(param0 + 80) == param1 || *(param0 + 81) == param1 || *(param0 + 82) == param1 || *(param0 + 83) == param1 || *(param0 + 84) == param1 || *(param0 + 85) == param1 || *(param0 + 86) == param1 || *(param0 + 87) == param1 || *(param0 + 88) == param1 || *(param0 + 89) == param1 || *(param0 + 90) == param1 || *(param0 + 91) == param1 || *(param0 + 92) == param1 || *(param0 + 93) == param1 || (*(param0 + 94) != 0 && ((*(param0 + 94) == 1 && *(param0 + 95) == param1) || *(param0 + 98) == param1 || *(param0 + 99) == param1 || *(param0 + 100) == param1 || *(param0 + 101) == param1 || *(param0 + 102) == param1 || *(param0 + 103) == param1 || *(param0 + 104) == param1 || *(param0 + 105) == param1 || *(param0 + 106) == param1 || *(param0 + 107) == param1 || *(param0 + 108) == param1 || *(param0 + 109) == param1 || *(param0 + 110) == param1 || *(param0 + 111) == param1)))))) {
                    return 1L;
                }
            loc_8036D0:
                long v2 = 0L;
                do {
                    int* ptr0 = (int*)((long)param0 + v2);
                    int v3 = *(ptr0 + 112);
                    if(*(ptr0 + 112) != 1 && v3 != 0) {
                        goto loc_8036E4;
                    }
                    else if(*(ptr0 + 112) != 1) {
                        return 0L;
                    }
                    if(*(ptr0 + 113) == param1) {
                        return 1L;
                    }
                loc_8036E4:
                    v2 += 16L;
                }
                while(v2 != 1712L);
                return 0L;
            }
        }
    }
    else if(v0 != 1 || *(param0 + 1) != param1) {
        int v4 = *(param0 + 4);
        if(*(param0 + 4) != 1 && v4 == 0) {
            goto loc_8036C0;
        }
        else if(*(param0 + 4) != 1) {
            goto loc_8035E8;
        }
        if(*(param0 + 5) != param1) {
        loc_8035E8:
            if(*(param0 + 8) == 0 || ((*(param0 + 8) != 1 || *(param0 + 9) != param1) && (*(param0 + 12) == 0 || ((*(param0 + 12) != 1 || *(param0 + 13) != param1) && (*(param0 + 16) == 0 || ((*(param0 + 16) != 1 || *(param0 + 17) != param1) && (*(param0 + 20) == 0 || ((*(param0 + 20) != 1 || *(param0 + 21) != param1) && (*(param0 + 24) == 0 || ((*(param0 + 24) != 1 || *(param0 + 25) != param1) && (*(param0 + 28) == 0 || ((*(param0 + 28) != 1 || *(param0 + 29) != param1) && (*(param0 + 32) == 0 || ((*(param0 + 32) != 1 || *(param0 + 33) != param1) && (*(param0 + 36) != 1 || *(param0 + 37) != param1))))))))))))))) {
                goto loc_8036C0;
            }
        }
    }
    return 1L;
}
