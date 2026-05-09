#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
  if(argc != 2) {
    fprintf(2, "Usage: test_scheduler <tickets>\n");
    exit(1);
  }

  int tickets = atoi(argv[1]);
  settickets(tickets);

  // Infinite loop to keep process alive
  while(1) {}; 

  exit(0);
}