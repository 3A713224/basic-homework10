#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	char upper='A';
	char lower='z';
	printf("%c %c %c 轉成小寫字母為 %c %c %c \n",upper,upper+1,upper+2,upper+32,upper+33,upper+34);
	printf("%c %c %c 轉成大寫字母為 %c %c %c \n",lower,lower-1,lower-2,lower-32,lower-33,lower-34);
	system("pause");
	return 0; 
}
