#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char title[50];
    char author[50];
    float price;
} Book;

int main() {
    Book *books = (Book*)malloc(5 * sizeof(Book));
    for(int i=0;i<5;i++) {
        printf("Enter title, author, price for book %d: ", i+1);
        scanf("%s %s %f", books[i].title, books[i].author, &books[i].price);
    }
    printf("\nBook Details:\n");
    for(int i=0;i<5;i++)
        printf("Title: %s, Author: %s, Price: %.2f\n", books[i].title, books[i].author, books[i].price);

    free(books);
    return 0;
}
