int LandscapeFromRefPile(long param0, int param1, int* param2) {
    int* ptr0;
    int v0;
    long v1 = 0L;
    int result = 0;
    long v2 = param0 + 48L;
    do {
        int* ptr1 = (int*)(v2 + v1);
        int v3 = *(ptr1 - 2);
        if(*(ptr1 - 2) == 0) {
            return result;
        }
        if(*(ptr1 - 1) == param1) {
            *(int*)(result * 4L + (long)param2) = v3;
            result = v0 + 1;
            if(*(int*)(v2 + v1) == param1) {
            loc_7D96FC:
                *(int*)(result * 4L + (long)param2) = *(ptr1 - 2);
                result = v0 + 1;
                ptr0 = v2 + v1;
            }
            else {
                goto loc_7D9630;
            }
            if(*(ptr0 + 1) == param1) {
                goto loc_7D971C;
            loc_7D9630:
                ptr0 = v2 + v1;
                if(*(ptr0 + 1) == param1) {
                    goto loc_7D971C;
                }
            }
            if(*(ptr0 + 2) != param1) {
                goto loc_7D964C;
            loc_7D971C:
                *(int*)(result * 4L + (long)param2) = *(ptr1 - 2);
                result = v0 + 1;
                if(*(ptr0 + 2) != param1) {
                    goto loc_7D964C;
                }
            }
            *(int*)(result * 4L + (long)param2) = *(ptr1 - 2);
            result = v0 + 1;
            int* ptr2 = (int*)(v2 + v1);
            if(*(ptr2 + 3) == param1) {
                goto loc_7D9758;
            loc_7D964C:
                ptr2 = v2 + v1;
                if(*(ptr2 + 3) == param1) {
                    goto loc_7D9758;
                }
            }
            if(*(ptr2 + 4) != param1) {
                goto loc_7D9668;
            loc_7D9758:
                *(int*)(result * 4L + (long)param2) = *(ptr1 - 2);
                result = v0 + 1;
                if(*(ptr2 + 4) != param1) {
                    goto loc_7D9668;
                }
            }
            *(int*)(result * 4L + (long)param2) = *(ptr1 - 2);
            result = v0 + 1;
            int* ptr3 = (int*)(v2 + v1);
            if(*(ptr3 + 5) == param1) {
                goto loc_7D9794;
            loc_7D9668:
                ptr3 = v2 + v1;
                if(*(ptr3 + 5) == param1) {
                    goto loc_7D9794;
                }
            }
            if(*(ptr3 + 6) != param1) {
                goto loc_7D9684;
            loc_7D9794:
                *(int*)(result * 4L + (long)param2) = *(ptr1 - 2);
                result = v0 + 1;
                if(*(ptr3 + 6) != param1) {
                    goto loc_7D9684;
                }
            }
            *(int*)(result * 4L + (long)param2) = *(ptr1 - 2);
            result = v0 + 1;
            int* ptr4 = (int*)(v2 + v1);
            if(*(ptr4 + 7) == param1) {
                goto loc_7D97D0;
            loc_7D9684:
                ptr4 = v2 + v1;
                if(*(ptr4 + 7) == param1) {
                    goto loc_7D97D0;
                }
            }
            if(*(ptr4 + 8) != param1) {
                goto loc_7D96A0;
            loc_7D97D0:
                *(int*)(result * 4L + (long)param2) = *(ptr1 - 2);
                result = v0 + 1;
                if(*(ptr4 + 8) != param1) {
                    goto loc_7D96A0;
                }
            }
            *(int*)(result * 4L + (long)param2) = *(ptr1 - 2);
            result = v0 + 1;
            int* ptr5 = (int*)(v2 + v1);
            if(*(ptr5 + 9) == param1) {
                goto loc_7D980C;
            loc_7D96A0:
                ptr5 = v2 + v1;
                if(*(ptr5 + 9) == param1) {
                    goto loc_7D980C;
                }
            }
            if(*(ptr5 + 10) != param1) {
                goto loc_7D96BC;
            loc_7D980C:
                *(int*)(result * 4L + (long)param2) = *(ptr1 - 2);
                result = v0 + 1;
                if(*(ptr5 + 10) != param1) {
                    goto loc_7D96BC;
                }
            }
            *(int*)(result * 4L + (long)param2) = *(ptr1 - 2);
            result = v0 + 1;
            int* ptr6 = (int*)(v2 + v1);
            if(*(ptr6 + 11) == param1) {
                goto loc_7D9848;
            loc_7D96BC:
                ptr6 = v2 + v1;
                if(*(ptr6 + 11) == param1) {
                    goto loc_7D9848;
                }
            }
            if(*(ptr6 + 12) == param1) {
                goto loc_7D9864;
            loc_7D9848:
                *(int*)(result * 4L + (long)param2) = *(ptr1 - 2);
                result = v0 + 1;
                if(*(ptr6 + 12) == param1) {
                loc_7D9864:
                    *(int*)(result * 4L + (long)param2) = *(ptr1 - 2);
                    result = v0 + 1;
                }
            }
        }
        else if(*(int*)(v2 + v1) == param1) {
            goto loc_7D96FC;
        }
        else {
            goto loc_7D9630;
        }
        v1 += 60L;
    }
    while(v1 != 240L);
    return result;
}
