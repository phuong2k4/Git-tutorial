#include<conio.h>
#include<stdio.h>
#include<math.h>
int main(){
    int i,n;
    float s,x,t;
    s=0;
    i=0;
    t=1;
    printf("\n Nhap x: ");
    scanf("%f",&x);
    printf("\n Nhap n: ");
    scanf("%d",&n);
    for(i;i<n;i++){

        t=pow(x,2*i+1);
        s=s+t;
    }
    printf(" %f ",s);
    getch();
    return 0;


}