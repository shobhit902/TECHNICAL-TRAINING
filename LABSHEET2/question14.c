#include <stdio.h>
#include <stdlib.h>

typedef struct Task {
    char name[20];
    int priority;
    struct Task* next;
} Task;

Task* top = NULL;

void push(char* name, int priority) {
    Task* newTask = (Task*)malloc(sizeof(Task));
    strcpy(newTask->name, name);
    newTask->priority = priority;
    newTask->next = top;
    top = newTask;
    printf("Added Task: %s (Priority %d)\n", name, priority);
}

void pop() {
    if(!top) {
        printf("No tasks left!\n");
        return;
    }
    Task *curr = top, *prev = NULL, *highPrev = NULL;
    Task* high = top;
    while(curr) {
        if(curr->priority > high->priority) {
            high = curr;
            highPrev = prev;
        }
        prev = curr;
        curr = curr->next;
    }
    if(highPrev) highPrev->next = high->next;
    else top = high->next;
    printf("Executing Task: %s (Priority %d)\n", high->name, high->priority);
    free(high);
}

void showTasks() {
    Task* curr = top;
    printf("Current Tasks: ");
    while(curr) {
        printf("%s(%d) ", curr->name, curr->priority);
        curr = curr->next;
    }
    printf("\n");
}

int main() {
    push("Task1", 2);
    push("Task2", 5);
    push("Task3", 3);
    showTasks();
    pop();
    pop();
    pop();
    pop(); // empty
    return 0;
}
