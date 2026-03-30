// #include<stdio.h>
// int main() {
//     char* Names[3];
//     for (int i=0; i<3; i++) {
//         printf("Enter Name %d\t", i+1);
//         scanf("%s", Names[i]);
// }
// }

// #include<stdio.h>
// int main() {
// char *Names[3]; char temp[100];
// for (int i=0; i<3; i++) {
// scanf("%s", temp);
// Names[i] = temp;
// printf("%s\n", Names[i]);
// }
// printf("Printing names from the array\n");
// for (int i=0; i<3; i++) {
// printf("%s\n",Names[i]);
// }
// }

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
char *Names[3]; char temp[100]; int i;
for (i=0; i<3; i++) {
scanf("%s", temp);
Names[i]=(char *)malloc((strlen(temp)+1));
strcpy(Names[i], temp);
printf("%s\n",Names[i]);
}
for (i=0; i<3; i++)
printf("%s\n",Names[i]);
}