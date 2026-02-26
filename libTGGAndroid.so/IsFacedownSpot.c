long IsFacedownSpot(int param0, int param1, int param2, int param3) {
    if(param0 == 1005) {
        return 1L;
    }
    else if(param0 <= 1118) {
        return 0L;
    }
    if(param0 == 0x474) {
        if(param3 <= 3092 && param3 != 1025 && param3 != 2824) {
            return 0L;
        }
        else if(param3 > 3596) {
            if(param3 - 0x1100 >= 2 && param3 != 4866 && param3 != 3597) {
                return 0L;
            }
        }
        else if(param3 > 3092 && param3 != 3093 && param3 != 3350) {
            return 0L;
        }
    }
    else if(param0 != 1119) {
        return 0L;
    }
    return param1 != param2;
}
