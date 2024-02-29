///Gragorian calendar App project.
///coded By Mohammad ifteher uddin zayed.

#include<stdio.h>
int getFirstDayOfTheYear(int year)
{
    int day = (year*365 + ((year-1)/4) - ((year-1)/100) + ((year-1)/400)) % 7;
    return day;
}
int main()
{
  char *month[]={"January","February","March","April","May","June","July","Augast","September","October","November","December"};
int daysInmonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
int i,j,totalDays,spaceCounter=0,weekDay=0,year;

///year input:

printf("Enter your favorite year:\n");
scanf("%d",&year);
printf("\n\n<<<<<<<<<<<<<<< WELCOME TO %d >>>>>>>>>>>>>>>",year);

///leaf year check;
if((year%4==0 && year%100!=0) || (year%400==0))
{
    daysInmonth[1]=29;
}

///Get the first day of the year:
weekDay = getFirstDayOfTheYear(year);
for(int i=0;i<12;i++)
{
    printf("\n\n\n...................%s.....................\n",month[i]);
    printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n\n");

    for( spaceCounter = 1; spaceCounter <= weekDay; spaceCounter++)
    {
        printf("     ");
    }
    totalDays = daysInmonth[i];
    for(j=1;j<=totalDays;j++)
    {
        printf("%5d",j);
        weekDay++;
        if(weekDay>6)
        {
            weekDay=0;
            printf("\n");
        }
    }
}
return 0;
}
