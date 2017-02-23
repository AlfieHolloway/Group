// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include "reader.h"
#include "tasks.h"

Task Reader(std::string fileName)
{
	FILE *tempFile;	
	Task tempTask;

	tempFile = fopen(fileName, "r");

	if (tempFile != NULL)
	{
		tempTask.op << tempFile;
		tempTask.a << tempFile;
		tempTask.b << tempFile;
	}
	fclose(tempFile);

	return tempTask;
}

