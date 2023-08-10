#include <unistd.h>
#include <sys/syscall.h>

/**
 * main - Entry point of the program
 *
 * Return: 1 (Error)
 */
int main(void)
{
    const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    syscall(SYS_write, STDERR_FILENO, msg, 59);

    return (1);
}
