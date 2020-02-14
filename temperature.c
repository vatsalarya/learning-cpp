#include <stdio.h>
int main(){
	float temperatures[7][2];
	const int week=7;
	float sum1=0,sum2=0;
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	for(int i=0;i<week;i++){
		for(int j=0;j<2;j++){
			printf("+\t\t\t\t\t\tPlease enter temperatures of City-%d Day-%d: ",j+1,i+1);
			scanf("%f",&temperatures[i][j]);
		}
		printf("+\t\t\t\t\t\t********************************************\n");
	}
	printf("+\n+\n+ ");
	printf("\t\t\t\t\t City-1\t\t\t\t\t\t City-2\n+\t\t\t\t\t=========================================================");
	for(int i=0;i<week;i++){
		printf("\n+ ");
		for(int j=0;j<2;j++)
			if(j==1)
				printf("\t\t  ||\t\t\t %.2f\t",temperatures[i][j]);
			else
				printf("\t\t  \t\t\t %.2f\t",temperatures[i][j]);	
	}
	printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
