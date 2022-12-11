#include <unistd.h>

int main(void) /* C Program that prints certain text without using any functions from man (3) printf and man (3) puts */
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 60);
	return (0);
}
