#include<stdio.h>
int main()
{
	int mod,total,count,highest,highest_mark,i,j;
	count=1;
	highest=0;
	highest_mark=0;
	for(i=1;i<=3;i++)
	{
		total=0;
		printf("student %d\n",i);
		for(j=1;j<=4;j++)
		{
		    printf("Enter module %d : ",j);
		    scanf("%d",&mod);
		    total=total+mod;
		}
	
	
		
		printf("student total %d : %d\n",i,total);
		
		if(highest< total)
		{
			highest_mark=i;
			highest= total;
		}
			
	}
	printf("highest total:%d\n",highest);
	printf("highest mark student is :%d",highest_mark);
	return 0;
}