//Structures

//Dynamic Initialization
#include<stdio.h>
struct gita
{
 int sid;
 char name[10];
};
struct gita s1;//We can create a structure variable before main and after Structure creation
void main()
{
 printf("enter sid-1 : ");
 scanf("%d",&s1.sid);
 printf("enter sname-1 : ");
 scanf("%s",s1.name); // or strcpy(s1.name,"Pranai");
 printf("details:\n");
 printf("sid   : %d\n",s1.sid);
 printf("sname : %s\n",s1.name);
}
/*
enter sid-1 : 1
enter sname-1 : tarun
details:
sid : 1
sname : 6422292
*/

//Nested Structures
#include<stdio.h>
struct college
{
 int cid;
 char cname[20];
 struct dept
 {
    int did;
    char hname[20];
    float rating;
 }sd;
};
void main()
{
 //Initialization of NESTED Structures
 struct college sc = {101,"GIST - gangavaram",{301,"IT",3.6}};
 printf("\n");
 printf("college name        : %s\n",sc.cname);
 printf("college ID          : %d\n",sc.cid);
 printf("department ID       : %d\n",sc.sd.did);
 printf("HOD name            : %s\n",sc.sd.hname);
 printf("rating              : %f\n",sc.sd.rating);
}
/*
college name        : GIST - gangavaram
college ID          : 101
department ID       : 301
HOD name            : IT
rating              : 3.600000
*/

//Pointers to Structures
#include<stdio.h>
struct clg1
{
 int id;
 float marks;
};
struct clg1 *p,s;
void main()
{
 p=&s;
 printf("enter id :");
 scanf("%d",&p->id); // or  scanf("%d",&(*p).id);
 printf("ID: %d",p->id);   // or printf("ID: %d",(*p).id);
}

// Passing individual members of of a structure as parameters.
#include<stdio.h>
typedef struct
{
	char name[20];
	int age;
	float salary;
}EMPLOYEE;
void display(char n[],int a,float s);
void main()
{
	EMPLOYEE e;
	printf("Enter employee details: ");
	scanf("%s%d%f",e.name,&e.age,&e.salary);
	display(e.name,e.age,e.salary);
}
void display(char n[],int a,float s)
{
	printf("Name:%s \n",n);
	printf("Age:%d \n",a);
	printf("Salary:%.2f \n",s);
}

//Structures to functions
#include<stdio.h>
struct student{
   int roll;
   float cgpa;
   char name[30];
};
void details(struct student ds1){
   printf("RollNo-%d\n",ds1.roll);
   printf("CGPA-%.2f\n",ds1.cgpa);
   printf("Name-%s\n",ds1.name);
}
void main(){
   struct student s1={40,8.56,"Pranai D"};
   details(s1);
}

//UNIONS
#include<stdio.h>
union clg2
{
   //Both data types should be same//In case of different we get error
   float id;
   float marks;
};
union clg2 *p,s;
void main()
{
 p=&s;
 scanf("%f",&p->id);
 scanf("%f",&p->marks);
 printf("id :%f\n",p->id); 
 printf("id :%f\n",p->marks);
}