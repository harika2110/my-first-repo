#include<stdio.h>
int main() {
    int x, y, min;
    printf("enter x: ");
    scanf("%d", &x);
    printf("enter y: ");
    scanf(" %d", &y);
   
    if(x<y) min=x;
    else min=y;

    int i=min, gcd;
    while(i>=2){
        if((x%i==0)&&(y%i==0))
      {  gcd = i; break;}
       i--;
    }
   
printf("the gcd of x and y is: %d\n", gcd);
}