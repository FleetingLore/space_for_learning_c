#include <stdio.h>

const char *map_h = "\
ABCDEFGHIJKLMN0PQRST\
UVWXYZ\
";
const char *map_l = "\
abcdefghijklmnopqrst\
uvwxyz\
";

/** protocol for l-case also.
 * [-'A'+6]
 * AB..T |
 * ||  | |
 * GH..Z |
 *       |
 * [-'U']_
 * UV..Z
 * ||  |
 * AB..F
 */

/* public */ char
f_0_(char arg) {
    return (arg >= 'A' && arg <= 'Z') ?
	map_h[
        (arg <= 'T') ? 
		(arg - 'A' + 6) : 
		(arg - 'T')
	] :
	map_l[
        (arg <= 't') ?
		(arg - 'a' + 6) :
		(arg - 't')
	];
}

/* mod test $ */ const int
test() {
    char input_char;
    int _ = scanf("%c", &input_char); // [stdio.h]
    char output_char = f_0_(input_char);
    printf("%c\n", output_char); // [stdio.h]
    return !!output_char;
}

int
main() {
	if (/* let */ test()) {
        return 0;
	} return 1;
}
