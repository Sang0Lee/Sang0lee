#include <stdio.h>
#include <time.h>

#define set_mode	0
#define run_mode	1

int stop_watch(int _sec){

	static int mode = set_mode;
	static int sec, ref;
	int	now, rest;

	if(mode == set_mode){

		sec = _sec;
		ref = time(NULL);
		mode = run_mode;

	}

	now = time(NULL);
	rest = ref + sec > now? ref + sec - now: 0;

	if(!rest) mode = set_mode;

	return rest;
	
}


void main(){

	int set = 10, old_time, new_time;

	old_time = stop_watch(10);

	while(1){

		new_time = stop_watch(10);
		if(new_time - old_time){
			old_time = new_time;
			printf("%d\n", old_time);

		}

		if(old_time == 0) break;


	}


}
