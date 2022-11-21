#include <stdio.h>

int iterativeGCD(int a, int b);
int recursiveGCD(int a, int b);

int main()
{
    int a,b, ierror;
    printf("Please print two positive integer:\n");
    ierror= scanf("%d %d", &a, &b);
    if(ierror!=2){
        printf("Please enter two integers\n");
        return 1;
        
    }
    
    if(a<= 0 || b<= 0)
    {
        printf("These number are not positive!\n");
        return 1;
    }
    
    //call the functions
    
    printf("IterativeGCD(%d, %d) = %d\n",a,b,iterativeGCD(a,b));
    printf("RecursiveGCD(%d, %d) = %d\n",a,b,recursiveGCD(a,b));
    
    
   return 0;
}

int iterativeGCD(int a, int b){
    int temp;
    while(b!= 0){
        temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int recursiveGCD(int a, int b){
    if (b==0){
        return a;
    }
    else{
        return(recursiveGCD(b,a%b));
    }
}