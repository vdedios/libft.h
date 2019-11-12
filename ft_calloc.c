#include "libft.h"

/*
   diferencias con malloc
   - inicializa memoria a NULL
   - en lugar de reservar la memoria en un solo bloque, hace una reserva contigua para un array, bloque por bloque

Hay que hacer la reserva con malloc del tirón porque si intentamos
hacer la reserva por bloque de memoria, malloc no nos la va a asignar
de forma contigua 
*/

void	*ft_calloc(size_t count, size_t size)
{
	void *array;
	size_t i;

	i = 0;
	if (count == 0 || size == 0)
		return (NULL);
	if(!(array = (char *)malloc(size * count)))
		return (0);
	ft_memset(array, 0, size * count);
	i++;
	return (array);
}
