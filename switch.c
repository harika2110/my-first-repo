#include<stdio.h>
int main() {
    char input;
    printf("input a character: ");
    scanf("%c", &input);

    switch(input) {
       // case 'p':                             //in this case, for both the inputs pand P the same output is printed
        case 'P': printf("your attendance is less than 75%%\n"); break;
      //  case 'a':
        case 'A': printf("your score is between 90-100\n"); break;
       // case 'b':
        case 'B': printf("your score is between 80-90\n"); break;
        default : printf("Invalid input. enter one of P or A or B\n");
    }

}

