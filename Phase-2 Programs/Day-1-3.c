//Sample structure program
#include<stdio.h>
#include<string.h>
//creating struct with person1 variable 
struct person{
	char name[50];
	int citno;
	float salary;
}person1;

int main()
{
	//assign value to name to person1
	strcpy(person1.name,"Geethanjali");
	//assign values to other person1 variables
	person1.citno =2014;
	person1.salary = 250000;
	printf("Name: %s \nCitno: %d\nsalary: %.2f\n",person1.name,person1.citno,person1.salary);

    struct person person2;
    strcpy(person2.name,"D Pranai");
    person2.citno=2004;
    person2.salary=2000000;
    printf("Name: %s \nCitno: %d\nsalary: %.2f\n",person2.name,person2.citno,person2.salary);

}   
/*
Name: Geethanjali 
Citno: 2014
salary: 250000.00
Name: D Pranai 
Citno: 2004
salary: 2000000.00
*/

//Compare the struct syntax and declaration in main method of above and below codes.Same same but different


#include<stdio.h>
#include<string.h>
//creating struct with person1 variable 
struct {
	char name[50];
	int citno;
	float salary;
}person1,person2;
int main()
{

	//assign value to name to person1
	strcpy(person1.name,"Geethanjali");
	//assign values to other person1 variables
	person1.citno =2014;
	person1.salary = 250000;
	printf("Name: %s \nCitno: %d\nsalary: %.2f\n",person1.name,person1.citno,person1.salary);

    strcpy(person2.name,"D Pranai");
    person2.citno=2004;
    person2.salary=2000000;
    printf("Name: %s \nCitno: %d\nsalary: %.2f\n",person2.name,person2.citno,person2.salary);

}
/*
Name: Geethanjali 
Citno: 2014
salary: 250000.00
Name: D Pranai 
Citno: 2004
salary: 2000000.00
*/


//Stucture aliasing using typedef
#include<stdio.h>
typedef struct Distance{
    int feet;
    float inch;
} dist;
void main(){
    dist d1,d2;
}


//structure variables creation
//Method-1
struct Dist{
    float inch;
    int feet;
}d1,d2,d[20];//method-1 Either here or in main
struct Dist{
    int inch,feet;
};
void main(){
    struct Dist d1,d2,d[20];//method 2
}


/*
Accessing struct members
type-1: using . operator-member operator
type-2: using -> operator-structure pointer operator
*/


//Nested structures
#include<stdio.h>
struct complex{
    int imag;
    float real;
};
struct number{
    struct complex comp;
    int integers;
}num1,num2;
//Assigning value to imag:
void main(){
num1.comp.imag=11;
num1.comp.real=12.6;
printf("%d\n %.2f",num1.comp.imag,num1.comp.real);
}

// either individual declaration and variable creation in one structure or Structure inside a structure
struct number{
    struct complex{
    int imag;
    float real;
    };
    int integers;
}num1,num2;


//Real life example of Nested structures
#include<stdio.h>
#include<string.h>
struct address{
    int doorno;
    int pincode;
    char address[20];
};
struct patient{
    struct address adr;
    int pid;
    int bill;
}p1,p2;
void main(){
p1.adr.doorno=4250;
p1.adr.pincode=524003;
strcpy(p1.adr.address,"Ramalingapuram");
p1.pid=1001;
p1.bill=15000;
printf("Patient address:\nDoorno:%d\npincode:%d\naddress:%s\n",p1.adr.doorno,p1.adr.pincode,p1.adr.address);
printf("Patient id:%d\nBill:%d\n",p1.pid,p1.bill);
}

// Like above using dot operator individual assignment or Like below using flower brackets that follow the orser of members of struct
#include<stdio.h>
#include<string.h>
struct details{
    int age;
    char name[30];
    struct dob{
        int day;
        int month;
        int year;  
    }db;
    float salary;
};
void main(){
    struct details dt={25,"Pranai",{11,2,2004},1200000.52};
    // or scanf("%d%s%d%d%d%f",&dt.age,&dt.name,&dt.db.day,&dt.db.month,&dt.db.year,&dt.salary);
    printf("Age:%d\nName:%s\nDOB-%d %d %d\nSalary:%.2f\n",dt.age,dt.name,dt.db.day,dt.db.month,dt.db.year,dt.salary);
}