#include<stdio.h>
#include<conio.h>
int main()
{
	int E,N,P,CC;
	printf("Program to find Cyclomatic Complexity");
	printf("\nEnter the number of Edges in the flow graph:");
	scanf("%d",&E);
	printf("\nEnter the number of nodes in the flow graph:");
	scanf("%d",&N);
	printf("\nEnter the number of Predicates Nodes in the flow graph:");
	scanf("%d",&P);
	CC=E-N+(2*P);
	printf("\nThe Cyclomatic Complexity of the flow graph is : %d",CC);
	getch();
}