#include<stdio.h>
//#include<conio.h>
using namespace std;
int main()
{
	int n,bt[10],i,tat=0,wt=0,nw_bt[10];
	float avg_tat,avg_wt;
//	clrscr();
	printf("Enter the number of process");
	scanf("%d",&n);
	printf("Enter the burst time for process....\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
	}
	for(i=0;i<n;i++)
	{
		nw_bt[i]=bt[i];
	}
	for(i=0;i<n;i++)
	{
		tat=tat+bt[i];
		bt[i+1]=bt[i]+bt[i+1];
	}
	printf("turn around time is %d\n",tat);
	avg_tat=tat/3;
	printf("Average turn around time is %f\n",avg_tat);

	for(i=0;i<n-1;i++)
	{
		wt=wt+nw_bt[i];
		nw_bt[i+1]=nw_bt[i]+nw_bt[i+1];
	}
	printf("Waiting time is %d\n",wt);
	avg_wt=wt/3;
	printf("Average waiting time is %f\n",avg_wt);
//	getch();
return 0;
}
