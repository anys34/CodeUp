#include <stdio.h>

int main() {
int hour, minute, time;
int mok;
scanf("%d %d",&hour,&minute);
scanf("%d", &time);
minute = minute + time;
if(minute>59)
{
mok = minute / 60;

minute = minute % 60;
hour += mok;
if(hour>23)
{
hour = hour % 24;
}
}
printf("%d %d",hour,minute);
}