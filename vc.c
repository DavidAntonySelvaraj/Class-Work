#include<stdio.h>
int main()
{
char a;
printf("type the letter");
scanf(" %c",&a);
if((a=='a')||(a=='A')||(a=='e')||(a=='E')||(a=='i')||(a=='I')||(a=='o')||(a=='O')||(a=='u')||(a=='U'))
printf("the typed letter is vowel");
else
printf("the typed letter is consonent");
return 0;
}
