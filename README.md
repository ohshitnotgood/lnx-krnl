# What's happening here
It ain't worth using Linux if you don't know how to write a Linux kernel. 

This repo is therefore a follow through of the book by sysprog21 about Linux Kernel Programming as I try to teach myself how to write a Linux kernel modules.

# Install?
This has been tested on a Debian machine running on bare metal.
Although if you wanna try it out yourself, I'd highly suggest running it in a VM.

Linux kernel modules share memory meaning if a driver segfaults, the entire kernel segfaults.
