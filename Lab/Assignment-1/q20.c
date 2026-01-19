#include<stdio.h>
// Q20: Using arrays, pointers, and functions, input student marks and find highest, lowest, and average marks.
void high_low_avg(int *marksArr,int n);
int main (){
    int n;
    printf("Enter the no of Students:");
    scanf("%d",&n);
    int marksArr[n];
    printf("Enter the marks of Students:\n");
    for(int i=0;i<n;i++){
        printf("Student %d:",i+1);
        scanf("%d",&marksArr[i]);
    }
    high_low_avg(marksArr, n);
    return 0;
}
void high_low_avg(int *marksArr,int n){
    // printf("Highest: %d\n",n);
    int lowest = *marksArr;
    int highest = *marksArr;
    int sum = 0;
    float avg = 0;
    for(int i=0;i<n;i++){
        if(highest<*(marksArr+i)){
            highest = *(marksArr+i);
        }
        if(lowest>*(marksArr+i)){
            lowest = *(marksArr+i);
        }
        sum = sum +*(marksArr+i);
    
    }
    avg = (float)sum/n;
    printf("Highest: %d\n",highest);
    printf("Lowest: %d\n",lowest);
    // printf("Avg: %d\n",sum);
    // printf("Avg: %d\n",n);
    printf("Avg: %.2f\n",avg);
}
