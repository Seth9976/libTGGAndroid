long FindNextAvailablePile(int* param0) {
    if(*param0 != 0) {
        if(*(param0 + 4) != 0) {
            if(*(param0 + 8) != 0) {
                if(*(param0 + 12) != 0) {
                    if(*(param0 + 16) != 0) {
                        if(*(param0 + 20) != 0) {
                            if(*(param0 + 24) != 0) {
                                if(*(param0 + 28) != 0) {
                                    if(*(param0 + 32) != 0) {
                                        return *(param0 + 36) ? 0xffffffffL: 9L;
                                    }
                                    return 8L;
                                }
                                return 7L;
                            }
                            return 6L;
                        }
                        return 5L;
                    }
                    return 4L;
                }
                return 3L;
            }
            return 2L;
        }
        return 1L;
    }
    return 0L;
}
