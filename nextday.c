#include <stdio.h>

int main(void)
{
    int day , month , year ;
    int leapyear = 0;
    printf("enter the day : ");
    scanf("%d",&day);

    printf("enter the month : ");
    scanf("%d",&month);

    printf("enter the year : ");
    scanf("%d",&year);


    if (month == 2)
    {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        {
            leapyear = 1;
        }
    }
    //30 ---> 31
    day ++ ;

    // to know if the day is correct or not
    switch (month)
    {
    case 1://31
    case 3://31
    case 5://31
    case 7://31
    case 8://31
    case 10://31
    case 12://31
        if (day <= 31)
            break;// That's OK :)
    case 4://30
    case 6://30
    case 9://30
    case 11://30
        if (day <= 30)
            break;
    case 2: // February(29,28)
        if (day <= 29 && leapyear == 1)
            break;
        else if (day <= 28)
            break;
    default:
        day = 1;
        month += 1; // month = month + 1
        if (month > 12)
        {
            month = 1;
            year += 1; // year = year + 1
        }
    }
        printf("The Next Awesome Day is: %d/ %d/ %d\n", day, month, year);

}