long jcv_boxshape_clip(float* param0, float* param1) {
    __int128 v0;
    float v1;
    float v2;
    float* ptr0;
    float* ptr1;
    float v3;
    float v4 = *(param1 + 10);
    float v5 = *(param0 + 6);
    float v6 = *(param0 + 7);
    float v7 = *(param0 + 8);
    __int128 v8 = (unsigned __int128)*(param0 + 9);
    if(v4 != 1.0 || *(param1 + 11) < 0.0) {
        ptr1 = param1 + 6;
        if(*(param1 + 6) == -3.4028235E38) {
            ptr1 = *(param1 + 7) != -3.4028235E38 ? ptr1: NULL;
        }
        ptr0 = param1 + 8;
        if(*(param1 + 8) != -3.4028235E38 && v4 == 1.0) {
            goto loc_821AE4;
        }
        else if(*(param1 + 8) == -3.4028235E38) {
            ptr0 = *(param1 + 9) != -3.4028235E38 ? ptr0: NULL;
            if(v4 == 1.0) {
                goto loc_821AE4;
            }
        }
        __int128 v9 = (unsigned __int128)v5;
        if(ptr1 != 0L) {
            __int128 v10 = (unsigned __int128)*ptr1;
            v9 = (unsigned __int128)v5;
            if((uint32_t)v10 > v5) {
                v9 = v10;
            }
        }
        v2 = *(param1 + 12);
        v1 = (uint32_t)v9 <= v7 ? (uint32_t)v9: v7;
        v0 = (unsigned __int128)(v2 - v4 * ((uint32_t)v9 <= v7 ? (uint32_t)v9: v7));
        v7 = v3 >= v5 ? v3: v5;
        v5 = v2 - v4 * v7;
        if((uint32_t)v8 < (uint32_t)v0) {
            v1 = (v2 - (uint32_t)v8) / v4;
            v0 = v8;
        }
        else if((uint32_t)v0 < v6) {
            v1 = (v2 - v6) / v4;
            v0 = (unsigned __int128)v6;
        }
        if((uint32_t)v8 < v5) {
            v7 = (v2 - (uint32_t)v8) / v4;
        }
        else if(v5 < v6) {
            v7 = (v2 - v6) / v4;
            v8 = (unsigned __int128)v6;
        }
        else {
            v8 = (unsigned __int128)v5;
        }
    }
    else {
        ptr1 = param1 + 8;
        if(*(param1 + 8) == -3.4028235E38) {
            ptr1 = *(param1 + 9) != -3.4028235E38 ? ptr1: NULL;
        }
        ptr0 = param1 + 6;
        if(*(param1 + 6) == -3.4028235E38) {
            ptr0 = *(param1 + 7) != -3.4028235E38 ? ptr0: NULL;
        }
    loc_821AE4:
        __int128 v11 = (unsigned __int128)v6;
        if(ptr1 != 0L) {
            __int128 v12 = (unsigned __int128)*(ptr1 + 1);
            v11 = (unsigned __int128)v6;
            if((uint32_t)v12 > v6) {
                v11 = v12;
            }
        }
        v4 = *(param1 + 11);
        v2 = *(param1 + 12);
        v0 = (uint32_t)v8 < (uint32_t)v11 ? (unsigned __int128)(uint32_t)v8: (unsigned __int128)(uint32_t)v11;
        v1 = v2 - v4 * ((uint32_t)v8 < (uint32_t)v11 ? (uint32_t)v8: (uint32_t)v11);
        if(ptr0 != 0L) {
            __int128 v13 = (unsigned __int128)*(ptr0 + 1);
            if((uint32_t)v8 > *(ptr0 + 1)) {
                v8 = v13;
            }
        }
        v8 = (uint32_t)v8 >= v6 ? (unsigned __int128)(uint32_t)v8: (unsigned __int128)v6;
        v6 = v2 - v4 * (uint32_t)v8;
        float v14 = v2 - v7;
        if(v7 < v1) {
            v0 = (unsigned __int128)(v14 / v4);
            v1 = v7;
        }
        else if(v5 > v1) {
            v0 = (unsigned __int128)((v2 - v5) / v4);
            v1 = v5;
        }
        if(v7 < v6) {
            v8 = (unsigned __int128)(v14 / v4);
        }
        else if(v5 > v6) {
            v8 = (unsigned __int128)((v2 - v5) / v4);
            v7 = v5;
        }
        else {
            v7 = v6;
        }
    }
    *(param1 + 6) = v1;
    *(param1 + 7) = (float)v0;
    *(param1 + 8) = v7;
    *(param1 + 9) = (float)v8;
    return (uint64_t)((uint32_t)v8 != (uint32_t)v0 | v7 != v1);
}
