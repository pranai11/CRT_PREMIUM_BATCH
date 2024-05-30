#include<stdio.h>
#include<math.h>
void main()
{
    // Herons formula
    int a,b,c;
    float si,res;
    printf("Enter sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    si = (a+b+c)/2.0;
    printf("Area:%.2ff",res);
    res = sqrt(si*(si-a)*(si-b)*(si-c));
    

    // Convert seconds into hours,minutes and seconds
    int s,h,m;
    printf("Enter no of seconds");
    scanf("%d",&s);
    h = s/3600;
    s = s%3600;
    m = s/60;
    s = s%60;
    printf("%dhourse %dminutes %dseconds",h,m,s);
    

   // Relational Operators
   printf("%d \n",5<6);
   printf("%d \n",5<=6);
   printf("%d \n",5>6);
   printf("%d \n",5>=6);
   printf("%d \n",5==6);
   printf("%d \n",5!=6);
   

   //Logical operators
   printf("%d \n",(5>6)&&(5!=6));
   printf("%d \n",(5<6)||(5==6));
   printf("%d \n",!(5<6)&&(5!=6));
   

   //Assignment and short hand assignment operators
    int n = 5;
    printf("%d\n",n);
    n+=5;
    printf("%d\n",n);
    n-=5;
    printf("%d\n",n);
    n*=5;
    printf("%d\n",n);
    n/=5;
    printf("%d\n",n);
    

    //Increment and decrement operators
    int v=7,w=9;
    printf("%d\n",v++);
    printf("%d\n",v);
    printf("%d\n",++v);
    printf("%d\n",w--);
    printf("%d\n",--w);
  
}