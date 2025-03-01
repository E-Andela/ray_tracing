/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   scene.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: eandela <eandela@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/28 14:35:44 by eandela       #+#    #+#                 */
/*   Updated: 2025/03/01 21:33:09 by eandela       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/camera.h"
#include <math.h>
#include <stdio.h>

void init_camera(t_camera *camera)
{
	camera->position = point_zero();
	camera->look_direction = point_forward();
	camera->up = point_up();
	camera->right = point_right();
	camera->h_fov = 90;
	camera->aspect_ratio = 16.0 / 9.0;
	camera->width = 100;
	camera->height = camera->width / camera->aspect_ratio;
	camera->v_fov = camera->height * camera->h_fov / camera->width;
}

t_point3d point_zero(void)
{
	t_point3d zero;

	zero.x = 0;
	zero.y = 0;
	zero.z = 0;
	return (zero);
}	

t_point3d point_right(void)
{
	t_point3d right;

	right.x = 1;
	right.y = 0;
	right.z = 0;
	return (right);
}

t_point3d point_up(void)
{
	t_point3d up;

	up.x = 0;
	up.y = 1;
	up.z = 0;
	return (up);
}

t_point3d point_forward(void)
{
	t_point3d forward;

	forward.x = 0;
	forward.y = 0;
	forward.z = -1;
	return (forward);
}

void set_width(t_camera *camera, int width)
{
	camera->width = width;
}

double	calculate_magnitude(t_point3d vector)
{
	double magnitude;

	magnitude = sqrt((vector.x * vector.x) + (vector.y * vector.y) + (vector.z * vector.z));
	return (magnitude);
}

t_point3d normalize(t_point3d vector)
{
	double	magnitude;
	t_point3d normalized_vector;
	
	magnitude = calculate_magnitude(vector);
	if (magnitude == 0.0)
		return (vector);
	normalized_vector.x = vector.x / magnitude;
	normalized_vector.y = vector.y / magnitude;
	normalized_vector.z = vector.z / magnitude;
	return (normalized_vector);	
}

int main(void)
{
	t_camera	camera;
	t_point3d vector = {0, 0, 0};
	
	init_camera(&camera);
	printf("x: %f, y: %f, z: %f, magnitude: %f\n", vector.x, vector.y, vector.z, calculate_magnitude(vector));
	vector = normalize(vector);
	printf("x: %f, y: %f, z: %f, magnitude: %f\n", vector.x, vector.y, vector.z, calculate_magnitude(vector));
	printf("width: %d, height: %d, h_fov: %f, v_fov: %f, aspect_ratio: %f\n", camera.width, camera.height, camera.h_fov, camera.v_fov, camera.aspect_ratio);
	
	return (0);
}