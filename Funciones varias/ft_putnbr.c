
#include <unistd.h>

void	ft_putnbr(int nb) // una simple funcion para impresion de numeros enteros
{
	char x;

	if (nb < 10 && nb >= 0) // si se trata de un numero entero entre 0 y 9 se transforma a caracter (valores decimales del 48 al 57) y se imprime
	{
		x = (nb + 48);
		write(1, &x, 1);
	}
	else if (nb >= 10) // si es mayor que diez se hace uso de recursividad dividiendo el numero entre 10 y reintroduciendolo a la funcion. Se imprime ademas el resto de la division.
	{
		ft_putnbr(nb / 10);
		x = ((nb % 10) + 48);
		write(1, &x, 1);
	}
	else // en caso de ser negativo se imprime '-' como caracter y tras pasar el numero a positivo se reintroduce a la funcion.
	{
		x = '-';
		write(1, &x, 1);
		ft_putnbr(nb * -1);
	}
}
