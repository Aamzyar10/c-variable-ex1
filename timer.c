#include <stdio.h>

int main (void)
{
    int sec_user = 4000;

    int hour = sec_user/3600; //1hour = 60*60 = 3600

    int min = (sec_user - hour*3600)/60; // 1min = 60

    int sec = (sec_user - hour*3600 - min*60); // 1sec = 1

    if(hour < 10)
    {
        printf("0");
    }
        printf("%d:",hour);
    if (min < 10)
    {
        printf("0");
    }
        printf("%d:",min);
    if(sec < 10)
    {
        printf("0");
    }
        printf("%d\n",sec);

        
    return (0);
}