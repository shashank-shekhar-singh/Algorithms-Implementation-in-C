#include<stdio.h>
#include<conio.h>

void hanoi (int n, char A, char B, char C)
{
if(n != 0)
{
hanoi(n- 1,A,C,B);
printf("Move disk %d from %c to %c\n", n, A, C);
hanoi(n-1,B,A,C);
}
}

void main()
{
int n;
char A = 'A', B = 'B', C = 'C';
printf("Enter number of disks :");
scanf("%d", &n);
printf("\n\n Tower of Hanoi problem with %d disks\n", n);
printf("Sequence is : \n");
hanoi (n, A, B, C);
printf("\n");
getch();
}


