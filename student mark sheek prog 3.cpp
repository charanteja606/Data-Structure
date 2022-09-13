#include<stdio.h>
struct student
{
int regno;
char name[15];
int m1,m2,m3,m4;
int total;
float avg;
}stud[10];
int main( )
{
int n,i;
printf("\n Enter the number of students");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n Enter the students register number");
scanf("%d",&stud[i].regno);
printf("\n Enter the student name");
scanf("%s",&stud[i].name);
printf("\n Enter the marks");
scanf("%d%d%d%d",&stud[i].m1,&stud[i].m2,&stud[i].m3,&stud[i].m4);
if (stud[i].m1>=60&&stud[i].m2>=60&&stud[i].m3>=60&&stud[i].m4>=60)
{
stud[i].total=stud[i].m1+stud[i].m2+stud[i].m3+stud[i].m4;
stud[i].avg=stud[i].total/4;
}
else
{
stud[i].total=0;
stud[i].avg=0;
}
}
printf("\n Number\tNme\tMark1\tMark2\tMark3\tMark4\tTotal\tAverage");
for(i=0;i<n;i++)
{
printf("\n %d\t%s\t%d\t%d\t%d\t%d\t%d\t%f\t",stud[i].regno,stud[i].name,stud[i].m1,stud[i].m2,
stud[i].m3,stud[i].m4,stud[i].total,stud[i].avg);
}
}

