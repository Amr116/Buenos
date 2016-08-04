#include "tests/lib.h"
#include "proc/syscall.h"

int main() {

  char buf[64];
  int length = 10;
  
  syscall_read(FILEHANDLE_STDIN, &buf, length);
  syscall_write(FILEHANDLE_STDOUT, &buf, length);
  syscall_halt(); 
  return 0;
}
