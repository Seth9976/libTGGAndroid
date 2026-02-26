// Package: UI2HitResult

long UI2HitResult::Comparator(int* param0, int* param1) {
    int v0 = *(param0 + 2);
    int v1 = *(param1 + 2);
    long result = (v1 | v0) == 0;
    if(v0 != 0 && v1 != 0) {
        result = *(param0 + 4) == *(param1 + 4);
    }
    return result;
}
