//PROGRAM TO READ THREE NOS. AND PRINT MAX
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b){
        if(a>c){
            printf("%d is the greatst number",a);
        }else{
            printf("%d is the greatest number",c);
        }
    }else{
        if(b>c){
            printf("%d is the greatest number",b);
        }else{
            printf("%d is th greatest number",c);
        }
    }
   return 0;
}