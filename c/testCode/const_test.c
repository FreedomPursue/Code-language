/*
 * int const *p
 * const int *p
 * int *const p
 * const int *const p 
 */

#include <stdio.h>
int main(int argc, char *argv[], char **env){
	int  a = 5;
	#if 0 //test 1
	int const *p;
       	p = &a;	
	#endif	
	#if 0
	const int *p = &a;
        #endif
	#if 0 // test 3
	int *const p;
	p = &a;	
	#endif 
	#if 1
	const int *const p;
		p = &a;
	#endif 
	//printf("*p+1 = %d\n",*p+1);
	printf("p+1 = %p\n",p+1);
	return 0;
}
