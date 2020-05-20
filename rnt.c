#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#define O_CREATE  0x200
#define O_WRONLY  0x001
#define O_RDONLY  0x000
#include "x86.h"

int
main(int argc, char *argv[])
{  
init_reentrant_lock();
reentrant();
printf(1,"RECURSIVE ACQUIRE DONE !\n");
exit();
}


