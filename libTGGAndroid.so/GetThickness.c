long GetThickness(int param0, char param1) {
    if(param1) {
        return &gvar_143ED70;
    }
    if(param0 == 1) {
        return &gvar_143ED70;
    }
    else if(param0 != 0) {
        if(param0 - 1 < 4) {
            return &gvar_143EDA0;
        }
        if(param0 - 5 < 6) {
            return &gvar_143EDB8;
        }
        return param0 - 11 < 6 ? &gvar_143EDD0: &gvar_143EDE8;
    }
    return &gvar_143ED88;
}
