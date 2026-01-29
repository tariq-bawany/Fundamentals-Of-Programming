#include <stdio.h>

void wait(int milliseconds) {
    for(long i = 0; i < milliseconds * 1000000; i++) {
        // busy waiting
    }
}

void substring(char str[], int x, int y) {
    for(int i = x; i <= y && str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
}

void xy(char str[], int x, int y, int spaces) {
    printf("\r");
    
    // Left side spaces
    for(int i = 0; i < spaces; i++) {
        printf(" ");
    }
    
    // Print substring
    substring(str, x, y);
    
    // Clear remaining
    printf("          ");
    
    fflush(stdout);
}

int main() {
    char str[] = "C is widely used in industry for a wide range of tasks. Today's popular desktop operating systems Windows, macOS and Linux are partially written in C.";
    
    int length = 0;
    int windowSize = 50;
    int waitTime = 200;
    
    // Calculate string length
    for(int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    
    int centerSpaces = 40;
    
    // Infinite loop - Ctrl+C se hi rokna padega
    while(1) {
        // Character by character left se right move
        for(int i = 0; i <= length - windowSize; i++) {
            xy(str, i, i + windowSize - 1, centerSpaces);
            wait(waitTime);
        }
    }
    
    printf("\n");
    return 0;
}