#include	"mlx_int.h"

void	mlx_get_screen_size(void *mlx_ptr, int *sizex, int *sizey)
{
	Status				ret;
	t_xvar				*xvar;
	XWindowAttributes	xwAttr;
	
	xvar = mlx_ptr;
	ret = XGetWindowAttributes(xvar->display, xvar->root, &xwAttr);
	(*sizex) = xwAttr.width;
	(*sizey) = xwAttr.height;
}
