/* clang-format off */
/* ===-- fixunsdfsi.c - Implement __fixunsdfsi -----------------------------===
 *
 *                     The LLVM Compiler Infrastructure
 *
 * This file is dual licensed under the MIT and the University of Illinois Open
 * Source Licenses. See LICENSE.TXT for details.
 *
 * ===----------------------------------------------------------------------===
 */

__static_yoink("huge_compiler_rt_license");

#define DOUBLE_PRECISION
#include "third_party/compiler_rt/fp_lib.inc"
typedef su_int fixuint_t;
#include "third_party/compiler_rt/fp_fixuint_impl.inc"

COMPILER_RT_ABI su_int
__fixunsdfsi(fp_t a) {
    return __fixuint(a);
}

#if defined(__ARM_EABI__)
#if defined(COMPILER_RT_ARMHF_TARGET)
AEABI_RTABI su_int __aeabi_d2uiz(fp_t a) {
  return __fixunsdfsi(a);
}
#else
AEABI_RTABI su_int __aeabi_d2uiz(fp_t a) COMPILER_RT_ALIAS(__fixunsdfsi);
#endif
#endif
