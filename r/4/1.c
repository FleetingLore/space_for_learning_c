#include <stdio.h>
#include <stdlib.h>

int _;

const int THE_ZERO = 0;
const int THE_FIRST = 1;

int * global_unsafe_mut_stack = NULL;
int global_unsafe_mut_stack_size = 0;
int global_unsafe_mut_top = -1;

const /* fn */ void
f_0_push(int value) {
    if (global_unsafe_mut_top + 1 >= global_unsafe_mut_stack_size) {
        // add $10$ spaces each time.
        int _add_stack_size = global_unsafe_mut_stack_size == 0 ? 10 : global_unsafe_mut_stack_size * 2;
        global_unsafe_mut_stack = (int*)realloc(global_unsafe_mut_stack, _add_stack_size * sizeof(int)); // < [stdlib.h]
        global_unsafe_mut_stack_size = _add_stack_size;
    }

    global_unsafe_mut_stack[++global_unsafe_mut_top] = value;
}

const /* fn */ int
f_1_pop() {
    if (global_unsafe_mut_top >= 0) {
        return global_unsafe_mut_stack[global_unsafe_mut_top--];
    }
    return -1;
}

const /* fn */ int
f_2_is_empty() {
    return global_unsafe_mut_top == -1;
}

const /* fn */ int
f_3_f(int n) {
    if (n == 0) { return THE_ZERO; }
    if (n == 1) { return THE_FIRST; } 
    
    f_0_push(n);
    int _result = 0;
    
    while (!f_2_is_empty()) {
        int _current = f_1_pop();
        
        if (_current == 0) {
            _result += THE_ZERO;
        } else if (_current == 1) {
            _result += THE_FIRST;
        } else {
            f_0_push(_current - 2);
            f_0_push(_current - 1);
        }
    }
    
    return _result;
}

const /* fn */ void
f_4_display(int n, int num) {
    printf("[%d] | %d\n", n, num); // < [stdio.h]
}

const /* fn */ int
f_5_input_int() {
    int _mut_once_n;

    printf("input int n: "); // < [stdio.h]
    _ = scanf("%d", &_mut_once_n); // < [stdio.h]
    return _mut_once_n;
}

/* #[entry] */
/* fn */ int
main() {
    int _n = f_5_input_int();

    for (int _i = 0; _i <= _n; _i++) {
        int _result = f_3_f(_i);
        f_4_display(_i, _result);
    }
    
    free(global_unsafe_mut_stack); // [drop]
    return 0;
}
