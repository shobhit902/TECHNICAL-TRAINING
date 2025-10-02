#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char url[100];
    struct Node* next;
} Node;

Node* top = NULL;

void push(char* url) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->url, url);
    newNode->next = top;
    top = newNode;
    printf("Visited: %s\n", url);
}

void pop() {
    if(!top) {
        printf("No history to go back!\n");
        return;
    }
    Node* temp = top;
    top = top->next;
    printf("Going back from: %s\n", temp->url);
    free(temp);
}

void showHistory() {
    Node* curr = top;
    printf("Current Stack (Top to Bottom): ");
    while(curr) {
        printf("%s ", curr->url);
        curr = curr->next;
    }
    printf("\n");
}

int main() {
    push("google.com");
    push("youtube.com");
    push("stackoverflow.com");
    showHistory();
    pop();
    showHistory();
    pop();
    pop();
    pop(); // underflow
    return 0;
}
