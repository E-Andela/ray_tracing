/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: eandela <eandela@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/15 17:07:07 by eandela       #+#    #+#                 */
/*   Updated: 2025/01/15 17:13:36 by eandela       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*max(int *a, int *b)
{
	if (*a > *b)
		return (a);
	else
		return (b);
}

// int *min(int *a, int *b)
// {
// 	if (*a < *b)
// 		return (a);
// 	else
// 		return (b);
// }

int	main(void)
{
	int	a;
	int	b;

	a = 30;
	b = 10;
	*max(&a, &b) = 20;
	printf("a = %d, b = %d\n", a, b);
	return (0);
}
