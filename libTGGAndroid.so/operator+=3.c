int* operator+=3(int* param0, int* param1) {
    if(*(param1 + 800) >= 1) {
        long v0 = 0L;
        do {
            int v1 = *(param0 + 800);
            int v2 = *(int*)(v0 * 4L + (long)param1);
            ++v0;
            *(param0 + 800) = v1 + 1;
            *(int*)(v1 * 4L + (long)param0) = v2;
        }
        while(*(param1 + 800) > v0);
    }
    return param0;
}
