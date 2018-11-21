#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_print_nbytes(unsigned char nbytes, int byte)
{
	int octet;
	int n;

	octet = 128;
	n = 0;
	while (nbytes > 1)
	{
		octet *= 256;
		nbytes--;
	}
	
	while (octet > 0)
	{
		if (octet & byte)
			ft_putchar('1');
		else
			ft_putchar('0');
	octet = octet >> 1;
	n++;
	if (n == 4)
	{
		ft_putchar(' ');
		n = 0;
	}
	}
}

int	ft_swapnbits(int *nbr, int poids, int swap, int tmpswap, int j)
{
	while((!(poids & *nbr) && swap < 4))
	{
		swap++;
		poids = poids >> 1;
	}
	if (j >= swap)
		j = swap;
	if (swap >= 4 && tmpswap != 0) //!= 0;
	{
		*nbr = *nbr << 4; 
		poids = 32768;
		return ft_swapnbits(nbr, poids, 0, 4, 4);
	}
	else if (swap > 0 && poids > 0)
	{
		poids = poids >> 4 - swap;
		return ft_swapnbits(nbr, poids, 0, 0, j);
	}
	if (j > 0)
	{
		poids = 32768;
		*nbr = *nbr << j;
		return ft_swapnbits(nbr, poids, 0, 0, j);
	}
	return (tmpswap);
}

int	main()
{
	int poids = 32768;
	int nbr = 1248;
	int *ptr;
	ptr = &nbr;
	//printf("%d\n", *ptr);
	printf ("%d en binaire = \n", poids);
	ft_print_nbytes(2, poids);
	printf("\n");
	printf("\n");
	printf("\n");



	printf ("%d en binaire = \n", nbr);
	ft_print_nbytes(2, nbr);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");

	poids = ft_swapnbits(ptr, poids, 0, 4, 4);
	printf("poids sortqnt = %d\n", poids);
	ft_print_nbytes(2, poids);
	printf("\n");
	printf("\n");
	printf("\n");

	printf ("%d en binaire = \n", nbr);
	ft_print_nbytes(2, nbr);
	printf("\n");
	printf("\n");
	printf("\n");
	return (0);

}

































