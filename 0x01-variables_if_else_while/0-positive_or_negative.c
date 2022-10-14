#include <stdlib.h>
<<<<<<< HEAD
#include <stdio.h>
#include <time.h>

/* more headers goes there */


/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)

{

=======
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{ 
>>>>>>> b85ac39a9763f989c31e777b43fc0f1d1e58d3ab
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
<<<<<<< HEAD
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);

=======
	if(n = 0){
    printf("%d is zero\n", n);
  }
  else if(n  < 0){
    printf("%d is negative\n", n);
  }	
  else if(n > 0) {
    printf("%d is positive\n", n);
  }else{
  return (0);
  }
>>>>>>> b85ac39a9763f989c31e777b43fc0f1d1e58d3ab
}
