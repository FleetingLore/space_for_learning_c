// 题目 2

// 本期贷款权重
#define CURRENT_LOAN_WEIGHT 0.6

/**
 * 例某项目建设期为 2 年，第一年贷款为 3000 万元，
 * 第二年贷款为 2000 万元，贷款年内均衡发放，年利率为
 * 8%，建筑期内只记息不付息，请计算建设期内的利息。
 */
int main() {
    // 单位: 万元
    const float const_1 = 3000.0; // 第一年贷款
    const float const_2 = 2000.0; // 第二年贷款

    // 百分比
    const float const_3 = 0.08; // 年利率

    /**
     * 建设期利息 = (第一年贷款 × 本期贷款权重 + 第二年贷款 × 本期贷款权重) × 年利率
     */

    /* 建设期利息 */
    const float target_1 = (
        const_1 * CURRENT_LOAN_WEIGHT
         + const_2 * CURRENT_LOAN_WEIGHT
    ) * const_3;
    printf("建设期利息: %.2f 万元\n", target_1);

    /* 返回 */
    return 0;
}
