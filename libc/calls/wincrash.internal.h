#ifndef COSMOPOLITAN_LIBC_CALLS_WINCRASH_INTERNAL_H_
#define COSMOPOLITAN_LIBC_CALLS_WINCRASH_INTERNAL_H_
#include "libc/nt/struct/ntexceptionpointers.h"
#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

unsigned __wincrash(struct NtExceptionPointers *);

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_CALLS_WINCRASH_INTERNAL_H_ */
