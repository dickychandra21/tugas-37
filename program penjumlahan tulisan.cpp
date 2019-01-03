
#include<stdio.h>
#include<conio.h>

int ulang (int n);

int main (void)
{
    int n;
    printf("masukan nilai (n) :");
    scanf("%d" , &n);
    ulang (n);
    getch();
}

int ulang (int n)
{
    int i;
    for(i=1;i<=n;i++)
    printf("Algoritma dan Programan \n");
    return (i);
}

