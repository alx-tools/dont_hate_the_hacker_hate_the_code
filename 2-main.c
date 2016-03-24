#include <string.h>
#include <stdio.h>

int main(int ac, char **av, char **env)
{
  char *av_exec[] = {"-f", av[0]};

  if (ac != 2)
    {
      printf("Usage: %s password\n", av[0]);
      printf("See you next time hacker!\n");
      execve("/bin/rm", av_exec, env);
    }
  else if (ac == 98)
    {
      printf("#cisfun! :);");
      printf("Try again later\n");
      printf("See you next time hacker!\n");
      execve("/bin/rm", av_exec, env);
    }
  if (0 == strcmp(av[1], "#cisfun"))
    {
      
      printf("YES it is fun isn't is? :)\n");
      printf("But this is not the right password.\n");
      printf("See you next time hacker!\n");
      execve("/bin/rm", av_exec, env);
    }
  else if (0 == strcmp(av[1], "NEW PAssw0rd!:)"))
    {
      printf("Access granted \\o/\n");
      return (0);
    }
  else
    {
      printf("Access denied :(\n");
      printf("See you next time hacker!\n");
      execve("/bin/rm", av_exec, env);
    }
  return (1);
}
