// Package: Botan::polyn_gf2m

int* Botan::polyn_gf2m::swap(int* param0, int* param1) {
    int v0 = *param0;
    *param0 = *param1;
    *param1 = v0;
    long v1 = *(long*)(param0 + 8);
    *(long*)(param0 + 8) = *(long*)(param1 + 8);
    *(long*)(param1 + 8) = v1;
    long v2 = *(long*)(param0 + 10);
    *(long*)(param0 + 10) = *(long*)(param1 + 10);
    *(long*)(param1 + 10) = v2;
    long v3 = *(long*)(param0 + 2);
    *(long*)(param0 + 2) = *(long*)(param1 + 2);
    *(long*)(param1 + 2) = v3;
    long v4 = *(long*)(param0 + 4);
    *(long*)(param0 + 4) = *(long*)(param1 + 4);
    *(long*)(param1 + 4) = v4;
    long v5 = *(long*)(param0 + 6);
    *(long*)(param0 + 6) = *(long*)(param1 + 6);
    *(long*)(param1 + 6) = v5;
    return param0;
}
