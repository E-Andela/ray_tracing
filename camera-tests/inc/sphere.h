/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sphere.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eandela <eandela@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/28 12:39:05 by eandela       #+#    #+#                 */
/*   Updated: 2025/02/28 14:21:17 by eandela       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "point3d.h"
#include "color.h"

typedef struct s_sphere
{
	t_point3d	position;
	double		diameter;
	t_rgb_color	color;
}	t_sphere;