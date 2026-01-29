#include<stdio.h>

int main (){
    // 1 (Table Counter) x 1  (Table Factor) =1 (Multiple)
    // 1 x 2 =2
    // 1 x 3 =3
    // 1 x 4 =4
    // 1 x 5 =5
    // 1 x 6 =6
    // 1 x 7 =7
    // 1 x 8 =8
    // 1 x 9 =9
    // 1 x 10 =10
    // 1 x 11 =11
    // 1 x 12 =12  ==> 12 is the factor_limit
    int table_counter , factor_limit = 12, table_factor,value;
    int starting_row =1; 
    table_counter=1;
    value =10;
    while (table_counter<=100)
    {
        
        table_factor =1;
        while(table_factor<=factor_limit){
            while (table_counter<=value)
            {
                int multiple = table_counter *table_factor;
                
            printf("%2d x%3d =%4d \t", table_counter,table_factor,multiple);

            // printf("%d \n",table_counter);
            table_counter++;
            }
            puts("");
            table_counter = starting_row;
            table_factor++;
            // printf("%d\n",i);
        }
        table_counter+=10;
        starting_row+=10;
        value +=10;
        // printf("The table_counter is:%d",table_counter);
        // printf("The starting row is:%d",starting_row);
        // printf("The vaule is:%d",value);
            puts("");
            puts("Made By Muhammad Tariq");
            puts("");
    }
    

    // printf("%2d x %3d = %4d \t", 1/*table_counter*/,1 /*table_factor*/,1*1 /*multiple*/); //first line of table 1
    // printf("%2d x %3d = %4d \t", 2,1,2*1);
    // printf("%2d x %3d = %4d \t", 3,1,3*1);
    // printf("%2d x %3d = %4d \t", 4,1,4*1);
    // printf("%2d x %3d = %4d \t", 5,1,5*1);
    // printf("%2d x %3d = %4d \t", 6,1,6*1);
    // printf("%2d x %3d = %4d \t", 7,1,7*1);
    // printf("%2d x %3d = %4d \t", 8,1,8*1);
    // printf("%2d x %3d = %4d \t", 9,1,9*1);
    // printf("%2d x %3d = %4d \t", 10,1,10*1);
    // printf("%2d x %3d = %4d\n", 10,100,1000);
    // printf("%2d x %3d = %4d", 10,10,100);
    return 0;
}