#include<stdio.h>
int ns;
int nst;
struct Staff
{
    char Staff_name[10];
    int stime;
}s[10];
struct Student
{
	char student_name[10];
	int sttime;
}st[10];
void main()
{
    int i,s_slice,st_slice,time1=0,time2=60;
	printf("Enter no. of Staff ");
	scanf("%d",&ns);
	for(i=0;i<ns;i++)
	{
		printf("Enter name of Staff%d ",(i+1));
		scanf("%s",&s[i].Staff_name);
		printf("Enter time of query for Staff%d ",(i+1));  //IN Minutes
		scanf("%d",&s[i].stime);
	}
	printf("Enter no. of students ");
	scanf("%d",&nst);
	for(i=0;i<nst;i++)
	{
		printf("Enter name of student%d ",(i+1));
		scanf("%s",&st[i].student_name);
		printf("Enter time of query for student%d ",(i+1)); //IN Min.s
		scanf("%d",&st[i].sttime);
	}
	s_slice=60/ns;
	st_slice=60/nst;
	printf("\n Staff: ");
	for(i=0;i<ns;i++)
	{
		if(s[i].stime<s_slice)
		{
			time1=time1+s[i].stime;
			printf("\n Query has been heard %s ",s[i].Staff_name);

		}
		else if(s[i].stime=s_slice)
		{
			time1=time1+s_slice;
			printf("\n Query has been heard for %s ",s[i].Staff_name);
		}
		else
		{
			time1=time1+s_slice;
			printf("\n Query cannot be heard so long for %s ",s[i].Staff_name);

		}
	}
	printf("\n Student: ");
	for(i=0;i<nst;i++)
	{
		if(st[i].sttime<st_slice)
		{
			time2+=st[i].sttime;
			printf("\n Query has been heard for %s ",st[i].student_name);

		}
		else if(st[i].sttime=st_slice)
		{
			time2+=st_slice;
			printf("\n Query has been heard for %s ",st[i].student_name);
		}
		else
		{
			time2+=st_slice;
			printf("\n Query cannot be heard so long for %s ",st[i].student_name);
		}
	}
    int	total=time1+time2-60;
	int avg=total/(ns+nst);
	printf("\n Total Query time = %d ",total);
	printf("\n Average Query time = %d ",avg);
}
