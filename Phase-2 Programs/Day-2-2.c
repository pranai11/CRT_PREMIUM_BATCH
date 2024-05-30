//String functions
#include<stdio.h>
#include<string.h>
void main(){
    char ch1[7]="Javalk",ch2[7];
    printf("Length is %d\n\n",strlen(ch1));
    strcpy(ch2,ch1);
    printf("Value of second string is:%s\n\n",ch2);
    strcat(ch1,ch2);
    printf("Value of concatenated string is:%s\n\n",ch1);
    printf("Reversed string is %s\n\n",strrev(ch1));
    printf("Same or Different: %s\n\n",strcmp(ch1,ch2)?"Different":"Same");
    printf("Lower string is: %s\n\n",strlwr(ch2));
    printf("upper string is: %s\n\n",strupr(ch2));
}
//Check Password validity
#include<stdio.h>
#include<string.h>
int CheckPassword(char str[],int n){
    int ncount=0,lcount=0,ccount=0;
    for(int i=0;i<n;i++){
        if(str[i]==' ' || str[i]=='/' || (str[0]>47 && str[0]<58))
            return 0;
        if(str[i]>47 && str[i]<58)
            ncount++;
        if(str[i]>64 && str[i]<91 || str[i]>96 && str[i]<123)
            lcount++;
        if(str[i]>64 && str[i]<91)
            ccount++;
    }
    if(lcount>3 && ncount>0 && ccount>0)
        return 1;
    else
        return 0;
}
void main(){
    int size;
    printf("Enter size of password:");
    scanf("%d",&size);
    printf("Enter password");
    char str[size];
    scanf("%s",str);
    puts(str);
    if(!CheckPassword(str,size))
        printf("Not a valid password");
    else
        printf("Valid Password");
}

//Palindrome or not
#include<stdio.h>
#include<string.h>
void main(){
    char strs[5]="mamy";
    char dummy[5];
    strcpy(dummy,strs);
    if(dummy==strrev(strs))
        printf("Palindrome");
    else
        printf("Not a palindrome");
	return 0;
}
