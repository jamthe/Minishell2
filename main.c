/*
** main.c for main in /home/elbouh_j/PSU_2014_minishell1
**
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
**
** Started on  Mon Jan 19 21:34:51 2015 jamal elbouhali
** Last update Mon Mar  9 15:04:55 2015 jamal elbouhali
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include "my.h"

/*char	*get_line()
{
  int	i;
  char	*str;
  char	buff[4097];

  i = read(0, buf, 4096);
  if (i > 0)
    {

      return (line_alloc(buff));
    }
  else
    return (NULL);
}
*/

char	**get_path(char **env)
{
  char	*str;
  char	**tab;

  str = my_getenv("PATH=", env);
  if ((tab = word_tab(str, ':')) == NULL)
    return (NULL);
  return (tab);
}

int	main(int ac, char **av, char **env)
{
  int	i;
  char	buf[4097];
  char	**path;
  char	**comm;

  (void)ac;
  (void)av;
  signal(SIGINT, SIG_IGN);
  if (env && env[0] != NULL)
    path = get_path(env);
  my_putstr("$> ");
  while ((i = read(0, buf, 4096)) > 0)
    {
      buf[i - 1] = 0;
      comm = word_tab(buf, ' ');
      my_putstr(comm[0]);
      if (check_builtin(comm, env) == 1 && buf[0] != '\n')
	check_exec(comm, path, env);
      my_putstr("$> ");
    }
  my_putchar('\n');
  return (0);
}
