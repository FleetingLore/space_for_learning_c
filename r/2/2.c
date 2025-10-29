#include <stdio.h>

int
main() {
    int a;
    int b;
    float x;
    float y;
    char c1;
    char c2;

    scanf(
        "a = %d, b = %d",
        &a,
        &b
    );
    scanf(
        "x = %f, y = %f",
        &x,
        &y
    );
    scanf(
        "%c%c",
        &c1,
        &c2
    );
>>>>>>> a744af5662c74d3f366cc10156f40ad4216b8c79

    printf(
        "a = %d, b = %d\n",
        a,
        b
    );
    printf(
        "x = %f, y = %f\n",
        x,
        y
    );
    printf(
        "c1 = %c, c2 = %c\n",
        c1,
        c2
    );

    return 0;
}