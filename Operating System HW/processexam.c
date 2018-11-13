#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>
#include <wait.h>

int main(){
	pid_t pids[10], close;	//value for child process PID
	int process;	//value for the number of child process
	int state;		//value for wait()
	int i=0;		//value for count
	time_t now;		//value for current time
	
	for(process=0;process<10;process++){ //run 10 times
		pids[process] = fork(); //creat a child process
		if(pids[process]<0){ //if no creation of child process, print error and return 1.
			printf("error\n");
			exit(1);
		} else if(pids[process]==0){ //if child process is created, while loop run 100 times and print its PID and PPID, count, current time.
			while(i<100){	//run 100 times
				time(&now); //save current time
				printf("[PID = %d, Count = #%d, PPID = %d] datetime = %s",(int)getpid(),i+1,(int)getppid(),ctime(&now));
				i++;
			}
			exit(0); //end child process
		} else{ //that pids[] isn't -1,0 means parent process.
			close = wait(&state); // await child process's end and save closed child process's PID
			printf("Child has finished: PID = %d\n",close);
		}
	}

	return 0;
}

