// Package: std::__ndk1

unsigned int std::__ndk1::__sort4<bool (*&)(MedalLevel const&, MedalLevel const&), MedalLevel*>(MedalLevel* param0, MedalLevel* param1, MedalLevel* param2, MedalLevel* param3, bool (*&)(MedalLevel const&, MedalLevel const&) param4) {
    MedalLevel v0;
    int result;
    int v1;
    long v2 = *(long*)param4((long)param1, (long)param0, (long)param2, (long)param3, (long)param4);
    long v3 = *(long*)param4((long)param2, (long)param1);
    if(!(v2 & 0x1L)) {
        if(v3 & 0x1L) {
            v0 = *(MedalLevel*)param1;
            *(MedalLevel*)param1 = *(MedalLevel*)param2;
            *(MedalLevel*)param2 = v0;
            long v4 = *(long*)param4((long)param1, (long)param0);
            if(v4 & 0x1L) {
                v0 = *(MedalLevel*)param0;
                *(MedalLevel*)param0 = *(MedalLevel*)param1;
                *(MedalLevel*)param1 = v0;
            loc_7C3CCC:
                result = 2;
            }
            else {
            loc_7C3CD4:
                result = 1;
            }
        }
        else {
            result = 0;
        }
    }
    else if(v3 & 0x1L) {
        result = 1;
        v0 = *(MedalLevel*)param0;
        *(MedalLevel*)param0 = *(MedalLevel*)param2;
        *(MedalLevel*)param2 = v0;
    }
    else {
        v0 = *(MedalLevel*)param0;
        *(MedalLevel*)param0 = *(MedalLevel*)param1;
        *(MedalLevel*)param1 = v0;
        long v5 = *(long*)param4((long)param2, (long)param1);
        if(!(v5 & 0x1L)) {
            goto loc_7C3CD4;
        }
        else {
            v0 = *(MedalLevel*)param1;
            *(MedalLevel*)param1 = *(MedalLevel*)param2;
            *(MedalLevel*)param2 = v0;
            goto loc_7C3CCC;
        }
    }
    long v6 = *(long*)param4((long)param3, (long)param2);
    if(v6 & 0x1L) {
        v0 = *(MedalLevel*)param2;
        *(MedalLevel*)param2 = *(MedalLevel*)param3;
        *(MedalLevel*)param3 = v0;
        long v7 = *(long*)param4((long)param2, (long)param1);
        if(!(v7 & 0x1L)) {
            return v1 + 1;
        }
        v0 = *(MedalLevel*)param1;
        *(MedalLevel*)param1 = *(MedalLevel*)param2;
        *(MedalLevel*)param2 = v0;
        long v8 = *(long*)param4((long)param1, (long)param0);
        if(v8 & 0x1L) {
            v0 = *(MedalLevel*)param0;
            *(MedalLevel*)param0 = *(MedalLevel*)param1;
            *(MedalLevel*)param1 = v0;
            return v1 + 3;
        }
        result = v1 + 2;
    }
    return result;
}
