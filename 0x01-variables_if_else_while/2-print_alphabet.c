#include <stdio.h>
  
int main()
{
  
    /* Get the character to be written */
    char ch = 'a';
   
    while(ch <= 'z')  
    {  
        putchar(ch);	
        ch++;  
	putchar('\n');
    }  
    return (0);
}
