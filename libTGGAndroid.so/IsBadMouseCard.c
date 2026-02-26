long IsBadMouseCard(int param0) {
    if(param0 == 0x202 || param0 == 795 || param0 == 0x400) {
        return 1L;
    }
    else if(param0 <= 1282) {
        return 0L;
    }
    else if(param0 <= 3086) {
        if((param0 - 2817 <= 8 && ((1 << (param0 - 2817)) & 0x107) != 0) || param0 == 1283 || param0 == 1540) {
            return 1L;
        }
        return 0L;
    }
    if(param0 > 3845) {
        if((param0 - 0x1201 <= 60 && ((1L << (param0 - 0x1201)) & 0x1000000000000011L) != 0L) || param0 == 3846 || param0 == 4132) {
            return 1L;
        }
        return 0L;
    }
    if(param0 == 3087 || param0 == 3329) {
        return 1L;
    }
    else if(param0 <= 3331) {
        return 0L;
    }
    if(param0 == 3332 || param0 == 3586) {
        return 1L;
    }
    return 0L;
}
