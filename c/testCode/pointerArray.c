


#include <stdio.h>


int main(void)
{
	char *argv[] = {"hello","the","world"};

	char **p = argv;

	printf("argv = %p\n",argv);//argv == p
	printf("p = %p\n",p);

	printf(" **p= %c\n",**p);//h
	
	printf("*((*p+1)) = %c\n", *(*p+1));//e

	printf("*(*(p+1)+1) = %c\n",*(*(p+1)+1));//h in the

	return 0;

}
