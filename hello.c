// area of a circle
// #include<stdio.h>
// int main(){
//     float radius;
//     printf("Enter the radius:- ");
//     scanf("%f",&radius);
//     float area;
//     float pi =3.14;
//     area = pi*radius*radius;
//     printf("the area of circle is %f",area);
//     return 0;

// }

// to calculate simple interest

// #include<stdio.h>
// int main(){
//     float p,r,t,si;
//     printf("Enter the amount:- ");
//     scanf("%f",&p);
//     printf("Enter the rate of interest:- ");
//     scanf("%f",&r);
//     printf("Enter the time:- ");
//     scanf("%f",&t);
//     si=p*r*t/100;
//     printf("the simple interest is %f",si);
//     return 0;
// }
// 
// sagar code
// #include<stdio.h>
// int main()
// {
// int p;
// float r,t,si;
// printf("enter the amount");
// scanf("%d",&p);
// printf("enter the rate ");
// scanf("%f",&r);
// printf("enter the time in year");
// scanf("%f",&t);
// si = (p*r*t)/100;
// printf("simple intrest is  is %f",si);
// return 0;
// }

// to calculate the total marks and percentage
// #include<stdio.h>
// int main(){
//     float m1,m2,m3,m4,m5;
//     printf("Enter the marks of subject 1:- ");
//     scanf("%f",&m1);
//     printf("Enter the marks of subject 2:- ");
//     scanf("%f",&m2);
//     printf("Enter the marks of subject 3:- ");
//     scanf("%f",&m3);
//     printf("Enter the marks of subject 4:- ");
//     scanf("%f",&m4);
//     printf("Enter the marks of subject 5:- ");
//     scanf("%f",&m5);
//     float total_marks;
//     total_marks = m1+m2+m3+m4+m5;
//     printf("The total marks is:- %f\n", total_marks);
//     float percentage;
//     percentage = total_marks/5;
//     printf("The percentage is %f",percentage);
//     return 0;
// #include<stdio.h>
// int main(){
//     int g=3/2;
//     printf("%d",g);
//     return 0;

// #include<stdio.h>
// int main(){
//     int i=2,j=3,k,l;
//     float a,b;
//     k=i/j*j;
//     l=j/i*i;
//     a=i/j*j;
//     b=j/i*i;
//     printf("%d,%d,%f,%f",k,l,a,b);
//     int s=2*4/4-6/2+2/3*6/3;
//     printf("\n");
//     printf("%d",s);
//     return 0;
// }

// write a program to swap two numbers first using help of third variabe then without third variable
//with the use of third variable

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter the value of a :- ");
//     scanf("%d",&a);
//     printf("Enter the value of b:- ");
//     scanf("%d",&b);
//     c=a;
//     a=b;
//     b=c;
//     printf("value of a after swapping is %d\n",a);
//     printf("value of b after swapping is %d",b);
//     return 0;
// }

//without the use of third variable 
// #include<stdio.h>
// int main(){
//      int a,b;
//      printf("Enter the value of a :- ");
//      scanf("%d",&a);
//      printf("Enter the value of b:- ");
//      scanf("%d",&b);
//      a=a+b;
//      b=a-b;
//      a=a-b;
//      printf("value of a after swapping is %d\n",a);
//      printf("value of b after swapping is %d",b);
//      return 0;
// }
#include <stdio.h>

int main() {
    char gender;
    int age;
    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);
    printf("Enter your age: ");
    scanf("%d", &age);
    if ((gender == 'M' || gender == 'm') && age > 20) {
        printf("Eligible for license!\n");
    } else if ((gender == 'F' || gender == 'f') && age > 24) {
        printf("Eligible for license!\n");
    } else {
        printf("Not eligible for license.\n");
    }
    return 0;
}

#include <stdio.h>

int main()
{
    char gender;
    int age;
    printf("Enter your Gender(M/F): ");
    scanf("%c",&gender);
    printf("Enter your age: ");
}

