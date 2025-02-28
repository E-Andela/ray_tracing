/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   scene.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: eandela <eandela@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/28 14:35:44 by eandela       #+#    #+#                 */
/*   Updated: 2025/02/28 20:35:37 by eandela       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/camera.h"

void init_camera(t_camera *camera)
{
	camera->position.x = 0;
	camera->position.y = 0;
	camera->position.z = 0;
	camera->fov = 90;
	camera->look_direction.x = 0;
	camera->look_direction.y = 0;
	camera->look_direction.z = 1;
	camera->up.x = 0;
	camera->up.y = 1;
	camera->up.z = 0;
}

int main(void)
{
	t_camera	camera;
	double	aspect_ratio = 16.0 / 9.0;
	int width = 200;
	int height;
	
	height = width / aspect_ratio;
	init_camera(&camera);
	
	return (0);
}