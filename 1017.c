#include <stdio.h>
int main() 
{
    int time, avg_value;
    float fuel;
    scanf("%d %d", &time, &avg_value);
    fuel = ((time * avg_value) / 12.0);
    printf("%0.3f\n", fuel);
    return 0;
}
