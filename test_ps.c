#include "types.h"
#include "stat.h"
#include "user.h"

#define N  5

void
printf(int fd, const char *s, ...)
{
  write(fd, s, strlen(s));
}

void
testps(void)
{
  int n, pid;

  printf(1, "pssyscall test\n");

  for(n=0; n<N; n++){
    pid = fork();
    if(pid < 0)
      break;
    if(pid == 0){
         int ctr = 0;
        // sleep(1000);
        while (1)
        {
            ctr++;
        }
        
    }
  }

  for(; n > 0; n--){
    if(wait() < 0){
      printf(1, "wait stopped early\n");
      exit();
    }
  }
}

int
main(void)
{
  testps();
  exit();
}
