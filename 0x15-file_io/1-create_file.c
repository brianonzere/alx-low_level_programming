#include "main.h"


/**
 * create_file - function
 * @filename: filename
 * @text_content: text_content
 * Return: return
 */


int create_file(const char *filename, char *text_content)
{

int fd, rw, len = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
if (fd < 0)
return (-1);

if (text_content != NULL)
{
while (text_content[len])
len++;

rw = write(fd, text_content, len);
if (rw < 0)
return (-1);
}

close(fd);
return (1);

}
