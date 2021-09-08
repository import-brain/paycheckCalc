#include <stdio.h>
#include <cs50.h>

int main(void)
{
    
    float hourlyPay = get_float("How much do you make per hour? ");
    
    int totalHours = get_int("How many hours did you work this week? ");
    
    int overtimeHours = 0;

    int normalHours = 0;

    if (totalHours > 40)
    {
        
        normalHours = 40;

        overtimeHours = totalHours - normalHours;

    }
    else if (totalHours < 40)
    {
        
        normalHours = totalHours;
        
        overtimeHours = 0;
        
    }

    float totalPay = (normalHours * hourlyPay) + (overtimeHours * hourlyPay * 1.5);

    printf("Your total pay is: %f\n", totalPay);
}
