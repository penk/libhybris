#ifndef HOOKS_H_
#define HOOKS_H_

#include <linux/elf.h>
Elf64_Addr get_hooked_symbol(const char *sym);

#endif
