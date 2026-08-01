#include<stdio.h>
#include<string.h>
int main ()
{
    
  //1.string length  
    
    char str[30];
    printf("enter a string :");
    scanf("%s",str);
    printf(" string length is :%d\n",strlen(str));
    return 0;
    
}

//2.string copy

char str[30];
char str1[40];
printf("enter a string :");
scanf("%s",str);
printf("before copy\n",str1);
strcpy(str1,str);
printf("after copy :%s\n",str1);
return 0;
}





