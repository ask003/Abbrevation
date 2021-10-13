
#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100],chr;
    scanf("%[^\n]%*c", str);
     printf("%c",(char)toupper(str[0]));
    for(int i=0;i!='\0';i++)
    {
         
        if(str[i] == ' ' )
        {
            printf("%c",(char)toupper(str[i + 1]));
        }
        else
        continue;
    }
   

    return 0;
}
