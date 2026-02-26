// Stale decompilation - Refresh this view to re-decompile this code
long sub_B376A8(long param0, uint64_t* param1) {
    long* ptr0;
    long result = *(long*)(param1 + 4);
    *param1 = (long*)&vftable_Botan::X509_DN;
    if(result != 0L) {
        *(long*)(param1 + 5) = result;
        operator delete(result);
    }
    long* ptr1 = *(param1 + 1);
    if(ptr1 != 0L) {
        long* ptr2 = *(param1 + 2);
        if(ptr1 != ptr2) {
            do {
                long v0 = (uint64_t)*(char*)(ptr2 - 4);
                *(ptr2 - 8) = &vftable_Botan::ASN1_String;
                if(v0 & 0x1L) {
                    operator delete(*(ptr2 - 2));
                }
                long v1 = *(ptr2 - 7);
                if(v1 != 0L) {
                    *(ptr2 - 6) = v1;
                    operator delete(v1);
                }
                long v2 = *(ptr2 - 11);
                ptr0 = ptr2 - 12;
                *(ptr2 - 12) = &vftable_Botan::OID;
                if(v2 != 0L) {
                    *(ptr2 - 10) = v2;
                    operator delete(v2);
                }
                ptr2 = ptr0;
            }
            while(ptr1 != ptr0);
        }
        *(param1 + 2) = ptr1;
        result = operator delete();
    }
    return result;
}
