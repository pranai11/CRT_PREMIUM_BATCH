//Structure example
#include <stdio.h>
#include<stdlib.h>
//Struct Creation
struct student
{
int rollno;
char name[30];//or *name for dynamic allocation //Need malloc function.Refer line 34.
float marks;
double fee;
};

int main() {
    struct student stu1;
    struct student stu3;
    //Type-1 Initialization : individual
    stu1.rollno=12;
    stu1.marks=100.0;
    stu1.name[30]="Pranai D";//or strcpy(stu1.name,"Pranai D sssdjdkkdsjishfshfohdhsosdjfs");//More than the size=>No problem it will print all the name. //individual initialization means 'name[30]' should be written not only 'name'.
    //But in case of strcpy noneed to mention it.

    //Type-2 Initialization : As a group
    struct student stu2={10,"Pranai",99.12,123456};

    //Printing Values
    printf("Student 1 name is..%s\n",stu1.name);
    printf("Student 1 roll No:%d\n",stu1.rollno);
    printf("Student 1 marks:%.2f\n",stu1.marks);
    printf("Size of Roll No:%u\n",sizeof(stu1.rollno));
    printf("Name of student 2:%s\n",stu2.name);
    printf("Student 2 marks:%.2f\n",stu2.marks);

    //Type-3 Dynamic Initialization
    //Since string NAME is a pointer.Need to use Dynamic Memory Allocation in case of Pointers
    stu3.name = (char*)malloc(100 * sizeof(char)); //*name for this type of initialization.So it is showing error
    printf("Enter Roll No and name of student-3:");
    scanf("%d",&stu3.rollno);
    scanf("%[^\n]s",stu3.name);
    printf("\nName of student 3:%s\n",stu3.name);
    printf("Roll No of student-3:%d",stu3.rollno);

    //To avoid Memory Leaks and free the assigned remaining memory
    free(stu3.name);
    return 0;
}
/*
Student 1 name is..Pranai D
Student 1 roll No:12
Student 1 marks:100.00
Size of Roll No:4
Name of student 2:Pranai
Student 2 marks:99.12
Enter Roll No and name of student-3:25 Ratnam

Name of student 3: Ratnam
Roll No of student-3:25
*/

//Array of Structures
#include<stdio.h>
void main()
{
struct Student
{
char name[10];
int rollno;
float marks;
};
int n,i;
printf("How many students details you want: ");
scanf("%d",&n);
struct Student s[n]; // Arry of structures
for(i=0;i<n;i++)
{
printf("Enter student-%d details: ",i+1);
scanf("%s%d%f",s[i].name,&s[i].rollno,&s[i].marks);
}
printf("All students details are: \n");
for(i=0;i<n;i++)
{
printf("Name:%s \n",s[i].name);
printf("Roll Number:%d \n",s[i].rollno);
printf("Marks:%.2f \n",s[i].marks); 
}
}
/*
How many students details you want: 2
Enter student-1 details: Pranai 12 365
Enter student-2 details: Hero 1 259
All students details are: 
Name:Pranai 
Roll Number:12 
Marks:365.00 
Name:Hero 
Roll Number:1 
Marks:259.00 
*/