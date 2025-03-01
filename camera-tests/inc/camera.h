/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   camera.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eandela <eandela@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/28 11:56:47 by eandela       #+#    #+#                 */
/*   Updated: 2025/03/01 17:02:54 by eandela       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "point3d.h"

typedef struct s_camera
{
	t_point3d	position;
	t_point3d	look_direction;
	t_point3d	up;
	t_point3d	right;
	double		h_fov;
	double		v_fov;
	int			height;
	int			width;
	double		aspect_ratio;
}	t_camera;