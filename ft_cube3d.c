/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_cube3d.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/07 11:06:19 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/07 13:08:10 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/cube3d.h"

t_renderer	*init_rdr(void *mlx, int width, int height)
{
	t_renderer	*rdr;

	rdr = NULL;
	if (mlx == NULL)
		return (NULL);
	if (!(rdr = malloc(sizeof(t_renderer))))
		return (NULL);
	rdr->r_wid = width;
	rdr->r_hei = height;
	rdr->r_size = width * height;
	rdr->img.size_l = 0;
	rdr->img.bpp = 0;
	rdr->img.endian = 0;
	rdr->img_ptr = mlx_new_image(mlx, width, height);
	rdr->data = (unsigned int *)mlx_get_data_addr(rdr->img_ptr, &rdr->img.bpp,
											&rdr->img.size_l, &rdr->img.endian);
	return (rdr);
}

//t_resolv g_resolv[_size];

#define ESC 53

int			key_pressed(int key)
{
	if (key == ESC)
		exit(1);
	return (0);
}

int			open_window(char *map)
{
	void		*mlx_ptr;
	t_renderer	*rdr;
	void		*win;

	mlx_ptr = mlx_init();
	win = mlx_new_window(mlx_ptr, 320, 200, "test");
	return (0);
}
/*
int			open_window(t_param *param)
{
	void			*mlx_ptr;
	void			*win;
	t_renderer		*rdr;
	double			*xc = &param->res.x; //LARGUEUR IMG
	double			*yc = &param->res.y; //HAUTEUR IMG

	//		xc = 1;
	//		yc = 1;
	
	//INITIALISATION FENETRE && IMAGE
	mlx_ptr = mlx_init();
	if (*xc > 320)
		*xc = 320;
	if (*yc > 200)
		*yc = 200;
	win = mlx_new_window(mlx_ptr, 320, 200, "image");
	rdr = init_rdr(mlx_ptr, (int)*xc, (int)*yc);
	setup_resolv();
	ft_pix_coord(param, param->ref.fst_pix, param->ref.u, param->ref.v);
	print_all_param(param);
	//ray_tracing(param, param->res.x, param->res.y, rdr->data);
	mlx_put_image_to_window(mlx_ptr, win, rdr->img_ptr, 0, 0);
	mlx_key_hook(win, key_pressed, NULL);
	mlx_loop(mlx_ptr);
	return (0);
}*/
