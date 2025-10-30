#include <stdio.h> 
#include <string.h> 
int main() { 
    char input[30], stuffed[80] = ""; 
    char start_delim, end_delim; 
    char temp[3], double_start[3], double_end[3]; 
    int i; 
    // Input Section 
    printf("Enter the data to be stuffed: "); 
    scanf("%s", input); 
    printf("Enter the starting delimiter character: "); 
    scanf(" %c", &start_delim); 
    printf("Enter the ending delimiter character: "); 
    scanf(" %c", &end_delim); 
    // Prepare delimiter substrings 
    double_start[0] = double_start[1] = start_delim; 
    double_start[2] = '\0'; 
    double_end[0] = double_end[1] = end_delim; 
    double_end[2] = '\0'; 
    // Add starting delimiter 
    strcat(stuffed, double_start); 
    // Stuffing logic 
    for(i = 0; i < strlen(input); i++) { 
        temp[0] = input[i]; 
        temp[1] = '\0'; 
        if(input[i] == start_delim) 
            strcat(stuffed, double_start);  // Stuff start delimiter again 
        else if(input[i] == end_delim) 
            strcat(stuffed, double_end);    // Stuff end delimiter again 
        else 
            strcat(stuffed, temp); 
    } 
    // Add ending delimiter 
    strcat(stuffed, double_end); 
 
    printf("Data after character stuffing: %s\n", stuffed); 
 
    return 0; 
} 
