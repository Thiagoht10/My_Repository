#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int	a;
	int	result;

	a = 8;
	while (a > 0)
	{
		result = (result << 1) | (octet & 1);
		octet >>= 1;
		a--;
	}
	return (result);
}

void	print_bits(unsigned char octet) 
{
	int i = 8;
	while (i > 0) 
	{
		printf("%d", (octet >> (i - 1)) & 1);
		i--;
	}
	printf("\n");
}

int	main(void)
{
	unsigned char byte = 0b00100110;
	unsigned char invertido;

	invertido = reverse_bits(byte);
	print_bits(byte);
	print_bits(invertido);
	return (0);
}
