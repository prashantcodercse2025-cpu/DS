#include <stdio.h>
struct Human
{
    int age;
    char initial;
};

int main()
{
   struct Human Deepak;
   Deepak.age=20;
   Deepak.initial='D';
   printf("%d\n",Deepak.age);
   printf("%c",Deepak.initial);
}