#include<stdio.h>

// Create a structure Book (ISBN, Title, Price). Display all books with price greater than 1000.
struct Book
{
    char ISBN[20];
    char title[100];
    float price;
};

int main (){
    struct Book books[5];
    for(int i =0;i <5;i++){
        printf("Enter the ISBN:");
        fgets(books[i].ISBN,20,stdin);
        printf("Enter the Title:");
        fgets(books[i].title,100,stdin);
        printf("Enter the Price:");
        scanf("%f",&books[i].price);
        getchar();
    }
    for(int i=0;i<5;i++){
        if(books[i].price>1000){
            printf("\n");
            printf("Title: %s",books[i].title);
            printf("Title: %s",books[i].ISBN);
            printf("Title: %.2f\n",books[i].price);
        }
    }
    return 0;
}