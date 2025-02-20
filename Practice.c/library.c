#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 50
#define MAX_NAME_LENGTH 100

struct Book {
    char title[MAX_NAME_LENGTH];
    char author[MAX_NAME_LENGTH];
    int id;
    int quantity;
};

int num_books = 0;
struct Book books[MAX_BOOKS];

void add_book() {
    struct Book new_book;
    printf("Enter title: ");
    scanf("%s", new_book.title);
    printf("Enter author: ");
    scanf("%s", new_book.author);
    printf("Enter ID: ");
    scanf("%d", &new_book.id);
    printf("Enter quantity: ");
    scanf("%d", &new_book.quantity);
    if (num_books < MAX_BOOKS) {
        books[num_books++] = new_book;
        printf("Book added successfully.\n");
    } else {
        printf("Maximum number of books reached.\n");
    }
}

void search_book() {
    char search_title[MAX_NAME_LENGTH];
    printf("Enter title to search: ");
    scanf("%s", search_title);
    for (int i = 0; i < num_books; i++) {
        if (strcmp(books[i].title, search_title) == 0) {
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("ID: %d\n", books[i].id);
            printf("Quantity: %d\n", books[i].quantity);
            return;
        }
    }
    printf("Book not found.\n");
}

void display_books() {
    printf("Title\tAuthor\tID\tQuantity\n");
    for (int i = 0; i < num_books; i++) {
        printf("%s\t%s\t%d\t%d\n", books[i].title, books[i].author, books[i].id, books[i].quantity);
    }
}

void save_books() {
    FILE* fp = fopen("books.txt", "w");
    if (fp == NULL) {
        printf("Failed to save books.\n");
        return;
    }
    fprintf(fp, "%d\n", num_books);
    for (int i = 0; i < num_books; i++) {
        fprintf(fp, "%s\n", books[i].title);
        fprintf(fp, "%s\n", books[i].author);
        fprintf(fp, "%d\n", books[i].id);
        fprintf(fp, "%d\n", books[i].quantity);
    }
    fclose(fp);
    printf("Books saved successfully.\n");
}

void load_books() {
    FILE* fp = fopen("books.txt", "r");
    if (fp == NULL) {
        printf("Failed to load books.\n");
        return;
    }
    fscanf(fp, "%d", &num_books);
    for (int i = 0; i < num_books; i++) {
        fscanf(fp, "%s", books[i].title);
        fscanf(fp, "%s", books[i].author);
        fscanf(fp, "%d", &books[i].id);
        fscanf(fp, "%d", &books[i].quantity);
    }
    fclose(fp);
    printf("Books loaded successfully.\n");
}

int main() {
    int choice;
    load_books();
    do {
        printf("\nLibrary Management System\n");
        printf("1. Add book\n");
        printf("2. Search book\n");
        printf("3. Display all books\n");
        printf("4. Save books\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
                switch (choice) {
            case 1:
                add_book();
                break;
            case 2:
                search_book();
                break;
            case 3:
                display_books();
                break;
            case 4:
                save_books();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    } while (choice != 5);
    save_books();
    return 0;
}

       
