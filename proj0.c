#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int i;

  
  for(i = 1; i < argc; i++)
{
  if(i==1)
{
printf(1, "CS550 proj0 print in user space:%s%s", argv[1], i+1 < argc ? " " : "\n");
}
else
{

  printf(1, "%s%s", argv[i], i+1 < argc ? " " : "\n");
}
}
  exit();
}
