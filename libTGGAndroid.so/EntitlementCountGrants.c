long EntitlementCountGrants(long* param0) {
    long result = 0L;
    while(*(int*)((char*)(result * 4L + (long)param0) + 12L) != 0) {
        ++result;
        if(result == 64L) {
            return result;
        }
    }
    return result;
}
