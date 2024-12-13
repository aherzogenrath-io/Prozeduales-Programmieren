#ifndef ELEM_H
#define ELEM_H


typedef struct Job {
    int prio;
    char description[10];
} Job_t;

typedef struct QueueEl {
    Job_t job;
    struct QueueEl *next;
} QueueEl_t;



int InsertE(Job_t j);
int DelE(Job_t j);
void PrintE(void);

#endif
