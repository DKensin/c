#include <stdio.h>
#include <stdlib.h>

#define MAX_NUM_BOOK_PER_SHELF  1100

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);
    
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);

    int curr_shelf_index = 0;
    int curr_book_index = 0;

    // alocate memory for shelf
    total_number_of_books = (int *)malloc(total_number_of_shelves * sizeof(int));   // number of shelves
    total_number_of_pages = (int **)malloc(total_number_of_shelves * MAX_NUM_BOOK_PER_SHELF * sizeof(int)); // 2D-array

    for (curr_shelf_index = 0; curr_shelf_index < total_number_of_shelves; curr_shelf_index++)
    {
        total_number_of_books[curr_shelf_index] = 0;
        total_number_of_pages[curr_shelf_index] = (int *)malloc(MAX_NUM_BOOK_PER_SHELF * sizeof(int));
        for (curr_book_index = 0; curr_book_index < MAX_NUM_BOOK_PER_SHELF; curr_book_index++)
        {
            total_number_of_pages[curr_shelf_index][curr_book_index] = 0;
        }
    }

    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1) {
            /*
             * Process the query of first type here.
             */
            int x, y;
            scanf("%d %d", &x, &y);
            total_number_of_pages[x][total_number_of_books[x]] = y;
            total_number_of_books[x]++;
        } else if (type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        } else {
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books) {
        free(total_number_of_books);
    }
    
    for (int i = 0; i < total_number_of_shelves; i++) {
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i));
        }
    }
    
    if (total_number_of_pages) {
        free(total_number_of_pages);
    }
    
    return 0;
}