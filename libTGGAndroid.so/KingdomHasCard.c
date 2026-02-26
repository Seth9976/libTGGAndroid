int KingdomHasCard(uint32_t* param0, int param1, char param2) {
    if(param1 != 2339) {
        uint32_t v0 = *param0;
        if(*param0 == 0 || (param1 != v0 && (*(param0 + 1) == 0 || (*(param0 + 1) != param1 && (*(param0 + 2) == 0 || (*(param0 + 2) != param1 && (*(param0 + 3) == 0 || (*(param0 + 3) != param1 && (*(param0 + 4) == 0 || (*(param0 + 4) != param1 && (*(param0 + 5) == 0 || (*(param0 + 5) != param1 && (*(param0 + 6) == 0 || (*(param0 + 6) != param1 && (*(param0 + 7) == 0 || (*(param0 + 7) != param1 && (*(param0 + 8) == 0 || (*(param0 + 8) != param1 && (*(param0 + 9) == 0 || *(param0 + 9) != param1))))))))))))))))))) {
            uint32_t v1 = *(param0 + 92);
            uint32_t result = *(param0 + 92) == param1;
            if(param1 != v1 && !param2) {
                if(*(param0 + 70) == param1) {
                    if(v0 == 0x707) {
                        return 1;
                    }
                    else if(v0 != 0) {
                        result = *(param0 + 1);
                        if(*(param0 + 1) == 0x707) {
                            return 1;
                        }
                        if(result != 0) {
                            result = *(param0 + 2);
                            if(*(param0 + 2) != 0) {
                                if(result == 0x707) {
                                    return 1;
                                }
                                result = *(param0 + 3);
                                if(*(param0 + 3) != 0) {
                                    if(result == 0x707) {
                                        return 1;
                                    }
                                    result = *(param0 + 4);
                                    if(*(param0 + 4) != 0) {
                                        if(result == 0x707) {
                                            return 1;
                                        }
                                        result = *(param0 + 5);
                                        if(*(param0 + 5) != 0) {
                                            if(result == 0x707) {
                                                return 1;
                                            }
                                            result = *(param0 + 6);
                                            if(*(param0 + 6) != 0) {
                                                if(result == 0x707) {
                                                    return 1;
                                                }
                                                result = *(param0 + 7);
                                                if(*(param0 + 7) != 0) {
                                                    if(result == 0x707) {
                                                        return 1;
                                                    }
                                                    result = *(param0 + 8);
                                                    if(*(param0 + 8) != 0) {
                                                        if(result == 0x707) {
                                                            return 1;
                                                        }
                                                        if(*(param0 + 9) == 0x707 || v1 == 0x707) {
                                                            return 1L;
                                                        }
                                                        return 0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if(v1 == 0x707) {
                        return 1;
                    }
                }
                result = 0;
            }
            return result;
        }
    }
    return 1;
}
