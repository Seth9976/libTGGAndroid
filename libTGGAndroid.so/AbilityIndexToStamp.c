int AbilityIndexToStamp(int param0) {
    if(param0 - 85 <= 17) {
        return (uint64_t)*(int*)((param0 - 85) * 4L + 4266812L);
    }
    return 0;
}
