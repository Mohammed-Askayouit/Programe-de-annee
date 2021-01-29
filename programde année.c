#include<stdio.h>

int main()
{
    int anne_naissance,age;
    printf("Qull est votre anne_naissance?");
    scanf("%d", &anne_naissance);
    age= 2020 - anne_naissance ;
    printf("voila %d ans",age);
    return 0;
}