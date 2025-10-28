// 题目 1

#include <stdio.h>

int main() {
    // 单位: 万元
    const float const_1 = 5000; // 建设项目工程费用
    const float const_2 = 1000; // 工程建设其他费用
    const float const_3 = 5000; // 计划完成每年投资

    // 百分比
    const float const_4 = 0.08; // 基本预备率
    const float const_5 = 0.05; // 年均投资价格上涨率

    // 单位: 年
    const float const_6 = 2; // 建设期

    /**
     * 总费用 = (建设项目工程费用 + 建设其他费用) \times
     *  (1 + 基本预备费率)
     */
    const float target_1 = (const_1 + const_2) * (1 + const_4);

    /**
     * 第二年差预备费 = 总费用 \times 计划每年完成投资
     * \times (1 + 年均投资价格上涨率 5\%)
     */
    const flaot target_2 = target_1 * const_3 * (1 + const_5);
    printf("%f", target_2);

    // 返回
    return 0;
}
