// 题目 1

#include <stdio.h>

/*
 * 某建设项目工程费用 5000 万元，工程建设其他费用 1000 万元，基本预备率 8%，年均投资加个上
 * 涨率 5%，建设期两年，计划每年完成投资 50%，则该项目建设期第二年价差预备费应为多少万元？
*/
int main() {
    // 单位: 万元
    const int const_1 = 5000; // 建设项目工程费用
    const int const_2 = 1000; // 工程建设其他费用
    const int const_3 = 5000; // 计划完成每年投资

    // 单位: 年
    const int const_4 = 2; // 建设期

    // 百分比
    const float const_5 = 0.08; // 基本预备率
    const float const_6 = 0.05; // 年均投资加个上涨率

    /*
     * 总费用 = (项目工程费用 + 建设其他费用) \times (1 + 基本预备费率)
     * 第二年差预备费 = 总费用 \times 计划每年完成投资 \times (1 + 年均投资价格上涨率 5\%)
    */

    /* 总费用 */
    const float target_1 = (const_1 + const_2) * (1 + const_5);

    /* 第二年差预备费 */
    const float target_2 = target_1 * 0.5 * (1 + const_6);
    printf("第二年价差预备费: %.2f 万元\n", target_2);

    /* 返回 */
    return 0;
}
