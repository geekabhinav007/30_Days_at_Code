/*#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // Declare a variable named 'input_string' to hold our input.
    char input_string[105]; 
    
    // Read a full line of input from stdin and save it to our variable, input_string.
    scanf("%[^\n]%*c",input_string); 
    
    
    printf("Hello, World.\n");
    printf("%s\n",input_string[105]);
    
    
    
    return 0;
}*/
#include <stdio.h>
int main()
{
char str[20];
scanf("%[^\n]%*c", str);
printf("Hello, World.\n");
printf("%s", str);

return 0;
}
