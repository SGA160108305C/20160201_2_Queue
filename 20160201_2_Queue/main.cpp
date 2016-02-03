#include <stdio.h>
#include "Queue_Fix.h"
#include "Queue_Flexible.h"

void main()
{
	int data = -1;

	Queue_Fix fix;
	fix.ReadData();


	Queue_Flexible flex;
	flex.ReadData();

	getchar();
}