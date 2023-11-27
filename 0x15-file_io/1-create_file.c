#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int create_file(const char *filename, char *text_content)
{
	int f, w, stlen = 0;

	if (text_content == NULL)
		text_content = "";

	f = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (f == -1)
	{
		return (-1);
	}

	while (text_content[stlen] != '\0')
	{
		stlen++;
	}

	w = write(f, text_content, stlen);
	if (w == -1)
		return (-1);
	close(f);
	return (0);
}
