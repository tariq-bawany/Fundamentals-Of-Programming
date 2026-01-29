#include <stdio.h>


void print_space(int s);
void print_hashtags(int a);
int main(void){
    int height,hashtags=1,space;

    do{
        printf("Enter the height:");
        scanf("%d",&height);
        space = height - 1;

    }while(height<1);

    for(int col= 0;col<height;col++)
    {
        // printf("%d",height);
        // printf("%d",col);
        print_space(space);
        print_hashtags(hashtags);
        space--;
        hashtags++;
    }
}
void print_space(int s){
    for(int i = 0;i<s;i++)
    {
        printf(" ");
    }

}
void print_hashtags(int a ){
    for(int i = 0;i<a;i++)
    {
        printf("#");
    }
    printf("\n");
}
