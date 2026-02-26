float* critical_spring_damper_implicit(float* param0, float* param1) {
    float v0;
    float v1;
    float v2;
    float v3;
    float v4 = (float)(2.7725887 / (v3 + 1.0E-5)) * 0.5 * v0;
    float v5 = (float)(2.7725887 / (v3 + 1.0E-5)) * v1 / ((float)(2.7725887 / (v3 + 1.0E-5)) * (float)(2.7725887 / (v3 + 1.0E-5)) * 0.25) + v2;
    float v6 = *param0 - v5;
    float v7 = *param1 + (float)(2.7725887 / (v3 + 1.0E-5)) * 0.5 * v6;
    float v8 = (float)(1.0 / (v4 + 1.0 + v4 * (v4 * 0.48) + v4 * (v4 * (v4 * 0.235))));
    *param0 = v5 + v8 * (v6 + v7 * v0);
    *param1 = v8 * (*param1 - (float)(2.7725887 / (v3 + 1.0E-5)) * 0.5 * v7 * v0);
    return param0;
}
