#include <stdio.h>

int _;

const int
f_0_(int x) {
    return 
        (x < 1) ? (x) :
        (1 <= x && x < 10) ? (2 * x - 1) : (3 * x - 11);
}

const int
f_1_input_int() {
    int output_int;
    
    printf("输入整数: "); // [stdio.h]
    _ = scanf("%i", &output_int); // [stdio.h]
    
    return output_int;
}

int
main() {
    int target_x = f_1_input_int();
    
    int target_y = f_0_(target_x);
    printf("y = %i", target_y); // [stdio.h]

    putchar('\n'); // [stdio.h]
    return 0;
}
