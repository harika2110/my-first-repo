#include<stdio.h>
int main() {
    int i=0, count=0; //mind that the counter should always start from zero inorder for us toget the correct count
    int square;
    while(i<=100) {
        square = (i*i);
       if(square%10==9) 
       count++;
    i++;}
    printf("no.of such numbers= %d\n", count);
    printf("This file name is loop1.c\n");

}
