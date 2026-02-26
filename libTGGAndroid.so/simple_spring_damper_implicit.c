float* simple_spring_damper_implicit(float* param0, float* param1) {
    float v0;
    float v1;
    float v2;
    float v3 = *param0 - v0;
    float v4 = (float)(2.7725887 / (v2 + 1.0E-5)) * 0.5 * v1;
    float v5 = *param1 + (float)(2.7725887 / (v2 + 1.0E-5)) * 0.5 * v3;
    float v6 = (float)(1.0 / (v4 + 1.0 + v4 * (v4 * 0.48) + v4 * (v4 * (v4 * 0.235))));
    *param0 = v6 * (v3 + v5 * v1) + v0;
    *param1 = v6 * (*param1 - (float)(2.7725887 / (v2 + 1.0E-5)) * 0.5 * v5 * v1);
    return param0;
}
