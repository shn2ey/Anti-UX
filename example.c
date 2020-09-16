#include <stdio.h>

long example(long a) {
    long last_a = a;
    while (a != (a >> 40)) {
        last_a = a;
        a = a >> 40; 
    }   
    return last_a;
}


int main()
{
 	/*int i;
	for (i = 1; i < 2000; ++i) {
    printf("%d ", i,"  -  ", "%u", example(i));
    }
  	return 0;*/

 	printf("%u", example(0));
  	return 0;
  	

}