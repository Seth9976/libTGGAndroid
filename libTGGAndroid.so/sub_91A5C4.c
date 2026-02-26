// Stale decompilation - Refresh this view to re-decompile this code
void sub_91A5C4(long param0, long param1) {
    char v0;
    if(param0 == 32L) {
        return;
    }
    long* ptr0 = (long*)__cxa_allocate_exception(32L, param1);
    std::__ndk1::to_string5(param0);
    __int128* ptr1 = (__int128*)std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert3((long)&v0, 0L, "Invalid size ");
    __int128 v1 = *ptr1;
    long v2 = *(long*)(ptr1 + 1);
    __int128 v3 = v1;
    *(long*)((char*)ptr1 + 8L) = 0L;
    *(long*)(ptr1 + 1) = 0L;
    *(long*)ptr1 = 0L;
    __int128* ptr2 = (__int128*)std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append4((long)&v3, " for Curve25519 ");
    __int128 v4 = *ptr2;
    long v5 = *(long*)(ptr2 + 1);
    __int128 v6 = v4;
    *(long*)((char*)ptr2 + 8L) = 0L;
    *(long*)(ptr2 + 1) = 0L;
    *(long*)ptr2 = 0L;
    __int128* ptr3 = (__int128*)std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append4((long)&v6, param1);
    __int128 v7 = *ptr3;
    long v8 = *(long*)(ptr3 + 1);
    __int128 v9 = v7;
    *(long*)((char*)ptr3 + 8L) = 0L;
    *(long*)(ptr3 + 1) = 0L;
    *(long*)ptr3 = 0L;
    *ptr0 = &vftable_Botan::Exception;
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string((long)(ptr0 + 1), (long)&v9);
    *ptr0 = &vftable_Botan::Decoding_Error;
    /*NO_RETURN*/ __cxa_throw((long)ptr0, &typeinfo for Botan::Decoding_Error, &Botan::Exception::~Exception);
}
