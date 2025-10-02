#include <stdio.h>
#include <string.h>

#define MAX 5

char stack[MAX][100];
int top = -1;

void saveState(char* text) {
    if(top == MAX-1) {
        printf("Undo stack full, oldest state removed\n");
        for(int i=0;i<top;i++) strcpy(stack[i], stack[i+1]);
        top--;
    }
    strcpy(stack[++top], text);
    printf("Saved State: %s\n", text);
}

void undo(char* text) {
    if(top == -1) {
        printf("Nothing to undo\n");
        return;
    }
    strcpy(text, stack[top--]);
    printf("Undo: %s\n", text);
}

int main() {
    char doc[100] = "";

    saveState(doc);
    strcpy(doc, "Hello");
    saveState(doc);
    strcpy(doc, "Hello World");
    saveState(doc);
    strcpy(doc, "Hello World!!!");
    saveState(doc);

    undo(doc);
    undo(doc);
    undo(doc);
    undo(doc); // no more undo
    return 0;
}
