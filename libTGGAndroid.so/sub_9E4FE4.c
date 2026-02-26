// Stale decompilation - Refresh this view to re-decompile this code
long sub_9E4FE4(long param0) {
    long v0 = *(long*)param0;
    if(v0 != 0L) {
        uint64_t* ptr0 = *(uint64_t*)(param0 + 8L);
        while(v0 != ptr0) {
            long* ptr1 = *(ptr0 - 5);
            if(ptr1 != 0L) {
                long* ptr2 = *(ptr0 - 3);
                *(ptr0 - 4) = ptr1;
                Botan::deallocate_memory((long)ptr1, (long)(long*)((long)(long*)((long)ptr2 - (long)ptr1) >> 2L), 4L);
            }
            long* ptr3 = *(ptr0 - 6);
            ptr0 -= 7;
            if(ptr3 != 0L) {
                --*(ptr3 + 1);
                if(*(ptr3 + 1) == -1L) {
                    *(long*)(*ptr3 + 16L)((long)ptr3);
                    std::__ndk1::__shared_weak_count::__release_weak((long)ptr3);
                }
            }
        }
        *(long*)(param0 + 8L) = v0;
        param0 = operator delete();
    }
    return param0;
}
