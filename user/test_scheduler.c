#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
  if(argc != 2){
    fprintf(2, "Usage: %s <ticket_count>\n", argv[0]);
    exit(1);
  }
  
  int tickets = atoi(argv[1]);
  settickets(tickets); // Set ticket count [cite: 75]
  
  while(1) {
    // Spin in an infinite loop to keep the process alive [cite: 76]
  }
  
  exit(0);
}
