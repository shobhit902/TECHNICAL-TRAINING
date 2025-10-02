#include <stdio.h>

void factorial(int n, int *res) {
    if(n==0 || n==1) {*res=1; return;}
    int temp;
    factorial(n-1, &temp);
    *res = n*temp;
}

int main() {
    int n = 5, res;
    factorial(n, &res);
    printf("Factorial of %d is %d\n", n, res);
    return 0;
}
