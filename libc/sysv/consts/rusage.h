#ifndef COSMOPOLITAN_LIBC_SYSV_CONSTS_RUSAGE_H_
#define COSMOPOLITAN_LIBC_SYSV_CONSTS_RUSAGE_H_
#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

extern const int RUSAGE_THREAD;
extern const int RUSAGE_CHILDREN;
extern const int RUSAGE_BOTH;

#define RUSAGE_SELF     0
#define RUSAGE_CHILDREN RUSAGE_CHILDREN

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_SYSV_CONSTS_RUSAGE_H_ */
