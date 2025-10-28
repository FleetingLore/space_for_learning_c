#include <stdio.h>

const int const_1 = 120; // 住宅楼
const int const_2 = 4; // 每户
const int const_3 = 200; // 生活用水额定
const float const_4 = 2.5; // 小时变化系数
const int const_5 = 24; // 用水时间
const int const_6 = 8; // 每户设置的卫生器具当量数
const float const_7 = 2.5; // K_h
const int const_8 = 200; // q_0

// 本题用到的一个计算公式
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

// 本题用到并要求的一个格式化输出
const void
f_2_display(
    float num
) {
    printf("%.3f%%", num * 100); // [stdio.h]
}

// 输入单精度浮点数
const float
f_3_input_float() {
    float output_float;
    int _ = scanf("%f", &output_float);
    return output_float;
}

// 输入整数
const int
f_4_input_int() {
    int output_int;
    int _ = scanf("%d", &output_int);
    return output_int;
}

// 测试用例
const void
test_1() {
    // 根据题目给定的常量计算
    int total_households = const_1;        // 120户
    int persons_per_household = const_2;   // 每户4人
    int q_0 = const_8;                     // 200
    float k_h = const_7;                   // 2.5
    int n_g_per_household = const_6;       // 每户8当量
    int t = const_5;                       // 24小时
    
    // 计算总人数和总卫生器具当量数
    int total_persons = total_households * persons_per_household;  // 120 * 4 = 480人
    int total_n_g = total_households * n_g_per_household;          // 120 * 8 = 960当量
    
    float target_u_0 = f_1_(q_0, total_persons, k_h, total_n_g, t);
    f_2_display(target_u_0);
}

// 入口函数
int main() {
    test_1();
    putchar('\n');

    // 人数和用水时间可以由用户自己输入
    printf("请输入人数 m: ");
    int m = f_4_input_int();
    
    printf("请输入用水时间 T: ");
    float t = f_3_input_float();
    
    // 使用题目给定的其他常量
    int q_0 = const_8;                     // 200
    float k_h = const_7;                   // 2.5
    int total_households = const_1;        // 120户
    int n_g_per_household = const_6;       // 每户8当量
    int total_n_g = total_households * n_g_per_household;  // 120 * 8 = 960当量

    float target_u_0 = f_1_(q_0, m, k_h, total_n_g, t);
    f_2_display(target_u_0);

    putchar('\n');
    return 0;
}
