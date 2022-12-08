/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaassila <yaassila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:10:05 by yaassila          #+#    #+#             */
/*   Updated: 2022/12/08 12:04:06 by yaassila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		*fds;
	char	**lines;
	int		stop;

	fds = malloc(sizeof(int) * argc);
	lines = malloc(sizeof(char *) * argc);
	for (int i = 1; i < argc; i++)
	{
		fds[i - 1] = open(argv[i], O_RDONLY);
	}
	stop = 0;
	do
	{
		stop = 1;
		for (int i = 0; i < argc - 1; i++)
		{
			lines[i] = get_next_line(fds[i]);
			if (lines[i])
			{
				write(1, lines[i], strlen(lines[i]));
				free(lines[i]);
				lines[i] = NULL;
				stop &= 0;
			}
			else
			{
				close(fds[i]);
				fds[i] = -1;
			}
		}
	} while (!stop);
	free(fds);
	free(lines);
	return (0);
}
