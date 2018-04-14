#include <stdio.h>
#include <string.h>
int main() {
char str1[6] = "AEIOU";
char ch;
printf("Char: ");
scanf("%c",&ch);
if(strchr(str1,ch)==NULL)
printf("NAO\n");
else
printf("SIM\n");
}
