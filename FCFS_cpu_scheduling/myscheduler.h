#pragma once
//myschedule.h
/* Students need to define their own data structure to contain
   and access objects from 'thread class'. The 'CreateThread()' 
   function should insert the threads into the student defined
   data structure after creating them.
   They are allowed to add any additional functionality (only 
   declaration in this file, define in 'myschedule.cpp')
   which they might find helpful.*/

#include "scheduler.h"
#include <vector>

//Define your data structure here.
	/*
	*
	*
	*
	*
	*/


struct bookThreads {
        int tid;
        int remaining_time;
        int arriving_time;
        int priority;
	int cond;  //0 for inCPU; 1 for NOTincpu
	
};

struct bookCPU {
	int tid;
	int remaining_time;
	int  free;	//if free 0 if not 1

};

class MyScheduler: public Scheduler {
public:
	MyScheduler(Policy p, unsigned int n) : Scheduler(p, n) {}
	bool Dispatch() override; //Function to implement scheduling policy and to keep a check on processed threads
	void CreateThread(int arriving_time, int remaining_time, int priority, int tid) override; //Function to create threads and insert them in student defined data structure

	//Declare additional methods(s) below if needed.
	/*
	*
	*
	*
	*
	*/
};
