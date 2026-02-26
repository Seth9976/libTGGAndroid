long NextPlayer(int* param0, int param1) {
    return (uint64_t)((param1 + 1) % *(param0 + 848));
}
