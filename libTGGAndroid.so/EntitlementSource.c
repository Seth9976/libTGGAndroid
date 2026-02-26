char* EntitlementSource(int param0) {
    char* result = "none";
    switch(param0) {
        case 0: {
            return result;
        }
        case 1: {
            return "tgg";
        }
        case 2: {
            return "goko";
        }
        case 3: {
            return "apple";
        }
        case 4: {
            return "google";
        }
        case 5: {
            return "steam";
        }
        case 99: {
            return "f2p";
        }
        default: {
            return "other";
        }
    }
}
