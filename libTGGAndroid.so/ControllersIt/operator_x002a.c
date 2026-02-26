// Package: ControllersIt

long ControllersIt::operator*(int* param0) {
    return *param0 * 0xa600L + &gControllers;
}
