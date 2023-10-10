#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;

	printf("Value of 1 before fork\n");

	pid = fork();

	if (pid == -1)
	{
		perror("Unsuccessful\n");

		return (1);
	}

	printf("Value after fork\n");

	return (0);
}
