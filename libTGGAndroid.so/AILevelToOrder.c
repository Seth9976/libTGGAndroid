int AILevelToOrder(int param0) {
    if(param0 == 3) {
        return 1;
    }
    else if(param0 != -1) {
        return (uint64_t)(param0 + 2);
    }
    return 0;
}
