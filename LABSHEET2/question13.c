#include <stdio.h>
#define SIZE 5

int buffer[SIZE];
int top = -1;

void push(int x) {
    top = (top + 1) % SIZE;
    buffer[top] = x;
    printf("Pushed: %d | Buffer: ", x);
    for(int i=0;i<SIZE;i++) printf("%d ", buffer[i]);
    printf("\n");
}

void pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    printf("Popped: %d\n", buffer[top]);
    buffer[top] = 0;
    top = (top - 1 + SIZE) % SIZE;
}

int main() {
    for(int i=1;i<=7;i++) push(i); // shows wrap-around
    for(int i=0;i<3;i++) pop();
    return 0;
}
