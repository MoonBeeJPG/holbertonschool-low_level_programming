#include <unistd.h>

#define STDOUT 1
/**
* main - a 64-bit program in assembly that prints Hello, World
* Return: exit
*/
int main()
{
      write(STDOUT, "Hello world!\n", 13);
          _exit(0);
}
