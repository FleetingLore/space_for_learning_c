#include <stdio.h>

int main() {
    int a, b;
    a = 123;
    b = 456;
    
    int sum;
    sum = a + b;
    printf("sum is %d\n", sum);
    
    return 0;
}

/* 之前的有错的程序
```c
#include <stdio.h>

int main() {
    int a, b;
    a = 123;
    b = 456;
    
    int sum
    sum = a + b
    printf("sum is %d\n", sum);
    
    return 0;
}
    
```
*/