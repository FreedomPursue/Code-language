/*
 * author liangziyue
 * time 2021.01.09
 * apply  how to use alarm & pause to package mysleep(sleep)
 */ 
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void func(int sig){
	
	/*printf("ret = %d\n",ret);
	printf("SIGLARM = %d\n",sig);
	exit(0);
	*/
}

struct sigaction sa = {0};
unsigned int mysleep(unsigned int a){
	
	
	//signal(SIGALRM,func); //method 1
#if 1    //method 2
	sa.sa_handler = func;
	sigaction(SIGALRM,&sa,NULL);
#endif 
	alarm(a);
	pause();
	
	return 0;

}


//struct sigaction sa = {0};

int main(void){
	
	//int ret;
	//sa.sa_handler = func;
	//sleep(5);
	
	printf("before\n");
	mysleep(10);

	//sleep(3);
	//pause(); //while(1), until alarm abort
	printf("after\n");
	//ret = alarm(5);
	//printf("ret2 = %d\n",ret);
	//signal(SIGALRM,func);
	//pause();
	//printf("hello\n");
	return 0;
}
