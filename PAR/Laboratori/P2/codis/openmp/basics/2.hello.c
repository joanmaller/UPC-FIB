#include <stdio.h>
#include <omp.h>

/* Q1: Is the execution of the program correct? Add a   */
/*     data sharing clause to make it correct           */
/* Q2: Are the lines always printed in the same order?  */
/*     Why the messages sometimes appear intermixed?    */ 

int main ()
{
    int id;
    #pragma omp parallel private(id) num_threads(8) 
    {
	id =omp_get_thread_num();
	printf("(%d) Hello ",id);
	printf("(%d) world!\n",id);
    }
    return 0;
}
