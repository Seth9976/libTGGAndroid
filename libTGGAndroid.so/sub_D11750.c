long sub_D11750() {
    long v0;
    long v1;
    long v2;
    long v3;
    __int128 v4;
    __int128 v5;
    *(__int128*)&v0 = v4;
    *(__int128*)&v1 = v5;
    long result = 1L;
    if(!((v2 & 0x7fffffffffffffffL) == 0x7fff000000000000L ? v1 != 0L: (v2 & 0x7fffffffffffffffL) > 0x7fff000000000000L) && !((v3 & 0x7fffffffffffffffL) == 0x7fff000000000000L ? v0 != 0L: (v3 & 0x7fffffffffffffffL) > 0x7fff000000000000L)) {
        if(((v3 & 0x7fffffffffffffffL) | (v2 & 0x7fffffffffffffffL) | v0 | v1) == 0L) {
            return 0L;
        }
        if(((((v3 & 0x7fffffffffffffffL) - 0x7fff000000000000L) ^ (v3 & 0x7fffffffffffffffL)) & ((v3 & 0x7fffffffffffffffL) ^ 0x7fff000000000000L)) < 0L != (v3 & v2) < 0L) {
            char v6 = v3 == v2;
            if(!v6 ? !v6 && v3 <= v2: v0 < v1) {
                return 0xffffffffL;
            }
        }
        else if(v3 != v2 ? v3 > v2: v0 > v1) {
            return 0xffffffffL;
        }
        result = (v0 ^ v1) | (v3 ^ v2);
    }
    return result;
}
