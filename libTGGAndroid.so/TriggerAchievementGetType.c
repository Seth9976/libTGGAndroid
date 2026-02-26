int TriggerAchievementGetType(int param0) {
    if(param0 - 5 <= 23) {
        return (uint64_t)*(int*)((param0 - 5) * 4L + 4271368L);
    }
    return 0;
}
