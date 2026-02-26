// Package: Botan::DataSource

long Botan::DataSource::peek_byte(long* param0) {
    jump *(long*)(*param0 + 16L);
}
