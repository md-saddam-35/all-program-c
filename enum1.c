#include<stdio.h>
enum day {sunday,saterday,monday,tushday,thersday,friday};

int main(){
enum day day1,day2,day3,day4,day5,day6;

 day1=sunday+1;
 day2=saterday;
 day3=monday;
 day4=tushday;
 day5=thersday;
 day6=friday;

printf("day 1 = %d\n",day1);
printf("day 2 = %d\n",day2);
printf("day 3 = %d\n",day3);
printf("day 4 = %d\n",day4);
printf("day 5 = %d\n",day5);
printf("day 6 = %d\n",day6);


    getch();
}