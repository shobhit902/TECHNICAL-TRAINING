#include <stdio.h>
#define SIZE 10

int arr[SIZE];
int top1 = -1, top2 = SIZE;

void push1(int x) {
    if(top1 + 1 == top2) {
        printf("Stack1 Overflow\n"); return;
    }
    arr[++top1] = x;
    printf("Pushed %d to Stack1\n", x);
}

void push2(int x) {
    if(top2 - 1 == top1) {
        printf("Stack2 Overflow\n"); return;
    }
    arr[--top2] = x;
    printf("Pushed %d to Stack2\n", x);
}

void pop1() {
    if(top1 == -1) { printf("Stack1 Underflow\n"); return; }
    printf("Popped %d from Stack1\n", arr[top1--]);
}

void pop2() {
    if(top2 == SIZE) { printf("Stack2 Underflow\n"); return; }
    printf("Popped %d from Stack2\n", arr[top2++]);
}

void show() {
    printf("Stack1: ");
    for(int i=0;i<=top1;i++) printf("%d ", arr[i]);
    printf(" | Stack2: ");
    for(int i=SIZE-1;i>=top2;i--) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    push1(1); push1(2); push2(9); push2(8);
    show();
    pop1(); pop2();
    show();
    return 0;
}
 