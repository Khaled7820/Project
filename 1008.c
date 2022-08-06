#include <stdio.h>
int main() 
{
    int NUMBER,hours;
    float amount,SALARY;
    scanf("%d%d%f",&NUMBER,&hours,&amount);
    SALARY = amount*hours;
    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2f\n",SALARY);
    return 0;
}
