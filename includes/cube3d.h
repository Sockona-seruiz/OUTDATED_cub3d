/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_cube3d.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/07 11:06:23 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/07 12:51:40 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_CUBE3D_H
# define FT_CUBE3D_H

# include "../minilibx/mlx.h"
# include <stdio.h>
#include <stdlib.h>

typedef struct		s_fimg
{
	int				size_l;
	int				bpp;
	int				endian;
}					t_fimg;

typedef struct		s_renderer
{
	int				r_wid;
	int				r_hei;
	int				r_size;
	void			*img_ptr;
	unsigned int	*data;
	t_fimg			img;
}					t_renderer;
#endif
