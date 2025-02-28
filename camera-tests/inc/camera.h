/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   camera.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eandela <eandela@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/28 11:56:47 by eandela       #+#    #+#                 */
/*   Updated: 2025/02/28 13:00:24 by eandela       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "point3d.h"

typedef struct s_camera
{
	t_point3d	position;
	t_point3d	look_direction;
	t_point3d	up;
	double		fov;
}	t_camera;