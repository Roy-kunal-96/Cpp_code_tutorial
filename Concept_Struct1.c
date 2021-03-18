#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
  int roll_no;
  char name[20];
  float per;
} s1;

void main()
{
   struct student s3,s2;
   s3.roll_no= 10;
   strcpy(s3.name,"kunal roy");
   s3.per=99.15;

   printf("student 1\n");
   printf("NAME:=%s\n",s3.name);
   printf("ENROLL. NO.:=%d\n", s3.roll_no);
   printf("PERCENTAGE:=%f\n",s3.per);
   return 0;
   s2=s3;
   printf("student 2\n");
   printf("NAME:=%s\n",s2.name);
   printf("ENROLL. NO.:=%d\n", s2.roll_no);
   printf("PERCENTAGE:=%f\n",s2.per);

}
