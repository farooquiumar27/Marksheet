#include<stdio.h>

int main()
{
int phy,chem,math,eng,hindi,total,percentage,failCount,graceMarks;
printf("Enter the marks of physics(0-100): ");
scanf("%d",&phy);
if(phy<0||phy>100)
{
printf("Invalid input\n");
return 0;
}
printf("Enter marks of chemistry(0-100): ");
scanf("%d",&chem);
if(chem<0||chem>100)
{
printf("Invalid input\n");
return 0;
}
printf("Enter marks of maths(0-100): ");
scanf("%d",&math);
if(math<0||math>100)
{
printf("Invalid input\n");
return 0;
}
printf("Enter marks of english(0-100): ");
scanf("%d",&eng);
if(eng<0||eng>100)
{
printf("Invalid input\n");
return 0;
}
printf("Enter marks of hindi(0-100): ");
scanf("%d",&hindi);
if(hindi<0||hindi>100)
{
printf("Invalid input\n");
return 0;
}
failCount=0;
if(phy<33)
{
failCount++;
}
if(chem<33)
{
failCount++;
}
if(math<33)
{
failCount++;
}
if(eng<33)
{
failCount++;
}
if(hindi<33)
{
failCount++;
}
if(failCount==0)
{
total=phy+chem+math+eng+hindi;
percentage=total/5;
if(percentage>=60)
{
printf("Frist divison and Percentage is %d\n",percentage);
}
if(percentage<60&&percentage>=45)
{
printf("Second divison and Percentage is %d\n",percentage);
}
if(percentage<45)
{
printf("Third divison and Percentage is %d\n",percentage);
}
}
if(failCount==1)
{
graceMarks=0;
if(phy>=30&&phy<=32)
{
graceMarks=33-phy;
phy=33;
printf("Pass with grace of %d in Physics\n",graceMarks);
}
if(chem>=30&&chem<=32)
{
graceMarks=33-chem;
chem=33;
printf("Pass with grace of %d in Chemistry\n",graceMarks);
}
if(math>=30&&math<=32)
{
graceMarks=33-math;
math=33;
printf("Pass with grace of %d in Maths\n",graceMarks);
}
if(eng>=30&&eng<=32)
{
graceMarks=33-eng;
eng=33;
printf("Pass with grace of %d in English\n",graceMarks);
}
if(hindi>=30&&hindi<=32)
{
graceMarks=33-hindi;
hindi=33;
printf("Pass with grace of %d in Hindi\n",graceMarks);
}
if(graceMarks==0)
{
printf("Supplementary");
}
}
if(failCount>=2)
{
printf("Fail\n");
}
return 0;
}