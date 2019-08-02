#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "queue.h"
#define MIN_PER_HR 60.0

bool newcustomer(double x);
Item customertime(long when);

int main(void) {
    Queue line1;
    Queue line2;
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

    InitializeQueue(&line1);
    InitializeQueue(&line2);

    srand((unsigned int) time(0));
    puts("Enter the number of simulation hours:");
    scanf("%d", &hours);
    cyclelimit = MIN_PER_HR * hours;
    puts("Enter the average number of customers per hour:");
    scanf("%d", &perhour);
    min_per_cust = MIN_PER_HR / perhour;

    for (cycle = 0; cycle < cyclelimit; cycle++) {
        if (newcustomer(min_per_cust)) {
            if (QueueIsFull(&line1)) turnaways;
            else {
                customers++;
                temp = customertime(cycle);
                EnQueue(temp, &line1);
            }
        }

        if (wait_time <= 0 && !QueueIsEmpty(&line1)) {
            DeQueue(&temp, &line1);
            wait_time = temp.processtime;
            line_wait += cycle - temp.arrvie;
            served++;
        }
        if (wait_time > 0) wait_time--;
        sum_line += QueueItemCount(&line1);

        if (newcustomer(min_per_cust)) {
            if (QueueIsFull(&line2)) turnaways;
            else {
                customers++;
                temp = customertime(cycle);
                EnQueue(temp, &line2);
            }
        }

        if (wait_time <= 0 && !QueueIsEmpty(&line2)) {
            DeQueue(&temp, &line2);
            wait_time = temp.processtime;
            line_wait += cycle - temp.arrvie;
            served++;
        }
        if (wait_time > 0) wait_time--;
        sum_line += QueueItemCount(&line2);
    }

    if (customers > 0) {
        puts("some out put……");
    }
    else puts("No customers!");
    EmptyTheQueue(&line1);
    EmptyTheQueue(&line2);
    puts("Bye!.");

    return 0;
}

bool newcustomer(double x) {
    if (rand() * x / RAND_MAX < 1) return true;
    else return false;
}

Item customertime(long when) {
    Item cust;

    cust.processtime = rand() % 3 + 1;
    cust.arrvie = when;

    return cust;
}