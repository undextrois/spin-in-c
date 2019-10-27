#include <stdio.h>
#include <windows.h>

int main()
{
  int u = 0;
  char symbol[4] = {'-', '\\', '|', '/'};

  while(u <= 100)
  {
   printf("%d%% %c\r", u, symbol[u%4]);
   Sleep(100);
   u++;
  }

  return 0;
}
