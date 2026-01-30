// Preprocessor directives
#include <stdio.h>
#include <string.h>
#define MAX 100

// Structure Prototypes
struct Book
{
    int id;
    char title[100];
    char author[100];
    int quantity;
};

struct Issue_Book
{
    int id;
    char borrower_name[100];
    char title[100];
};

/* Function Prototypes */
void loadFromFile(struct Book *book, int *count);
void saveToFile(struct Book *book, int *count);
void addBook(struct Book *book, int *count);
void deleteBook(struct Book *book, int *count);
void displayBooks(struct Book *book, int *count);
void searchBook(struct Book *book, int *count);
void updateBook(struct Book *book, int *count);

void issueBook(struct Book *book, int *count, struct Issue_Book *issue, int *icount);
void loadIssueBook(struct Issue_Book *issue, int *icount);
void displayIssueBooks(struct Issue_Book *issue, int *icount);

int idExists(struct Book *book, int count, int id);

int main()
{
    // Arrays of function with limit max (current value 100)
    struct Book books[MAX];
    struct Issue_Book issue[MAX];
    // books counter for total books and issued books
    int book_count = 0;
    int issue_count = 0;
    int choice;
    // load previous existing data from files
    loadFromFile(books, &book_count);
    loadIssueBook(issue, &issue_count);

    // repeating loop untile the user exits the program with 0
    do
    {
        // user choice input selection
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Delete Book\n");
        printf("3. Display Books\n");
        printf("4. Search Book\n");
        printf("5. Update Book\n");
        printf("6. Issue Book\n");
        printf("7. Display Issued Books\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // performing tasks according to the user choice through swith case
        switch (choice)
        {
        case 1:
            addBook(books, &book_count);
            break;
        case 2:
            deleteBook(books, &book_count);
            break;
        case 3:
            displayBooks(books, &book_count);
            break;
        case 4:
            searchBook(books, &book_count);
            break;
        case 5:
            updateBook(books, &book_count);
            break;
        case 6:
            issueBook(books, &book_count, issue, &issue_count);
            break;
        case 7:
            displayIssueBooks(issue, &issue_count);
            break;
        case 0:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice.\n");
        }
    } while (choice != 0);

    return 0;
}

/* ---------------- BOOK FUNCTIONS ---------------- */

// Load previous existing data from books file
void loadFromFile(struct Book *book, int *count)
{
    FILE *fp = fopen("books.txt", "r");
    if (!fp)
        return;
    // This while loop keeps reading each line from books.txt, splits it using '@' as a separator, stores the ID, title, author, and quantity into the book array, and stops when the file ends.
    // %d for id ,  @ for match, %99[^@] reads till @ or 99 characters
    while (fscanf(fp, "%d@%99[^@]@%99[^@]@%d\n",
                  &book[*count].id,
                  book[*count].title,
                  book[*count].author,
                  &book[*count].quantity) != EOF)
    {
        (*count)++;
        if (*count >= MAX)
            break;
    }
    fclose(fp);
}

// after doing CRUD Operations or using any functionality it saves the manipulated data to the file
void saveToFile(struct Book *book, int *count)
{
    FILE *fp = fopen("books.txt", "w");
    for (int i = 0; i < *count; i++)
    {
        fprintf(fp, "%d@%s@%s@%d\n",
                book[i].id,
                book[i].title,
                book[i].author,
                book[i].quantity);
    }
    fclose(fp);
}

// checks and prevents the duplication of the book id
int idExists(struct Book *book, int count, int id)
{
    for (int i = 0; i < count; i++)
        if (book[i].id == id)
            return 1;
    return 0;
}

// this adds new book entry to the file
void addBook(struct Book *book, int *count)
{
    int index;
    printf("Enter Book ID: ");
    scanf("%d", &book[*count].id);

    // checks previous existence of id to prevent duplication
    if (idExists(book, *count, book[*count].id))
    {
        printf("Error: Book ID already exists.\n");
        return;
    }
    // removes the newline character from input buffer
    getchar();
    printf("Enter Book Title: ");
    fgets(book[*count].title, 100, stdin);
    // strcspn gives you the length of string until the character is found e.g '\n'
    // and the character '\n' at that index it replaced by '\0'
    // inputs from fgets comes with an additional character '\n'
    book[*count].title[strcspn(book[*count].title, "\n")] = '\0';

    printf("Enter Author Name: ");
    fgets(book[*count].author, 100, stdin);
    book[*count].author[strcspn(book[*count].author, "\n")] = '\0';

    printf("Enter Quantity: ");
    scanf("%d", &book[*count].quantity);

    (*count)++;
    saveToFile(book, count);
    printf("Book added successfully.\n");
}

// this deletes an individual book using id
void deleteBook(struct Book *book, int *count)
{
    int id;
    printf("Enter Book ID to delete: ");
    scanf("%d", &id);

    // it removes the book structure at that index and stores +1 structure at -1 index
    for (int i = 0; i < *count; i++)
    {
        if (book[i].id == id)
        {
            for (int j = i; j < *count - 1; j++)
                book[j] = book[j + 1];
            (*count)--;
            saveToFile(book, count);
            printf("Book deleted successfully.\n");
            return;
        }
    }
    printf("Book not found.\n");
}

// this function will displays all the book in the file
void displayBooks(struct Book *book, int *count)
{
    if (*count == 0)
    {
        printf("No books available.\n");
        return;
    }

    for (int i = 0; i < *count; i++)
    {
        printf("\nID: %d\nTitle: %s\nAuthor: %s\nQuantity: %d\n",
               book[i].id,
               book[i].title,
               book[i].author,
               book[i].quantity);
    }
}

// this searches a specific book with id thorugh the whole arrays of structure
void searchBook(struct Book *book, int *count)
{
    int id;
    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < *count; i++)
    {
        if (book[i].id == id)
        {
            printf("Found: %s by %s\n",
                   book[i].title,
                   book[i].author);
            return;
        }
    }
    printf("Book not found.\n");
}

// this will update the details of the book
void updateBook(struct Book *book, int *count)
{
    int id;
    printf("Enter Book ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < *count; i++)
    {
        if (book[i].id == id)
        {
            getchar();
            printf("Enter New Title: ");
            fgets(book[i].title, 100, stdin);
            book[i].title[strcspn(book[i].title, "\n")] = '\0';

            printf("Enter New Author: ");
            fgets(book[i].author, 100, stdin);
            book[i].author[strcspn(book[i].author, "\n")] = '\0';

            printf("Enter New Quantity: ");
            scanf("%d", &book[i].quantity);

            saveToFile(book, count);
            printf("Book updated successfully.\n");
            return;
        }
    }
    printf("Book not found.\n");
}

/* ---------------- ISSUE FUNCTIONS ---------------- */

// this function isssues books to a borrower
void issueBook(struct Book *book, int *count, struct Issue_Book *issue, int *icount)
{
    int id;
    printf("Enter Book ID to issue: ");
    scanf("%d", &id);

    for (int i = 0; i < *count; i++)
    {
        if (book[i].id == id)
        {

            if (book[i].quantity <= 0)
            {
                printf("Book not available.\n");
                return;
            }
            getchar();
            printf("Enter Borrower Name: ");
            fgets(issue[*icount].borrower_name, 100, stdin);
            // strcspn(issue[*icount].borrower_name, "\n") ==> this will calculate the lenght of the string till the \n character
            // and the \n is replace with the \0 null character
            issue[*icount].borrower_name[strcspn(issue[*icount].borrower_name, "\n")] = '\0';

            issue[*icount].id = book[i].id;
            // title from book structure is copied to title at issue structure
            strcpy(issue[*icount].title, book[i].title);

            // adding data to issue book file
            FILE *fp = fopen("issue_books.txt", "a");
            fprintf(fp, "%d@%s@%s\n",
                    issue[*icount].id,
                    issue[*icount].title,
                    issue[*icount].borrower_name);
            fclose(fp);

            book[i].quantity--;
            saveToFile(book, count);

            (*icount)++;
            printf("Book issued successfully.\n");
            return;
        }
    }
    printf("Book not found.\n");
}

// loads previous saved issued book
void loadIssueBook(struct Issue_Book *issue, int *icount)
{
    FILE *fp = fopen("issue_books.txt", "r");
    if (!fp)
        return;

    while (fscanf(fp, "%d@%99[^@]@%99[^\n]\n",
                  &issue[*icount].id,
                  issue[*icount].title,
                  issue[*icount].borrower_name) != EOF)
    {
        (*icount)++;
        if (*icount >= MAX)
            break;
    }
    fclose(fp);
}

// displays all issued book
void displayIssueBooks(struct Issue_Book *issue, int *icount)
{
    if (*icount == 0)
    {
        printf("No issued books.\n");
        return;
    }
    for (int i = 0; i < *icount; i++)
    {
        printf("\nID: %d\nTitle: %s\nBorrower: %s\n",
               issue[i].id,
               issue[i].title,
               issue[i].borrower_name);
    }
}