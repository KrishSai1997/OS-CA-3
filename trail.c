#include<stdio.h>
int total_time=120;//mins
int ns;
int nst;
struct Staff
{
    char* Staff_name;
    int stime;
}s[10];
struct Student
{
	char* student_name;
	int sttime;
}st[10];
void main()
{
    int i,s_slice,st_slice;
	printf("Enter no. of Staff ");
	scanf("%d",&nf);
	for(i=0;i<ns;i++)
	{
		printf("Enter name of Staff%d ",(i+1));
		scanf("%s",&s[i].Staff_name);
		printf("Enter time(in mins) of query for Staff%d ",(i+1));
		scanf("%d",&s[i].stime);
	}
	printf("Enter no. of students ");
	scanf("%d",&nst);
	for(i=0;i<nst;i++)
	{
		printf("Enter name of student%d ",(i+1));
		scanf("%s",&st[i].student_name);
		printf("Enter time(in mins) of query for student%d ",(i+1));
		scanf("%d",&st[i].stime);
	}
	s_slice=60/ns;
	st_slice=60/nst;
	
}
