long botan_ffi_supports_api(int param0) {
    if(param0 <= 0x133eee8 && param0 != 20150515 && param0 != 20170327 && param0 != 0x133c83f) {
        return 0xffffffffL;
    }
    else if(param0 > 0x133eee8 && param0 != 0x133eee9 && param0 != 20191214 && param0 != 20210220) {
        return 0xffffffffL;
    }
    return 0L;
}
