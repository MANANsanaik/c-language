# c-language
#include<stdio.h>

int main(){
char ch;

printf("enter the character");
scanf("%c",&ch);

if(ch >='a' && ch <='z'){
     printf("upeer case");
}

else if(ch >='A' && ch <='Z'){
     printf("lower case");
}
else{ 
    printf("it is not a character");
}
return 0;
}
