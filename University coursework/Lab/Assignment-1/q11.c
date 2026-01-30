#include<stdio.h>
// Structure Declaration 
struct Book{
    char ISBN[20];
    char title[100];
    float price;
};
int main (){
    struct Book books[5]; // arrays of structure
    for(int i =0;i <5;i++){ // loop for user input 
        printf("Enter the Details of Book %d\n",i+1);
        printf("Enter the ISBN:");
        fgets(books[i].ISBN,20,stdin); // input for ISBN
        printf("Enter the Title:");
        fgets(books[i].title,100,stdin); // input for title
        printf("Enter the Price:");
        scanf("%f",&books[i].price); // input for price
        getchar(); // clear input buffer
        printf("\n");
    }
    printf("Books with price more than 1000\n");
    for(int i=0;i<5;i++){ // loop for checking books 
        if(books[i].price>1000){ // checks if the price is greater than 1000
            printf("\n"); 
            // if yes it will print the details of that book
            printf("Title: %s",books[i].title);
            printf("ISBN: %s",books[i].ISBN);
            printf("Price: %.2f\n",books[i].price);
        }
    }
    return 0;
}