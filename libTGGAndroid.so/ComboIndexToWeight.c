long ComboIndexToWeight(int param0) {
    if(param0 < 10) {
        return 50L;
    }
    if(param0 < 20) {
        return 25L;
    }
    if(param0 < 30) {
        return 13L;
    }
    return param0 >= 40 ? 5L: 7L;
}
