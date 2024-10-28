#include<stdio.h>

int main(){
    int l,b,area;

    printf("length of a rectangle");
    scanf("%d",&l);

    printf("width of rectangle");
    scanf("%d",&b);

    area=l*b;
    printf("area of rectangle%d",area);
    return 0;
}