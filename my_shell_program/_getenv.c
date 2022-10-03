#include "main.h"

extern char **environ;

char *_getenv(const char *filename)
{
	size_t i = 0, k = 0;
	char *env_var = NULL;

	while (environ[i] != NULL)
	{
		env_var = environ[i];

		while (env_var[k] == filename[k] && env_var[k] != '=' && env_var[k] && filename[k])
		{
			k++;
		}
		if(filename[k] == '\0')
			return (env_var);
		i++;
	}
	return (NULL);
}
