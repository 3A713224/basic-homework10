#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	char upper='A';
	char lower='z';
	printf("%c %c %c �ন�p�g�r���� %c %c %c \n",upper,upper+1,upper+2,upper+32,upper+33,upper+34);
	printf("%c %c %c �ন�j�g�r���� %c %c %c \n",lower,lower-1,lower-2,lower-32,lower-33,lower-34);
	system("pause");
	return 0; 
}
