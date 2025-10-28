#include <stdio.h>

const int const_1 = 20; // 室内消防栓的用水量
const int const_2 = 20; // 室外消火栓的用水量
const int const_3 = 27; // 自动喷水灭火系统的用水量
const int const_4 = 2; // 消火栓系统的火灾延续时间
const int const_5 = 1; // 自喷系统的火灾延续时间

int
main() {
    printf("%.1fm^3\n", ((const_1 + const_2) * const_4 + const_3 * const_5) * 3.6);
    return 0;
}