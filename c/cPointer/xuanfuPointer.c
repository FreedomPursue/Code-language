#include <stdio.h>
#include <string.h>

#include <stdlib.h>
int max(int x, int y){
	return x>y? x:y;
}
//int max(int a, int b);
int main(void)
{
#if 1
	int b = 1;
	int *p = &b;
	*p = 3;
	printf("*p =%d\n",*p);
	char *str = "hello";
	char *p1 = (char*)malloc(sizeof(str));
	//char a[] = {};
	strcpy(p1,str);
	printf("p1 = %s\n",p1);
	free(p1);
	printf("free p1 = %s\n",p1);//printf is nothing
	p1 = 0; // note here, if not give it a zero, printf is nothing;
	// give zero, printf is NULL;
	printf("set 0 p1 = %s\n",p1);
	//*p1 = 20 ; //dump, because p1 not NULL;

	//printf(" set 20 p1 = %s\n",p1);


	return 0;

}

