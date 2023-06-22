#include <stdio.h>
struct time {
   int sec;
   int min;
   int hrs;
};

typedef struct time time;

void diff_between_time(time t1, time t2, time *diff);

int main(){
   time start_time, stop_time, diff;
   printf("Enter start time. \n");
   printf("Enter hours, minutes and seconds : ");
   scanf("%d %d %d", &start_time.hrs, &start_time.min, &start_time.sec);
   printf("Enter the stop time. \n");
   printf("Enter hours, minutes and seconds : ");
   scanf("%d %d %d", &stop_time.hrs, &stop_time.min, &stop_time.sec);

   diff_between_time(start_time, stop_time, &diff);
   printf("time Diff : %d:%d:%d - ", start_time.hrs, start_time.min, start_time.sec);
   printf("%d:%d:%d ", stop_time.hrs, stop_time.min, stop_time.sec);
   printf("= %d:%d:%d", diff.hrs, diff.min, diff.sec);

   return 0;
}

void diff_between_time(struct time start, struct time stop, struct time *diff){
   while (stop.sec > start.sec) {
      --start.min;
      start.sec += 60;
   }
   diff->sec = start.sec - stop.sec;
   while (stop.min > start.min) {
      --start.hrs;
      start.min += 60;
   }
   diff->min = start.min - stop.min;
   diff->hrs = start.hrs - stop.hrs;
}