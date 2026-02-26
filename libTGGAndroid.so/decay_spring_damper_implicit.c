float* decay_spring_damper_implicit(float* param0, float* param1) {
    float v0;
    float v1;
    float v2 = *param0;
    float v3 = (float)(2.7725887 / (v1 + 1.0E-5)) * 0.5 * v0;
    float v4 = *param1 + (float)(2.7725887 / (v1 + 1.0E-5)) * 0.5 * v2;
    *param0 = (float)(1.0 / (v3 + 1.0 + v3 * (v3 * 0.48) + v3 * (v3 * (v3 * 0.235)))) * (v2 + v4 * v0);
    *param1 = (float)(1.0 / (v3 + 1.0 + v3 * (v3 * 0.48) + v3 * (v3 * (v3 * 0.235)))) * (*param1 - (float)(2.7725887 / (v1 + 1.0E-5)) * 0.5 * v4 * v0);
    return param0;
}
