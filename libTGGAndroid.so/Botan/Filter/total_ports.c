// Package: Botan::Filter

long Botan::Filter::total_ports(long* param0) {
    return (*(param0 + 5) - *(param0 + 4)) >> 3L;
}
