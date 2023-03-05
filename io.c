
#include <stdio.h>

#define BUF_SIZE 1000000

void stdflush(void);
size_t stdread(char *ptr, size_t size);
size_t stdwrite(char *ptr, size_t size);

int main(int argc, char **argv) {

	char buf[BUF_SIZE];
	size_t bytes = 0;


	while(bytes = stdread(buf, BUF_SIZE)) {
		stdwrite(buf, bytes);
	}

	stdflush();

	return 0;
}

void stdflush(void) {
	fflush(stdout);
}

size_t stdread(char *ptr, size_t size)
{
    return fread((void *) ptr, 1, size, stdin);
}


size_t stdwrite(char *ptr, size_t size)
{
    return fwrite((void *) ptr, 1, size, stdout);
}