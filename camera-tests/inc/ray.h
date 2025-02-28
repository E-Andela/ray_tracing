/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ray.h                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: eandela <eandela@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/28 14:49:17 by eandela       #+#    #+#                 */
/*   Updated: 2025/02/28 14:50:18 by eandela       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "point3d.h"

typedef struct s_ray
{
	t_point3d	origin;
	t_point3d	direction;
}	t_ray;