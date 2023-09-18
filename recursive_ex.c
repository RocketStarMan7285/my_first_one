#include <stdio.h>

int fact(int n); //factorial function

int main(){
    printf("Recursive call of fact(3):\n");
    printf("\nTotal value: %d", fact(3));
}

/*This is a recursive factorial function because it calls itself
    Parameters:
    -Name: n | Type: integer | Desc: n! 
*/
int fact(int n)
{
    if(n <= 1){
        printf("   return value: 1 (base case)\n");
        return 1;
    }
    else{
        printf("   return value: n is not <= 1, calls fact(%d)\n", n-1);
        return n * fact(n - 1);
    }
}