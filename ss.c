#include <stdio.h> 
  
// Function which prints the file content 
// in Odd Even manner 
void printOddEvenLines(char x[]) 
{ 
    // Opening the path entered by user 
    FILE* fp = fopen(x, "a+"); 
  
    // If file is null, then return 
    if (!fp) { 
        printf("Unable to open/detect file"); 
        return; 
    } 
  
    // Insert a new line at the end so 
    // that output doesn't get effected 
    fprintf(fp, "\n"); 
  
    // fseek() function to move the 
    // file pointer to 0th position 
    fseek(fp, 0, 0); 
  
    int check = 0, i=0; 
    char buf[100]; 
  
    // Print Odd lines to stdout 
    while (fscanf(fp, "%s", &buf[i])!= EOF) { 
  
        // If check is Odd, then it is 
        // odd line 
        if (buf[i] == '\n')
        {
            check++; 
        }

        if ((check % 2 != 0)) {
            printf("%s", buf); 
        } 
        
    } 
  
    // fseek() function to rewind the 
    // file pointer to 0th position 
    fseek(fp, 0, 0); 

    i = 0;
  
    // Print Even lines to stdout 
    while (fscanf(fp, "%c", &buf[i])!=EOF) { 
  
        // If check is Odd, then it is 
        // odd line 
        if (buf[i] == '\n')
        {
            check++; 
        }

        if ((check % 2 == 0)) { 
            printf("%s", buf); 
        } 
        
    } 
  
    // Close the file 
    fclose(fp); 
  
    return; 
} 
  
// Driver Code 
int main() 
{ 
    // Input filename 
    char x[] = "ss.txt"; 
  
    // Function Call 
    printOddEvenLines(x); 
  
    return 0; 
}