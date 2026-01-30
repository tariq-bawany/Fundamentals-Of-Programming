#include <stdio.h>

struct Book
{
    char title[100];
    char author[100];
    float price;
};

int main()
{
    struct Book books[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the title:");
        // scanf("%s",&);
        // getchar(books[i].title);
        fgets(books[i].title,100,stdin);
        printf("Enter the author:");
        fgets(books[i].author,100,stdin);
        printf("Enter the price:");
        // fgets(books[i].title,100,stdin);
        scanf("%f",&books[i].price);
        getchar();
        // while (getchar() != '\n');
    }
    for(int i =0;i<2;i++){
        printf("Title:%s\n",books[i].title);
        printf("Author:%s\n",books[i].author);
        printf("Price:%f\n",books[i].price);
    }
    return 0;
}