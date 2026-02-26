// Package: UI2StateDeclI

long* UI2StateDeclI::SetStateName(long* param0, long param1) {
    *(param0 + 2) = param1;
    return param0;
}
