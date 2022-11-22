#include<stdio.h>
#include<stdlib.h>
//Program to use recursive function for solving the puzzle tower of hanoi

void hanoi(int n, int source, int destination, int inter)    //Our recurssive function, inter means intermediate rod
{
 if(n==1) 
{
 printf("Move disc from %d to %d \n", source,destination);
}
 else
   {
         hanoi(n-1,source,inter,destination);
	 printf("Move disc from %d to %d\n",source,destination);
	 hanoi(n-1,inter,destination,source);
   }

}

int main(void)
{
  int n = 5;
  printf("Solution for %d discs\n",n);
  hanoi(n,1,3,2);
  return 0;
}
