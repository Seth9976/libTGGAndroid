long AILevelFromSyncedAchievementLevel(int param0, char* param1, int* param2) {
    int v0;
    int v0;
    if(param0 >= &gvar_10308+8398h) {
        *param1 = 1;
        if(param0 - &gvar_10308+8398h > 3999 && param0 == &gvar_10308+9338h) {
            v0 = 1;
        }
        else if(param0 - &gvar_10308+8398h > 3999 && param0 != &gvar_10308+9720h) {
            v0 = -1;
        }
        else if(param0 - &gvar_10308+8398h > 3999) {
            v0 = 2;
        }
        else if(param0 == &gvar_10308+8b68h) {
            v0 = 3;
        }
        else if(param0 != &gvar_10308+8f50h) {
            v0 = -1;
        }
        else {
            v0 = 0;
        }
        *param2 = v0;
    }
    else if(param0 != 0) {
        *param1 = 0;
        switch(param0) {
            case 2000: {
                v0 = 3;
                *param2 = v0;
                return param0;
            }
            case 3000: {
                v0 = 0;
                *param2 = v0;
                return param0;
            }
            case 4000: {
                break;
            }
            case 5000: {
                v0 = 2;
                *param2 = v0;
                return param0;
            }
            default: {
                v0 = -1;
                *param2 = v0;
                return param0;
            }
        }
        v0 = 1;
        *param2 = v0;
    }
    return param0;
}
