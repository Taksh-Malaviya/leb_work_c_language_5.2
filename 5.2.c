#include<stdio.h>
#include<conio.h>
main(){
    
    int a,b,c,d;
	clrscr();
    printf("enter value  a:");
    scanf("%d",&a);
    printf("eneter value b:");
    scanf("%d",&b);
    printf("eneter value c:");
    scanf("%d",&c);
    printf("eneter value d:");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("a is max.. ");
        }else if (b>a && b>c && b>d){
        printf ("b is max.. ");
        }else if (c>a && c>b && c>d){
            printf("c is max..");
        }else if (d>a && d>b && d>c){
            printf("d is max..")
        }else{
            ("invalid input !");
        }
    getch();
    }
