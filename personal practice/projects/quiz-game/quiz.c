#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct Question {
    char text[256];
    char options[4][50];
    int correct;
};
int main() {
    struct Question bank[100]; // Array to hold 100 questions
    FILE *file = fopen("questions.txt", "r");  
    if (file == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    int i = 0;
    // Reading 100 questions from the file
    while (i < 100 && fgets(bank[i].text, 256, file)) {
        for (int j = 0; j < 4; j++) {
            fgets(bank[i].options[j], 50, file);
        }
        fscanf(file, "%d\n", &bank[i].correct); // Read the int and skip the newline
        i++;
    }
    fclose(file);

    printf("Successfully loaded %d questions!\n", i);
    
    // Randomization logic goes here...
    int point =0;
    int ans;
    for(int j =0;j<10;j++){
        printf("%s",bank[j].text);
        for(int l = 0 ;l<4;l++){
            printf("%d-) %s",l+1,bank[j].options[l]);
        }
        printf("\n");
        printf(">>Enter your answer here (1/2/3/4): ");
        scanf("%d",&ans);
        if(ans == bank[j].correct)point++;
        printf("\n");
    }
    printf("\nYou scored total %d points\n",point);
    
    return 0;
}