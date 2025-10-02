#include <stdio.h>

int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a,int b){return a*b;}

int main() {
    int choice, x=5, y=3;
    int (*op)(int,int) = NULL;

    printf("Choose operation: 1.Add 2.Sub 3.Mul: ");
    scanf("%d",&choice);

    if(choice==1) op = add;
    else if(choice==2) op = sub;
    else if(choice==3) op = mul;

    if(op) printf("Result: %d\n", op(x,y));
    else printf("Invalid choice\n");

    return 0;
}
