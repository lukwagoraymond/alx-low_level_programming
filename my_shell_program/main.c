#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* Building process of interactive shell
* (1) Display the environment variables
* (2) Get an environment variable
* (3) Searching an executable from the PATH env
* (4) Simple shell (show case)
*/

extern char **environ;

int main(void)
{
	printf("%s\n", _getenv("PATH"));
	
	return (0);
}

