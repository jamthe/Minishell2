/*
** exec.c for exec.c in /home/elbouh_j/PSU_2014_minishell1
**
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
**
** Started on  Wed Jan 28 13:38:34 2015 jamal elbouhali
** Last update Wed Mar 11 16:43:04 2015 jamal elbouhali
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
#include "my.h"

int	check_exec(char *com, char **path, char **env)
{
  pid_t	child;
  char	**comm;

  comm = word_tab(com, ' ');
  if ((child = fork()) == -1)
    {
      my_putstr("fork error");
      return (1);
    }
  if (child == 0)
    exec(comm, path, env, child);
  else
    wait(NULL);
  return (0);
}

int	exec(char **com, char **path, char **env, pid_t child)
{
  int	i;
  char	*s;

  i = 0;
  if (path == NULL)
    return (1);
  while (path[i] != NULL)
    {
      signal(SIGINT, 0);
      s = my_strcat(path[i], com[0]);
      if (access(s, X_OK) == 0)
	{
	  if (execve(s, com, env) == -1)
	    {
	    my_putstr("exec error\n");
	    return (1);
	    }
	}
      i = i + 1;
    }
  my_putstr("Command not found\n");
  kill(child, SIGINT);
  return (0);
}
