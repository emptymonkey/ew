#define _BSD_SOURCE

#include <sys/types.h>
#include <unistd.h>


int main(int argc, char **argv) {
        int uid;

        uid = geteuid();
        setreuid(uid, uid);
        setregid(uid, uid);
        execve(*(argv + 1), argv + 1, NULL);
}
