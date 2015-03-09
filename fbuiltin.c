/*
** fbuiltin.c for fbuiltin.c in /home/elbouh_j/PSU_2014_minishell1
**
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
**
** Started on  Tue Jan 27 18:37:04 2015 jamal elbouhali
** Last update Mon Mar  9 12:46:25 2015 jamal elbouhali
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int	my_cd(char *com)
{
  /*com[my_strlen(com) - 1] = 0;*/
  if (chdir(com) == -1)
    my_putstr("cd fail\n");
  return (0);
}

int	my_unsetenv()
{
  my_putstr("Minishell2 en cours\n");
  return (0);
}

int	my_setenv()
{
  my_putstr("Minishell2 en cours\n");
  return (0);
}

int	my_env(char **env)
{
  show(env);
  return (0);
}

int	my_exit()
{
  my_putstr("Bisous bisous coeur <3\n");
  exit(0);
  return (0);
}
