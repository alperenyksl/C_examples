//Print the values of the predefined macros
#include <stdio.h>
int main(void)
{
	printf("__LINE__ = %d \n", __LINE__);
	printf("__FILE__ = %d \n", __FILE__);
	printf("__DATE__ = %d \n", __DATE__);
	printf("__TIME__ = %d \n", __TIME__);
	printf("__STDC__ = %d \n", __STDC__);
}
