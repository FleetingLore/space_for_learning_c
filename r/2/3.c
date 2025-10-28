#include <stdio.h>

const char *map = "\
0123456789\
ABCDEFGHIJKLMN0PQRSTUVWXYZ\
abcdefghijklmnopqrstuvwxyz\
";

/**
 * [arg - '0' + 10]
 * 0123456789   |
 * ||||||||||   |
 * ABCDEFGHIJ   |
 *              |
 * [arg - 'A' + 10 + 10]
 * ABCDEFGHIJKLMN0P
 * ||||||||||||||||
 * KLMN0PQRSTUVWXYZ
 * 
 * QRSTUVWXYZ  abcdefghijklmno  qrstuvwxyz
 * ||||||||||  |||||||||||||||  ||||||||||
 * abcdefghij  klmnoqrstuvwxyz  0123456789
 * 
 * 
 * 
 * 
 * 
 */

/* public */ char
f_0_(char arg) {
    return map[(arg >= '0' && arg <= '9') ? (arg - '0' + 10) :
               (arg >= 'A' && arg <= 'Z') ? (arg - 'A' + 10 + 10) :
               (arg >= 'a' && arg <= 'z') ? (arg - 'a' + 10 + 10 + 26) :
               0
    ];
}

/* config modle test */ 
const int
test() {
    char input_char;
    int _ = scanf("%c", &input_char); // [stdio.h]
    char output_char = f_0_(input_char);
    printf("%c\n", output_char); // [stdio.h]
    return 0;
}

int
main() {
    return test();
}
