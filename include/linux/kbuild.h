/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __LINUX_KBUILD_H
#define __LINUX_KBUILD_H

// 该宏定义 ???
#define DEFINE(sym, val) \
	asm volatile("\n.ascii \"->" #sym " %0 " #val "\"" : : "i" (val))

#define BLANK() asm volatile("\n.ascii \"->\"" : : )

#define OFFSET(sym, str, mem) \
	DEFINE(sym, offsetof(struct str, mem))

#define COMMENT(x) \
	asm volatile("\n.ascii \"->#" x "\"")

#endif
