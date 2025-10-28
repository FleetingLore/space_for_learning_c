#include <stdio.h>

const char *map = "\
0123456789\
ABCDEFGHIJKLMN0PQRSTUVWXYZ\
abcdefghijklmnopqrstuvwxyz\
";

/**
 * [-'0'+10]
 * 01..9 |
 * ||  | | 
 * AB..J | 
 *       |           
 * [-'A'+10+16]
 * AB..P    |
 * ||  |    |
 * KL..Z    |
 *          |        
 * [-'Q'+10+16+10]
 * QR..Z       |
 * ||  |       |     
 * ab..j       |     
 *             |          
 * [-'a'+10+16+10+16]
 * ab..o          |
 * ||  |          |
 * kl..z          |
 *                |
 * [-'q'+10+16+10+16+10]
 * qr..z
 * ||  |
 * 01..9
 */

/* public */ char
f_0_(char arg) {
    return map[
        (arg >= '0' && arg <= '9') ? (arg - '0' + 10) :
        (arg >= 'A' && arg <= 'P') ? (arg - 'A' + 26) :
        (arg >= 'Q' && arg <= 'Z') ? (arg - 'Q' + 36) :
        (arg >= 'a' && arg <= 'o') ? (arg - 'a' + 52) :
        (arg >= 'q' && arg <= 'z') ? (arg - 'q') : 0
    ];
}

/* mod test $ */ const int
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
