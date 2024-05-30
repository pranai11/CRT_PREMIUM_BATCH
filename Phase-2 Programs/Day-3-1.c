/*
Pointers always stores masked address but every variable will have both mask and original addrs
&-creates a mask or reference address to a variable.
Pointers has the capacity to store both values and address
&-Referencing operator
*-De Referencing operator
We can increment the address refered by a pointer For example: To store elements in an array.Refer line 133
*/







//%u-value %u-masked address %u-Next new masked address
//%p-hexadecimal value %p-original address %p-next new original address
#include<stdio.h>
#include<conio.h>
void main(){
    int b=20,*a=30;
printf("Value of b %p : %p -- %p\n",b);//Value of b 00000014 : 0061FF54 -- 00401A0B
printf("Value of a %p : %p -- %p\n",a);//Value of a 0000001E : 0061FF54 -- 00401A0B
printf("Value of b %u\n",b);//Value of b 20
printf("Value of a %u : %u--%u--%p--%p--%u--%p\n",a);//Value of a 30 : 6422356--4200971--004019B0--00741588--30--00000014
printf("Value of b: %d\n",b);//Value of b: 20
printf("Value of a : %d\n",a);//Value of a : 30
}

//Double pointer
#include<stdio.h>
void main(){
    int **a,b=10,c=30;
    a=&b;
    b=&c;
    printf("The output is:%d %d",*a,**a);//The output is:6422292(masked address) 30(value)
}

//Null pointer
#include<stdio.h>
void main(){
    int *n=NULL;
    int m=200;
    printf("the output is:%d",*n+m);//200
}

//Void pointer
#include<stdio.h>
void main(){
    void *n=10;
    printf("the output is:%d",*n);//Not possible so raises error
}

//Wild pointer//Wild means cannot be changed
#include<stdio.h>
void main(){
    const int *a=10,b=20;
    a=&b;
    printf("%d",(*a+b));
    *a=90;//Error since pointer is a constant/wild pointer
    printf("%d",*a);
}

//Kill pointer
#include<stdio.h>
void main(){
    const int *a=10,b=20;
    a=&b;
    printf("%d\n",(*a+b));
    printf("%d\n",free(*a));
}


//Pointers to Functions
#include<stdio.h>
void ops(int a,int b,int *sum,int *prod,int *avg);
void main(){
    int a=10,b=10,sum,prod,avg;
    ops(a,b,&sum,&prod,&avg);
    printf("\n%d %d %d",sum,prod,avg);//20 100 10
}
void ops(int a,int b,int *s,int *p,int *av){
    *s=a+b;
    *p=a*b;
    *av=*s/2.0;
    printf("%d %d %d",*s,*p,*av);//20 100 10
}

//Pointer to array
#include<stdio.h>
void main()
{
	int a[]={10,20,30,40,50};
	int *ptr,i;
	ptr=a; // ptr=&a // ptr=&a[0];
	for(i=0;i<5;i++)
	{
		//printf("%d \n",&a[i]);
		printf("%d \n",ptr+i);//prints address location//ptr contains first address value.As array is contiguous memory values soo as i has 4bytes size.ptr will increase by 4 so that it can move to next as array is int.
        //printf("%d \n",a[i]);
        printf("%d \n\n",*(ptr+i));//10 20 30 40 50
	}
}

//Pointer Arithmetics
#include<stdio.h>
void main(){
    int n=8;
    char c='d';
    float f=9.8;
    int *nptr=&n;
    char *cptr=&c;
    float *fptr=&f;
    printf("Character pointer Before increment: %u After increment: %u\n",cptr++,cptr);//Increment by 1(size of char)
    printf("Integer pointer Before increment: %u After increment: %u\n",nptr++,nptr);//Increment by 4(size of int)
    printf("Float pointer Before increment: %u After increment: %u\n",fptr++,fptr); //increment by 4(size of float)
}
/*Character pointer Before increment: 6422287 After increment: 6422288
Integer pointer Before increment: 6422288 After increment: 6422292
Float pointer Before increment: 6422280 After increment: 6422284*/

//Pointer Arithmetics
#include<stdio.h>
void main(){
    int n=8,m=9;
    int *ptr1=&n,*ptr2=&m;
    printf("%u and %u Difference=%u\n",ptr1,ptr2,ptr1-ptr2);//6422292 and 6422288 Difference=1
    printf("Comparison=%u\n",ptr1==ptr2);//Comparison=0
    printf("Comparison=%u",ptr1!=ptr2);//Comparison=1
}    

//Dynamically inserting elements into array indirectly using pointers
#include<stdio.h>
void main(){
    int size;
    scanf("%d",&size);//3
    int arr[size];
    int *ptr=arr;
    for(int i=0;i<size;i++)
        scanf("%d",&(*ptr++));//2 3 4 or (ptr+i) or &arr[i]
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);//2 3 4 or *(ptr+i)
}    