#include <stdio.h>

int _;

#define CALC_RANGE(lower, upper, rate) \
    if ((lower) < num && num <= (upper)) { \
        result += (num - (lower)) * (rate); \
    } else if (num > (upper)) { \
        result += ((upper) - (lower)) * (rate); \
    }

float f_0_if(int num) {
    float result = 0;
    
    CALC_RANGE(0   , 1000, 0.00)
    CALC_RANGE(1000, 2000, 0.05)
    CALC_RANGE(2000, 4000, 0.10)
    CALC_RANGE(4000, 6000, 0.15)
    if (num > 6000) { result += (num - 6000) * 0.20; }

    return result;
}

// it is really an awful matching logic for switch to implement
float f_1_switch(int num) {
    float result = 0;
    int level;
    
    if (num <= 1000) level = 1;
    else if (num <= 2000) level = 2;
    else if (num <= 4000) level = 3;
    else if (num <= 6000) level = 4;
    else level = 5;
    
    switch (level) {
        case 1:
            result = num * 0;
            break;
        case 2:
            result = 1000 * 0 + (num - 1000) * 0.05;
            break;
        case 3:
            result = 1000 * 0 + 1000 * 0.05 + (num - 2000) * 0.10;
            break;
        case 4:
            result = 1000 * 0 + 1000 * 0.05 + 2000 * 0.10 + (num - 4000) * 0.15;
            break;
        case 5:
            result = 1000 * 0 + 1000 * 0.05 + 2000 * 0.10 + 2000 * 0.15 + (num - 6000) * 0.20;
            break;
    }
    
    return result;
}

void f_2_display_result(float target, int num) {
    printf("应纳税额: %lf\n", target);
    printf("实际得到报酬: %lf\n", num - target);

    putchar('\n');
}

int main() {
    int input_num;
    printf("输入收入: ");
    _ = scanf("%d", &input_num);

    float target_1 = f_0_if(input_num);
    f_2_display_result(target_1, input_num);

    float target_2 = f_1_switch(input_num);
    f_2_display_result(target_2, input_num);

    return 0;
}
