#ifndef COSMOPOLITAN_LIBC_SYSV_CONSTS_SOL_H_
#define COSMOPOLITAN_LIBC_SYSV_CONSTS_SOL_H_

#define SOL_IP     0
#define SOL_ICMP   1
#define SOL_TCP    6
#define SOL_UDP    17
#define SOL_IPV6   41
#define SOL_ICMPV6 58
#define SOL_RAW    255

#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

extern const int SOL_SOCKET;
#define SOL_SOCKET SOL_SOCKET

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_SYSV_CONSTS_SOL_H_ */
