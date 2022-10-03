#include "main.h"

char *locate(const char *name)
{
    char *path = _getenv("PATH");
    char *dir_path = NULL;
    char *file_path = NULL;

    strtok(path, "=");
    dir_path = strtok(NULL, ":");
    while(dir_path)
    {
        file_path = join_paths('\', dir_path, name);
        if(file_exits(file_path))
            return (file_path);

        dir_path = strtok(NULL, ":");
    }
}
