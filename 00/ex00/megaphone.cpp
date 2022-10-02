#include <iostream>

static char *str_to_upper(char *str)
{
  for (int i = 0; str[i]; ++i)
  {
    str[i] = toupper(str[i]);
  }
  return str;
}

int main(int ac, char **av)
{
  if (ac == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  else
    for (int i = 1; i < ac; ++i)
    {
      std::cout << str_to_upper(av[i]);
    }
  std::cout << '\n';
  return (0);
}