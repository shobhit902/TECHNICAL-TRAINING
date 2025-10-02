#include <stdio.h>

typedef struct {
    char model[20];
    int year;
    float price;
} Car;

int main() {
    Car c = {"Toyota", 2020, 25000};
    Car *ptr = &c;

    printf("Model: %s, Year: %d, Price: %.2f\n", ptr->model, ptr->year, ptr->price);

    ptr->price = 22000; // modify
    printf("After modification, Price: %.2f\n", ptr->price);
    return 0;
}
