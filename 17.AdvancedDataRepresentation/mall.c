#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "queue.h"
#define MIN_PER_HR 60.0

bool newcustomer(double x);
Item customertime(long when);

int main(void) {
    Queue line;
    Item temp;
    int hours;
    int perhour;
    long cycle, cyclelimit;
    long turnaways = 0;
    long customers = 0;
    long served = 0;
    long sum_line = 0;
    int wait_time = 0;
    double min_per_cust;
    long line_wait = 0;

    InitializeQueue(&line);
    srand((unsigned int) time(0));
    puts("Enter the number of simulation hours:");
    scanf("%d", &hours);
    cyclelimit = MIN_PER_HR * hours;
    puts("Enter the average number of customers per hour:");
    scanf("%d", &perhour);
    min_per_cust = MIN_PER_HR / perhour;

    for (cycle = 0; cycle < cyclelimit; cycle++) {
        if (newcustomer(min_per_cust)) {
            if (QueueIsFull(&line)) turnaways;
            else {
                customers++;
                temp = customertime(cycle);
                EnQueue(temp, &line);
            }
        }

        if (wait_time <= 0 && !QueueIsEmpty(&line)) {
            DeQueue(&temp, &line);
            wait_time = temp.processtime;
            line_wait += cycle - temp.arrvie;
            served++;
        }
        if (wait_time > 0) wait_time--;
        sum_line += QueueItemCount(&line);
    }

    if (customers > 0) {
        puts("some out put……");
    }
    else puts("No customers!");
    EmptyTheQueue(&line);
    puts("Bye!.");

    return 0;
    
}