#include <stdio.h>

int main() {

    // (1) Warm-Up: Pointer Arithmetic
    int x = 9;
    int arr[3] = {8, 7, 6};
    char arr_char[3] = {'c', 'b', 'a'};

    printf("Value   of x: %d\n", x);
    printf("Address of x: %p\n\n", &x);

    printf("Address of arr   : %p\n", arr);
    printf("Address of &arr  : %p\n", &arr);
    printf("Address of arr[0]: %p\n", &arr[0]);
    printf("Address of arr[1]: %p\n", &arr[1]);
    printf("Address of arr[2]: %p\n\n", &arr[2]);

    printf("Address of arr_char   : %p\n", arr_char);
    printf("Address of arr_char[0]: %p\n", &arr_char[0]);
    printf("Address of arr_char[1]: %p\n", &arr_char[1]);
    printf("Address of arr_char[2]: %p\n\n", &arr_char[2]);

    printf("Address of arr  + 1    : %p\n",  arr + 1); // pointer arithmetic. It jumps the size of an integer, which is 4 bytes.
    printf("Address of &arr + 1    : %p\n", &arr + 1); // Note this line. It jumps the size of a register, which is 8 bytes.
    printf("Address of arr_char + 1: %p\n", arr_char + 1);

    printf("Address of *(arr + 1): %d\n", *(arr + 1));
    printf("Address of *(arr_char + 1): %d\n", *(arr_char + 1));

    // ----------------
    printf("----------------\n\n");


    // (2) A tricky question
    int *d, *j, *f;
    char *e, *k, *g;

    d = (int*)0x61F900;
    e = (char*)0x61F900;

    f = (int*)0x61F800;
    g = (char*)0x61F800;
    *f = 10;

    d = d + 1;
    e = e + 1;

    // Q: What these outputs would be?
    printf("d = 0x%x \n", d);
    printf("e = 0x%x \n", e);
    printf("Address of d = 0x%p \n", &d);
    printf("Address of e = 0x%p \n", &e);
    printf("Address of d = 0x%x \n", &d);
    printf("Address of e = 0x%x \n\n", &e);

    printf("Value   of *f: %d\n", *f);
    printf("Address of *f: %p\n\n", f);
    *g = 65;
    printf("Value   of *g: %c\n", *g);
    printf("Address of *g: %p\n\n", g);
    printf("Value   of *f: %d\n", *f);
    printf("Address of *f: %p\n\n", f);

    return 0;
}
