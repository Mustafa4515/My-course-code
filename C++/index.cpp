#include <stdio.h>
int x = 10;
int main() {
    int x = 5;
    printf("%d\n", x);   // prints the value of local variable x
    printf("%d\n", ::x); // prints the value of global variable x
    return 0;
}
