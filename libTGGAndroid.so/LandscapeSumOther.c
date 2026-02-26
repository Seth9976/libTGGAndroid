long LandscapeSumOther(int param0, int* param1, int param2, int param3) {
    uint32_t result;
    if(param3 != 0) {
        if(param2 == 1) {
            return (uint64_t)(*(param1 + 22) + param0);
        }
        if(param2 < 2 || param2 >= 5) {
            result = *(param1 + 18) + param0;
            if(param2 == 5) {
                return result;
            }
        }
        return (uint64_t)(*(param1 + 22) + param0);
    }
    if(param2 == 1) {
        return (uint64_t)(*(param1 + 20) + param0);
    }
    if(param2 < 2 || param2 >= 5) {
        result = *(param1 + 16) + param0;
        if(param2 == 5) {
            return result;
        }
    }
    return (uint64_t)(*(param1 + 20) + param0);
}
