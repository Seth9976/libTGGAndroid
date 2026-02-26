// Package: Botan::PBKDF

long Botan::PBKDF::pbkdf_timed(long* param0, long param1, long param2, long param3, long param4, long param5, long param6, long* param7) {
    long result = *(long*)(*param0 + 32L)((long)param0);
    *param7 = result;
    return result;
}
