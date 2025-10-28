#include <stdio.h>

const int const_1 = 120; // 住宅楼
const int const_2 = 4; // 每户
const int const_3 = 200; // 生活用水额定
const float const_4 = 2.5; // 小时变化系数
const int const_5 = 24; // 用水时间
const int const_6 = 8; // 每户设置的卫生器具当量数
const float const_7 = 2.5; // K_h
const int const_8 = 200; // q_0

const float
f_1_(
    int a_q_0_,
    int a_m_,
    float a_k_h_,
    int a_n_g_,
    int a_t_
) {
    return 
        (a_q_0_ * a_m_ * a_k_h_) 
        / (0.2 * a_n_g_ * a_t_ * 3600);
}

const void
f_2_display(
    float num
) {
    printf("%.3f%%", num * 100); // [stdio.h]
}

const float
f_3_input_float() {
    float output_float;
    int _ = scanf("%f", &output_float);
    return output_float;
}

const int
f_4_input_int() {
    int output_int;
    int _ = scanf("%d", output_int);
    return output_int;
}

const void
test_1() {
    float target_u_0 = 0;
    f_2_display(target_u_0);
}

int main() {
    test_1();

    // 人数和用水时间可以由用户自己输入
    int m = f_4_input_int();
    float t = f_3_input_float();


    return 0;
}