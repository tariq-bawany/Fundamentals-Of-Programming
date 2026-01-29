#include <stdio.h>
// Created By MUHAMMAD TARIQ
void print_hashtags(int a);
void print_space(int s);

int main(void)
{
    int height, space,hashtags =1;
    do{
        printf("Enter height:");
        scanf("%d",&height);
        space = height -1;

    }while(height<1);
    for (int col = 0; col < height; col++)
    {
        print_space(space);
        print_hashtags(hashtags);
        printf(" ");
        printf(" ");
        print_hashtags(hashtags);
        printf("\n");
        space--;
        hashtags++;
    }
    return 0;
}

void print_hashtags(int a)
{
    for (int i = 0; i < a; i++)
    {
        printf("#");
    }
}

void print_space(int s) {
    for(int i= 0;i<s;i++){
        printf(" ");
    }
}
