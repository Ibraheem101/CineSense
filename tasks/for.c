#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    
    char *numbers[] = {"one", "two", "three", "four", "five",
                     "six", "seven", "eight", "nine"};
    size_t len = sizeof(numbers) / sizeof(numbers[0]);
    
    for (int i = a; i <= b; i++) {
        if (i <= len) {
            printf("%s\n", numbers[i-1]);
        }
        else if (i > len && i % 2 == 0) {
            printf("even\n");
        }
        else {
            printf("odd\n");
        }
    }

    return 0;
}

