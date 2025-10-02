#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int addr) {
    if(top == MAX-1) {
        printf("Stack Overflow! Cannot push %d\n", addr);
        return;
    }
    stack[++top] = addr;
    printf("Pushed: %d | Stack: ", addr);
    for(int i=0;i<=top;i++) printf("%d ", stack[i]);
    printf("\n");
}

void pop() {
    if(top == -1) {
        printf("Stack Underflow!\n");
        return;
    }
    printf("Popped: %d | ", stack[top--]);
    printf("Stack: ");
    for(int i=0;i<=top;i++) printf("%d ", stack[i]);
    printf("\n");
}

int main() {
    push(100); // Function1 return address
    push(200); // Function2 return address
    push(300); // Function3 return address
    pop();
    push(400);
    pop();
    pop();
    pop(); // underflow
    return 0;
}
