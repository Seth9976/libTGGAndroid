long TokenGetCharacteristics(int param0, int* param1) {
    if(param0 > 0xaff) {
        switch((uint64_t)(param0 - 0xb00)) {
            case 3: {
                *param1 = 13;
                return 1L;
            }
            case 4: {
                *param1 = 4;
                return 1L;
            }
            case 5: {
                *param1 = 17;
                return 1L;
            }
            case 1: 
            case 2: 
            case 6: 
            case 7: 
            case 8: 
            case 9: {
                *param1 = 16;
                return 1L;
            }
            case 0: 
            case 10: {
                break;
            }
            default: {
                if(param0 != 0xc00) {
                    *param1 = 16;
                    return 1L;
                }
                *(long*)param1 = 0x160000000fL;
                return 2L;
            }
        }
        *param1 = 9;
        return 1L;
    }
    if(param0 != 0x400) {
        *param1 = 16;
        return 1L;
    }
    *param1 = 10;
    return 1L;
}
