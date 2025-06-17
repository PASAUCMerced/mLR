# 1 "CMakeCUDACompilerId.cu"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
# 1
#pragma GCC diagnostic push
# 1
#pragma GCC diagnostic ignored "-Wunused-variable"
# 1
#pragma GCC diagnostic ignored "-Wunused-function"
# 1
static char __nv_inited_managed_rt = 0; static void **__nv_fatbinhandle_for_managed_rt; static void __nv_save_fatbinhandle_for_managed_rt(void **in){__nv_fatbinhandle_for_managed_rt = in;} static char __nv_init_managed_rt_with_module(void **); static inline void __nv_init_managed_rt(void) { __nv_inited_managed_rt = (__nv_inited_managed_rt ? __nv_inited_managed_rt                 : __nv_init_managed_rt_with_module(__nv_fatbinhandle_for_managed_rt));}
# 1
#pragma GCC diagnostic pop
# 1
#pragma GCC diagnostic ignored "-Wunused-variable"

# 1
#define __nv_is_extended_device_lambda_closure_type(X) false
#define __nv_is_extended_host_device_lambda_closure_type(X) false
#define __nv_is_extended_device_lambda_with_preserved_return_type(X) false
#if defined(__nv_is_extended_device_lambda_closure_type) && defined(__nv_is_extended_host_device_lambda_closure_type)&& defined(__nv_is_extended_device_lambda_with_preserved_return_type)
#endif

# 1
# 61 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
#pragma GCC diagnostic push
# 64
#pragma GCC diagnostic ignored "-Wunused-function"
# 31 "/usr/include/bits/types.h" 3
typedef unsigned char __u_char; 
# 32
typedef unsigned short __u_short; 
# 33
typedef unsigned __u_int; 
# 34
typedef unsigned long __u_long; 
# 37
typedef signed char __int8_t; 
# 38
typedef unsigned char __uint8_t; 
# 39
typedef signed short __int16_t; 
# 40
typedef unsigned short __uint16_t; 
# 41
typedef signed int __int32_t; 
# 42
typedef unsigned __uint32_t; 
# 44
typedef signed long __int64_t; 
# 45
typedef unsigned long __uint64_t; 
# 52
typedef __int8_t __int_least8_t; 
# 53
typedef __uint8_t __uint_least8_t; 
# 54
typedef __int16_t __int_least16_t; 
# 55
typedef __uint16_t __uint_least16_t; 
# 56
typedef __int32_t __int_least32_t; 
# 57
typedef __uint32_t __uint_least32_t; 
# 58
typedef __int64_t __int_least64_t; 
# 59
typedef __uint64_t __uint_least64_t; 
# 63
typedef long __quad_t; 
# 64
typedef unsigned long __u_quad_t; 
# 72
typedef long __intmax_t; 
# 73
typedef unsigned long __uintmax_t; 
# 145 "/usr/include/bits/types.h" 3
typedef unsigned long __dev_t; 
# 146
typedef unsigned __uid_t; 
# 147
typedef unsigned __gid_t; 
# 148
typedef unsigned long __ino_t; 
# 149
typedef unsigned long __ino64_t; 
# 150
typedef unsigned __mode_t; 
# 151
typedef unsigned long __nlink_t; 
# 152
typedef long __off_t; 
# 153
typedef long __off64_t; 
# 154
typedef int __pid_t; 
# 155
typedef struct { int __val[2]; } __fsid_t; 
# 156
typedef long __clock_t; 
# 157
typedef unsigned long __rlim_t; 
# 158
typedef unsigned long __rlim64_t; 
# 159
typedef unsigned __id_t; 
# 160
typedef long __time_t; 
# 161
typedef unsigned __useconds_t; 
# 162
typedef long __suseconds_t; 
# 164
typedef int __daddr_t; 
# 165
typedef int __key_t; 
# 168
typedef int __clockid_t; 
# 171
typedef void *__timer_t; 
# 174
typedef long __blksize_t; 
# 179
typedef long __blkcnt_t; 
# 180
typedef long __blkcnt64_t; 
# 183
typedef unsigned long __fsblkcnt_t; 
# 184
typedef unsigned long __fsblkcnt64_t; 
# 187
typedef unsigned long __fsfilcnt_t; 
# 188
typedef unsigned long __fsfilcnt64_t; 
# 191
typedef long __fsword_t; 
# 193
typedef long __ssize_t; 
# 196
typedef long __syscall_slong_t; 
# 198
typedef unsigned long __syscall_ulong_t; 
# 202
typedef __off64_t __loff_t; 
# 203
typedef char *__caddr_t; 
# 206
typedef long __intptr_t; 
# 209
typedef unsigned __socklen_t; 
# 214
typedef int __sig_atomic_t; 
# 28 "/usr/include/ctype.h" 3
extern "C" {
# 47 "/usr/include/ctype.h" 3
enum { 
# 48
_ISupper = ((0 < 8) ? (1 << 0) << 8 : ((1 << 0) >> 8)), 
# 49
_ISlower = ((1 < 8) ? (1 << 1) << 8 : ((1 << 1) >> 8)), 
# 50
_ISalpha = ((2 < 8) ? (1 << 2) << 8 : ((1 << 2) >> 8)), 
# 51
_ISdigit = ((3 < 8) ? (1 << 3) << 8 : ((1 << 3) >> 8)), 
# 52
_ISxdigit = ((4 < 8) ? (1 << 4) << 8 : ((1 << 4) >> 8)), 
# 53
_ISspace = ((5 < 8) ? (1 << 5) << 8 : ((1 << 5) >> 8)), 
# 54
_ISprint = ((6 < 8) ? (1 << 6) << 8 : ((1 << 6) >> 8)), 
# 55
_ISgraph = ((7 < 8) ? (1 << 7) << 8 : ((1 << 7) >> 8)), 
# 56
_ISblank = ((8 < 8) ? (1 << 8) << 8 : ((1 << 8) >> 8)), 
# 57
_IScntrl, 
# 58
_ISpunct = ((10 < 8) ? (1 << 10) << 8 : ((1 << 10) >> 8)), 
# 59
_ISalnum = ((11 < 8) ? (1 << 11) << 8 : ((1 << 11) >> 8))
# 60
}; 
# 79 "/usr/include/ctype.h" 3
extern const unsigned short **__ctype_b_loc() throw()
# 80
 __attribute((const)); 
# 81
extern const __int32_t **__ctype_tolower_loc() throw()
# 82
 __attribute((const)); 
# 83
extern const __int32_t **__ctype_toupper_loc() throw()
# 84
 __attribute((const)); 
# 108 "/usr/include/ctype.h" 3
extern int isalnum(int) throw(); 
# 109
extern int isalpha(int) throw(); 
# 110
extern int iscntrl(int) throw(); 
# 111
extern int isdigit(int) throw(); 
# 112
extern int islower(int) throw(); 
# 113
extern int isgraph(int) throw(); 
# 114
extern int isprint(int) throw(); 
# 115
extern int ispunct(int) throw(); 
# 116
extern int isspace(int) throw(); 
# 117
extern int isupper(int) throw(); 
# 118
extern int isxdigit(int) throw(); 
# 122
extern int tolower(int __c) throw(); 
# 125
extern int toupper(int __c) throw(); 
# 130
extern int isblank(int) throw(); 
# 135
extern int isctype(int __c, int __mask) throw(); 
# 142
extern int isascii(int __c) throw(); 
# 146
extern int toascii(int __c) throw(); 
# 150
extern int _toupper(int) throw(); 
# 151
extern int _tolower(int) throw(); 
# 28 "/usr/include/bits/types/__locale_t.h" 3
struct __locale_struct { 
# 31
struct __locale_data *__locales[13]; 
# 34
const unsigned short *__ctype_b; 
# 35
const int *__ctype_tolower; 
# 36
const int *__ctype_toupper; 
# 39
const char *__names[13]; 
# 40
}; 
# 42
typedef __locale_struct *__locale_t; 
# 24 "/usr/include/bits/types/locale_t.h" 3
typedef __locale_t locale_t; 
# 251 "/usr/include/ctype.h" 3
extern int isalnum_l(int, locale_t) throw(); 
# 252
extern int isalpha_l(int, locale_t) throw(); 
# 253
extern int iscntrl_l(int, locale_t) throw(); 
# 254
extern int isdigit_l(int, locale_t) throw(); 
# 255
extern int islower_l(int, locale_t) throw(); 
# 256
extern int isgraph_l(int, locale_t) throw(); 
# 257
extern int isprint_l(int, locale_t) throw(); 
# 258
extern int ispunct_l(int, locale_t) throw(); 
# 259
extern int isspace_l(int, locale_t) throw(); 
# 260
extern int isupper_l(int, locale_t) throw(); 
# 261
extern int isxdigit_l(int, locale_t) throw(); 
# 263
extern int isblank_l(int, locale_t) throw(); 
# 267
extern int __tolower_l(int __c, locale_t __l) throw(); 
# 268
extern int tolower_l(int __c, locale_t __l) throw(); 
# 271
extern int __toupper_l(int __c, locale_t __l) throw(); 
# 272
extern int toupper_l(int __c, locale_t __l) throw(); 
# 327 "/usr/include/ctype.h" 3
}
# 68 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_types.h"
#if 0
# 68
enum cudaRoundMode { 
# 70
cudaRoundNearest, 
# 71
cudaRoundZero, 
# 72
cudaRoundPosInf, 
# 73
cudaRoundMinInf
# 74
}; 
#endif
# 104 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 104
struct char1 { 
# 106
signed char x; 
# 107
}; 
#endif
# 109 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 109
struct uchar1 { 
# 111
unsigned char x; 
# 112
}; 
#endif
# 115 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 115
struct __attribute((aligned(2))) char2 { 
# 117
signed char x, y; 
# 118
}; 
#endif
# 120 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 120
struct __attribute((aligned(2))) uchar2 { 
# 122
unsigned char x, y; 
# 123
}; 
#endif
# 125 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 125
struct char3 { 
# 127
signed char x, y, z; 
# 128
}; 
#endif
# 130 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 130
struct uchar3 { 
# 132
unsigned char x, y, z; 
# 133
}; 
#endif
# 135 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 135
struct __attribute((aligned(4))) char4 { 
# 137
signed char x, y, z, w; 
# 138
}; 
#endif
# 140 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 140
struct __attribute((aligned(4))) uchar4 { 
# 142
unsigned char x, y, z, w; 
# 143
}; 
#endif
# 145 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 145
struct short1 { 
# 147
short x; 
# 148
}; 
#endif
# 150 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 150
struct ushort1 { 
# 152
unsigned short x; 
# 153
}; 
#endif
# 155 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 155
struct __attribute((aligned(4))) short2 { 
# 157
short x, y; 
# 158
}; 
#endif
# 160 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 160
struct __attribute((aligned(4))) ushort2 { 
# 162
unsigned short x, y; 
# 163
}; 
#endif
# 165 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 165
struct short3 { 
# 167
short x, y, z; 
# 168
}; 
#endif
# 170 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 170
struct ushort3 { 
# 172
unsigned short x, y, z; 
# 173
}; 
#endif
# 175 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 175
struct __attribute((aligned(8))) short4 { short x; short y; short z; short w; }; 
#endif
# 176 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 176
struct __attribute((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; }; 
#endif
# 178 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 178
struct int1 { 
# 180
int x; 
# 181
}; 
#endif
# 183 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 183
struct uint1 { 
# 185
unsigned x; 
# 186
}; 
#endif
# 188 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 188
struct __attribute((aligned(8))) int2 { int x; int y; }; 
#endif
# 189 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 189
struct __attribute((aligned(8))) uint2 { unsigned x; unsigned y; }; 
#endif
# 191 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 191
struct int3 { 
# 193
int x, y, z; 
# 194
}; 
#endif
# 196 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 196
struct uint3 { 
# 198
unsigned x, y, z; 
# 199
}; 
#endif
# 201 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 201
struct __attribute((aligned(16))) int4 { 
# 203
int x, y, z, w; 
# 204
}; 
#endif
# 206 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 206
struct __attribute((aligned(16))) uint4 { 
# 208
unsigned x, y, z, w; 
# 209
}; 
#endif
# 211 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 211
struct long1 { 
# 213
long x; 
# 214
}; 
#endif
# 216 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 216
struct ulong1 { 
# 218
unsigned long x; 
# 219
}; 
#endif
# 226 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 226
struct __attribute((aligned((2) * sizeof(long)))) long2 { 
# 228
long x, y; 
# 229
}; 
#endif
# 231 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 231
struct __attribute((aligned((2) * sizeof(unsigned long)))) ulong2 { 
# 233
unsigned long x, y; 
# 234
}; 
#endif
# 238 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 238
struct long3 { 
# 240
long x, y, z; 
# 241
}; 
#endif
# 243 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 243
struct ulong3 { 
# 245
unsigned long x, y, z; 
# 246
}; 
#endif
# 248 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 248
struct __attribute((aligned(16))) long4 { 
# 250
long x, y, z, w; 
# 251
}; 
#endif
# 253 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 253
struct __attribute((aligned(16))) ulong4 { 
# 255
unsigned long x, y, z, w; 
# 256
}; 
#endif
# 258 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 258
struct float1 { 
# 260
float x; 
# 261
}; 
#endif
# 280 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 280
struct __attribute((aligned(8))) float2 { float x; float y; }; 
#endif
# 285 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 285
struct float3 { 
# 287
float x, y, z; 
# 288
}; 
#endif
# 290 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 290
struct __attribute((aligned(16))) float4 { 
# 292
float x, y, z, w; 
# 293
}; 
#endif
# 295 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 295
struct longlong1 { 
# 297
long long x; 
# 298
}; 
#endif
# 300 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 300
struct ulonglong1 { 
# 302
unsigned long long x; 
# 303
}; 
#endif
# 305 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 305
struct __attribute((aligned(16))) longlong2 { 
# 307
long long x, y; 
# 308
}; 
#endif
# 310 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 310
struct __attribute((aligned(16))) ulonglong2 { 
# 312
unsigned long long x, y; 
# 313
}; 
#endif
# 315 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 315
struct longlong3 { 
# 317
long long x, y, z; 
# 318
}; 
#endif
# 320 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 320
struct ulonglong3 { 
# 322
unsigned long long x, y, z; 
# 323
}; 
#endif
# 325 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 325
struct __attribute((aligned(16))) longlong4 { 
# 327
long long x, y, z, w; 
# 328
}; 
#endif
# 330 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 330
struct __attribute((aligned(16))) ulonglong4 { 
# 332
unsigned long long x, y, z, w; 
# 333
}; 
#endif
# 335 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 335
struct double1 { 
# 337
double x; 
# 338
}; 
#endif
# 340 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 340
struct __attribute((aligned(16))) double2 { 
# 342
double x, y; 
# 343
}; 
#endif
# 345 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 345
struct double3 { 
# 347
double x, y, z; 
# 348
}; 
#endif
# 350 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 350
struct __attribute((aligned(16))) double4 { 
# 352
double x, y, z, w; 
# 353
}; 
#endif
# 367 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef char1 
# 367
char1; 
#endif
# 368 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef uchar1 
# 368
uchar1; 
#endif
# 369 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef char2 
# 369
char2; 
#endif
# 370 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef uchar2 
# 370
uchar2; 
#endif
# 371 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef char3 
# 371
char3; 
#endif
# 372 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef uchar3 
# 372
uchar3; 
#endif
# 373 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef char4 
# 373
char4; 
#endif
# 374 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef uchar4 
# 374
uchar4; 
#endif
# 375 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef short1 
# 375
short1; 
#endif
# 376 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef ushort1 
# 376
ushort1; 
#endif
# 377 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef short2 
# 377
short2; 
#endif
# 378 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef ushort2 
# 378
ushort2; 
#endif
# 379 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef short3 
# 379
short3; 
#endif
# 380 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef ushort3 
# 380
ushort3; 
#endif
# 381 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef short4 
# 381
short4; 
#endif
# 382 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef ushort4 
# 382
ushort4; 
#endif
# 383 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef int1 
# 383
int1; 
#endif
# 384 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef uint1 
# 384
uint1; 
#endif
# 385 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef int2 
# 385
int2; 
#endif
# 386 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef uint2 
# 386
uint2; 
#endif
# 387 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef int3 
# 387
int3; 
#endif
# 388 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef uint3 
# 388
uint3; 
#endif
# 389 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef int4 
# 389
int4; 
#endif
# 390 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef uint4 
# 390
uint4; 
#endif
# 391 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef long1 
# 391
long1; 
#endif
# 392 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef ulong1 
# 392
ulong1; 
#endif
# 393 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef long2 
# 393
long2; 
#endif
# 394 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef ulong2 
# 394
ulong2; 
#endif
# 395 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef long3 
# 395
long3; 
#endif
# 396 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef ulong3 
# 396
ulong3; 
#endif
# 397 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef long4 
# 397
long4; 
#endif
# 398 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef ulong4 
# 398
ulong4; 
#endif
# 399 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef float1 
# 399
float1; 
#endif
# 400 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef float2 
# 400
float2; 
#endif
# 401 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef float3 
# 401
float3; 
#endif
# 402 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef float4 
# 402
float4; 
#endif
# 403 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef longlong1 
# 403
longlong1; 
#endif
# 404 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef ulonglong1 
# 404
ulonglong1; 
#endif
# 405 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef longlong2 
# 405
longlong2; 
#endif
# 406 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef ulonglong2 
# 406
ulonglong2; 
#endif
# 407 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef longlong3 
# 407
longlong3; 
#endif
# 408 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef ulonglong3 
# 408
ulonglong3; 
#endif
# 409 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef longlong4 
# 409
longlong4; 
#endif
# 410 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef ulonglong4 
# 410
ulonglong4; 
#endif
# 411 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef double1 
# 411
double1; 
#endif
# 412 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef double2 
# 412
double2; 
#endif
# 413 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef double3 
# 413
double3; 
#endif
# 414 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef double4 
# 414
double4; 
#endif
# 426 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
# 426
struct dim3 { 
# 428
unsigned x, y, z; 
# 440
}; 
#endif
# 442 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_types.h"
#if 0
typedef dim3 
# 442
dim3; 
#endif
# 149 "/usr/lib64/gcc/x86_64-suse-linux/7/include/stddef.h" 3
typedef long ptrdiff_t; 
# 216 "/usr/lib64/gcc/x86_64-suse-linux/7/include/stddef.h" 3
typedef unsigned long size_t; 
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
# 437 "/usr/lib64/gcc/x86_64-suse-linux/7/include/stddef.h" 3
typedef 
# 426 "/usr/lib64/gcc/x86_64-suse-linux/7/include/stddef.h" 3
struct { 
# 427
long long __max_align_ll __attribute((__aligned__(__alignof__(long long)))); 
# 428
long double __max_align_ld __attribute((__aligned__(__alignof__(long double)))); 
# 437 "/usr/lib64/gcc/x86_64-suse-linux/7/include/stddef.h" 3
} max_align_t; 
# 444
typedef __decltype((nullptr)) nullptr_t; 
# 205 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 205
enum cudaError { 
# 212
cudaSuccess, 
# 218
cudaErrorInvalidValue, 
# 224
cudaErrorMemoryAllocation, 
# 230
cudaErrorInitializationError, 
# 237
cudaErrorCudartUnloading, 
# 244
cudaErrorProfilerDisabled, 
# 252
cudaErrorProfilerNotInitialized, 
# 259
cudaErrorProfilerAlreadyStarted, 
# 266
cudaErrorProfilerAlreadyStopped, 
# 274
cudaErrorInvalidConfiguration, 
# 280
cudaErrorInvalidPitchValue = 12, 
# 286
cudaErrorInvalidSymbol, 
# 294
cudaErrorInvalidHostPointer = 16, 
# 302
cudaErrorInvalidDevicePointer, 
# 307
cudaErrorInvalidTexture, 
# 313
cudaErrorInvalidTextureBinding, 
# 320
cudaErrorInvalidChannelDescriptor, 
# 326
cudaErrorInvalidMemcpyDirection, 
# 336 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaErrorAddressOfConstant, 
# 345 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaErrorTextureFetchFailed, 
# 354 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaErrorTextureNotBound, 
# 363 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaErrorSynchronizationError, 
# 368
cudaErrorInvalidFilterSetting, 
# 374
cudaErrorInvalidNormSetting, 
# 382
cudaErrorMixedDeviceExecution, 
# 390
cudaErrorNotYetImplemented = 31, 
# 399 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaErrorMemoryValueTooLarge, 
# 405
cudaErrorStubLibrary = 34, 
# 412
cudaErrorInsufficientDriver, 
# 419
cudaErrorCallRequiresNewerDriver, 
# 425
cudaErrorInvalidSurface, 
# 431
cudaErrorDuplicateVariableName = 43, 
# 437
cudaErrorDuplicateTextureName, 
# 443
cudaErrorDuplicateSurfaceName, 
# 453 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaErrorDevicesUnavailable, 
# 466 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaErrorIncompatibleDriverContext = 49, 
# 472
cudaErrorMissingConfiguration = 52, 
# 481 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaErrorPriorLaunchFailure, 
# 487
cudaErrorLaunchMaxDepthExceeded = 65, 
# 495
cudaErrorLaunchFileScopedTex, 
# 503
cudaErrorLaunchFileScopedSurf, 
# 519 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaErrorSyncDepthExceeded, 
# 531 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaErrorLaunchPendingCountExceeded, 
# 537
cudaErrorInvalidDeviceFunction = 98, 
# 543
cudaErrorNoDevice = 100, 
# 550
cudaErrorInvalidDevice, 
# 555
cudaErrorDeviceNotLicensed, 
# 564 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaErrorSoftwareValidityNotEstablished, 
# 569
cudaErrorStartupFailure = 127, 
# 574
cudaErrorInvalidKernelImage = 200, 
# 584 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaErrorDeviceUninitialized, 
# 589
cudaErrorMapBufferObjectFailed = 205, 
# 594
cudaErrorUnmapBufferObjectFailed, 
# 600
cudaErrorArrayIsMapped, 
# 605
cudaErrorAlreadyMapped, 
# 613
cudaErrorNoKernelImageForDevice, 
# 618
cudaErrorAlreadyAcquired, 
# 623
cudaErrorNotMapped, 
# 629
cudaErrorNotMappedAsArray, 
# 635
cudaErrorNotMappedAsPointer, 
# 641
cudaErrorECCUncorrectable, 
# 647
cudaErrorUnsupportedLimit, 
# 653
cudaErrorDeviceAlreadyInUse, 
# 659
cudaErrorPeerAccessUnsupported, 
# 665
cudaErrorInvalidPtx, 
# 670
cudaErrorInvalidGraphicsContext, 
# 676
cudaErrorNvlinkUncorrectable, 
# 683
cudaErrorJitCompilerNotFound, 
# 690
cudaErrorUnsupportedPtxVersion, 
# 697
cudaErrorJitCompilationDisabled, 
# 702
cudaErrorUnsupportedExecAffinity, 
# 708
cudaErrorUnsupportedDevSideSync, 
# 713
cudaErrorInvalidSource = 300, 
# 718
cudaErrorFileNotFound, 
# 723
cudaErrorSharedObjectSymbolNotFound, 
# 728
cudaErrorSharedObjectInitFailed, 
# 733
cudaErrorOperatingSystem, 
# 740
cudaErrorInvalidResourceHandle = 400, 
# 746
cudaErrorIllegalState, 
# 754
cudaErrorLossyQuery, 
# 761
cudaErrorSymbolNotFound = 500, 
# 769
cudaErrorNotReady = 600, 
# 777
cudaErrorIllegalAddress = 700, 
# 786 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaErrorLaunchOutOfResources, 
# 797 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaErrorLaunchTimeout, 
# 803
cudaErrorLaunchIncompatibleTexturing, 
# 810
cudaErrorPeerAccessAlreadyEnabled, 
# 817
cudaErrorPeerAccessNotEnabled, 
# 830 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaErrorSetOnActiveProcess = 708, 
# 837
cudaErrorContextIsDestroyed, 
# 844
cudaErrorAssert, 
# 851
cudaErrorTooManyPeers, 
# 857
cudaErrorHostMemoryAlreadyRegistered, 
# 863
cudaErrorHostMemoryNotRegistered, 
# 872 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaErrorHardwareStackError, 
# 880
cudaErrorIllegalInstruction, 
# 889 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaErrorMisalignedAddress, 
# 900 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaErrorInvalidAddressSpace, 
# 908
cudaErrorInvalidPc, 
# 919 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaErrorLaunchFailure, 
# 928 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaErrorCooperativeLaunchTooLarge, 
# 933
cudaErrorNotPermitted = 800, 
# 939
cudaErrorNotSupported, 
# 948 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaErrorSystemNotReady, 
# 955
cudaErrorSystemDriverMismatch, 
# 964 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaErrorCompatNotSupportedOnDevice, 
# 969
cudaErrorMpsConnectionFailed, 
# 974
cudaErrorMpsRpcFailure, 
# 980
cudaErrorMpsServerNotReady, 
# 985
cudaErrorMpsMaxClientsReached, 
# 990
cudaErrorMpsMaxConnectionsReached, 
# 995
cudaErrorMpsClientTerminated, 
# 1000
cudaErrorCdpNotSupported, 
# 1005
cudaErrorCdpVersionMismatch, 
# 1010
cudaErrorStreamCaptureUnsupported = 900, 
# 1016
cudaErrorStreamCaptureInvalidated, 
# 1022
cudaErrorStreamCaptureMerge, 
# 1027
cudaErrorStreamCaptureUnmatched, 
# 1033
cudaErrorStreamCaptureUnjoined, 
# 1040
cudaErrorStreamCaptureIsolation, 
# 1046
cudaErrorStreamCaptureImplicit, 
# 1052
cudaErrorCapturedEvent, 
# 1059
cudaErrorStreamCaptureWrongThread, 
# 1064
cudaErrorTimeout, 
# 1070
cudaErrorGraphExecUpdateFailure, 
# 1080 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaErrorExternalDevice, 
# 1086
cudaErrorInvalidClusterSize, 
# 1091
cudaErrorUnknown = 999, 
# 1099
cudaErrorApiFailureBase = 10000
# 1100
}; 
#endif
# 1105 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1105
enum cudaChannelFormatKind { 
# 1107
cudaChannelFormatKindSigned, 
# 1108
cudaChannelFormatKindUnsigned, 
# 1109
cudaChannelFormatKindFloat, 
# 1110
cudaChannelFormatKindNone, 
# 1111
cudaChannelFormatKindNV12, 
# 1112
cudaChannelFormatKindUnsignedNormalized8X1, 
# 1113
cudaChannelFormatKindUnsignedNormalized8X2, 
# 1114
cudaChannelFormatKindUnsignedNormalized8X4, 
# 1115
cudaChannelFormatKindUnsignedNormalized16X1, 
# 1116
cudaChannelFormatKindUnsignedNormalized16X2, 
# 1117
cudaChannelFormatKindUnsignedNormalized16X4, 
# 1118
cudaChannelFormatKindSignedNormalized8X1, 
# 1119
cudaChannelFormatKindSignedNormalized8X2, 
# 1120
cudaChannelFormatKindSignedNormalized8X4, 
# 1121
cudaChannelFormatKindSignedNormalized16X1, 
# 1122
cudaChannelFormatKindSignedNormalized16X2, 
# 1123
cudaChannelFormatKindSignedNormalized16X4, 
# 1124
cudaChannelFormatKindUnsignedBlockCompressed1, 
# 1125
cudaChannelFormatKindUnsignedBlockCompressed1SRGB, 
# 1126
cudaChannelFormatKindUnsignedBlockCompressed2, 
# 1127
cudaChannelFormatKindUnsignedBlockCompressed2SRGB, 
# 1128
cudaChannelFormatKindUnsignedBlockCompressed3, 
# 1129
cudaChannelFormatKindUnsignedBlockCompressed3SRGB, 
# 1130
cudaChannelFormatKindUnsignedBlockCompressed4, 
# 1131
cudaChannelFormatKindSignedBlockCompressed4, 
# 1132
cudaChannelFormatKindUnsignedBlockCompressed5, 
# 1133
cudaChannelFormatKindSignedBlockCompressed5, 
# 1134
cudaChannelFormatKindUnsignedBlockCompressed6H, 
# 1135
cudaChannelFormatKindSignedBlockCompressed6H, 
# 1136
cudaChannelFormatKindUnsignedBlockCompressed7, 
# 1137
cudaChannelFormatKindUnsignedBlockCompressed7SRGB
# 1138
}; 
#endif
# 1143 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1143
struct cudaChannelFormatDesc { 
# 1145
int x; 
# 1146
int y; 
# 1147
int z; 
# 1148
int w; 
# 1149
cudaChannelFormatKind f; 
# 1150
}; 
#endif
# 1155 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
typedef struct cudaArray *cudaArray_t; 
# 1160
typedef const cudaArray *cudaArray_const_t; 
# 1162
struct cudaArray; 
# 1167
typedef struct cudaMipmappedArray *cudaMipmappedArray_t; 
# 1172
typedef const cudaMipmappedArray *cudaMipmappedArray_const_t; 
# 1174
struct cudaMipmappedArray; 
# 1184 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1184
struct cudaArraySparseProperties { 
# 1185
struct { 
# 1186
unsigned width; 
# 1187
unsigned height; 
# 1188
unsigned depth; 
# 1189
} tileExtent; 
# 1190
unsigned miptailFirstLevel; 
# 1191
unsigned long long miptailSize; 
# 1192
unsigned flags; 
# 1193
unsigned reserved[4]; 
# 1194
}; 
#endif
# 1199 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1199
struct cudaArrayMemoryRequirements { 
# 1200
size_t size; 
# 1201
size_t alignment; 
# 1202
unsigned reserved[4]; 
# 1203
}; 
#endif
# 1208 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1208
enum cudaMemoryType { 
# 1210
cudaMemoryTypeUnregistered, 
# 1211
cudaMemoryTypeHost, 
# 1212
cudaMemoryTypeDevice, 
# 1213
cudaMemoryTypeManaged
# 1214
}; 
#endif
# 1219 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1219
enum cudaMemcpyKind { 
# 1221
cudaMemcpyHostToHost, 
# 1222
cudaMemcpyHostToDevice, 
# 1223
cudaMemcpyDeviceToHost, 
# 1224
cudaMemcpyDeviceToDevice, 
# 1225
cudaMemcpyDefault
# 1226
}; 
#endif
# 1233 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1233
struct cudaPitchedPtr { 
# 1235
void *ptr; 
# 1236
size_t pitch; 
# 1237
size_t xsize; 
# 1238
size_t ysize; 
# 1239
}; 
#endif
# 1246 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1246
struct cudaExtent { 
# 1248
size_t width; 
# 1249
size_t height; 
# 1250
size_t depth; 
# 1251
}; 
#endif
# 1258 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1258
struct cudaPos { 
# 1260
size_t x; 
# 1261
size_t y; 
# 1262
size_t z; 
# 1263
}; 
#endif
# 1268 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1268
struct cudaMemcpy3DParms { 
# 1270
cudaArray_t srcArray; 
# 1271
cudaPos srcPos; 
# 1272
cudaPitchedPtr srcPtr; 
# 1274
cudaArray_t dstArray; 
# 1275
cudaPos dstPos; 
# 1276
cudaPitchedPtr dstPtr; 
# 1278
cudaExtent extent; 
# 1279
cudaMemcpyKind kind; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 1280
}; 
#endif
# 1285 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1285
struct cudaMemcpyNodeParams { 
# 1286
int flags; 
# 1287
int reserved[3]; 
# 1288
cudaMemcpy3DParms copyParams; 
# 1289
}; 
#endif
# 1294 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1294
struct cudaMemcpy3DPeerParms { 
# 1296
cudaArray_t srcArray; 
# 1297
cudaPos srcPos; 
# 1298
cudaPitchedPtr srcPtr; 
# 1299
int srcDevice; 
# 1301
cudaArray_t dstArray; 
# 1302
cudaPos dstPos; 
# 1303
cudaPitchedPtr dstPtr; 
# 1304
int dstDevice; 
# 1306
cudaExtent extent; 
# 1307
}; 
#endif
# 1312 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1312
struct cudaMemsetParams { 
# 1313
void *dst; 
# 1314
size_t pitch; 
# 1315
unsigned value; 
# 1316
unsigned elementSize; 
# 1317
size_t width; 
# 1318
size_t height; 
# 1319
}; 
#endif
# 1324 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1324
struct cudaMemsetParamsV2 { 
# 1325
void *dst; 
# 1326
size_t pitch; 
# 1327
unsigned value; 
# 1328
unsigned elementSize; 
# 1329
size_t width; 
# 1330
size_t height; 
# 1331
}; 
#endif
# 1336 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1336
enum cudaAccessProperty { 
# 1337
cudaAccessPropertyNormal, 
# 1338
cudaAccessPropertyStreaming, 
# 1339
cudaAccessPropertyPersisting
# 1340
}; 
#endif
# 1353 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1353
struct cudaAccessPolicyWindow { 
# 1354
void *base_ptr; 
# 1355
size_t num_bytes; 
# 1356
float hitRatio; 
# 1357
cudaAccessProperty hitProp; 
# 1358
cudaAccessProperty missProp; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 1359
}; 
#endif
# 1371 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
typedef void (*cudaHostFn_t)(void * userData); 
# 1376
#if 0
# 1376
struct cudaHostNodeParams { 
# 1377
cudaHostFn_t fn; 
# 1378
void *userData; 
# 1379
}; 
#endif
# 1384 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1384
struct cudaHostNodeParamsV2 { 
# 1385
cudaHostFn_t fn; 
# 1386
void *userData; 
# 1387
}; 
#endif
# 1392 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1392
enum cudaStreamCaptureStatus { 
# 1393
cudaStreamCaptureStatusNone, 
# 1394
cudaStreamCaptureStatusActive, 
# 1395
cudaStreamCaptureStatusInvalidated
# 1397
}; 
#endif
# 1403 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1403
enum cudaStreamCaptureMode { 
# 1404
cudaStreamCaptureModeGlobal, 
# 1405
cudaStreamCaptureModeThreadLocal, 
# 1406
cudaStreamCaptureModeRelaxed
# 1407
}; 
#endif
# 1409 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1409
enum cudaSynchronizationPolicy { 
# 1410
cudaSyncPolicyAuto = 1, 
# 1411
cudaSyncPolicySpin, 
# 1412
cudaSyncPolicyYield, 
# 1413
cudaSyncPolicyBlockingSync
# 1414
}; 
#endif
# 1419 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1419
enum cudaClusterSchedulingPolicy { 
# 1420
cudaClusterSchedulingPolicyDefault, 
# 1421
cudaClusterSchedulingPolicySpread, 
# 1422
cudaClusterSchedulingPolicyLoadBalancing
# 1423
}; 
#endif
# 1428 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1428
enum cudaStreamUpdateCaptureDependenciesFlags { 
# 1429
cudaStreamAddCaptureDependencies, 
# 1430
cudaStreamSetCaptureDependencies
# 1431
}; 
#endif
# 1436 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1436
enum cudaUserObjectFlags { 
# 1437
cudaUserObjectNoDestructorSync = 1
# 1438
}; 
#endif
# 1443 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1443
enum cudaUserObjectRetainFlags { 
# 1444
cudaGraphUserObjectMove = 1
# 1445
}; 
#endif
# 1450 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
struct cudaGraphicsResource; 
# 1455
#if 0
# 1455
enum cudaGraphicsRegisterFlags { 
# 1457
cudaGraphicsRegisterFlagsNone, 
# 1458
cudaGraphicsRegisterFlagsReadOnly, 
# 1459
cudaGraphicsRegisterFlagsWriteDiscard, 
# 1460
cudaGraphicsRegisterFlagsSurfaceLoadStore = 4, 
# 1461
cudaGraphicsRegisterFlagsTextureGather = 8
# 1462
}; 
#endif
# 1467 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1467
enum cudaGraphicsMapFlags { 
# 1469
cudaGraphicsMapFlagsNone, 
# 1470
cudaGraphicsMapFlagsReadOnly, 
# 1471
cudaGraphicsMapFlagsWriteDiscard
# 1472
}; 
#endif
# 1477 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1477
enum cudaGraphicsCubeFace { 
# 1479
cudaGraphicsCubeFacePositiveX, 
# 1480
cudaGraphicsCubeFaceNegativeX, 
# 1481
cudaGraphicsCubeFacePositiveY, 
# 1482
cudaGraphicsCubeFaceNegativeY, 
# 1483
cudaGraphicsCubeFacePositiveZ, 
# 1484
cudaGraphicsCubeFaceNegativeZ
# 1485
}; 
#endif
# 1490 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1490
enum cudaResourceType { 
# 1492
cudaResourceTypeArray, 
# 1493
cudaResourceTypeMipmappedArray, 
# 1494
cudaResourceTypeLinear, 
# 1495
cudaResourceTypePitch2D
# 1496
}; 
#endif
# 1501 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1501
enum cudaResourceViewFormat { 
# 1503
cudaResViewFormatNone, 
# 1504
cudaResViewFormatUnsignedChar1, 
# 1505
cudaResViewFormatUnsignedChar2, 
# 1506
cudaResViewFormatUnsignedChar4, 
# 1507
cudaResViewFormatSignedChar1, 
# 1508
cudaResViewFormatSignedChar2, 
# 1509
cudaResViewFormatSignedChar4, 
# 1510
cudaResViewFormatUnsignedShort1, 
# 1511
cudaResViewFormatUnsignedShort2, 
# 1512
cudaResViewFormatUnsignedShort4, 
# 1513
cudaResViewFormatSignedShort1, 
# 1514
cudaResViewFormatSignedShort2, 
# 1515
cudaResViewFormatSignedShort4, 
# 1516
cudaResViewFormatUnsignedInt1, 
# 1517
cudaResViewFormatUnsignedInt2, 
# 1518
cudaResViewFormatUnsignedInt4, 
# 1519
cudaResViewFormatSignedInt1, 
# 1520
cudaResViewFormatSignedInt2, 
# 1521
cudaResViewFormatSignedInt4, 
# 1522
cudaResViewFormatHalf1, 
# 1523
cudaResViewFormatHalf2, 
# 1524
cudaResViewFormatHalf4, 
# 1525
cudaResViewFormatFloat1, 
# 1526
cudaResViewFormatFloat2, 
# 1527
cudaResViewFormatFloat4, 
# 1528
cudaResViewFormatUnsignedBlockCompressed1, 
# 1529
cudaResViewFormatUnsignedBlockCompressed2, 
# 1530
cudaResViewFormatUnsignedBlockCompressed3, 
# 1531
cudaResViewFormatUnsignedBlockCompressed4, 
# 1532
cudaResViewFormatSignedBlockCompressed4, 
# 1533
cudaResViewFormatUnsignedBlockCompressed5, 
# 1534
cudaResViewFormatSignedBlockCompressed5, 
# 1535
cudaResViewFormatUnsignedBlockCompressed6H, 
# 1536
cudaResViewFormatSignedBlockCompressed6H, 
# 1537
cudaResViewFormatUnsignedBlockCompressed7
# 1538
}; 
#endif
# 1543 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1543
struct cudaResourceDesc { 
# 1544
cudaResourceType resType; 
# 1546
union { 
# 1547
struct { 
# 1548
cudaArray_t array; 
# 1549
} array; 
# 1550
struct { 
# 1551
cudaMipmappedArray_t mipmap; 
# 1552
} mipmap; 
# 1553
struct { 
# 1554
void *devPtr; 
# 1555
cudaChannelFormatDesc desc; 
# 1556
size_t sizeInBytes; 
# 1557
} linear; 
# 1558
struct { 
# 1559
void *devPtr; 
# 1560
cudaChannelFormatDesc desc; 
# 1561
size_t width; 
# 1562
size_t height; 
# 1563
size_t pitchInBytes; 
# 1564
} pitch2D; 
# 1565
} res; 
# 1566
}; 
#endif
# 1571 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1571
struct cudaResourceViewDesc { 
# 1573
cudaResourceViewFormat format; 
# 1574
size_t width; 
# 1575
size_t height; 
# 1576
size_t depth; 
# 1577
unsigned firstMipmapLevel; 
# 1578
unsigned lastMipmapLevel; 
# 1579
unsigned firstLayer; 
# 1580
unsigned lastLayer; 
# 1581
}; 
#endif
# 1586 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1586
struct cudaPointerAttributes { 
# 1592
cudaMemoryType type; 
# 1603 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
int device; 
# 1609
void *devicePointer; 
# 1618 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
void *hostPointer; 
# 1619
}; 
#endif
# 1624 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1624
struct cudaFuncAttributes { 
# 1631
size_t sharedSizeBytes; 
# 1637
size_t constSizeBytes; 
# 1642
size_t localSizeBytes; 
# 1649
int maxThreadsPerBlock; 
# 1654
int numRegs; 
# 1661
int ptxVersion; 
# 1668
int binaryVersion; 
# 1674
int cacheModeCA; 
# 1681
int maxDynamicSharedSizeBytes; 
# 1690 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
int preferredShmemCarveout; 
# 1696
int clusterDimMustBeSet; 
# 1707 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
int requiredClusterWidth; 
# 1708
int requiredClusterHeight; 
# 1709
int requiredClusterDepth; 
# 1715
int clusterSchedulingPolicyPreference; 
# 1737 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
int nonPortableClusterSizeAllowed; 
# 1742
int reserved[16]; 
# 1743
}; 
#endif
# 1748 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1748
enum cudaFuncAttribute { 
# 1750
cudaFuncAttributeMaxDynamicSharedMemorySize = 8, 
# 1751
cudaFuncAttributePreferredSharedMemoryCarveout, 
# 1752
cudaFuncAttributeClusterDimMustBeSet, 
# 1753
cudaFuncAttributeRequiredClusterWidth, 
# 1754
cudaFuncAttributeRequiredClusterHeight, 
# 1755
cudaFuncAttributeRequiredClusterDepth, 
# 1756
cudaFuncAttributeNonPortableClusterSizeAllowed, 
# 1757
cudaFuncAttributeClusterSchedulingPolicyPreference, 
# 1758
cudaFuncAttributeMax
# 1759
}; 
#endif
# 1764 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1764
enum cudaFuncCache { 
# 1766
cudaFuncCachePreferNone, 
# 1767
cudaFuncCachePreferShared, 
# 1768
cudaFuncCachePreferL1, 
# 1769
cudaFuncCachePreferEqual
# 1770
}; 
#endif
# 1776 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1776
enum cudaSharedMemConfig { 
# 1778
cudaSharedMemBankSizeDefault, 
# 1779
cudaSharedMemBankSizeFourByte, 
# 1780
cudaSharedMemBankSizeEightByte
# 1781
}; 
#endif
# 1786 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1786
enum cudaSharedCarveout { 
# 1787
cudaSharedmemCarveoutDefault = (-1), 
# 1788
cudaSharedmemCarveoutMaxShared = 100, 
# 1789
cudaSharedmemCarveoutMaxL1 = 0
# 1790
}; 
#endif
# 1795 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1795
enum cudaComputeMode { 
# 1797
cudaComputeModeDefault, 
# 1798
cudaComputeModeExclusive, 
# 1799
cudaComputeModeProhibited, 
# 1800
cudaComputeModeExclusiveProcess
# 1801
}; 
#endif
# 1806 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1806
enum cudaLimit { 
# 1808
cudaLimitStackSize, 
# 1809
cudaLimitPrintfFifoSize, 
# 1810
cudaLimitMallocHeapSize, 
# 1811
cudaLimitDevRuntimeSyncDepth, 
# 1812
cudaLimitDevRuntimePendingLaunchCount, 
# 1813
cudaLimitMaxL2FetchGranularity, 
# 1814
cudaLimitPersistingL2CacheSize
# 1815
}; 
#endif
# 1820 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1820
enum cudaMemoryAdvise { 
# 1822
cudaMemAdviseSetReadMostly = 1, 
# 1823
cudaMemAdviseUnsetReadMostly, 
# 1824
cudaMemAdviseSetPreferredLocation, 
# 1825
cudaMemAdviseUnsetPreferredLocation, 
# 1826
cudaMemAdviseSetAccessedBy, 
# 1827
cudaMemAdviseUnsetAccessedBy
# 1828
}; 
#endif
# 1833 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1833
enum cudaMemRangeAttribute { 
# 1835
cudaMemRangeAttributeReadMostly = 1, 
# 1836
cudaMemRangeAttributePreferredLocation, 
# 1837
cudaMemRangeAttributeAccessedBy, 
# 1838
cudaMemRangeAttributeLastPrefetchLocation, 
# 1839
cudaMemRangeAttributePreferredLocationType, 
# 1840
cudaMemRangeAttributePreferredLocationId, 
# 1841
cudaMemRangeAttributeLastPrefetchLocationType, 
# 1842
cudaMemRangeAttributeLastPrefetchLocationId
# 1843
}; 
#endif
# 1848 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1848
enum cudaFlushGPUDirectRDMAWritesOptions { 
# 1849
cudaFlushGPUDirectRDMAWritesOptionHost = (1 << 0), 
# 1850
cudaFlushGPUDirectRDMAWritesOptionMemOps
# 1851
}; 
#endif
# 1856 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1856
enum cudaGPUDirectRDMAWritesOrdering { 
# 1857
cudaGPUDirectRDMAWritesOrderingNone, 
# 1858
cudaGPUDirectRDMAWritesOrderingOwner = 100, 
# 1859
cudaGPUDirectRDMAWritesOrderingAllDevices = 200
# 1860
}; 
#endif
# 1865 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1865
enum cudaFlushGPUDirectRDMAWritesScope { 
# 1866
cudaFlushGPUDirectRDMAWritesToOwner = 100, 
# 1867
cudaFlushGPUDirectRDMAWritesToAllDevices = 200
# 1868
}; 
#endif
# 1873 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1873
enum cudaFlushGPUDirectRDMAWritesTarget { 
# 1874
cudaFlushGPUDirectRDMAWritesTargetCurrentDevice
# 1875
}; 
#endif
# 1881 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 1881
enum cudaDeviceAttr { 
# 1883
cudaDevAttrMaxThreadsPerBlock = 1, 
# 1884
cudaDevAttrMaxBlockDimX, 
# 1885
cudaDevAttrMaxBlockDimY, 
# 1886
cudaDevAttrMaxBlockDimZ, 
# 1887
cudaDevAttrMaxGridDimX, 
# 1888
cudaDevAttrMaxGridDimY, 
# 1889
cudaDevAttrMaxGridDimZ, 
# 1890
cudaDevAttrMaxSharedMemoryPerBlock, 
# 1891
cudaDevAttrTotalConstantMemory, 
# 1892
cudaDevAttrWarpSize, 
# 1893
cudaDevAttrMaxPitch, 
# 1894
cudaDevAttrMaxRegistersPerBlock, 
# 1895
cudaDevAttrClockRate, 
# 1896
cudaDevAttrTextureAlignment, 
# 1897
cudaDevAttrGpuOverlap, 
# 1898
cudaDevAttrMultiProcessorCount, 
# 1899
cudaDevAttrKernelExecTimeout, 
# 1900
cudaDevAttrIntegrated, 
# 1901
cudaDevAttrCanMapHostMemory, 
# 1902
cudaDevAttrComputeMode, 
# 1903
cudaDevAttrMaxTexture1DWidth, 
# 1904
cudaDevAttrMaxTexture2DWidth, 
# 1905
cudaDevAttrMaxTexture2DHeight, 
# 1906
cudaDevAttrMaxTexture3DWidth, 
# 1907
cudaDevAttrMaxTexture3DHeight, 
# 1908
cudaDevAttrMaxTexture3DDepth, 
# 1909
cudaDevAttrMaxTexture2DLayeredWidth, 
# 1910
cudaDevAttrMaxTexture2DLayeredHeight, 
# 1911
cudaDevAttrMaxTexture2DLayeredLayers, 
# 1912
cudaDevAttrSurfaceAlignment, 
# 1913
cudaDevAttrConcurrentKernels, 
# 1914
cudaDevAttrEccEnabled, 
# 1915
cudaDevAttrPciBusId, 
# 1916
cudaDevAttrPciDeviceId, 
# 1917
cudaDevAttrTccDriver, 
# 1918
cudaDevAttrMemoryClockRate, 
# 1919
cudaDevAttrGlobalMemoryBusWidth, 
# 1920
cudaDevAttrL2CacheSize, 
# 1921
cudaDevAttrMaxThreadsPerMultiProcessor, 
# 1922
cudaDevAttrAsyncEngineCount, 
# 1923
cudaDevAttrUnifiedAddressing, 
# 1924
cudaDevAttrMaxTexture1DLayeredWidth, 
# 1925
cudaDevAttrMaxTexture1DLayeredLayers, 
# 1926
cudaDevAttrMaxTexture2DGatherWidth = 45, 
# 1927
cudaDevAttrMaxTexture2DGatherHeight, 
# 1928
cudaDevAttrMaxTexture3DWidthAlt, 
# 1929
cudaDevAttrMaxTexture3DHeightAlt, 
# 1930
cudaDevAttrMaxTexture3DDepthAlt, 
# 1931
cudaDevAttrPciDomainId, 
# 1932
cudaDevAttrTexturePitchAlignment, 
# 1933
cudaDevAttrMaxTextureCubemapWidth, 
# 1934
cudaDevAttrMaxTextureCubemapLayeredWidth, 
# 1935
cudaDevAttrMaxTextureCubemapLayeredLayers, 
# 1936
cudaDevAttrMaxSurface1DWidth, 
# 1937
cudaDevAttrMaxSurface2DWidth, 
# 1938
cudaDevAttrMaxSurface2DHeight, 
# 1939
cudaDevAttrMaxSurface3DWidth, 
# 1940
cudaDevAttrMaxSurface3DHeight, 
# 1941
cudaDevAttrMaxSurface3DDepth, 
# 1942
cudaDevAttrMaxSurface1DLayeredWidth, 
# 1943
cudaDevAttrMaxSurface1DLayeredLayers, 
# 1944
cudaDevAttrMaxSurface2DLayeredWidth, 
# 1945
cudaDevAttrMaxSurface2DLayeredHeight, 
# 1946
cudaDevAttrMaxSurface2DLayeredLayers, 
# 1947
cudaDevAttrMaxSurfaceCubemapWidth, 
# 1948
cudaDevAttrMaxSurfaceCubemapLayeredWidth, 
# 1949
cudaDevAttrMaxSurfaceCubemapLayeredLayers, 
# 1950
cudaDevAttrMaxTexture1DLinearWidth, 
# 1951
cudaDevAttrMaxTexture2DLinearWidth, 
# 1952
cudaDevAttrMaxTexture2DLinearHeight, 
# 1953
cudaDevAttrMaxTexture2DLinearPitch, 
# 1954
cudaDevAttrMaxTexture2DMipmappedWidth, 
# 1955
cudaDevAttrMaxTexture2DMipmappedHeight, 
# 1956
cudaDevAttrComputeCapabilityMajor, 
# 1957
cudaDevAttrComputeCapabilityMinor, 
# 1958
cudaDevAttrMaxTexture1DMipmappedWidth, 
# 1959
cudaDevAttrStreamPrioritiesSupported, 
# 1960
cudaDevAttrGlobalL1CacheSupported, 
# 1961
cudaDevAttrLocalL1CacheSupported, 
# 1962
cudaDevAttrMaxSharedMemoryPerMultiprocessor, 
# 1963
cudaDevAttrMaxRegistersPerMultiprocessor, 
# 1964
cudaDevAttrManagedMemory, 
# 1965
cudaDevAttrIsMultiGpuBoard, 
# 1966
cudaDevAttrMultiGpuBoardGroupID, 
# 1967
cudaDevAttrHostNativeAtomicSupported, 
# 1968
cudaDevAttrSingleToDoublePrecisionPerfRatio, 
# 1969
cudaDevAttrPageableMemoryAccess, 
# 1970
cudaDevAttrConcurrentManagedAccess, 
# 1971
cudaDevAttrComputePreemptionSupported, 
# 1972
cudaDevAttrCanUseHostPointerForRegisteredMem, 
# 1973
cudaDevAttrReserved92, 
# 1974
cudaDevAttrReserved93, 
# 1975
cudaDevAttrReserved94, 
# 1976
cudaDevAttrCooperativeLaunch, 
# 1977
cudaDevAttrCooperativeMultiDeviceLaunch, 
# 1978
cudaDevAttrMaxSharedMemoryPerBlockOptin, 
# 1979
cudaDevAttrCanFlushRemoteWrites, 
# 1980
cudaDevAttrHostRegisterSupported, 
# 1981
cudaDevAttrPageableMemoryAccessUsesHostPageTables, 
# 1982
cudaDevAttrDirectManagedMemAccessFromHost, 
# 1983
cudaDevAttrMaxBlocksPerMultiprocessor = 106, 
# 1984
cudaDevAttrMaxPersistingL2CacheSize = 108, 
# 1985
cudaDevAttrMaxAccessPolicyWindowSize, 
# 1986
cudaDevAttrReservedSharedMemoryPerBlock = 111, 
# 1987
cudaDevAttrSparseCudaArraySupported, 
# 1988
cudaDevAttrHostRegisterReadOnlySupported, 
# 1989
cudaDevAttrTimelineSemaphoreInteropSupported, 
# 1990
cudaDevAttrMaxTimelineSemaphoreInteropSupported = 114, 
# 1991
cudaDevAttrMemoryPoolsSupported, 
# 1992
cudaDevAttrGPUDirectRDMASupported, 
# 1993
cudaDevAttrGPUDirectRDMAFlushWritesOptions, 
# 1994
cudaDevAttrGPUDirectRDMAWritesOrdering, 
# 1995
cudaDevAttrMemoryPoolSupportedHandleTypes, 
# 1996
cudaDevAttrClusterLaunch, 
# 1997
cudaDevAttrDeferredMappingCudaArraySupported, 
# 1998
cudaDevAttrReserved122, 
# 1999
cudaDevAttrReserved123, 
# 2000
cudaDevAttrReserved124, 
# 2001
cudaDevAttrIpcEventSupport, 
# 2002
cudaDevAttrMemSyncDomainCount, 
# 2003
cudaDevAttrReserved127, 
# 2004
cudaDevAttrReserved128, 
# 2005
cudaDevAttrReserved129, 
# 2006
cudaDevAttrNumaConfig, 
# 2007
cudaDevAttrNumaId, 
# 2008
cudaDevAttrReserved132, 
# 2009
cudaDevAttrMpsEnabled, 
# 2010
cudaDevAttrHostNumaId, 
# 2011
cudaDevAttrMax
# 2012
}; 
#endif
# 2017 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2017
enum cudaMemPoolAttr { 
# 2027 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaMemPoolReuseFollowEventDependencies = 1, 
# 2034
cudaMemPoolReuseAllowOpportunistic, 
# 2042
cudaMemPoolReuseAllowInternalDependencies, 
# 2053 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaMemPoolAttrReleaseThreshold, 
# 2059
cudaMemPoolAttrReservedMemCurrent, 
# 2066
cudaMemPoolAttrReservedMemHigh, 
# 2072
cudaMemPoolAttrUsedMemCurrent, 
# 2079
cudaMemPoolAttrUsedMemHigh
# 2080
}; 
#endif
# 2085 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2085
enum cudaMemLocationType { 
# 2086
cudaMemLocationTypeInvalid, 
# 2087
cudaMemLocationTypeDevice, 
# 2088
cudaMemLocationTypeHost, 
# 2089
cudaMemLocationTypeHostNuma, 
# 2090
cudaMemLocationTypeHostNumaCurrent
# 2091
}; 
#endif
# 2099 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2099
struct cudaMemLocation { 
# 2100
cudaMemLocationType type; 
# 2101
int id; 
# 2102
}; 
#endif
# 2107 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2107
enum cudaMemAccessFlags { 
# 2108
cudaMemAccessFlagsProtNone, 
# 2109
cudaMemAccessFlagsProtRead, 
# 2110
cudaMemAccessFlagsProtReadWrite = 3
# 2111
}; 
#endif
# 2116 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2116
struct cudaMemAccessDesc { 
# 2117
cudaMemLocation location; 
# 2118
cudaMemAccessFlags flags; 
# 2119
}; 
#endif
# 2124 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2124
enum cudaMemAllocationType { 
# 2125
cudaMemAllocationTypeInvalid, 
# 2129
cudaMemAllocationTypePinned, 
# 2130
cudaMemAllocationTypeMax = 2147483647
# 2131
}; 
#endif
# 2136 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2136
enum cudaMemAllocationHandleType { 
# 2137
cudaMemHandleTypeNone, 
# 2138
cudaMemHandleTypePosixFileDescriptor, 
# 2139
cudaMemHandleTypeWin32, 
# 2140
cudaMemHandleTypeWin32Kmt = 4, 
# 2141
cudaMemHandleTypeFabric = 8
# 2142
}; 
#endif
# 2147 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2147
struct cudaMemPoolProps { 
# 2148
cudaMemAllocationType allocType; 
# 2149
cudaMemAllocationHandleType handleTypes; 
# 2150
cudaMemLocation location; 
# 2157
void *win32SecurityAttributes; 
# 2158
size_t maxSize; 
# 2159
unsigned char reserved[56]; 
# 2160
}; 
#endif
# 2165 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2165
struct cudaMemPoolPtrExportData { 
# 2166
unsigned char reserved[64]; 
# 2167
}; 
#endif
# 2172 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2172
struct cudaMemAllocNodeParams { 
# 2177
cudaMemPoolProps poolProps; 
# 2178
const cudaMemAccessDesc *accessDescs; 
# 2179
size_t accessDescCount; 
# 2180
size_t bytesize; 
# 2181
void *dptr; 
# 2182
}; 
#endif
# 2187 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2187
struct cudaMemAllocNodeParamsV2 { 
# 2192
cudaMemPoolProps poolProps; 
# 2193
const cudaMemAccessDesc *accessDescs; 
# 2194
size_t accessDescCount; 
# 2195
size_t bytesize; 
# 2196
void *dptr; 
# 2197
}; 
#endif
# 2202 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2202
struct cudaMemFreeNodeParams { 
# 2203
void *dptr; 
# 2204
}; 
#endif
# 2209 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2209
enum cudaGraphMemAttributeType { 
# 2214
cudaGraphMemAttrUsedMemCurrent, 
# 2221
cudaGraphMemAttrUsedMemHigh, 
# 2228
cudaGraphMemAttrReservedMemCurrent, 
# 2235
cudaGraphMemAttrReservedMemHigh
# 2236
}; 
#endif
# 2242 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2242
enum cudaDeviceP2PAttr { 
# 2243
cudaDevP2PAttrPerformanceRank = 1, 
# 2244
cudaDevP2PAttrAccessSupported, 
# 2245
cudaDevP2PAttrNativeAtomicSupported, 
# 2246
cudaDevP2PAttrCudaArrayAccessSupported
# 2247
}; 
#endif
# 2254 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2254
struct CUuuid_st { 
# 2255
char bytes[16]; 
# 2256
}; 
#endif
# 2257 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef CUuuid_st 
# 2257
CUuuid; 
#endif
# 2259 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef CUuuid_st 
# 2259
cudaUUID_t; 
#endif
# 2264 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2264
struct cudaDeviceProp { 
# 2266
char name[256]; 
# 2267
cudaUUID_t uuid; 
# 2268
char luid[8]; 
# 2269
unsigned luidDeviceNodeMask; 
# 2270
size_t totalGlobalMem; 
# 2271
size_t sharedMemPerBlock; 
# 2272
int regsPerBlock; 
# 2273
int warpSize; 
# 2274
size_t memPitch; 
# 2275
int maxThreadsPerBlock; 
# 2276
int maxThreadsDim[3]; 
# 2277
int maxGridSize[3]; 
# 2278
int clockRate; 
# 2279
size_t totalConstMem; 
# 2280
int major; 
# 2281
int minor; 
# 2282
size_t textureAlignment; 
# 2283
size_t texturePitchAlignment; 
# 2284
int deviceOverlap; 
# 2285
int multiProcessorCount; 
# 2286
int kernelExecTimeoutEnabled; 
# 2287
int integrated; 
# 2288
int canMapHostMemory; 
# 2289
int computeMode; 
# 2290
int maxTexture1D; 
# 2291
int maxTexture1DMipmap; 
# 2292
int maxTexture1DLinear; 
# 2293
int maxTexture2D[2]; 
# 2294
int maxTexture2DMipmap[2]; 
# 2295
int maxTexture2DLinear[3]; 
# 2296
int maxTexture2DGather[2]; 
# 2297
int maxTexture3D[3]; 
# 2298
int maxTexture3DAlt[3]; 
# 2299
int maxTextureCubemap; 
# 2300
int maxTexture1DLayered[2]; 
# 2301
int maxTexture2DLayered[3]; 
# 2302
int maxTextureCubemapLayered[2]; 
# 2303
int maxSurface1D; 
# 2304
int maxSurface2D[2]; 
# 2305
int maxSurface3D[3]; 
# 2306
int maxSurface1DLayered[2]; 
# 2307
int maxSurface2DLayered[3]; 
# 2308
int maxSurfaceCubemap; 
# 2309
int maxSurfaceCubemapLayered[2]; 
# 2310
size_t surfaceAlignment; 
# 2311
int concurrentKernels; 
# 2312
int ECCEnabled; 
# 2313
int pciBusID; 
# 2314
int pciDeviceID; 
# 2315
int pciDomainID; 
# 2316
int tccDriver; 
# 2317
int asyncEngineCount; 
# 2318
int unifiedAddressing; 
# 2319
int memoryClockRate; 
# 2320
int memoryBusWidth; 
# 2321
int l2CacheSize; 
# 2322
int persistingL2CacheMaxSize; 
# 2323
int maxThreadsPerMultiProcessor; 
# 2324
int streamPrioritiesSupported; 
# 2325
int globalL1CacheSupported; 
# 2326
int localL1CacheSupported; 
# 2327
size_t sharedMemPerMultiprocessor; 
# 2328
int regsPerMultiprocessor; 
# 2329
int managedMemory; 
# 2330
int isMultiGpuBoard; 
# 2331
int multiGpuBoardGroupID; 
# 2332
int hostNativeAtomicSupported; 
# 2333
int singleToDoublePrecisionPerfRatio; 
# 2334
int pageableMemoryAccess; 
# 2335
int concurrentManagedAccess; 
# 2336
int computePreemptionSupported; 
# 2337
int canUseHostPointerForRegisteredMem; 
# 2338
int cooperativeLaunch; 
# 2339
int cooperativeMultiDeviceLaunch; 
# 2340
size_t sharedMemPerBlockOptin; 
# 2341
int pageableMemoryAccessUsesHostPageTables; 
# 2342
int directManagedMemAccessFromHost; 
# 2343
int maxBlocksPerMultiProcessor; 
# 2344
int accessPolicyMaxWindowSize; 
# 2345
size_t reservedSharedMemPerBlock; 
# 2346
int hostRegisterSupported; 
# 2347
int sparseCudaArraySupported; 
# 2348
int hostRegisterReadOnlySupported; 
# 2349
int timelineSemaphoreInteropSupported; 
# 2350
int memoryPoolsSupported; 
# 2351
int gpuDirectRDMASupported; 
# 2352
unsigned gpuDirectRDMAFlushWritesOptions; 
# 2353
int gpuDirectRDMAWritesOrdering; 
# 2354
unsigned memoryPoolSupportedHandleTypes; 
# 2355
int deferredMappingCudaArraySupported; 
# 2356
int ipcEventSupported; 
# 2357
int clusterLaunch; 
# 2358
int unifiedFunctionPointers; 
# 2359
int reserved2[2]; 
# 2360
int reserved1[1]; 
# 2361
int reserved[60]; 
# 2362
}; 
#endif
# 2375 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef 
# 2372
struct cudaIpcEventHandle_st { 
# 2374
char reserved[64]; 
# 2375
} cudaIpcEventHandle_t; 
#endif
# 2383 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef 
# 2380
struct cudaIpcMemHandle_st { 
# 2382
char reserved[64]; 
# 2383
} cudaIpcMemHandle_t; 
#endif
# 2391 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef 
# 2388
struct cudaMemFabricHandle_st { 
# 2390
char reserved[64]; 
# 2391
} cudaMemFabricHandle_t; 
#endif
# 2396 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2396
enum cudaExternalMemoryHandleType { 
# 2400
cudaExternalMemoryHandleTypeOpaqueFd = 1, 
# 2404
cudaExternalMemoryHandleTypeOpaqueWin32, 
# 2408
cudaExternalMemoryHandleTypeOpaqueWin32Kmt, 
# 2412
cudaExternalMemoryHandleTypeD3D12Heap, 
# 2416
cudaExternalMemoryHandleTypeD3D12Resource, 
# 2420
cudaExternalMemoryHandleTypeD3D11Resource, 
# 2424
cudaExternalMemoryHandleTypeD3D11ResourceKmt, 
# 2428
cudaExternalMemoryHandleTypeNvSciBuf
# 2429
}; 
#endif
# 2471 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2471
struct cudaExternalMemoryHandleDesc { 
# 2475
cudaExternalMemoryHandleType type; 
# 2476
union { 
# 2482
int fd; 
# 2498 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
struct { 
# 2502
void *handle; 
# 2507
const void *name; 
# 2508
} win32; 
# 2513
const void *nvSciBufObject; 
# 2514
} handle; 
# 2518
unsigned long long size; 
# 2522
unsigned flags; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 2523
}; 
#endif
# 2528 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2528
struct cudaExternalMemoryBufferDesc { 
# 2532
unsigned long long offset; 
# 2536
unsigned long long size; 
# 2540
unsigned flags; 
# 2541
}; 
#endif
# 2546 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2546
struct cudaExternalMemoryMipmappedArrayDesc { 
# 2551
unsigned long long offset; 
# 2555
cudaChannelFormatDesc formatDesc; 
# 2559
cudaExtent extent; 
# 2564
unsigned flags; 
# 2568
unsigned numLevels; 
# 2569
}; 
#endif
# 2574 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2574
enum cudaExternalSemaphoreHandleType { 
# 2578
cudaExternalSemaphoreHandleTypeOpaqueFd = 1, 
# 2582
cudaExternalSemaphoreHandleTypeOpaqueWin32, 
# 2586
cudaExternalSemaphoreHandleTypeOpaqueWin32Kmt, 
# 2590
cudaExternalSemaphoreHandleTypeD3D12Fence, 
# 2594
cudaExternalSemaphoreHandleTypeD3D11Fence, 
# 2598
cudaExternalSemaphoreHandleTypeNvSciSync, 
# 2602
cudaExternalSemaphoreHandleTypeKeyedMutex, 
# 2606
cudaExternalSemaphoreHandleTypeKeyedMutexKmt, 
# 2610
cudaExternalSemaphoreHandleTypeTimelineSemaphoreFd, 
# 2614
cudaExternalSemaphoreHandleTypeTimelineSemaphoreWin32
# 2615
}; 
#endif
# 2620 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2620
struct cudaExternalSemaphoreHandleDesc { 
# 2624
cudaExternalSemaphoreHandleType type; 
# 2625
union { 
# 2632
int fd; 
# 2648 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
struct { 
# 2652
void *handle; 
# 2657
const void *name; 
# 2658
} win32; 
# 2662
const void *nvSciSyncObj; 
# 2663
} handle; 
# 2667
unsigned flags; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 2668
}; 
#endif
# 2673 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2673
struct cudaExternalSemaphoreSignalParams_v1 { 
# 2674
struct { 
# 2678
struct { 
# 2682
unsigned long long value; 
# 2683
} fence; 
# 2684
union { 
# 2689
void *fence; 
# 2690
unsigned long long reserved; 
# 2691
} nvSciSync; 
# 2695
struct { 
# 2699
unsigned long long key; 
# 2700
} keyedMutex; 
# 2701
} params; 
# 2712 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
unsigned flags; 
# 2713
}; 
#endif
# 2718 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2718
struct cudaExternalSemaphoreWaitParams_v1 { 
# 2719
struct { 
# 2723
struct { 
# 2727
unsigned long long value; 
# 2728
} fence; 
# 2729
union { 
# 2734
void *fence; 
# 2735
unsigned long long reserved; 
# 2736
} nvSciSync; 
# 2740
struct { 
# 2744
unsigned long long key; 
# 2748
unsigned timeoutMs; 
# 2749
} keyedMutex; 
# 2750
} params; 
# 2761 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
unsigned flags; 
# 2762
}; 
#endif
# 2767 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2767
struct cudaExternalSemaphoreSignalParams { 
# 2768
struct { 
# 2772
struct { 
# 2776
unsigned long long value; 
# 2777
} fence; 
# 2778
union { 
# 2783
void *fence; 
# 2784
unsigned long long reserved; 
# 2785
} nvSciSync; 
# 2789
struct { 
# 2793
unsigned long long key; 
# 2794
} keyedMutex; 
# 2795
unsigned reserved[12]; 
# 2796
} params; 
# 2807 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
unsigned flags; 
# 2808
unsigned reserved[16]; 
# 2809
}; 
#endif
# 2814 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2814
struct cudaExternalSemaphoreWaitParams { 
# 2815
struct { 
# 2819
struct { 
# 2823
unsigned long long value; 
# 2824
} fence; 
# 2825
union { 
# 2830
void *fence; 
# 2831
unsigned long long reserved; 
# 2832
} nvSciSync; 
# 2836
struct { 
# 2840
unsigned long long key; 
# 2844
unsigned timeoutMs; 
# 2845
} keyedMutex; 
# 2846
unsigned reserved[10]; 
# 2847
} params; 
# 2858 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
unsigned flags; 
# 2859
unsigned reserved[16]; 
# 2860
}; 
#endif
# 2871 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef cudaError 
# 2871
cudaError_t; 
#endif
# 2876 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef struct CUstream_st *
# 2876
cudaStream_t; 
#endif
# 2881 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef struct CUevent_st *
# 2881
cudaEvent_t; 
#endif
# 2886 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef cudaGraphicsResource *
# 2886
cudaGraphicsResource_t; 
#endif
# 2891 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef struct CUexternalMemory_st *
# 2891
cudaExternalMemory_t; 
#endif
# 2896 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef struct CUexternalSemaphore_st *
# 2896
cudaExternalSemaphore_t; 
#endif
# 2901 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef struct CUgraph_st *
# 2901
cudaGraph_t; 
#endif
# 2906 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef struct CUgraphNode_st *
# 2906
cudaGraphNode_t; 
#endif
# 2911 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef struct CUuserObject_st *
# 2911
cudaUserObject_t; 
#endif
# 2916 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef unsigned long long 
# 2916
cudaGraphConditionalHandle; 
#endif
# 2921 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef struct CUfunc_st *
# 2921
cudaFunction_t; 
#endif
# 2926 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef struct CUkern_st *
# 2926
cudaKernel_t; 
#endif
# 2931 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef struct CUmemPoolHandle_st *
# 2931
cudaMemPool_t; 
#endif
# 2936 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2936
enum cudaCGScope { 
# 2937
cudaCGScopeInvalid, 
# 2938
cudaCGScopeGrid, 
# 2939
cudaCGScopeMultiGrid
# 2940
}; 
#endif
# 2945 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2945
struct cudaLaunchParams { 
# 2947
void *func; 
# 2948
dim3 gridDim; 
# 2949
dim3 blockDim; 
# 2950
void **args; 
# 2951
size_t sharedMem; 
# 2952
cudaStream_t stream; 
# 2953
}; 
#endif
# 2958 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2958
struct cudaKernelNodeParams { 
# 2959
void *func; 
# 2960
dim3 gridDim; 
# 2961
dim3 blockDim; 
# 2962
unsigned sharedMemBytes; 
# 2963
void **kernelParams; 
# 2964
void **extra; 
# 2965
}; 
#endif
# 2970 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2970
struct cudaKernelNodeParamsV2 { 
# 2971
void *func; 
# 2973
dim3 gridDim; 
# 2974
dim3 blockDim; 
# 2980
unsigned sharedMemBytes; 
# 2981
void **kernelParams; 
# 2982
void **extra; 
# 2983
}; 
#endif
# 2988 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2988
struct cudaExternalSemaphoreSignalNodeParams { 
# 2989
cudaExternalSemaphore_t *extSemArray; 
# 2990
const cudaExternalSemaphoreSignalParams *paramsArray; 
# 2991
unsigned numExtSems; 
# 2992
}; 
#endif
# 2997 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 2997
struct cudaExternalSemaphoreSignalNodeParamsV2 { 
# 2998
cudaExternalSemaphore_t *extSemArray; 
# 2999
const cudaExternalSemaphoreSignalParams *paramsArray; 
# 3000
unsigned numExtSems; 
# 3001
}; 
#endif
# 3006 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 3006
struct cudaExternalSemaphoreWaitNodeParams { 
# 3007
cudaExternalSemaphore_t *extSemArray; 
# 3008
const cudaExternalSemaphoreWaitParams *paramsArray; 
# 3009
unsigned numExtSems; 
# 3010
}; 
#endif
# 3015 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 3015
struct cudaExternalSemaphoreWaitNodeParamsV2 { 
# 3016
cudaExternalSemaphore_t *extSemArray; 
# 3017
const cudaExternalSemaphoreWaitParams *paramsArray; 
# 3018
unsigned numExtSems; 
# 3019
}; 
#endif
# 3021 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 3021
enum cudaGraphConditionalHandleFlags { 
# 3022
cudaGraphCondAssignDefault = 1
# 3023
}; 
#endif
# 3028 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 3028
enum cudaGraphConditionalNodeType { 
# 3029
cudaGraphCondTypeIf, 
# 3030
cudaGraphCondTypeWhile
# 3031
}; 
#endif
# 3036 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 3036
struct cudaConditionalNodeParams { 
# 3037
cudaGraphConditionalHandle handle; 
# 3040
cudaGraphConditionalNodeType type; 
# 3041
unsigned size; 
# 3042
cudaGraph_t *phGraph_out; 
# 3052 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
}; 
#endif
# 3057 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 3057
enum cudaGraphNodeType { 
# 3058
cudaGraphNodeTypeKernel, 
# 3059
cudaGraphNodeTypeMemcpy, 
# 3060
cudaGraphNodeTypeMemset, 
# 3061
cudaGraphNodeTypeHost, 
# 3062
cudaGraphNodeTypeGraph, 
# 3063
cudaGraphNodeTypeEmpty, 
# 3064
cudaGraphNodeTypeWaitEvent, 
# 3065
cudaGraphNodeTypeEventRecord, 
# 3066
cudaGraphNodeTypeExtSemaphoreSignal, 
# 3067
cudaGraphNodeTypeExtSemaphoreWait, 
# 3068
cudaGraphNodeTypeMemAlloc, 
# 3069
cudaGraphNodeTypeMemFree, 
# 3070
cudaGraphNodeTypeConditional = 13, 
# 3087 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaGraphNodeTypeCount
# 3088
}; 
#endif
# 3093 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 3093
struct cudaChildGraphNodeParams { 
# 3094
cudaGraph_t graph; 
# 3096
}; 
#endif
# 3101 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 3101
struct cudaEventRecordNodeParams { 
# 3102
cudaEvent_t event; 
# 3103
}; 
#endif
# 3108 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 3108
struct cudaEventWaitNodeParams { 
# 3109
cudaEvent_t event; 
# 3110
}; 
#endif
# 3115 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 3115
struct cudaGraphNodeParams { 
# 3116
cudaGraphNodeType type; 
# 3117
int reserved0[3]; 
# 3119
union { 
# 3120
long long reserved1[29]; 
# 3121
cudaKernelNodeParamsV2 kernel; 
# 3122
cudaMemcpyNodeParams memcpy; 
# 3123
cudaMemsetParamsV2 memset; 
# 3124
cudaHostNodeParamsV2 host; 
# 3125
cudaChildGraphNodeParams graph; 
# 3126
cudaEventWaitNodeParams eventWait; 
# 3127
cudaEventRecordNodeParams eventRecord; 
# 3128
cudaExternalSemaphoreSignalNodeParamsV2 extSemSignal; 
# 3129
cudaExternalSemaphoreWaitNodeParamsV2 extSemWait; 
# 3130
cudaMemAllocNodeParamsV2 alloc; 
# 3131
cudaMemFreeNodeParams free; 
# 3132
cudaConditionalNodeParams conditional; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 3133
}; 
# 3135
long long reserved2; 
# 3136
}; 
#endif
# 3148 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef 
# 3141
enum cudaGraphDependencyType_enum { 
# 3142
cudaGraphDependencyTypeDefault, 
# 3143
cudaGraphDependencyTypeProgrammatic
# 3148
} cudaGraphDependencyType; 
#endif
# 3178 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef 
# 3155 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
struct cudaGraphEdgeData_st { 
# 3156
unsigned char from_port; 
# 3166 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
unsigned char to_port; 
# 3173
unsigned char type; 
# 3176
unsigned char reserved[5]; 
# 3178
} cudaGraphEdgeData; 
#endif
# 3199 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
typedef struct CUgraphExec_st *cudaGraphExec_t; 
# 3204
#if 0
# 3204
enum cudaGraphExecUpdateResult { 
# 3205
cudaGraphExecUpdateSuccess, 
# 3206
cudaGraphExecUpdateError, 
# 3207
cudaGraphExecUpdateErrorTopologyChanged, 
# 3208
cudaGraphExecUpdateErrorNodeTypeChanged, 
# 3209
cudaGraphExecUpdateErrorFunctionChanged, 
# 3210
cudaGraphExecUpdateErrorParametersChanged, 
# 3211
cudaGraphExecUpdateErrorNotSupported, 
# 3212
cudaGraphExecUpdateErrorUnsupportedFunctionChange, 
# 3213
cudaGraphExecUpdateErrorAttributesChanged
# 3214
}; 
#endif
# 3225 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef 
# 3219
enum cudaGraphInstantiateResult { 
# 3220
cudaGraphInstantiateSuccess, 
# 3221
cudaGraphInstantiateError, 
# 3222
cudaGraphInstantiateInvalidStructure, 
# 3223
cudaGraphInstantiateNodeOperationNotSupported, 
# 3224
cudaGraphInstantiateMultipleDevicesNotSupported
# 3225
} cudaGraphInstantiateResult; 
#endif
# 3236 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef 
# 3230
struct cudaGraphInstantiateParams_st { 
# 3232
unsigned long long flags; 
# 3233
cudaStream_t uploadStream; 
# 3234
cudaGraphNode_t errNode_out; 
# 3235
cudaGraphInstantiateResult result_out; 
# 3236
} cudaGraphInstantiateParams; 
#endif
# 3258 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef 
# 3241
struct cudaGraphExecUpdateResultInfo_st { 
# 3245
cudaGraphExecUpdateResult result; 
# 3252
cudaGraphNode_t errorNode; 
# 3257
cudaGraphNode_t errorFromNode; 
# 3258
} cudaGraphExecUpdateResultInfo; 
#endif
# 3263 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
typedef struct CUgraphDeviceUpdatableNode_st *cudaGraphDeviceNode_t; 
# 3268
#if 0
# 3268
enum cudaGraphKernelNodeField { 
# 3270
cudaGraphKernelNodeFieldInvalid, 
# 3271
cudaGraphKernelNodeFieldGridDim, 
# 3272
cudaGraphKernelNodeFieldParam, 
# 3273
cudaGraphKernelNodeFieldEnabled
# 3274
}; 
#endif
# 3279 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 3279
struct cudaGraphKernelNodeUpdate { 
# 3280
cudaGraphDeviceNode_t node; 
# 3281
cudaGraphKernelNodeField field; 
# 3282
union { 
# 3284
dim3 gridDim; 
# 3289
struct { 
# 3290
const void *pValue; 
# 3291
size_t offset; 
# 3292
size_t size; 
# 3293
} param; 
# 3294
unsigned isEnabled; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 3295
} updateData; 
# 3296
}; 
#endif
# 3302 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 3302
enum cudaGetDriverEntryPointFlags { 
# 3303
cudaEnableDefault, 
# 3304
cudaEnableLegacyStream, 
# 3305
cudaEnablePerThreadDefaultStream
# 3306
}; 
#endif
# 3311 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 3311
enum cudaDriverEntryPointQueryResult { 
# 3312
cudaDriverEntryPointSuccess, 
# 3313
cudaDriverEntryPointSymbolNotFound, 
# 3314
cudaDriverEntryPointVersionNotSufficent
# 3315
}; 
#endif
# 3320 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 3320
enum cudaGraphDebugDotFlags { 
# 3321
cudaGraphDebugDotFlagsVerbose = (1 << 0), 
# 3322
cudaGraphDebugDotFlagsKernelNodeParams = (1 << 2), 
# 3323
cudaGraphDebugDotFlagsMemcpyNodeParams = (1 << 3), 
# 3324
cudaGraphDebugDotFlagsMemsetNodeParams = (1 << 4), 
# 3325
cudaGraphDebugDotFlagsHostNodeParams = (1 << 5), 
# 3326
cudaGraphDebugDotFlagsEventNodeParams = (1 << 6), 
# 3327
cudaGraphDebugDotFlagsExtSemasSignalNodeParams = (1 << 7), 
# 3328
cudaGraphDebugDotFlagsExtSemasWaitNodeParams = (1 << 8), 
# 3329
cudaGraphDebugDotFlagsKernelNodeAttributes = (1 << 9), 
# 3330
cudaGraphDebugDotFlagsHandles = (1 << 10), 
# 3331
cudaGraphDebugDotFlagsConditionalNodeParams = (1 << 15)
# 3332
}; 
#endif
# 3337 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 3337
enum cudaGraphInstantiateFlags { 
# 3338
cudaGraphInstantiateFlagAutoFreeOnLaunch = 1, 
# 3339
cudaGraphInstantiateFlagUpload, 
# 3342
cudaGraphInstantiateFlagDeviceLaunch = 4, 
# 3345
cudaGraphInstantiateFlagUseNodePriority = 8
# 3347
}; 
#endif
# 3368 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef 
# 3365
enum cudaLaunchMemSyncDomain { 
# 3366
cudaLaunchMemSyncDomainDefault, 
# 3367
cudaLaunchMemSyncDomainRemote
# 3368
} cudaLaunchMemSyncDomain; 
#endif
# 3384 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef 
# 3381
struct cudaLaunchMemSyncDomainMap_st { 
# 3382
unsigned char default_; 
# 3383
unsigned char remote; 
# 3384
} cudaLaunchMemSyncDomainMap; 
#endif
# 3493 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef 
# 3389 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
enum cudaLaunchAttributeID { 
# 3390
cudaLaunchAttributeIgnore, 
# 3391
cudaLaunchAttributeAccessPolicyWindow, 
# 3393
cudaLaunchAttributeCooperative, 
# 3395
cudaLaunchAttributeSynchronizationPolicy, 
# 3396
cudaLaunchAttributeClusterDimension, 
# 3398
cudaLaunchAttributeClusterSchedulingPolicyPreference, 
# 3400
cudaLaunchAttributeProgrammaticStreamSerialization, 
# 3411 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaLaunchAttributeProgrammaticEvent, 
# 3437 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaLaunchAttributePriority, 
# 3439
cudaLaunchAttributeMemSyncDomainMap, 
# 3441
cudaLaunchAttributeMemSyncDomain, 
# 3443
cudaLaunchAttributeLaunchCompletionEvent = 12, 
# 3465 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
cudaLaunchAttributeDeviceUpdatableKernelNode
# 3493 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
} cudaLaunchAttributeID; 
#endif
# 3549 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef 
# 3498 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
union cudaLaunchAttributeValue { 
# 3499
char pad[64]; 
# 3500
cudaAccessPolicyWindow accessPolicyWindow; 
# 3501
int cooperative; 
# 3503
cudaSynchronizationPolicy syncPolicy; 
# 3517 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
struct { 
# 3518
unsigned x; 
# 3519
unsigned y; 
# 3520
unsigned z; 
# 3521
} clusterDim; 
# 3522
cudaClusterSchedulingPolicy clusterSchedulingPolicyPreference; 
# 3525
int programmaticStreamSerializationAllowed; 
# 3527
struct { 
# 3528
cudaEvent_t event; 
# 3529
int flags; 
# 3531
int triggerAtBlockStart; 
# 3532
} programmaticEvent; 
# 3533
int priority; 
# 3534
cudaLaunchMemSyncDomainMap memSyncDomainMap; 
# 3537
cudaLaunchMemSyncDomain memSyncDomain; 
# 3539
struct { 
# 3540
cudaEvent_t event; 
# 3541
int flags; 
# 3543
} launchCompletionEvent; 
# 3545
struct { 
# 3546
int deviceUpdatable; 
# 3547
cudaGraphDeviceNode_t devNode; 
# 3548
} deviceUpdatableKernelNode; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 3549
} cudaLaunchAttributeValue; 
#endif
# 3558 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef 
# 3554
struct cudaLaunchAttribute_st { 
# 3555
cudaLaunchAttributeID id; 
# 3556
char pad[(8) - sizeof(cudaLaunchAttributeID)]; 
# 3557
cudaLaunchAttributeValue val; 
# 3558
} cudaLaunchAttribute; 
#endif
# 3570 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef 
# 3563
struct cudaLaunchConfig_st { 
# 3564
dim3 gridDim; 
# 3565
dim3 blockDim; 
# 3566
size_t dynamicSmemBytes; 
# 3567
cudaStream_t stream; 
# 3568
cudaLaunchAttribute *attrs; 
# 3569
unsigned numAttrs; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 3570
} cudaLaunchConfig_t; 
#endif
# 3593 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
# 3593
enum cudaDeviceNumaConfig { 
# 3594
cudaDeviceNumaConfigNone, 
# 3595
cudaDeviceNumaConfigNumaNode
# 3596
}; 
#endif
# 3601 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
typedef struct cudaAsyncCallbackEntry *cudaAsyncCallbackHandle_t; 
# 3603
struct cudaAsyncCallbackEntry; 
# 3610
#if 0
typedef 
# 3608
enum cudaAsyncNotificationType_enum { 
# 3609
cudaAsyncNotificationTypeOverBudget = 1
# 3610
} cudaAsyncNotificationType; 
#endif
# 3623 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
#if 0
typedef 
# 3615
struct cudaAsyncNotificationInfo { 
# 3617
cudaAsyncNotificationType type; 
# 3618
union { 
# 3619
struct { 
# 3620
unsigned long long bytesOverBudget; 
# 3621
} overBudget; 
# 3622
} info; 
# 3623
} cudaAsyncNotificationInfo_t; 
#endif
# 3625 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_types.h"
typedef void (*cudaAsyncCallback)(cudaAsyncNotificationInfo_t *, void *, cudaAsyncCallbackHandle_t); 
# 86 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/surface_types.h"
#if 0
# 86
enum cudaSurfaceBoundaryMode { 
# 88
cudaBoundaryModeZero, 
# 89
cudaBoundaryModeClamp, 
# 90
cudaBoundaryModeTrap
# 91
}; 
#endif
# 96 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/surface_types.h"
#if 0
# 96
enum cudaSurfaceFormatMode { 
# 98
cudaFormatModeForced, 
# 99
cudaFormatModeAuto
# 100
}; 
#endif
# 105 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/surface_types.h"
#if 0
typedef unsigned long long 
# 105
cudaSurfaceObject_t; 
#endif
# 86 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_types.h"
#if 0
# 86
enum cudaTextureAddressMode { 
# 88
cudaAddressModeWrap, 
# 89
cudaAddressModeClamp, 
# 90
cudaAddressModeMirror, 
# 91
cudaAddressModeBorder
# 92
}; 
#endif
# 97 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_types.h"
#if 0
# 97
enum cudaTextureFilterMode { 
# 99
cudaFilterModePoint, 
# 100
cudaFilterModeLinear
# 101
}; 
#endif
# 106 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_types.h"
#if 0
# 106
enum cudaTextureReadMode { 
# 108
cudaReadModeElementType, 
# 109
cudaReadModeNormalizedFloat
# 110
}; 
#endif
# 115 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_types.h"
#if 0
# 115
struct cudaTextureDesc { 
# 120
cudaTextureAddressMode addressMode[3]; 
# 124
cudaTextureFilterMode filterMode; 
# 128
cudaTextureReadMode readMode; 
# 132
int sRGB; 
# 136
float borderColor[4]; 
# 140
int normalizedCoords; 
# 144
unsigned maxAnisotropy; 
# 148
cudaTextureFilterMode mipmapFilterMode; 
# 152
float mipmapLevelBias; 
# 156
float minMipmapLevelClamp; 
# 160
float maxMipmapLevelClamp; 
# 164
int disableTrilinearOptimization; 
# 168
int seamlessCubemap; 
# 169
}; 
#endif
# 174 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_types.h"
#if 0
typedef unsigned long long 
# 174
cudaTextureObject_t; 
#endif
# 89 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/library_types.h"
typedef 
# 57
enum cudaDataType_t { 
# 59
CUDA_R_16F = 2, 
# 60
CUDA_C_16F = 6, 
# 61
CUDA_R_16BF = 14, 
# 62
CUDA_C_16BF, 
# 63
CUDA_R_32F = 0, 
# 64
CUDA_C_32F = 4, 
# 65
CUDA_R_64F = 1, 
# 66
CUDA_C_64F = 5, 
# 67
CUDA_R_4I = 16, 
# 68
CUDA_C_4I, 
# 69
CUDA_R_4U, 
# 70
CUDA_C_4U, 
# 71
CUDA_R_8I = 3, 
# 72
CUDA_C_8I = 7, 
# 73
CUDA_R_8U, 
# 74
CUDA_C_8U, 
# 75
CUDA_R_16I = 20, 
# 76
CUDA_C_16I, 
# 77
CUDA_R_16U, 
# 78
CUDA_C_16U, 
# 79
CUDA_R_32I = 10, 
# 80
CUDA_C_32I, 
# 81
CUDA_R_32U, 
# 82
CUDA_C_32U, 
# 83
CUDA_R_64I = 24, 
# 84
CUDA_C_64I, 
# 85
CUDA_R_64U, 
# 86
CUDA_C_64U, 
# 87
CUDA_R_8F_E4M3, 
# 88
CUDA_R_8F_E5M2
# 89
} cudaDataType; 
# 97
typedef 
# 92
enum libraryPropertyType_t { 
# 94
MAJOR_VERSION, 
# 95
MINOR_VERSION, 
# 96
PATCH_LEVEL
# 97
} libraryPropertyType; 
# 2192 "/usr/include/c++/7/x86_64-suse-linux/bits/c++config.h" 3
namespace std { 
# 2194
typedef unsigned long size_t; 
# 2195
typedef long ptrdiff_t; 
# 2198
typedef __decltype((nullptr)) nullptr_t; 
# 2200
}
# 2214 "/usr/include/c++/7/x86_64-suse-linux/bits/c++config.h" 3
namespace std { 
# 2216
inline namespace __cxx11 __attribute((__abi_tag__("cxx11"))) { }
# 2217
}
# 2218
namespace __gnu_cxx { 
# 2220
inline namespace __cxx11 __attribute((__abi_tag__("cxx11"))) { }
# 2221
}
# 33 "/usr/include/stdlib.h" 3
extern "C" {
# 74 "/usr/include/bits/floatn.h" 3
typedef float __complex__ __cfloat128 __attribute((__mode__(__TC__))); 
# 86 "/usr/include/bits/floatn.h" 3
typedef __float128 _Float128; 
# 214 "/usr/include/bits/floatn-common.h" 3
typedef float _Float32; 
# 251 "/usr/include/bits/floatn-common.h" 3
typedef double _Float64; 
# 268 "/usr/include/bits/floatn-common.h" 3
typedef double _Float32x; 
# 285 "/usr/include/bits/floatn-common.h" 3
typedef long double _Float64x; 
# 62 "/usr/include/stdlib.h" 3
typedef 
# 59
struct { 
# 60
int quot; 
# 61
int rem; 
# 62
} div_t; 
# 70
typedef 
# 67
struct { 
# 68
long quot; 
# 69
long rem; 
# 70
} ldiv_t; 
# 80
__extension__ typedef 
# 77
struct { 
# 78
long long quot; 
# 79
long long rem; 
# 80
} lldiv_t; 
# 97 "/usr/include/stdlib.h" 3
extern size_t __ctype_get_mb_cur_max() throw(); 
# 101
extern double atof(const char * __nptr) throw()
# 102
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 104
extern int atoi(const char * __nptr) throw()
# 105
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 107
extern long atol(const char * __nptr) throw()
# 108
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 112
__extension__ extern long long atoll(const char * __nptr) throw()
# 113
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 117
extern double strtod(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 119
 __attribute((__nonnull__(1))); 
# 123
extern float strtof(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 124
 __attribute((__nonnull__(1))); 
# 126
extern long double strtold(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 128
 __attribute((__nonnull__(1))); 
# 140 "/usr/include/stdlib.h" 3
extern _Float32 strtof32(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 142
 __attribute((__nonnull__(1))); 
# 146
extern _Float64 strtof64(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 148
 __attribute((__nonnull__(1))); 
# 152
extern _Float128 strtof128(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 154
 __attribute((__nonnull__(1))); 
# 158
extern _Float32x strtof32x(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 160
 __attribute((__nonnull__(1))); 
# 164
extern _Float64x strtof64x(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 166
 __attribute((__nonnull__(1))); 
# 176 "/usr/include/stdlib.h" 3
extern long strtol(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 178
 __attribute((__nonnull__(1))); 
# 180
extern unsigned long strtoul(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 182
 __attribute((__nonnull__(1))); 
# 187
__extension__ extern long long strtoq(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 189
 __attribute((__nonnull__(1))); 
# 192
__extension__ extern unsigned long long strtouq(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 194
 __attribute((__nonnull__(1))); 
# 200
__extension__ extern long long strtoll(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 202
 __attribute((__nonnull__(1))); 
# 205
__extension__ extern unsigned long long strtoull(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 207
 __attribute((__nonnull__(1))); 
# 212
extern int strfromd(char * __dest, size_t __size, const char * __format, double __f) throw()
# 214
 __attribute((__nonnull__(3))); 
# 216
extern int strfromf(char * __dest, size_t __size, const char * __format, float __f) throw()
# 218
 __attribute((__nonnull__(3))); 
# 220
extern int strfroml(char * __dest, size_t __size, const char * __format, long double __f) throw()
# 222
 __attribute((__nonnull__(3))); 
# 232 "/usr/include/stdlib.h" 3
extern int strfromf32(char * __dest, size_t __size, const char * __format, _Float32 __f) throw()
# 234
 __attribute((__nonnull__(3))); 
# 238
extern int strfromf64(char * __dest, size_t __size, const char * __format, _Float64 __f) throw()
# 240
 __attribute((__nonnull__(3))); 
# 244
extern int strfromf128(char * __dest, size_t __size, const char * __format, _Float128 __f) throw()
# 246
 __attribute((__nonnull__(3))); 
# 250
extern int strfromf32x(char * __dest, size_t __size, const char * __format, _Float32x __f) throw()
# 252
 __attribute((__nonnull__(3))); 
# 256
extern int strfromf64x(char * __dest, size_t __size, const char * __format, _Float64x __f) throw()
# 258
 __attribute((__nonnull__(3))); 
# 274 "/usr/include/stdlib.h" 3
extern long strtol_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, locale_t __loc) throw()
# 276
 __attribute((__nonnull__(1, 4))); 
# 278
extern unsigned long strtoul_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, locale_t __loc) throw()
# 281
 __attribute((__nonnull__(1, 4))); 
# 284
__extension__ extern long long strtoll_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, locale_t __loc) throw()
# 287
 __attribute((__nonnull__(1, 4))); 
# 290
__extension__ extern unsigned long long strtoull_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, locale_t __loc) throw()
# 293
 __attribute((__nonnull__(1, 4))); 
# 295
extern double strtod_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, locale_t __loc) throw()
# 297
 __attribute((__nonnull__(1, 3))); 
# 299
extern float strtof_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, locale_t __loc) throw()
# 301
 __attribute((__nonnull__(1, 3))); 
# 303
extern long double strtold_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, locale_t __loc) throw()
# 306
 __attribute((__nonnull__(1, 3))); 
# 316 "/usr/include/stdlib.h" 3
extern _Float32 strtof32_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, locale_t __loc) throw()
# 319
 __attribute((__nonnull__(1, 3))); 
# 323
extern _Float64 strtof64_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, locale_t __loc) throw()
# 326
 __attribute((__nonnull__(1, 3))); 
# 330
extern _Float128 strtof128_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, locale_t __loc) throw()
# 333
 __attribute((__nonnull__(1, 3))); 
# 337
extern _Float32x strtof32x_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, locale_t __loc) throw()
# 340
 __attribute((__nonnull__(1, 3))); 
# 344
extern _Float64x strtof64x_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, locale_t __loc) throw()
# 347
 __attribute((__nonnull__(1, 3))); 
# 385 "/usr/include/stdlib.h" 3
extern char *l64a(long __n) throw(); 
# 388
extern long a64l(const char * __s) throw()
# 389
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 27 "/usr/include/sys/types.h" 3
extern "C" {
# 33
typedef __u_char u_char; 
# 34
typedef __u_short u_short; 
# 35
typedef __u_int u_int; 
# 36
typedef __u_long u_long; 
# 37
typedef __quad_t quad_t; 
# 38
typedef __u_quad_t u_quad_t; 
# 39
typedef __fsid_t fsid_t; 
# 42
typedef __loff_t loff_t; 
# 47
typedef __ino_t ino_t; 
# 54
typedef __ino64_t ino64_t; 
# 59
typedef __dev_t dev_t; 
# 64
typedef __gid_t gid_t; 
# 69
typedef __mode_t mode_t; 
# 74
typedef __nlink_t nlink_t; 
# 79
typedef __uid_t uid_t; 
# 85
typedef __off_t off_t; 
# 92
typedef __off64_t off64_t; 
# 97
typedef __pid_t pid_t; 
# 103
typedef __id_t id_t; 
# 108
typedef __ssize_t ssize_t; 
# 114
typedef __daddr_t daddr_t; 
# 115
typedef __caddr_t caddr_t; 
# 121
typedef __key_t key_t; 
# 7 "/usr/include/bits/types/clock_t.h" 3
typedef __clock_t clock_t; 
# 7 "/usr/include/bits/types/clockid_t.h" 3
typedef __clockid_t clockid_t; 
# 7 "/usr/include/bits/types/time_t.h" 3
typedef __time_t time_t; 
# 7 "/usr/include/bits/types/timer_t.h" 3
typedef __timer_t timer_t; 
# 134 "/usr/include/sys/types.h" 3
typedef __useconds_t useconds_t; 
# 138
typedef __suseconds_t suseconds_t; 
# 148 "/usr/include/sys/types.h" 3
typedef unsigned long ulong; 
# 149
typedef unsigned short ushort; 
# 150
typedef unsigned uint; 
# 24 "/usr/include/bits/stdint-intn.h" 3
typedef __int8_t int8_t; 
# 25
typedef __int16_t int16_t; 
# 26
typedef __int32_t int32_t; 
# 27
typedef __int64_t int64_t; 
# 158 "/usr/include/sys/types.h" 3
typedef __uint8_t u_int8_t; 
# 159
typedef __uint16_t u_int16_t; 
# 160
typedef __uint32_t u_int32_t; 
# 161
typedef __uint64_t u_int64_t; 
# 164
typedef long register_t __attribute((__mode__(__word__))); 
# 34 "/usr/include/bits/byteswap.h" 3
static inline __uint16_t __bswap_16(__uint16_t __bsx) 
# 35
{ 
# 37
return __builtin_bswap16(__bsx); 
# 41
} 
# 49
static inline __uint32_t __bswap_32(__uint32_t __bsx) 
# 50
{ 
# 52
return __builtin_bswap32(__bsx); 
# 56
} 
# 70 "/usr/include/bits/byteswap.h" 3
__extension__ static inline __uint64_t __bswap_64(__uint64_t __bsx) 
# 71
{ 
# 73
return __builtin_bswap64(__bsx); 
# 77
} 
# 33 "/usr/include/bits/uintn-identity.h" 3
static inline __uint16_t __uint16_identity(__uint16_t __x) 
# 34
{ 
# 35
return __x; 
# 36
} 
# 39
static inline __uint32_t __uint32_identity(__uint32_t __x) 
# 40
{ 
# 41
return __x; 
# 42
} 
# 45
static inline __uint64_t __uint64_identity(__uint64_t __x) 
# 46
{ 
# 47
return __x; 
# 48
} 
# 8 "/usr/include/bits/types/__sigset_t.h" 3
typedef 
# 6
struct { 
# 7
unsigned long __val[(1024) / ((8) * sizeof(unsigned long))]; 
# 8
} __sigset_t; 
# 7 "/usr/include/bits/types/sigset_t.h" 3
typedef __sigset_t sigset_t; 
# 8 "/usr/include/bits/types/struct_timeval.h" 3
struct timeval { 
# 10
__time_t tv_sec; 
# 11
__suseconds_t tv_usec; 
# 12
}; 
# 10 "/usr/include/bits/types/struct_timespec.h" 3
struct timespec { 
# 12
__time_t tv_sec; 
# 16
__syscall_slong_t tv_nsec; 
# 26 "/usr/include/bits/types/struct_timespec.h" 3
}; 
# 49 "/usr/include/sys/select.h" 3
typedef long __fd_mask; 
# 70 "/usr/include/sys/select.h" 3
typedef 
# 60
struct { 
# 64
__fd_mask fds_bits[1024 / (8 * ((int)sizeof(__fd_mask)))]; 
# 70
} fd_set; 
# 77
typedef __fd_mask fd_mask; 
# 91 "/usr/include/sys/select.h" 3
extern "C" {
# 101 "/usr/include/sys/select.h" 3
extern int select(int __nfds, fd_set *__restrict__ __readfds, fd_set *__restrict__ __writefds, fd_set *__restrict__ __exceptfds, timeval *__restrict__ __timeout); 
# 113 "/usr/include/sys/select.h" 3
extern int pselect(int __nfds, fd_set *__restrict__ __readfds, fd_set *__restrict__ __writefds, fd_set *__restrict__ __exceptfds, const timespec *__restrict__ __timeout, const __sigset_t *__restrict__ __sigmask); 
# 126 "/usr/include/sys/select.h" 3
}
# 185 "/usr/include/sys/types.h" 3
typedef __blksize_t blksize_t; 
# 192
typedef __blkcnt_t blkcnt_t; 
# 196
typedef __fsblkcnt_t fsblkcnt_t; 
# 200
typedef __fsfilcnt_t fsfilcnt_t; 
# 219 "/usr/include/sys/types.h" 3
typedef __blkcnt64_t blkcnt64_t; 
# 220
typedef __fsblkcnt64_t fsblkcnt64_t; 
# 221
typedef __fsfilcnt64_t fsfilcnt64_t; 
# 53 "/usr/include/bits/thread-shared-types.h" 3
typedef 
# 49
struct __pthread_internal_list { 
# 51
__pthread_internal_list *__prev; 
# 52
__pthread_internal_list *__next; 
# 53
} __pthread_list_t; 
# 58
typedef 
# 55
struct __pthread_internal_slist { 
# 57
__pthread_internal_slist *__next; 
# 58
} __pthread_slist_t; 
# 22 "/usr/include/bits/struct_mutex.h" 3
struct __pthread_mutex_s { 
# 24
int __lock; 
# 25
unsigned __count; 
# 26
int __owner; 
# 28
unsigned __nusers; 
# 32
int __kind; 
# 34
short __spins; 
# 35
short __elision; 
# 36
__pthread_list_t __list; 
# 53 "/usr/include/bits/struct_mutex.h" 3
}; 
# 23 "/usr/include/bits/struct_rwlock.h" 3
struct __pthread_rwlock_arch_t { 
# 25
unsigned __readers; 
# 26
unsigned __writers; 
# 27
unsigned __wrphase_futex; 
# 28
unsigned __writers_futex; 
# 29
unsigned __pad3; 
# 30
unsigned __pad4; 
# 32
int __cur_writer; 
# 33
int __shared; 
# 34
signed char __rwelision; 
# 39
unsigned char __pad1[7]; 
# 42
unsigned long __pad2; 
# 45
unsigned __flags; 
# 55 "/usr/include/bits/struct_rwlock.h" 3
}; 
# 92 "/usr/include/bits/thread-shared-types.h" 3
struct __pthread_cond_s { 
# 95
union { 
# 96
__extension__ unsigned long long __wseq; 
# 98
struct { 
# 99
unsigned __low; 
# 100
unsigned __high; 
# 101
} __wseq32; 
# 102
}; 
# 104
union { 
# 105
__extension__ unsigned long long __g1_start; 
# 107
struct { 
# 108
unsigned __low; 
# 109
unsigned __high; 
# 110
} __g1_start32; 
# 111
}; 
# 112
unsigned __g_refs[2]; 
# 113
unsigned __g_size[2]; 
# 114
unsigned __g1_orig_size; 
# 115
unsigned __wrefs; 
# 116
unsigned __g_signals[2]; 
# 117
}; 
# 27 "/usr/include/bits/pthreadtypes.h" 3
typedef unsigned long pthread_t; 
# 36
typedef 
# 33
union { 
# 34
char __size[4]; 
# 35
int __align; 
# 36
} pthread_mutexattr_t; 
# 45
typedef 
# 42
union { 
# 43
char __size[4]; 
# 44
int __align; 
# 45
} pthread_condattr_t; 
# 49
typedef unsigned pthread_key_t; 
# 53
typedef int pthread_once_t; 
# 56
union pthread_attr_t { 
# 58
char __size[56]; 
# 59
long __align; 
# 60
}; 
# 62
typedef pthread_attr_t pthread_attr_t; 
# 72
typedef 
# 68
union { 
# 69
__pthread_mutex_s __data; 
# 70
char __size[40]; 
# 71
long __align; 
# 72
} pthread_mutex_t; 
# 80
typedef 
# 76
union { 
# 77
__pthread_cond_s __data; 
# 78
char __size[48]; 
# 79
__extension__ long long __align; 
# 80
} pthread_cond_t; 
# 91
typedef 
# 87
union { 
# 88
__pthread_rwlock_arch_t __data; 
# 89
char __size[56]; 
# 90
long __align; 
# 91
} pthread_rwlock_t; 
# 97
typedef 
# 94
union { 
# 95
char __size[8]; 
# 96
long __align; 
# 97
} pthread_rwlockattr_t; 
# 103
typedef volatile int pthread_spinlock_t; 
# 112
typedef 
# 109
union { 
# 110
char __size[32]; 
# 111
long __align; 
# 112
} pthread_barrier_t; 
# 118
typedef 
# 115
union { 
# 116
char __size[4]; 
# 117
int __align; 
# 118
} pthread_barrierattr_t; 
# 230 "/usr/include/sys/types.h" 3
}
# 401 "/usr/include/stdlib.h" 3
extern long random() throw(); 
# 404
extern void srandom(unsigned __seed) throw(); 
# 410
extern char *initstate(unsigned __seed, char * __statebuf, size_t __statelen) throw()
# 411
 __attribute((__nonnull__(2))); 
# 415
extern char *setstate(char * __statebuf) throw() __attribute((__nonnull__(1))); 
# 423
struct random_data { 
# 425
int32_t *fptr; 
# 426
int32_t *rptr; 
# 427
int32_t *state; 
# 428
int rand_type; 
# 429
int rand_deg; 
# 430
int rand_sep; 
# 431
int32_t *end_ptr; 
# 432
}; 
# 434
extern int random_r(random_data *__restrict__ __buf, int32_t *__restrict__ __result) throw()
# 435
 __attribute((__nonnull__(1, 2))); 
# 437
extern int srandom_r(unsigned __seed, random_data * __buf) throw()
# 438
 __attribute((__nonnull__(2))); 
# 440
extern int initstate_r(unsigned __seed, char *__restrict__ __statebuf, size_t __statelen, random_data *__restrict__ __buf) throw()
# 443
 __attribute((__nonnull__(2, 4))); 
# 445
extern int setstate_r(char *__restrict__ __statebuf, random_data *__restrict__ __buf) throw()
# 447
 __attribute((__nonnull__(1, 2))); 
# 453
extern int rand() throw(); 
# 455
extern void srand(unsigned __seed) throw(); 
# 459
extern int rand_r(unsigned * __seed) throw(); 
# 467
extern double drand48() throw(); 
# 468
extern double erand48(unsigned short  __xsubi[3]) throw() __attribute((__nonnull__(1))); 
# 471
extern long lrand48() throw(); 
# 472
extern long nrand48(unsigned short  __xsubi[3]) throw()
# 473
 __attribute((__nonnull__(1))); 
# 476
extern long mrand48() throw(); 
# 477
extern long jrand48(unsigned short  __xsubi[3]) throw()
# 478
 __attribute((__nonnull__(1))); 
# 481
extern void srand48(long __seedval) throw(); 
# 482
extern unsigned short *seed48(unsigned short  __seed16v[3]) throw()
# 483
 __attribute((__nonnull__(1))); 
# 484
extern void lcong48(unsigned short  __param[7]) throw() __attribute((__nonnull__(1))); 
# 490
struct drand48_data { 
# 492
unsigned short __x[3]; 
# 493
unsigned short __old_x[3]; 
# 494
unsigned short __c; 
# 495
unsigned short __init; 
# 496
__extension__ unsigned long long __a; 
# 498
}; 
# 501
extern int drand48_r(drand48_data *__restrict__ __buffer, double *__restrict__ __result) throw()
# 502
 __attribute((__nonnull__(1, 2))); 
# 503
extern int erand48_r(unsigned short  __xsubi[3], drand48_data *__restrict__ __buffer, double *__restrict__ __result) throw()
# 505
 __attribute((__nonnull__(1, 2))); 
# 508
extern int lrand48_r(drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 510
 __attribute((__nonnull__(1, 2))); 
# 511
extern int nrand48_r(unsigned short  __xsubi[3], drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 514
 __attribute((__nonnull__(1, 2))); 
# 517
extern int mrand48_r(drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 519
 __attribute((__nonnull__(1, 2))); 
# 520
extern int jrand48_r(unsigned short  __xsubi[3], drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 523
 __attribute((__nonnull__(1, 2))); 
# 526
extern int srand48_r(long __seedval, drand48_data * __buffer) throw()
# 527
 __attribute((__nonnull__(2))); 
# 529
extern int seed48_r(unsigned short  __seed16v[3], drand48_data * __buffer) throw()
# 530
 __attribute((__nonnull__(1, 2))); 
# 532
extern int lcong48_r(unsigned short  __param[7], drand48_data * __buffer) throw()
# 534
 __attribute((__nonnull__(1, 2))); 
# 539
extern void *malloc(size_t __size) throw() __attribute((__malloc__))
# 540
 __attribute((__alloc_size__(1))); 
# 542
extern void *calloc(size_t __nmemb, size_t __size) throw()
# 543
 __attribute((__malloc__)) __attribute((__alloc_size__(1, 2))); 
# 550
extern void *realloc(void * __ptr, size_t __size) throw()
# 551
 __attribute((__warn_unused_result__)) __attribute((__alloc_size__(2))); 
# 559
extern void *reallocarray(void * __ptr, size_t __nmemb, size_t __size) throw()
# 560
 __attribute((__warn_unused_result__))
# 561
 __attribute((__alloc_size__(2, 3))); 
# 565
extern void free(void * __ptr) throw(); 
# 26 "/usr/include/alloca.h" 3
extern "C" {
# 32
extern void *alloca(size_t __size) throw(); 
# 38
}
# 574 "/usr/include/stdlib.h" 3
extern void *valloc(size_t __size) throw() __attribute((__malloc__))
# 575
 __attribute((__alloc_size__(1))); 
# 580
extern int posix_memalign(void ** __memptr, size_t __alignment, size_t __size) throw()
# 581
 __attribute((__nonnull__(1))); 
# 586
extern void *aligned_alloc(size_t __alignment, size_t __size) throw()
# 587
 __attribute((__malloc__)) __attribute((__alloc_size__(2))); 
# 591
extern void abort() throw() __attribute((__noreturn__)); 
# 595
extern int atexit(void (* __func)(void)) throw() __attribute((__nonnull__(1))); 
# 600
extern "C++" int at_quick_exit(void (* __func)(void)) throw() __asm__("at_quick_exit")
# 601
 __attribute((__nonnull__(1))); 
# 610 "/usr/include/stdlib.h" 3
extern int on_exit(void (* __func)(int __status, void * __arg), void * __arg) throw()
# 611
 __attribute((__nonnull__(1))); 
# 617
extern void exit(int __status) throw() __attribute((__noreturn__)); 
# 623
extern void quick_exit(int __status) throw() __attribute((__noreturn__)); 
# 629
extern void _Exit(int __status) throw() __attribute((__noreturn__)); 
# 634
extern char *getenv(const char * __name) throw() __attribute((__nonnull__(1))); 
# 639
extern char *secure_getenv(const char * __name) throw()
# 640
 __attribute((__nonnull__(1))); 
# 647
extern int putenv(char * __string) throw() __attribute((__nonnull__(1))); 
# 653
extern int setenv(const char * __name, const char * __value, int __replace) throw()
# 654
 __attribute((__nonnull__(2))); 
# 657
extern int unsetenv(const char * __name) throw() __attribute((__nonnull__(1))); 
# 664
extern int clearenv() throw(); 
# 675 "/usr/include/stdlib.h" 3
extern char *mktemp(char * __template) throw() __attribute((__nonnull__(1))); 
# 688 "/usr/include/stdlib.h" 3
extern int mkstemp(char * __template) __attribute((__nonnull__(1))); 
# 698 "/usr/include/stdlib.h" 3
extern int mkstemp64(char * __template) __attribute((__nonnull__(1))); 
# 710 "/usr/include/stdlib.h" 3
extern int mkstemps(char * __template, int __suffixlen) __attribute((__nonnull__(1))); 
# 720 "/usr/include/stdlib.h" 3
extern int mkstemps64(char * __template, int __suffixlen)
# 721
 __attribute((__nonnull__(1))); 
# 731 "/usr/include/stdlib.h" 3
extern char *mkdtemp(char * __template) throw() __attribute((__nonnull__(1))); 
# 742 "/usr/include/stdlib.h" 3
extern int mkostemp(char * __template, int __flags) __attribute((__nonnull__(1))); 
# 752 "/usr/include/stdlib.h" 3
extern int mkostemp64(char * __template, int __flags) __attribute((__nonnull__(1))); 
# 762 "/usr/include/stdlib.h" 3
extern int mkostemps(char * __template, int __suffixlen, int __flags)
# 763
 __attribute((__nonnull__(1))); 
# 774 "/usr/include/stdlib.h" 3
extern int mkostemps64(char * __template, int __suffixlen, int __flags)
# 775
 __attribute((__nonnull__(1))); 
# 784 "/usr/include/stdlib.h" 3
extern int system(const char * __command); 
# 790
extern char *canonicalize_file_name(const char * __name) throw()
# 791
 __attribute((__nonnull__(1))); 
# 800 "/usr/include/stdlib.h" 3
extern char *realpath(const char *__restrict__ __name, char *__restrict__ __resolved) throw(); 
# 808
typedef int (*__compar_fn_t)(const void *, const void *); 
# 811
typedef __compar_fn_t comparison_fn_t; 
# 815
typedef int (*__compar_d_fn_t)(const void *, const void *, void *); 
# 820
extern void *bsearch(const void * __key, const void * __base, size_t __nmemb, size_t __size, __compar_fn_t __compar)
# 822
 __attribute((__nonnull__(1, 2, 5))); 
# 830
extern void qsort(void * __base, size_t __nmemb, size_t __size, __compar_fn_t __compar)
# 831
 __attribute((__nonnull__(1, 4))); 
# 833
extern void qsort_r(void * __base, size_t __nmemb, size_t __size, __compar_d_fn_t __compar, void * __arg)
# 835
 __attribute((__nonnull__(1, 4))); 
# 840
extern int abs(int __x) throw() __attribute((const)); 
# 841
extern long labs(long __x) throw() __attribute((const)); 
# 844
__extension__ extern long long llabs(long long __x) throw()
# 845
 __attribute((const)); 
# 852
extern div_t div(int __numer, int __denom) throw()
# 853
 __attribute((const)); 
# 854
extern ldiv_t ldiv(long __numer, long __denom) throw()
# 855
 __attribute((const)); 
# 858
__extension__ extern lldiv_t lldiv(long long __numer, long long __denom) throw()
# 860
 __attribute((const)); 
# 872 "/usr/include/stdlib.h" 3
extern char *ecvt(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 873
 __attribute((__nonnull__(3, 4))); 
# 878
extern char *fcvt(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 879
 __attribute((__nonnull__(3, 4))); 
# 884
extern char *gcvt(double __value, int __ndigit, char * __buf) throw()
# 885
 __attribute((__nonnull__(3))); 
# 890
extern char *qecvt(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 892
 __attribute((__nonnull__(3, 4))); 
# 893
extern char *qfcvt(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 895
 __attribute((__nonnull__(3, 4))); 
# 896
extern char *qgcvt(long double __value, int __ndigit, char * __buf) throw()
# 897
 __attribute((__nonnull__(3))); 
# 902
extern int ecvt_r(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 904
 __attribute((__nonnull__(3, 4, 5))); 
# 905
extern int fcvt_r(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 907
 __attribute((__nonnull__(3, 4, 5))); 
# 909
extern int qecvt_r(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 912
 __attribute((__nonnull__(3, 4, 5))); 
# 913
extern int qfcvt_r(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 916
 __attribute((__nonnull__(3, 4, 5))); 
# 922
extern int mblen(const char * __s, size_t __n) throw(); 
# 925
extern int mbtowc(wchar_t *__restrict__ __pwc, const char *__restrict__ __s, size_t __n) throw(); 
# 929
extern int wctomb(char * __s, wchar_t __wchar) throw(); 
# 933
extern size_t mbstowcs(wchar_t *__restrict__ __pwcs, const char *__restrict__ __s, size_t __n) throw(); 
# 936
extern size_t wcstombs(char *__restrict__ __s, const wchar_t *__restrict__ __pwcs, size_t __n) throw(); 
# 946
extern int rpmatch(const char * __response) throw() __attribute((__nonnull__(1))); 
# 957 "/usr/include/stdlib.h" 3
extern int getsubopt(char **__restrict__ __optionp, char *const *__restrict__ __tokens, char **__restrict__ __valuep) throw()
# 960
 __attribute((__nonnull__(1, 2, 3))); 
# 968
extern int posix_openpt(int __oflag); 
# 976
extern int grantpt(int __fd) throw(); 
# 980
extern int unlockpt(int __fd) throw(); 
# 985
extern char *ptsname(int __fd) throw(); 
# 992
extern int ptsname_r(int __fd, char * __buf, size_t __buflen) throw()
# 993
 __attribute((__nonnull__(2))); 
# 996
extern int getpt(); 
# 1003
extern int getloadavg(double  __loadavg[], int __nelem) throw()
# 1004
 __attribute((__nonnull__(1))); 
# 1023 "/usr/include/stdlib.h" 3
}
# 46 "/usr/include/c++/7/bits/std_abs.h" 3
extern "C++" {
# 48
namespace std __attribute((__visibility__("default"))) { 
# 52
using ::abs;
# 56
inline long abs(long __i) { return __builtin_labs(__i); } 
# 61
inline long long abs(long long __x) { return __builtin_llabs(__x); } 
# 70
constexpr double abs(double __x) 
# 71
{ return __builtin_fabs(__x); } 
# 74
constexpr float abs(float __x) 
# 75
{ return __builtin_fabsf(__x); } 
# 78
constexpr long double abs(long double __x) 
# 79
{ return __builtin_fabsl(__x); } 
# 84
constexpr __int128 abs(__int128 __x) { return (__x >= (0)) ? __x : (-__x); } 
# 102 "/usr/include/c++/7/bits/std_abs.h" 3
constexpr __float128 abs(__float128 __x) 
# 103
{ return (__x < (0)) ? -__x : __x; } 
# 107
}
# 108
}
# 121 "/usr/include/c++/7/cstdlib" 3
extern "C++" {
# 123
namespace std __attribute((__visibility__("default"))) { 
# 127
using ::div_t;
# 128
using ::ldiv_t;
# 130
using ::abort;
# 134
using ::atexit;
# 137
using ::at_quick_exit;
# 140
using ::atof;
# 141
using ::atoi;
# 142
using ::atol;
# 143
using ::bsearch;
# 144
using ::calloc;
# 145
using ::div;
# 146
using ::exit;
# 147
using ::free;
# 148
using ::getenv;
# 149
using ::labs;
# 150
using ::ldiv;
# 151
using ::malloc;
# 153
using ::mblen;
# 154
using ::mbstowcs;
# 155
using ::mbtowc;
# 157
using ::qsort;
# 160
using ::quick_exit;
# 163
using ::rand;
# 164
using ::realloc;
# 165
using ::srand;
# 166
using ::strtod;
# 167
using ::strtol;
# 168
using ::strtoul;
# 169
using ::system;
# 171
using ::wcstombs;
# 172
using ::wctomb;
# 177
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); } 
# 182
}
# 195 "/usr/include/c++/7/cstdlib" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 200
using ::lldiv_t;
# 206
using ::_Exit;
# 210
using ::llabs;
# 213
inline lldiv_t div(long long __n, long long __d) 
# 214
{ lldiv_t __q; (__q.quot) = (__n / __d); (__q.rem) = (__n % __d); return __q; } 
# 216
using ::lldiv;
# 227 "/usr/include/c++/7/cstdlib" 3
using ::atoll;
# 228
using ::strtoll;
# 229
using ::strtoull;
# 231
using ::strtof;
# 232
using ::strtold;
# 235
}
# 237
namespace std { 
# 240
using __gnu_cxx::lldiv_t;
# 242
using __gnu_cxx::_Exit;
# 244
using __gnu_cxx::llabs;
# 245
using __gnu_cxx::div;
# 246
using __gnu_cxx::lldiv;
# 248
using __gnu_cxx::atoll;
# 249
using __gnu_cxx::strtof;
# 250
using __gnu_cxx::strtoll;
# 251
using __gnu_cxx::strtoull;
# 252
using __gnu_cxx::strtold;
# 253
}
# 257
}
# 38 "/usr/include/c++/7/stdlib.h" 3
using std::abort;
# 39
using std::atexit;
# 40
using std::exit;
# 43
using std::at_quick_exit;
# 46
using std::quick_exit;
# 54
using std::abs;
# 55
using std::atof;
# 56
using std::atoi;
# 57
using std::atol;
# 58
using std::bsearch;
# 59
using std::calloc;
# 60
using std::div;
# 61
using std::free;
# 62
using std::getenv;
# 63
using std::labs;
# 64
using std::ldiv;
# 65
using std::malloc;
# 67
using std::mblen;
# 68
using std::mbstowcs;
# 69
using std::mbtowc;
# 71
using std::qsort;
# 72
using std::rand;
# 73
using std::realloc;
# 74
using std::srand;
# 75
using std::strtod;
# 76
using std::strtol;
# 77
using std::strtoul;
# 78
using std::system;
# 80
using std::wcstombs;
# 81
using std::wctomb;
# 180 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_device_runtime_api.h"
extern "C" {
# 187
__attribute__((unused)) extern cudaError_t __cudaDeviceSynchronizeDeprecationAvoidance(); 
# 236 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_device_runtime_api.h"
__attribute__((unused)) extern cudaError_t __cudaCDP2DeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
# 237
__attribute__((unused)) extern cudaError_t __cudaCDP2DeviceGetLimit(size_t * pValue, cudaLimit limit); 
# 238
__attribute__((unused)) extern cudaError_t __cudaCDP2DeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 239
__attribute__((unused)) extern cudaError_t __cudaCDP2DeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
# 240
__attribute__((unused)) extern cudaError_t __cudaCDP2GetLastError(); 
# 241
__attribute__((unused)) extern cudaError_t __cudaCDP2PeekAtLastError(); 
# 242
__attribute__((unused)) extern const char *__cudaCDP2GetErrorString(cudaError_t error); 
# 243
__attribute__((unused)) extern const char *__cudaCDP2GetErrorName(cudaError_t error); 
# 244
__attribute__((unused)) extern cudaError_t __cudaCDP2GetDeviceCount(int * count); 
# 245
__attribute__((unused)) extern cudaError_t __cudaCDP2GetDevice(int * device); 
# 246
__attribute__((unused)) extern cudaError_t __cudaCDP2StreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
# 247
__attribute__((unused)) extern cudaError_t __cudaCDP2StreamDestroy(cudaStream_t stream); 
# 248
__attribute__((unused)) extern cudaError_t __cudaCDP2StreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
# 249
__attribute__((unused)) extern cudaError_t __cudaCDP2StreamWaitEvent_ptsz(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
# 250
__attribute__((unused)) extern cudaError_t __cudaCDP2EventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
# 251
__attribute__((unused)) extern cudaError_t __cudaCDP2EventRecord(cudaEvent_t event, cudaStream_t stream); 
# 252
__attribute__((unused)) extern cudaError_t __cudaCDP2EventRecord_ptsz(cudaEvent_t event, cudaStream_t stream); 
# 253
__attribute__((unused)) extern cudaError_t __cudaCDP2EventRecordWithFlags(cudaEvent_t event, cudaStream_t stream, unsigned flags); 
# 254
__attribute__((unused)) extern cudaError_t __cudaCDP2EventRecordWithFlags_ptsz(cudaEvent_t event, cudaStream_t stream, unsigned flags); 
# 255
__attribute__((unused)) extern cudaError_t __cudaCDP2EventDestroy(cudaEvent_t event); 
# 256
__attribute__((unused)) extern cudaError_t __cudaCDP2FuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
# 257
__attribute__((unused)) extern cudaError_t __cudaCDP2Free(void * devPtr); 
# 258
__attribute__((unused)) extern cudaError_t __cudaCDP2Malloc(void ** devPtr, size_t size); 
# 259
__attribute__((unused)) extern cudaError_t __cudaCDP2MemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
# 260
__attribute__((unused)) extern cudaError_t __cudaCDP2MemcpyAsync_ptsz(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
# 261
__attribute__((unused)) extern cudaError_t __cudaCDP2Memcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
# 262
__attribute__((unused)) extern cudaError_t __cudaCDP2Memcpy2DAsync_ptsz(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
# 263
__attribute__((unused)) extern cudaError_t __cudaCDP2Memcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream); 
# 264
__attribute__((unused)) extern cudaError_t __cudaCDP2Memcpy3DAsync_ptsz(const cudaMemcpy3DParms * p, cudaStream_t stream); 
# 265
__attribute__((unused)) extern cudaError_t __cudaCDP2MemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream); 
# 266
__attribute__((unused)) extern cudaError_t __cudaCDP2MemsetAsync_ptsz(void * devPtr, int value, size_t count, cudaStream_t stream); 
# 267
__attribute__((unused)) extern cudaError_t __cudaCDP2Memset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
# 268
__attribute__((unused)) extern cudaError_t __cudaCDP2Memset2DAsync_ptsz(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
# 269
__attribute__((unused)) extern cudaError_t __cudaCDP2Memset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
# 270
__attribute__((unused)) extern cudaError_t __cudaCDP2Memset3DAsync_ptsz(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
# 271
__attribute__((unused)) extern cudaError_t __cudaCDP2RuntimeGetVersion(int * runtimeVersion); 
# 272
__attribute__((unused)) extern void *__cudaCDP2GetParameterBuffer(size_t alignment, size_t size); 
# 273
__attribute__((unused)) extern void *__cudaCDP2GetParameterBufferV2(void * func, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize); 
# 274
__attribute__((unused)) extern cudaError_t __cudaCDP2LaunchDevice_ptsz(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
# 275
__attribute__((unused)) extern cudaError_t __cudaCDP2LaunchDeviceV2_ptsz(void * parameterBuffer, cudaStream_t stream); 
# 276
__attribute__((unused)) extern cudaError_t __cudaCDP2LaunchDevice(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
# 277
__attribute__((unused)) extern cudaError_t __cudaCDP2LaunchDeviceV2(void * parameterBuffer, cudaStream_t stream); 
# 278
__attribute__((unused)) extern cudaError_t __cudaCDP2OccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize); 
# 279
__attribute__((unused)) extern cudaError_t __cudaCDP2OccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
# 282
extern cudaError_t cudaGraphLaunch(cudaGraphExec_t graphExec, cudaStream_t stream); 
# 301 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_device_runtime_api.h"
__attribute__((unused)) static inline cudaGraphExec_t cudaGetCurrentGraphExec() 
# 302
{int volatile ___ = 1;
# 306
::exit(___);}
#if 0
# 302
{ 
# 303
unsigned long long current_graph_exec; 
# 304
__asm__("mov.u64 %0, %%current_graph_exec;" : "=l" (current_graph_exec) :); 
# 305
return (cudaGraphExec_t)current_graph_exec; 
# 306
} 
#endif
# 336 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_device_runtime_api.h"
__attribute__((unused)) extern cudaError_t cudaGraphKernelNodeSetParam(cudaGraphDeviceNode_t node, size_t offset, const void * value, size_t size); 
# 364 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_device_runtime_api.h"
__attribute__((unused)) extern cudaError_t cudaGraphKernelNodeSetEnabled(cudaGraphDeviceNode_t node, bool enable); 
# 391 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_device_runtime_api.h"
__attribute__((unused)) extern cudaError_t cudaGraphKernelNodeSetGridDim(cudaGraphDeviceNode_t node, dim3 gridDim); 
# 420 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_device_runtime_api.h"
__attribute__((unused)) extern cudaError_t cudaGraphKernelNodeUpdatesApply(const cudaGraphKernelNodeUpdate * updates, size_t updateCount); 
# 438 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_device_runtime_api.h"
__attribute__((unused)) static inline void cudaTriggerProgrammaticLaunchCompletion() 
# 439
{int volatile ___ = 1;
# 441
::exit(___);}
#if 0
# 439
{ 
# 440
__asm__ volatile("griddepcontrol.launch_dependents;" : :); 
# 441
} 
#endif
# 454 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_device_runtime_api.h"
__attribute__((unused)) static inline void cudaGridDependencySynchronize() 
# 455
{int volatile ___ = 1;
# 457
::exit(___);}
#if 0
# 455
{ 
# 456
__asm__ volatile("griddepcontrol.wait;" : : : "memory"); 
# 457
} 
#endif
# 466 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_device_runtime_api.h"
__attribute__((unused)) extern void cudaGraphSetConditional(cudaGraphConditionalHandle handle, unsigned value); 
# 469
__attribute__((unused)) extern unsigned long long cudaCGGetIntrinsicHandle(cudaCGScope scope); 
# 470
__attribute__((unused)) extern cudaError_t cudaCGSynchronize(unsigned long long handle, unsigned flags); 
# 471
__attribute__((unused)) extern cudaError_t cudaCGSynchronizeGrid(unsigned long long handle, unsigned flags); 
# 472
__attribute__((unused)) extern cudaError_t cudaCGGetSize(unsigned * numThreads, unsigned * numGrids, unsigned long long handle); 
# 473
__attribute__((unused)) extern cudaError_t cudaCGGetRank(unsigned * threadRank, unsigned * gridRank, unsigned long long handle); 
# 695 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_device_runtime_api.h"
__attribute__((unused)) static inline void *cudaGetParameterBuffer(size_t alignment, size_t size) 
# 696
{int volatile ___ = 1;(void)alignment;(void)size;
# 698
::exit(___);}
#if 0
# 696
{ 
# 697
return __cudaCDP2GetParameterBuffer(alignment, size); 
# 698
} 
#endif
# 705 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_device_runtime_api.h"
__attribute__((unused)) static inline void *cudaGetParameterBufferV2(void *func, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize) 
# 706
{int volatile ___ = 1;(void)func;(void)gridDimension;(void)blockDimension;(void)sharedMemSize;
# 708
::exit(___);}
#if 0
# 706
{ 
# 707
return __cudaCDP2GetParameterBufferV2(func, gridDimension, blockDimension, sharedMemSize); 
# 708
} 
#endif
# 715 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_device_runtime_api.h"
__attribute__((unused)) static inline cudaError_t cudaLaunchDevice_ptsz(void *func, void *parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream) 
# 716
{int volatile ___ = 1;(void)func;(void)parameterBuffer;(void)gridDimension;(void)blockDimension;(void)sharedMemSize;(void)stream;
# 718
::exit(___);}
#if 0
# 716
{ 
# 717
return __cudaCDP2LaunchDevice_ptsz(func, parameterBuffer, gridDimension, blockDimension, sharedMemSize, stream); 
# 718
} 
#endif
# 720 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_device_runtime_api.h"
__attribute__((unused)) static inline cudaError_t cudaLaunchDeviceV2_ptsz(void *parameterBuffer, cudaStream_t stream) 
# 721
{int volatile ___ = 1;(void)parameterBuffer;(void)stream;
# 723
::exit(___);}
#if 0
# 721
{ 
# 722
return __cudaCDP2LaunchDeviceV2_ptsz(parameterBuffer, stream); 
# 723
} 
#endif
# 781 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_device_runtime_api.h"
__attribute__((unused)) static inline cudaError_t cudaLaunchDevice(void *func, void *parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream) 
# 782
{int volatile ___ = 1;(void)func;(void)parameterBuffer;(void)gridDimension;(void)blockDimension;(void)sharedMemSize;(void)stream;
# 784
::exit(___);}
#if 0
# 782
{ 
# 783
return __cudaCDP2LaunchDevice(func, parameterBuffer, gridDimension, blockDimension, sharedMemSize, stream); 
# 784
} 
#endif
# 786 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_device_runtime_api.h"
__attribute__((unused)) static inline cudaError_t cudaLaunchDeviceV2(void *parameterBuffer, cudaStream_t stream) 
# 787
{int volatile ___ = 1;(void)parameterBuffer;(void)stream;
# 789
::exit(___);}
#if 0
# 787
{ 
# 788
return __cudaCDP2LaunchDeviceV2(parameterBuffer, stream); 
# 789
} 
#endif
# 843 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_device_runtime_api.h"
}
# 845
template< class T> static inline cudaError_t cudaMalloc(T ** devPtr, size_t size); 
# 846
template< class T> static inline cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, T * entry); 
# 847
template< class T> static inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize); 
# 848
template< class T> static inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
# 876 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_device_runtime_api.h"
template< class T> __attribute__((unused)) static inline cudaError_t 
# 877
cudaGraphKernelNodeSetParam(cudaGraphDeviceNode_t node, size_t offset, const T &value) 
# 878
{int volatile ___ = 1;(void)node;(void)offset;(void)value;
# 880
::exit(___);}
#if 0
# 878
{ 
# 879
return cudaGraphKernelNodeSetParam(node, offset, &value, sizeof(T)); 
# 880
} 
#endif
# 283 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern "C" {
# 323 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceReset(); 
# 345 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSynchronize(); 
# 431 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSetLimit(cudaLimit limit, size_t value); 
# 467 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
# 490 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetTexture1DLinearMaxWidth(size_t * maxWidthInElements, const cudaChannelFormatDesc * fmtDesc, int device); 
# 524 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 561 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetStreamPriorityRange(int * leastPriority, int * greatestPriority); 
# 605 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSetCacheConfig(cudaFuncCache cacheConfig); 
# 632 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetByPCIBusId(int * device, const char * pciBusId); 
# 662 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetPCIBusId(char * pciBusId, int len, int device); 
# 712 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaIpcGetEventHandle(cudaIpcEventHandle_t * handle, cudaEvent_t event); 
# 755 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaIpcOpenEventHandle(cudaEvent_t * event, cudaIpcEventHandle_t handle); 
# 799 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaIpcGetMemHandle(cudaIpcMemHandle_t * handle, void * devPtr); 
# 865 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaIpcOpenMemHandle(void ** devPtr, cudaIpcMemHandle_t handle, unsigned flags); 
# 903 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaIpcCloseMemHandle(void * devPtr); 
# 935 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceFlushGPUDirectRDMAWrites(cudaFlushGPUDirectRDMAWritesTarget target, cudaFlushGPUDirectRDMAWritesScope scope); 
# 973 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceRegisterAsyncNotification(int device, cudaAsyncCallback callbackFunc, void * userData, cudaAsyncCallbackHandle_t * callback); 
# 996 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceUnregisterAsyncNotification(int device, cudaAsyncCallbackHandle_t callback); 
# 1043 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
# 1089 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaDeviceSetSharedMemConfig(cudaSharedMemConfig config); 
# 1130 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaThreadExit(); 
# 1156 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaThreadSynchronize(); 
# 1205 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaThreadSetLimit(cudaLimit limit, size_t value); 
# 1238 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaThreadGetLimit(size_t * pValue, cudaLimit limit); 
# 1274 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaThreadGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 1321 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaThreadSetCacheConfig(cudaFuncCache cacheConfig); 
# 1386 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetLastError(); 
# 1437 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaPeekAtLastError(); 
# 1453 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern const char *cudaGetErrorName(cudaError_t error); 
# 1469 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern const char *cudaGetErrorString(cudaError_t error); 
# 1498 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetDeviceCount(int * count); 
# 1803 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetDeviceProperties_v2(cudaDeviceProp * prop, int device); 
# 2005 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
# 2023 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetDefaultMemPool(cudaMemPool_t * memPool, int device); 
# 2047 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSetMemPool(int device, cudaMemPool_t memPool); 
# 2067 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetMemPool(cudaMemPool_t * memPool, int device); 
# 2129 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetNvSciSyncAttributes(void * nvSciSyncAttrList, int device, int flags); 
# 2169 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetP2PAttribute(int * value, cudaDeviceP2PAttr attr, int srcDevice, int dstDevice); 
# 2191 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaChooseDevice(int * device, const cudaDeviceProp * prop); 
# 2220 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaInitDevice(int device, unsigned deviceFlags, unsigned flags); 
# 2266 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaSetDevice(int device); 
# 2288 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetDevice(int * device); 
# 2319 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaSetValidDevices(int * device_arr, int len); 
# 2389 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaSetDeviceFlags(unsigned flags); 
# 2434 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetDeviceFlags(unsigned * flags); 
# 2474 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamCreate(cudaStream_t * pStream); 
# 2506 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
# 2554 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamCreateWithPriority(cudaStream_t * pStream, unsigned flags, int priority); 
# 2581 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamGetPriority(cudaStream_t hStream, int * priority); 
# 2606 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamGetFlags(cudaStream_t hStream, unsigned * flags); 
# 2643 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamGetId(cudaStream_t hStream, unsigned long long * streamId); 
# 2658 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaCtxResetPersistingL2Cache(); 
# 2678 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamCopyAttributes(cudaStream_t dst, cudaStream_t src); 
# 2699 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamGetAttribute(cudaStream_t hStream, cudaLaunchAttributeID attr, cudaLaunchAttributeValue * value_out); 
# 2723 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamSetAttribute(cudaStream_t hStream, cudaLaunchAttributeID attr, const cudaLaunchAttributeValue * value); 
# 2757 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamDestroy(cudaStream_t stream); 
# 2788 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags = 0); 
# 2796
typedef void (*cudaStreamCallback_t)(cudaStream_t stream, cudaError_t status, void * userData); 
# 2863 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamAddCallback(cudaStream_t stream, cudaStreamCallback_t callback, void * userData, unsigned flags); 
# 2887 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamSynchronize(cudaStream_t stream); 
# 2912 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamQuery(cudaStream_t stream); 
# 2996 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamAttachMemAsync(cudaStream_t stream, void * devPtr, size_t length = 0, unsigned flags = 4); 
# 3035 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamBeginCapture(cudaStream_t stream, cudaStreamCaptureMode mode); 
# 3076 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamBeginCaptureToGraph(cudaStream_t stream, cudaGraph_t graph, const cudaGraphNode_t * dependencies, const cudaGraphEdgeData * dependencyData, size_t numDependencies, cudaStreamCaptureMode mode); 
# 3127 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaThreadExchangeStreamCaptureMode(cudaStreamCaptureMode * mode); 
# 3156 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamEndCapture(cudaStream_t stream, cudaGraph_t * pGraph); 
# 3194 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamIsCapturing(cudaStream_t stream, cudaStreamCaptureStatus * pCaptureStatus); 
# 3243 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamGetCaptureInfo_v2(cudaStream_t stream, cudaStreamCaptureStatus * captureStatus_out, unsigned long long * id_out = 0, cudaGraph_t * graph_out = 0, const cudaGraphNode_t ** dependencies_out = 0, size_t * numDependencies_out = 0); 
# 3302 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamGetCaptureInfo_v3(cudaStream_t stream, cudaStreamCaptureStatus * captureStatus_out, unsigned long long * id_out = 0, cudaGraph_t * graph_out = 0, const cudaGraphNode_t ** dependencies_out = 0, const cudaGraphEdgeData ** edgeData_out = 0, size_t * numDependencies_out = 0); 
# 3342 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamUpdateCaptureDependencies(cudaStream_t stream, cudaGraphNode_t * dependencies, size_t numDependencies, unsigned flags = 0); 
# 3377 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaStreamUpdateCaptureDependencies_v2(cudaStream_t stream, cudaGraphNode_t * dependencies, const cudaGraphEdgeData * dependencyData, size_t numDependencies, unsigned flags = 0); 
# 3414 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaEventCreate(cudaEvent_t * event); 
# 3451 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
# 3492 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream = 0); 
# 3540 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaEventRecordWithFlags(cudaEvent_t event, cudaStream_t stream = 0, unsigned flags = 0); 
# 3573 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaEventQuery(cudaEvent_t event); 
# 3604 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaEventSynchronize(cudaEvent_t event); 
# 3634 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaEventDestroy(cudaEvent_t event); 
# 3679 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaEventElapsedTime(float * ms, cudaEvent_t start, cudaEvent_t end); 
# 3860 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaImportExternalMemory(cudaExternalMemory_t * extMem_out, const cudaExternalMemoryHandleDesc * memHandleDesc); 
# 3915 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaExternalMemoryGetMappedBuffer(void ** devPtr, cudaExternalMemory_t extMem, const cudaExternalMemoryBufferDesc * bufferDesc); 
# 3975 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaExternalMemoryGetMappedMipmappedArray(cudaMipmappedArray_t * mipmap, cudaExternalMemory_t extMem, const cudaExternalMemoryMipmappedArrayDesc * mipmapDesc); 
# 3999 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDestroyExternalMemory(cudaExternalMemory_t extMem); 
# 4153 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaImportExternalSemaphore(cudaExternalSemaphore_t * extSem_out, const cudaExternalSemaphoreHandleDesc * semHandleDesc); 
# 4236 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaSignalExternalSemaphoresAsync_v2(const cudaExternalSemaphore_t * extSemArray, const cudaExternalSemaphoreSignalParams * paramsArray, unsigned numExtSems, cudaStream_t stream = 0); 
# 4312 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaWaitExternalSemaphoresAsync_v2(const cudaExternalSemaphore_t * extSemArray, const cudaExternalSemaphoreWaitParams * paramsArray, unsigned numExtSems, cudaStream_t stream = 0); 
# 4335 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDestroyExternalSemaphore(cudaExternalSemaphore_t extSem); 
# 4402 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaLaunchKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
# 4464 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaLaunchKernelExC(const cudaLaunchConfig_t * config, const void * func, void ** args); 
# 4521 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaLaunchCooperativeKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
# 4622 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaLaunchCooperativeKernelMultiDevice(cudaLaunchParams * launchParamsList, unsigned numDevices, unsigned flags = 0); 
# 4667 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFuncSetCacheConfig(const void * func, cudaFuncCache cacheConfig); 
# 4700 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
# 4737 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFuncSetAttribute(const void * func, cudaFuncAttribute attr, int value); 
# 4761 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFuncGetName(const char ** name, const void * func); 
# 4783 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFuncGetParamInfo(const void * func, size_t paramIndex, size_t * paramOffset, size_t * paramSize); 
# 4807 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaSetDoubleForDevice(double * d); 
# 4831 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaSetDoubleForHost(double * d); 
# 4897 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaLaunchHostFunc(cudaStream_t stream, cudaHostFn_t fn, void * userData); 
# 4971 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaFuncSetSharedMemConfig(const void * func, cudaSharedMemConfig config); 
# 5027 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize); 
# 5056 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaOccupancyAvailableDynamicSMemPerBlock(size_t * dynamicSmemSize, const void * func, int numBlocks, int blockSize); 
# 5101 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize, unsigned flags); 
# 5136 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaOccupancyMaxPotentialClusterSize(int * clusterSize, const void * func, const cudaLaunchConfig_t * launchConfig); 
# 5175 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaOccupancyMaxActiveClusters(int * numClusters, const void * func, const cudaLaunchConfig_t * launchConfig); 
# 5295 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMallocManaged(void ** devPtr, size_t size, unsigned flags = 1); 
# 5328 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMalloc(void ** devPtr, size_t size); 
# 5365 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMallocHost(void ** ptr, size_t size); 
# 5408 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMallocPitch(void ** devPtr, size_t * pitch, size_t width, size_t height); 
# 5460 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMallocArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, size_t width, size_t height = 0, unsigned flags = 0); 
# 5498 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFree(void * devPtr); 
# 5521 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFreeHost(void * ptr); 
# 5544 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFreeArray(cudaArray_t array); 
# 5567 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFreeMipmappedArray(cudaMipmappedArray_t mipmappedArray); 
# 5633 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaHostAlloc(void ** pHost, size_t size, unsigned flags); 
# 5730 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaHostRegister(void * ptr, size_t size, unsigned flags); 
# 5753 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaHostUnregister(void * ptr); 
# 5798 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaHostGetDevicePointer(void ** pDevice, void * pHost, unsigned flags); 
# 5820 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaHostGetFlags(unsigned * pFlags, void * pHost); 
# 5859 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMalloc3D(cudaPitchedPtr * pitchedDevPtr, cudaExtent extent); 
# 6004 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMalloc3DArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned flags = 0); 
# 6149 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMallocMipmappedArray(cudaMipmappedArray_t * mipmappedArray, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned numLevels, unsigned flags = 0); 
# 6182 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetMipmappedArrayLevel(cudaArray_t * levelArray, cudaMipmappedArray_const_t mipmappedArray, unsigned level); 
# 6287 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms * p); 
# 6319 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy3DPeer(const cudaMemcpy3DPeerParms * p); 
# 6437 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream = 0); 
# 6464 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy3DPeerAsync(const cudaMemcpy3DPeerParms * p, cudaStream_t stream = 0); 
# 6498 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemGetInfo(size_t * free, size_t * total); 
# 6524 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaArrayGetInfo(cudaChannelFormatDesc * desc, cudaExtent * extent, unsigned * flags, cudaArray_t array); 
# 6553 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaArrayGetPlane(cudaArray_t * pPlaneArray, cudaArray_t hArray, unsigned planeIdx); 
# 6576 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaArrayGetMemoryRequirements(cudaArrayMemoryRequirements * memoryRequirements, cudaArray_t array, int device); 
# 6600 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMipmappedArrayGetMemoryRequirements(cudaArrayMemoryRequirements * memoryRequirements, cudaMipmappedArray_t mipmap, int device); 
# 6628 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaArrayGetSparseProperties(cudaArraySparseProperties * sparseProperties, cudaArray_t array); 
# 6658 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMipmappedArrayGetSparseProperties(cudaArraySparseProperties * sparseProperties, cudaMipmappedArray_t mipmap); 
# 6703 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy(void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
# 6738 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyPeer(void * dst, int dstDevice, const void * src, int srcDevice, size_t count); 
# 6787 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2D(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
# 6837 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
# 6887 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DFromArray(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind); 
# 6934 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
# 6977 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyToSymbol(const void * symbol, const void * src, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyHostToDevice); 
# 7021 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyFromSymbol(void * dst, const void * symbol, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyDeviceToHost); 
# 7078 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 7113 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyPeerAsync(void * dst, int dstDevice, const void * src, int srcDevice, size_t count, cudaStream_t stream = 0); 
# 7176 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 7234 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 7291 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DFromArrayAsync(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 7342 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyToSymbolAsync(const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 7393 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyFromSymbolAsync(void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 7422 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemset(void * devPtr, int value, size_t count); 
# 7456 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemset2D(void * devPtr, size_t pitch, int value, size_t width, size_t height); 
# 7502 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemset3D(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent); 
# 7538 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream = 0); 
# 7579 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream = 0); 
# 7632 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream = 0); 
# 7660 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetSymbolAddress(void ** devPtr, const void * symbol); 
# 7687 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetSymbolSize(size_t * size, const void * symbol); 
# 7757 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPrefetchAsync(const void * devPtr, size_t count, int dstDevice, cudaStream_t stream = 0); 
# 7759
extern cudaError_t cudaMemPrefetchAsync_v2(const void * devPtr, size_t count, cudaMemLocation location, unsigned flags, cudaStream_t stream = 0); 
# 7873 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemAdvise(const void * devPtr, size_t count, cudaMemoryAdvise advice, int device); 
# 7996 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemAdvise_v2(const void * devPtr, size_t count, cudaMemoryAdvise advice, cudaMemLocation location); 
# 8078 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemRangeGetAttribute(void * data, size_t dataSize, cudaMemRangeAttribute attribute, const void * devPtr, size_t count); 
# 8121 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemRangeGetAttributes(void ** data, size_t * dataSizes, cudaMemRangeAttribute * attributes, size_t numAttributes, const void * devPtr, size_t count); 
# 8181 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaMemcpyToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind); 
# 8223 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaMemcpyFromArray(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind); 
# 8266 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaMemcpyArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t count, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
# 8317 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaMemcpyToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 8367 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
__attribute((deprecated)) extern cudaError_t cudaMemcpyFromArrayAsync(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 8436 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMallocAsync(void ** devPtr, size_t size, cudaStream_t hStream); 
# 8462 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaFreeAsync(void * devPtr, cudaStream_t hStream); 
# 8487 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolTrimTo(cudaMemPool_t memPool, size_t minBytesToKeep); 
# 8531 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolSetAttribute(cudaMemPool_t memPool, cudaMemPoolAttr attr, void * value); 
# 8579 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolGetAttribute(cudaMemPool_t memPool, cudaMemPoolAttr attr, void * value); 
# 8594 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolSetAccess(cudaMemPool_t memPool, const cudaMemAccessDesc * descList, size_t count); 
# 8607 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolGetAccess(cudaMemAccessFlags * flags, cudaMemPool_t memPool, cudaMemLocation * location); 
# 8645 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolCreate(cudaMemPool_t * memPool, const cudaMemPoolProps * poolProps); 
# 8667 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolDestroy(cudaMemPool_t memPool); 
# 8703 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMallocFromPoolAsync(void ** ptr, size_t size, cudaMemPool_t memPool, cudaStream_t stream); 
# 8728 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolExportToShareableHandle(void * shareableHandle, cudaMemPool_t memPool, cudaMemAllocationHandleType handleType, unsigned flags); 
# 8755 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolImportFromShareableHandle(cudaMemPool_t * memPool, void * shareableHandle, cudaMemAllocationHandleType handleType, unsigned flags); 
# 8778 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolExportPointer(cudaMemPoolPtrExportData * exportData, void * ptr); 
# 8807 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaMemPoolImportPointer(void ** ptr, cudaMemPool_t memPool, cudaMemPoolPtrExportData * exportData); 
# 8960 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaPointerGetAttributes(cudaPointerAttributes * attributes, const void * ptr); 
# 9001 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceCanAccessPeer(int * canAccessPeer, int device, int peerDevice); 
# 9043 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceEnablePeerAccess(int peerDevice, unsigned flags); 
# 9065 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceDisablePeerAccess(int peerDevice); 
# 9129 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t resource); 
# 9164 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t resource, unsigned flags); 
# 9203 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsMapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
# 9238 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsUnmapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
# 9270 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsResourceGetMappedPointer(void ** devPtr, size_t * size, cudaGraphicsResource_t resource); 
# 9308 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray_t * array, cudaGraphicsResource_t resource, unsigned arrayIndex, unsigned mipLevel); 
# 9337 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsResourceGetMappedMipmappedArray(cudaMipmappedArray_t * mipmappedArray, cudaGraphicsResource_t resource); 
# 9372 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc * desc, cudaArray_const_t array); 
# 9402 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaChannelFormatDesc cudaCreateChannelDesc(int x, int y, int z, int w, cudaChannelFormatKind f); 
# 9626 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaCreateTextureObject(cudaTextureObject_t * pTexObject, const cudaResourceDesc * pResDesc, const cudaTextureDesc * pTexDesc, const cudaResourceViewDesc * pResViewDesc); 
# 9646 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDestroyTextureObject(cudaTextureObject_t texObject); 
# 9666 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetTextureObjectResourceDesc(cudaResourceDesc * pResDesc, cudaTextureObject_t texObject); 
# 9686 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetTextureObjectTextureDesc(cudaTextureDesc * pTexDesc, cudaTextureObject_t texObject); 
# 9707 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetTextureObjectResourceViewDesc(cudaResourceViewDesc * pResViewDesc, cudaTextureObject_t texObject); 
# 9752 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaCreateSurfaceObject(cudaSurfaceObject_t * pSurfObject, const cudaResourceDesc * pResDesc); 
# 9772 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDestroySurfaceObject(cudaSurfaceObject_t surfObject); 
# 9791 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetSurfaceObjectResourceDesc(cudaResourceDesc * pResDesc, cudaSurfaceObject_t surfObject); 
# 9825 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDriverGetVersion(int * driverVersion); 
# 9854 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaRuntimeGetVersion(int * runtimeVersion); 
# 9901 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphCreate(cudaGraph_t * pGraph, unsigned flags); 
# 9999 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddKernelNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaKernelNodeParams * pNodeParams); 
# 10032 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphKernelNodeGetParams(cudaGraphNode_t node, cudaKernelNodeParams * pNodeParams); 
# 10058 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphKernelNodeSetParams(cudaGraphNode_t node, const cudaKernelNodeParams * pNodeParams); 
# 10078 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphKernelNodeCopyAttributes(cudaGraphNode_t hSrc, cudaGraphNode_t hDst); 
# 10101 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphKernelNodeGetAttribute(cudaGraphNode_t hNode, cudaLaunchAttributeID attr, cudaLaunchAttributeValue * value_out); 
# 10125 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphKernelNodeSetAttribute(cudaGraphNode_t hNode, cudaLaunchAttributeID attr, const cudaLaunchAttributeValue * value); 
# 10176 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddMemcpyNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaMemcpy3DParms * pCopyParams); 
# 10235 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddMemcpyNodeToSymbol(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind); 
# 10304 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddMemcpyNodeFromSymbol(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind); 
# 10372 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddMemcpyNode1D(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
# 10404 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemcpyNodeGetParams(cudaGraphNode_t node, cudaMemcpy3DParms * pNodeParams); 
# 10431 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemcpyNodeSetParams(cudaGraphNode_t node, const cudaMemcpy3DParms * pNodeParams); 
# 10470 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemcpyNodeSetParamsToSymbol(cudaGraphNode_t node, const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind); 
# 10516 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemcpyNodeSetParamsFromSymbol(cudaGraphNode_t node, void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind); 
# 10562 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemcpyNodeSetParams1D(cudaGraphNode_t node, void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
# 10610 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddMemsetNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaMemsetParams * pMemsetParams); 
# 10633 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemsetNodeGetParams(cudaGraphNode_t node, cudaMemsetParams * pNodeParams); 
# 10657 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemsetNodeSetParams(cudaGraphNode_t node, const cudaMemsetParams * pNodeParams); 
# 10699 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddHostNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaHostNodeParams * pNodeParams); 
# 10722 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphHostNodeGetParams(cudaGraphNode_t node, cudaHostNodeParams * pNodeParams); 
# 10746 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphHostNodeSetParams(cudaGraphNode_t node, const cudaHostNodeParams * pNodeParams); 
# 10787 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddChildGraphNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaGraph_t childGraph); 
# 10814 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphChildGraphNodeGetGraph(cudaGraphNode_t node, cudaGraph_t * pGraph); 
# 10852 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddEmptyNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies); 
# 10896 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddEventRecordNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaEvent_t event); 
# 10923 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphEventRecordNodeGetEvent(cudaGraphNode_t node, cudaEvent_t * event_out); 
# 10951 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphEventRecordNodeSetEvent(cudaGraphNode_t node, cudaEvent_t event); 
# 10998 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddEventWaitNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaEvent_t event); 
# 11025 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphEventWaitNodeGetEvent(cudaGraphNode_t node, cudaEvent_t * event_out); 
# 11053 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphEventWaitNodeSetEvent(cudaGraphNode_t node, cudaEvent_t event); 
# 11103 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddExternalSemaphoresSignalNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaExternalSemaphoreSignalNodeParams * nodeParams); 
# 11136 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExternalSemaphoresSignalNodeGetParams(cudaGraphNode_t hNode, cudaExternalSemaphoreSignalNodeParams * params_out); 
# 11164 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExternalSemaphoresSignalNodeSetParams(cudaGraphNode_t hNode, const cudaExternalSemaphoreSignalNodeParams * nodeParams); 
# 11214 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddExternalSemaphoresWaitNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaExternalSemaphoreWaitNodeParams * nodeParams); 
# 11247 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExternalSemaphoresWaitNodeGetParams(cudaGraphNode_t hNode, cudaExternalSemaphoreWaitNodeParams * params_out); 
# 11275 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExternalSemaphoresWaitNodeSetParams(cudaGraphNode_t hNode, const cudaExternalSemaphoreWaitNodeParams * nodeParams); 
# 11353 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddMemAllocNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaMemAllocNodeParams * nodeParams); 
# 11380 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemAllocNodeGetParams(cudaGraphNode_t node, cudaMemAllocNodeParams * params_out); 
# 11441 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddMemFreeNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, void * dptr); 
# 11465 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphMemFreeNodeGetParams(cudaGraphNode_t node, void * dptr_out); 
# 11493 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGraphMemTrim(int device); 
# 11530 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetGraphMemAttribute(int device, cudaGraphMemAttributeType attr, void * value); 
# 11564 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSetGraphMemAttribute(int device, cudaGraphMemAttributeType attr, void * value); 
# 11592 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphClone(cudaGraph_t * pGraphClone, cudaGraph_t originalGraph); 
# 11620 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphNodeFindInClone(cudaGraphNode_t * pNode, cudaGraphNode_t originalNode, cudaGraph_t clonedGraph); 
# 11651 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphNodeGetType(cudaGraphNode_t node, cudaGraphNodeType * pType); 
# 11682 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphGetNodes(cudaGraph_t graph, cudaGraphNode_t * nodes, size_t * numNodes); 
# 11713 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphGetRootNodes(cudaGraph_t graph, cudaGraphNode_t * pRootNodes, size_t * pNumRootNodes); 
# 11747 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphGetEdges(cudaGraph_t graph, cudaGraphNode_t * from, cudaGraphNode_t * to, size_t * numEdges); 
# 11787 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphGetEdges_v2(cudaGraph_t graph, cudaGraphNode_t * from, cudaGraphNode_t * to, cudaGraphEdgeData * edgeData, size_t * numEdges); 
# 11818 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphNodeGetDependencies(cudaGraphNode_t node, cudaGraphNode_t * pDependencies, size_t * pNumDependencies); 
# 11855 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphNodeGetDependencies_v2(cudaGraphNode_t node, cudaGraphNode_t * pDependencies, cudaGraphEdgeData * edgeData, size_t * pNumDependencies); 
# 11887 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphNodeGetDependentNodes(cudaGraphNode_t node, cudaGraphNode_t * pDependentNodes, size_t * pNumDependentNodes); 
# 11925 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphNodeGetDependentNodes_v2(cudaGraphNode_t node, cudaGraphNode_t * pDependentNodes, cudaGraphEdgeData * edgeData, size_t * pNumDependentNodes); 
# 11956 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddDependencies(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, size_t numDependencies); 
# 11988 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddDependencies_v2(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, const cudaGraphEdgeData * edgeData, size_t numDependencies); 
# 12019 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphRemoveDependencies(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, size_t numDependencies); 
# 12054 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphRemoveDependencies_v2(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, const cudaGraphEdgeData * edgeData, size_t numDependencies); 
# 12084 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphDestroyNode(cudaGraphNode_t node); 
# 12155 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphInstantiate(cudaGraphExec_t * pGraphExec, cudaGraph_t graph, unsigned long long flags = 0); 
# 12228 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphInstantiateWithFlags(cudaGraphExec_t * pGraphExec, cudaGraph_t graph, unsigned long long flags = 0); 
# 12335 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphInstantiateWithParams(cudaGraphExec_t * pGraphExec, cudaGraph_t graph, cudaGraphInstantiateParams * instantiateParams); 
# 12360 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecGetFlags(cudaGraphExec_t graphExec, unsigned long long * flags); 
# 12419 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecKernelNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaKernelNodeParams * pNodeParams); 
# 12470 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecMemcpyNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaMemcpy3DParms * pNodeParams); 
# 12525 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecMemcpyNodeSetParamsToSymbol(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind); 
# 12588 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecMemcpyNodeSetParamsFromSymbol(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind); 
# 12649 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecMemcpyNodeSetParams1D(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
# 12704 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecMemsetNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaMemsetParams * pNodeParams); 
# 12744 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecHostNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaHostNodeParams * pNodeParams); 
# 12791 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecChildGraphNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, cudaGraph_t childGraph); 
# 12836 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecEventRecordNodeSetEvent(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, cudaEvent_t event); 
# 12881 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecEventWaitNodeSetEvent(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, cudaEvent_t event); 
# 12929 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecExternalSemaphoresSignalNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const cudaExternalSemaphoreSignalNodeParams * nodeParams); 
# 12977 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecExternalSemaphoresWaitNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const cudaExternalSemaphoreWaitNodeParams * nodeParams); 
# 13017 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphNodeSetEnabled(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, unsigned isEnabled); 
# 13051 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphNodeGetEnabled(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, unsigned * isEnabled); 
# 13143 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecUpdate(cudaGraphExec_t hGraphExec, cudaGraph_t hGraph, cudaGraphExecUpdateResultInfo * resultInfo); 
# 13168 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphUpload(cudaGraphExec_t graphExec, cudaStream_t stream); 
# 13199 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphLaunch(cudaGraphExec_t graphExec, cudaStream_t stream); 
# 13222 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecDestroy(cudaGraphExec_t graphExec); 
# 13243 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphDestroy(cudaGraph_t graph); 
# 13262 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphDebugDotPrint(cudaGraph_t graph, const char * path, unsigned flags); 
# 13298 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaUserObjectCreate(cudaUserObject_t * object_out, void * ptr, cudaHostFn_t destroy, unsigned initialRefcount, unsigned flags); 
# 13322 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaUserObjectRetain(cudaUserObject_t object, unsigned count = 1); 
# 13350 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaUserObjectRelease(cudaUserObject_t object, unsigned count = 1); 
# 13378 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphRetainUserObject(cudaGraph_t graph, cudaUserObject_t object, unsigned count = 1, unsigned flags = 0); 
# 13403 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphReleaseUserObject(cudaGraph_t graph, cudaUserObject_t object, unsigned count = 1); 
# 13445 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaGraphNodeParams * nodeParams); 
# 13489 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphAddNode_v2(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, const cudaGraphEdgeData * dependencyData, size_t numDependencies, cudaGraphNodeParams * nodeParams); 
# 13518 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphNodeSetParams(cudaGraphNode_t node, cudaGraphNodeParams * nodeParams); 
# 13567 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphExecNodeSetParams(cudaGraphExec_t graphExec, cudaGraphNode_t node, cudaGraphNodeParams * nodeParams); 
# 13593 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGraphConditionalHandleCreate(cudaGraphConditionalHandle * pHandle_out, cudaGraph_t graph, unsigned defaultLaunchValue = 0, unsigned flags = 0); 
# 13671 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetDriverEntryPoint(const char * symbol, void ** funcPtr, unsigned long long flags, cudaDriverEntryPointQueryResult * driverStatus = 0); 
# 13679 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetExportTable(const void ** ppExportTable, const cudaUUID_t * pExportTableId); 
# 13858 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetFuncBySymbol(cudaFunction_t * functionPtr, const void * symbolPtr); 
# 13874 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
extern cudaError_t cudaGetKernel(cudaKernel_t * kernelPtr, const void * entryFuncAddr); 
# 14044 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime_api.h"
}
# 117 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/channel_descriptor.h"
template< class T> inline cudaChannelFormatDesc cudaCreateChannelDesc() 
# 118
{ 
# 119
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
# 120
} 
# 122
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf() 
# 123
{ 
# 124
int e = (((int)sizeof(unsigned short)) * 8); 
# 126
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 127
} 
# 129
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf1() 
# 130
{ 
# 131
int e = (((int)sizeof(unsigned short)) * 8); 
# 133
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 134
} 
# 136
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf2() 
# 137
{ 
# 138
int e = (((int)sizeof(unsigned short)) * 8); 
# 140
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
# 141
} 
# 143
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf4() 
# 144
{ 
# 145
int e = (((int)sizeof(unsigned short)) * 8); 
# 147
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
# 148
} 
# 150
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> () 
# 151
{ 
# 152
int e = (((int)sizeof(char)) * 8); 
# 157
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 159
} 
# 161
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> () 
# 162
{ 
# 163
int e = (((int)sizeof(signed char)) * 8); 
# 165
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 166
} 
# 168
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> () 
# 169
{ 
# 170
int e = (((int)sizeof(unsigned char)) * 8); 
# 172
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 173
} 
# 175
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> () 
# 176
{ 
# 177
int e = (((int)sizeof(signed char)) * 8); 
# 179
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 180
} 
# 182
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> () 
# 183
{ 
# 184
int e = (((int)sizeof(unsigned char)) * 8); 
# 186
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 187
} 
# 189
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> () 
# 190
{ 
# 191
int e = (((int)sizeof(signed char)) * 8); 
# 193
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 194
} 
# 196
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> () 
# 197
{ 
# 198
int e = (((int)sizeof(unsigned char)) * 8); 
# 200
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 201
} 
# 203
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> () 
# 204
{ 
# 205
int e = (((int)sizeof(signed char)) * 8); 
# 207
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 208
} 
# 210
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> () 
# 211
{ 
# 212
int e = (((int)sizeof(unsigned char)) * 8); 
# 214
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 215
} 
# 217
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> () 
# 218
{ 
# 219
int e = (((int)sizeof(short)) * 8); 
# 221
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 222
} 
# 224
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> () 
# 225
{ 
# 226
int e = (((int)sizeof(unsigned short)) * 8); 
# 228
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 229
} 
# 231
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> () 
# 232
{ 
# 233
int e = (((int)sizeof(short)) * 8); 
# 235
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 236
} 
# 238
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> () 
# 239
{ 
# 240
int e = (((int)sizeof(unsigned short)) * 8); 
# 242
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 243
} 
# 245
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> () 
# 246
{ 
# 247
int e = (((int)sizeof(short)) * 8); 
# 249
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 250
} 
# 252
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> () 
# 253
{ 
# 254
int e = (((int)sizeof(unsigned short)) * 8); 
# 256
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 257
} 
# 259
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> () 
# 260
{ 
# 261
int e = (((int)sizeof(short)) * 8); 
# 263
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 264
} 
# 266
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> () 
# 267
{ 
# 268
int e = (((int)sizeof(unsigned short)) * 8); 
# 270
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 271
} 
# 273
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> () 
# 274
{ 
# 275
int e = (((int)sizeof(int)) * 8); 
# 277
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 278
} 
# 280
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> () 
# 281
{ 
# 282
int e = (((int)sizeof(unsigned)) * 8); 
# 284
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 285
} 
# 287
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> () 
# 288
{ 
# 289
int e = (((int)sizeof(int)) * 8); 
# 291
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 292
} 
# 294
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> () 
# 295
{ 
# 296
int e = (((int)sizeof(unsigned)) * 8); 
# 298
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 299
} 
# 301
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> () 
# 302
{ 
# 303
int e = (((int)sizeof(int)) * 8); 
# 305
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 306
} 
# 308
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> () 
# 309
{ 
# 310
int e = (((int)sizeof(unsigned)) * 8); 
# 312
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 313
} 
# 315
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> () 
# 316
{ 
# 317
int e = (((int)sizeof(int)) * 8); 
# 319
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 320
} 
# 322
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> () 
# 323
{ 
# 324
int e = (((int)sizeof(unsigned)) * 8); 
# 326
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 327
} 
# 389 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> () 
# 390
{ 
# 391
int e = (((int)sizeof(float)) * 8); 
# 393
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 394
} 
# 396
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> () 
# 397
{ 
# 398
int e = (((int)sizeof(float)) * 8); 
# 400
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 401
} 
# 403
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> () 
# 404
{ 
# 405
int e = (((int)sizeof(float)) * 8); 
# 407
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
# 408
} 
# 410
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> () 
# 411
{ 
# 412
int e = (((int)sizeof(float)) * 8); 
# 414
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
# 415
} 
# 417
static inline cudaChannelFormatDesc cudaCreateChannelDescNV12() 
# 418
{ 
# 419
int e = (((int)sizeof(char)) * 8); 
# 421
return cudaCreateChannelDesc(e, e, e, 0, cudaChannelFormatKindNV12); 
# 422
} 
# 424
template< cudaChannelFormatKind > inline cudaChannelFormatDesc cudaCreateChannelDesc() 
# 425
{ 
# 426
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
# 427
} 
# 430
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized8X1> () 
# 431
{ 
# 432
return cudaCreateChannelDesc(8, 0, 0, 0, cudaChannelFormatKindSignedNormalized8X1); 
# 433
} 
# 435
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized8X2> () 
# 436
{ 
# 437
return cudaCreateChannelDesc(8, 8, 0, 0, cudaChannelFormatKindSignedNormalized8X2); 
# 438
} 
# 440
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized8X4> () 
# 441
{ 
# 442
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindSignedNormalized8X4); 
# 443
} 
# 446
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized8X1> () 
# 447
{ 
# 448
return cudaCreateChannelDesc(8, 0, 0, 0, cudaChannelFormatKindUnsignedNormalized8X1); 
# 449
} 
# 451
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized8X2> () 
# 452
{ 
# 453
return cudaCreateChannelDesc(8, 8, 0, 0, cudaChannelFormatKindUnsignedNormalized8X2); 
# 454
} 
# 456
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized8X4> () 
# 457
{ 
# 458
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedNormalized8X4); 
# 459
} 
# 462
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized16X1> () 
# 463
{ 
# 464
return cudaCreateChannelDesc(16, 0, 0, 0, cudaChannelFormatKindSignedNormalized16X1); 
# 465
} 
# 467
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized16X2> () 
# 468
{ 
# 469
return cudaCreateChannelDesc(16, 16, 0, 0, cudaChannelFormatKindSignedNormalized16X2); 
# 470
} 
# 472
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedNormalized16X4> () 
# 473
{ 
# 474
return cudaCreateChannelDesc(16, 16, 16, 16, cudaChannelFormatKindSignedNormalized16X4); 
# 475
} 
# 478
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized16X1> () 
# 479
{ 
# 480
return cudaCreateChannelDesc(16, 0, 0, 0, cudaChannelFormatKindUnsignedNormalized16X1); 
# 481
} 
# 483
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized16X2> () 
# 484
{ 
# 485
return cudaCreateChannelDesc(16, 16, 0, 0, cudaChannelFormatKindUnsignedNormalized16X2); 
# 486
} 
# 488
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedNormalized16X4> () 
# 489
{ 
# 490
return cudaCreateChannelDesc(16, 16, 16, 16, cudaChannelFormatKindUnsignedNormalized16X4); 
# 491
} 
# 494
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindNV12> () 
# 495
{ 
# 496
return cudaCreateChannelDesc(8, 8, 8, 0, cudaChannelFormatKindNV12); 
# 497
} 
# 500
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed1> () 
# 501
{ 
# 502
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed1); 
# 503
} 
# 506
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed1SRGB> () 
# 507
{ 
# 508
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed1SRGB); 
# 509
} 
# 512
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed2> () 
# 513
{ 
# 514
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed2); 
# 515
} 
# 518
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed2SRGB> () 
# 519
{ 
# 520
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed2SRGB); 
# 521
} 
# 524
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed3> () 
# 525
{ 
# 526
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed3); 
# 527
} 
# 530
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed3SRGB> () 
# 531
{ 
# 532
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed3SRGB); 
# 533
} 
# 536
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed4> () 
# 537
{ 
# 538
return cudaCreateChannelDesc(8, 0, 0, 0, cudaChannelFormatKindUnsignedBlockCompressed4); 
# 539
} 
# 542
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedBlockCompressed4> () 
# 543
{ 
# 544
return cudaCreateChannelDesc(8, 0, 0, 0, cudaChannelFormatKindSignedBlockCompressed4); 
# 545
} 
# 548
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed5> () 
# 549
{ 
# 550
return cudaCreateChannelDesc(8, 8, 0, 0, cudaChannelFormatKindUnsignedBlockCompressed5); 
# 551
} 
# 554
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedBlockCompressed5> () 
# 555
{ 
# 556
return cudaCreateChannelDesc(8, 8, 0, 0, cudaChannelFormatKindSignedBlockCompressed5); 
# 557
} 
# 560
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed6H> () 
# 561
{ 
# 562
return cudaCreateChannelDesc(16, 16, 16, 0, cudaChannelFormatKindUnsignedBlockCompressed6H); 
# 563
} 
# 566
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindSignedBlockCompressed6H> () 
# 567
{ 
# 568
return cudaCreateChannelDesc(16, 16, 16, 0, cudaChannelFormatKindSignedBlockCompressed6H); 
# 569
} 
# 572
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed7> () 
# 573
{ 
# 574
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed7); 
# 575
} 
# 578
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< cudaChannelFormatKindUnsignedBlockCompressed7SRGB> () 
# 579
{ 
# 580
return cudaCreateChannelDesc(8, 8, 8, 8, cudaChannelFormatKindUnsignedBlockCompressed7SRGB); 
# 581
} 
# 79 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz) 
# 80
{ 
# 81
cudaPitchedPtr s; 
# 83
(s.ptr) = d; 
# 84
(s.pitch) = p; 
# 85
(s.xsize) = xsz; 
# 86
(s.ysize) = ysz; 
# 88
return s; 
# 89
} 
# 106 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_functions.h"
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z) 
# 107
{ 
# 108
cudaPos p; 
# 110
(p.x) = x; 
# 111
(p.y) = y; 
# 112
(p.z) = z; 
# 114
return p; 
# 115
} 
# 132 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/driver_functions.h"
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d) 
# 133
{ 
# 134
cudaExtent e; 
# 136
(e.width) = w; 
# 137
(e.height) = h; 
# 138
(e.depth) = d; 
# 140
return e; 
# 141
} 
# 77 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_functions.h"
static inline char1 make_char1(signed char x); 
# 79
static inline uchar1 make_uchar1(unsigned char x); 
# 81
static inline char2 make_char2(signed char x, signed char y); 
# 83
static inline uchar2 make_uchar2(unsigned char x, unsigned char y); 
# 85
static inline char3 make_char3(signed char x, signed char y, signed char z); 
# 87
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z); 
# 89
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w); 
# 91
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w); 
# 93
static inline short1 make_short1(short x); 
# 95
static inline ushort1 make_ushort1(unsigned short x); 
# 97
static inline short2 make_short2(short x, short y); 
# 99
static inline ushort2 make_ushort2(unsigned short x, unsigned short y); 
# 101
static inline short3 make_short3(short x, short y, short z); 
# 103
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z); 
# 105
static inline short4 make_short4(short x, short y, short z, short w); 
# 107
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w); 
# 109
static inline int1 make_int1(int x); 
# 111
static inline uint1 make_uint1(unsigned x); 
# 113
static inline int2 make_int2(int x, int y); 
# 115
static inline uint2 make_uint2(unsigned x, unsigned y); 
# 117
static inline int3 make_int3(int x, int y, int z); 
# 119
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z); 
# 121
static inline int4 make_int4(int x, int y, int z, int w); 
# 123
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w); 
# 125
static inline long1 make_long1(long x); 
# 127
static inline ulong1 make_ulong1(unsigned long x); 
# 129
static inline long2 make_long2(long x, long y); 
# 131
static inline ulong2 make_ulong2(unsigned long x, unsigned long y); 
# 133
static inline long3 make_long3(long x, long y, long z); 
# 135
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z); 
# 137
static inline long4 make_long4(long x, long y, long z, long w); 
# 139
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w); 
# 141
static inline float1 make_float1(float x); 
# 143
static inline float2 make_float2(float x, float y); 
# 145
static inline float3 make_float3(float x, float y, float z); 
# 147
static inline float4 make_float4(float x, float y, float z, float w); 
# 149
static inline longlong1 make_longlong1(long long x); 
# 151
static inline ulonglong1 make_ulonglong1(unsigned long long x); 
# 153
static inline longlong2 make_longlong2(long long x, long long y); 
# 155
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y); 
# 157
static inline longlong3 make_longlong3(long long x, long long y, long long z); 
# 159
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z); 
# 161
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w); 
# 163
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w); 
# 165
static inline double1 make_double1(double x); 
# 167
static inline double2 make_double2(double x, double y); 
# 169
static inline double3 make_double3(double x, double y, double z); 
# 171
static inline double4 make_double4(double x, double y, double z, double w); 
# 73 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/vector_functions.hpp"
static inline char1 make_char1(signed char x) 
# 74
{ 
# 75
char1 t; (t.x) = x; return t; 
# 76
} 
# 78
static inline uchar1 make_uchar1(unsigned char x) 
# 79
{ 
# 80
uchar1 t; (t.x) = x; return t; 
# 81
} 
# 83
static inline char2 make_char2(signed char x, signed char y) 
# 84
{ 
# 85
char2 t; (t.x) = x; (t.y) = y; return t; 
# 86
} 
# 88
static inline uchar2 make_uchar2(unsigned char x, unsigned char y) 
# 89
{ 
# 90
uchar2 t; (t.x) = x; (t.y) = y; return t; 
# 91
} 
# 93
static inline char3 make_char3(signed char x, signed char y, signed char z) 
# 94
{ 
# 95
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 96
} 
# 98
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z) 
# 99
{ 
# 100
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 101
} 
# 103
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w) 
# 104
{ 
# 105
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 106
} 
# 108
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w) 
# 109
{ 
# 110
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 111
} 
# 113
static inline short1 make_short1(short x) 
# 114
{ 
# 115
short1 t; (t.x) = x; return t; 
# 116
} 
# 118
static inline ushort1 make_ushort1(unsigned short x) 
# 119
{ 
# 120
ushort1 t; (t.x) = x; return t; 
# 121
} 
# 123
static inline short2 make_short2(short x, short y) 
# 124
{ 
# 125
short2 t; (t.x) = x; (t.y) = y; return t; 
# 126
} 
# 128
static inline ushort2 make_ushort2(unsigned short x, unsigned short y) 
# 129
{ 
# 130
ushort2 t; (t.x) = x; (t.y) = y; return t; 
# 131
} 
# 133
static inline short3 make_short3(short x, short y, short z) 
# 134
{ 
# 135
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 136
} 
# 138
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z) 
# 139
{ 
# 140
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 141
} 
# 143
static inline short4 make_short4(short x, short y, short z, short w) 
# 144
{ 
# 145
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 146
} 
# 148
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w) 
# 149
{ 
# 150
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 151
} 
# 153
static inline int1 make_int1(int x) 
# 154
{ 
# 155
int1 t; (t.x) = x; return t; 
# 156
} 
# 158
static inline uint1 make_uint1(unsigned x) 
# 159
{ 
# 160
uint1 t; (t.x) = x; return t; 
# 161
} 
# 163
static inline int2 make_int2(int x, int y) 
# 164
{ 
# 165
int2 t; (t.x) = x; (t.y) = y; return t; 
# 166
} 
# 168
static inline uint2 make_uint2(unsigned x, unsigned y) 
# 169
{ 
# 170
uint2 t; (t.x) = x; (t.y) = y; return t; 
# 171
} 
# 173
static inline int3 make_int3(int x, int y, int z) 
# 174
{ 
# 175
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 176
} 
# 178
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z) 
# 179
{ 
# 180
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 181
} 
# 183
static inline int4 make_int4(int x, int y, int z, int w) 
# 184
{ 
# 185
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 186
} 
# 188
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w) 
# 189
{ 
# 190
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 191
} 
# 193
static inline long1 make_long1(long x) 
# 194
{ 
# 195
long1 t; (t.x) = x; return t; 
# 196
} 
# 198
static inline ulong1 make_ulong1(unsigned long x) 
# 199
{ 
# 200
ulong1 t; (t.x) = x; return t; 
# 201
} 
# 203
static inline long2 make_long2(long x, long y) 
# 204
{ 
# 205
long2 t; (t.x) = x; (t.y) = y; return t; 
# 206
} 
# 208
static inline ulong2 make_ulong2(unsigned long x, unsigned long y) 
# 209
{ 
# 210
ulong2 t; (t.x) = x; (t.y) = y; return t; 
# 211
} 
# 213
static inline long3 make_long3(long x, long y, long z) 
# 214
{ 
# 215
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 216
} 
# 218
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z) 
# 219
{ 
# 220
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 221
} 
# 223
static inline long4 make_long4(long x, long y, long z, long w) 
# 224
{ 
# 225
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 226
} 
# 228
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w) 
# 229
{ 
# 230
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 231
} 
# 233
static inline float1 make_float1(float x) 
# 234
{ 
# 235
float1 t; (t.x) = x; return t; 
# 236
} 
# 238
static inline float2 make_float2(float x, float y) 
# 239
{ 
# 240
float2 t; (t.x) = x; (t.y) = y; return t; 
# 241
} 
# 243
static inline float3 make_float3(float x, float y, float z) 
# 244
{ 
# 245
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 246
} 
# 248
static inline float4 make_float4(float x, float y, float z, float w) 
# 249
{ 
# 250
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 251
} 
# 253
static inline longlong1 make_longlong1(long long x) 
# 254
{ 
# 255
longlong1 t; (t.x) = x; return t; 
# 256
} 
# 258
static inline ulonglong1 make_ulonglong1(unsigned long long x) 
# 259
{ 
# 260
ulonglong1 t; (t.x) = x; return t; 
# 261
} 
# 263
static inline longlong2 make_longlong2(long long x, long long y) 
# 264
{ 
# 265
longlong2 t; (t.x) = x; (t.y) = y; return t; 
# 266
} 
# 268
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y) 
# 269
{ 
# 270
ulonglong2 t; (t.x) = x; (t.y) = y; return t; 
# 271
} 
# 273
static inline longlong3 make_longlong3(long long x, long long y, long long z) 
# 274
{ 
# 275
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 276
} 
# 278
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z) 
# 279
{ 
# 280
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 281
} 
# 283
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w) 
# 284
{ 
# 285
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 286
} 
# 288
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w) 
# 289
{ 
# 290
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 291
} 
# 293
static inline double1 make_double1(double x) 
# 294
{ 
# 295
double1 t; (t.x) = x; return t; 
# 296
} 
# 298
static inline double2 make_double2(double x, double y) 
# 299
{ 
# 300
double2 t; (t.x) = x; (t.y) = y; return t; 
# 301
} 
# 303
static inline double3 make_double3(double x, double y, double z) 
# 304
{ 
# 305
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 306
} 
# 308
static inline double4 make_double4(double x, double y, double z, double w) 
# 309
{ 
# 310
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 311
} 
# 28 "/usr/include/string.h" 3
extern "C" {
# 43 "/usr/include/string.h" 3
extern void *memcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __n) throw()
# 44
 __attribute((__nonnull__(1, 2))); 
# 47
extern void *memmove(void * __dest, const void * __src, size_t __n) throw()
# 48
 __attribute((__nonnull__(1, 2))); 
# 54
extern void *memccpy(void *__restrict__ __dest, const void *__restrict__ __src, int __c, size_t __n) throw()
# 56
 __attribute((__nonnull__(1, 2))); 
# 61
extern void *memset(void * __s, int __c, size_t __n) throw() __attribute((__nonnull__(1))); 
# 64
extern int memcmp(const void * __s1, const void * __s2, size_t __n) throw()
# 65
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 69
extern "C++" {
# 71
extern void *memchr(void * __s, int __c, size_t __n) throw() __asm__("memchr")
# 72
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 73
extern const void *memchr(const void * __s, int __c, size_t __n) throw() __asm__("memchr")
# 74
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 89 "/usr/include/string.h" 3
}
# 99 "/usr/include/string.h" 3
extern "C++" void *rawmemchr(void * __s, int __c) throw() __asm__("rawmemchr")
# 100
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 101
extern "C++" const void *rawmemchr(const void * __s, int __c) throw() __asm__("rawmemchr")
# 102
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 110
extern "C++" void *memrchr(void * __s, int __c, size_t __n) throw() __asm__("memrchr")
# 111
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 112
extern "C++" const void *memrchr(const void * __s, int __c, size_t __n) throw() __asm__("memrchr")
# 113
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 122 "/usr/include/string.h" 3
extern char *strcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 123
 __attribute((__nonnull__(1, 2))); 
# 125
extern char *strncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 127
 __attribute((__nonnull__(1, 2))); 
# 130
extern char *strcat(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 131
 __attribute((__nonnull__(1, 2))); 
# 133
extern char *strncat(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 134
 __attribute((__nonnull__(1, 2))); 
# 137
extern int strcmp(const char * __s1, const char * __s2) throw()
# 138
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 140
extern int strncmp(const char * __s1, const char * __s2, size_t __n) throw()
# 141
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 144
extern int strcoll(const char * __s1, const char * __s2) throw()
# 145
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 147
extern size_t strxfrm(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 149
 __attribute((__nonnull__(2))); 
# 156
extern int strcoll_l(const char * __s1, const char * __s2, locale_t __l) throw()
# 157
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3))); 
# 160
extern size_t strxfrm_l(char * __dest, const char * __src, size_t __n, locale_t __l) throw()
# 161
 __attribute((__nonnull__(2, 4))); 
# 167
extern char *strdup(const char * __s) throw()
# 168
 __attribute((__malloc__)) __attribute((__nonnull__(1))); 
# 175
extern char *strndup(const char * __string, size_t __n) throw()
# 176
 __attribute((__malloc__)) __attribute((__nonnull__(1))); 
# 204 "/usr/include/string.h" 3
extern "C++" {
# 206
extern char *strchr(char * __s, int __c) throw() __asm__("strchr")
# 207
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 208
extern const char *strchr(const char * __s, int __c) throw() __asm__("strchr")
# 209
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 224 "/usr/include/string.h" 3
}
# 231
extern "C++" {
# 233
extern char *strrchr(char * __s, int __c) throw() __asm__("strrchr")
# 234
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 235
extern const char *strrchr(const char * __s, int __c) throw() __asm__("strrchr")
# 236
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 251 "/usr/include/string.h" 3
}
# 261 "/usr/include/string.h" 3
extern "C++" char *strchrnul(char * __s, int __c) throw() __asm__("strchrnul")
# 262
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 263
extern "C++" const char *strchrnul(const char * __s, int __c) throw() __asm__("strchrnul")
# 264
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 273 "/usr/include/string.h" 3
extern size_t strcspn(const char * __s, const char * __reject) throw()
# 274
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 277
extern size_t strspn(const char * __s, const char * __accept) throw()
# 278
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 281
extern "C++" {
# 283
extern char *strpbrk(char * __s, const char * __accept) throw() __asm__("strpbrk")
# 284
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 285
extern const char *strpbrk(const char * __s, const char * __accept) throw() __asm__("strpbrk")
# 286
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 301 "/usr/include/string.h" 3
}
# 308
extern "C++" {
# 310
extern char *strstr(char * __haystack, const char * __needle) throw() __asm__("strstr")
# 311
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 312
extern const char *strstr(const char * __haystack, const char * __needle) throw() __asm__("strstr")
# 313
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 328 "/usr/include/string.h" 3
}
# 336
extern char *strtok(char *__restrict__ __s, const char *__restrict__ __delim) throw()
# 337
 __attribute((__nonnull__(2))); 
# 341
extern char *__strtok_r(char *__restrict__ __s, const char *__restrict__ __delim, char **__restrict__ __save_ptr) throw()
# 344
 __attribute((__nonnull__(2, 3))); 
# 346
extern char *strtok_r(char *__restrict__ __s, const char *__restrict__ __delim, char **__restrict__ __save_ptr) throw()
# 348
 __attribute((__nonnull__(2, 3))); 
# 354
extern "C++" char *strcasestr(char * __haystack, const char * __needle) throw() __asm__("strcasestr")
# 355
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 356
extern "C++" const char *strcasestr(const char * __haystack, const char * __needle) throw() __asm__("strcasestr")
# 358
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 369 "/usr/include/string.h" 3
extern void *memmem(const void * __haystack, size_t __haystacklen, const void * __needle, size_t __needlelen) throw()
# 371
 __attribute((__pure__)) __attribute((__nonnull__(1, 3))); 
# 375
extern void *__mempcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __n) throw()
# 377
 __attribute((__nonnull__(1, 2))); 
# 378
extern void *mempcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __n) throw()
# 380
 __attribute((__nonnull__(1, 2))); 
# 385
extern size_t strlen(const char * __s) throw()
# 386
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 391
extern size_t strnlen(const char * __string, size_t __maxlen) throw()
# 392
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 397
extern char *strerror(int __errnum) throw(); 
# 421 "/usr/include/string.h" 3
extern char *strerror_r(int __errnum, char * __buf, size_t __buflen) throw()
# 422
 __attribute((__nonnull__(2))); 
# 428
extern char *strerror_l(int __errnum, locale_t __l) throw(); 
# 30 "/usr/include/strings.h" 3
extern "C" {
# 34
extern int bcmp(const void * __s1, const void * __s2, size_t __n) throw()
# 35
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 38
extern void bcopy(const void * __src, void * __dest, size_t __n) throw()
# 39
 __attribute((__nonnull__(1, 2))); 
# 42
extern void bzero(void * __s, size_t __n) throw() __attribute((__nonnull__(1))); 
# 46
extern "C++" {
# 48
extern char *index(char * __s, int __c) throw() __asm__("index")
# 49
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 50
extern const char *index(const char * __s, int __c) throw() __asm__("index")
# 51
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 66 "/usr/include/strings.h" 3
}
# 74
extern "C++" {
# 76
extern char *rindex(char * __s, int __c) throw() __asm__("rindex")
# 77
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 78
extern const char *rindex(const char * __s, int __c) throw() __asm__("rindex")
# 79
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 94 "/usr/include/strings.h" 3
}
# 104 "/usr/include/strings.h" 3
extern int ffs(int __i) throw() __attribute((const)); 
# 110
extern int ffsl(long __l) throw() __attribute((const)); 
# 111
__extension__ extern int ffsll(long long __ll) throw()
# 112
 __attribute((const)); 
# 116
extern int strcasecmp(const char * __s1, const char * __s2) throw()
# 117
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 120
extern int strncasecmp(const char * __s1, const char * __s2, size_t __n) throw()
# 121
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 128
extern int strcasecmp_l(const char * __s1, const char * __s2, locale_t __loc) throw()
# 129
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3))); 
# 133
extern int strncasecmp_l(const char * __s1, const char * __s2, size_t __n, locale_t __loc) throw()
# 135
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 4))); 
# 138
}
# 436 "/usr/include/string.h" 3
extern void explicit_bzero(void * __s, size_t __n) throw() __attribute((__nonnull__(1))); 
# 440
extern char *strsep(char **__restrict__ __stringp, const char *__restrict__ __delim) throw()
# 442
 __attribute((__nonnull__(1, 2))); 
# 447
extern char *strsignal(int __sig) throw(); 
# 450
extern char *__stpcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 451
 __attribute((__nonnull__(1, 2))); 
# 452
extern char *stpcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 453
 __attribute((__nonnull__(1, 2))); 
# 457
extern char *__stpncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 459
 __attribute((__nonnull__(1, 2))); 
# 460
extern char *stpncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 462
 __attribute((__nonnull__(1, 2))); 
# 467
extern int strverscmp(const char * __s1, const char * __s2) throw()
# 468
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 471
extern char *strfry(char * __string) throw() __attribute((__nonnull__(1))); 
# 474
extern void *memfrob(void * __s, size_t __n) throw() __attribute((__nonnull__(1))); 
# 482
extern "C++" char *basename(char * __filename) throw() __asm__("basename")
# 483
 __attribute((__nonnull__(1))); 
# 484
extern "C++" const char *basename(const char * __filename) throw() __asm__("basename")
# 485
 __attribute((__nonnull__(1))); 
# 499 "/usr/include/string.h" 3
}
# 26 "/usr/include/bits/timex.h" 3
struct timex { 
# 28
unsigned modes; 
# 29
__syscall_slong_t offset; 
# 30
__syscall_slong_t freq; 
# 31
__syscall_slong_t maxerror; 
# 32
__syscall_slong_t esterror; 
# 33
int status; 
# 34
__syscall_slong_t constant; 
# 35
__syscall_slong_t precision; 
# 36
__syscall_slong_t tolerance; 
# 37
timeval time; 
# 38
__syscall_slong_t tick; 
# 39
__syscall_slong_t ppsfreq; 
# 40
__syscall_slong_t jitter; 
# 41
int shift; 
# 42
__syscall_slong_t stabil; 
# 43
__syscall_slong_t jitcnt; 
# 44
__syscall_slong_t calcnt; 
# 45
__syscall_slong_t errcnt; 
# 46
__syscall_slong_t stbcnt; 
# 48
int tai; 
# 51
int: 32; int: 32; int: 32; int: 32; 
# 52
int: 32; int: 32; int: 32; int: 32; 
# 53
int: 32; int: 32; int: 32; 
# 54
}; 
# 75 "/usr/include/bits/time.h" 3
extern "C" {
# 78
extern int clock_adjtime(__clockid_t __clock_id, timex * __utx) throw(); 
# 80
}
# 7 "/usr/include/bits/types/struct_tm.h" 3
struct tm { 
# 9
int tm_sec; 
# 10
int tm_min; 
# 11
int tm_hour; 
# 12
int tm_mday; 
# 13
int tm_mon; 
# 14
int tm_year; 
# 15
int tm_wday; 
# 16
int tm_yday; 
# 17
int tm_isdst; 
# 20
long tm_gmtoff; 
# 21
const char *tm_zone; 
# 26
}; 
# 8 "/usr/include/bits/types/struct_itimerspec.h" 3
struct itimerspec { 
# 10
timespec it_interval; 
# 11
timespec it_value; 
# 12
}; 
# 49 "/usr/include/time.h" 3
struct sigevent; 
# 68 "/usr/include/time.h" 3
extern "C" {
# 72
extern clock_t clock() throw(); 
# 75
extern time_t time(time_t * __timer) throw(); 
# 78
extern double difftime(time_t __time1, time_t __time0) throw()
# 79
 __attribute((const)); 
# 82
extern time_t mktime(tm * __tp) throw(); 
# 88
extern size_t strftime(char *__restrict__ __s, size_t __maxsize, const char *__restrict__ __format, const tm *__restrict__ __tp) throw(); 
# 95
extern char *strptime(const char *__restrict__ __s, const char *__restrict__ __fmt, tm * __tp) throw(); 
# 104
extern size_t strftime_l(char *__restrict__ __s, size_t __maxsize, const char *__restrict__ __format, const tm *__restrict__ __tp, locale_t __loc) throw(); 
# 111
extern char *strptime_l(const char *__restrict__ __s, const char *__restrict__ __fmt, tm * __tp, locale_t __loc) throw(); 
# 119
extern tm *gmtime(const time_t * __timer) throw(); 
# 123
extern tm *localtime(const time_t * __timer) throw(); 
# 128
extern tm *gmtime_r(const time_t *__restrict__ __timer, tm *__restrict__ __tp) throw(); 
# 133
extern tm *localtime_r(const time_t *__restrict__ __timer, tm *__restrict__ __tp) throw(); 
# 139
extern char *asctime(const tm * __tp) throw(); 
# 142
extern char *ctime(const time_t * __timer) throw(); 
# 149
extern char *asctime_r(const tm *__restrict__ __tp, char *__restrict__ __buf) throw(); 
# 153
extern char *ctime_r(const time_t *__restrict__ __timer, char *__restrict__ __buf) throw(); 
# 159
extern char *__tzname[2]; 
# 160
extern int __daylight; 
# 161
extern long __timezone; 
# 166
extern char *tzname[2]; 
# 170
extern void tzset() throw(); 
# 174
extern int daylight; 
# 175
extern long timezone; 
# 190 "/usr/include/time.h" 3
extern time_t timegm(tm * __tp) throw(); 
# 193
extern time_t timelocal(tm * __tp) throw(); 
# 196
extern int dysize(int __year) throw() __attribute((const)); 
# 205 "/usr/include/time.h" 3
extern int nanosleep(const timespec * __requested_time, timespec * __remaining); 
# 210
extern int clock_getres(clockid_t __clock_id, timespec * __res) throw(); 
# 213
extern int clock_gettime(clockid_t __clock_id, timespec * __tp) throw(); 
# 216
extern int clock_settime(clockid_t __clock_id, const timespec * __tp) throw(); 
# 224
extern int clock_nanosleep(clockid_t __clock_id, int __flags, const timespec * __req, timespec * __rem); 
# 229
extern int clock_getcpuclockid(pid_t __pid, clockid_t * __clock_id) throw(); 
# 234
extern int timer_create(clockid_t __clock_id, sigevent *__restrict__ __evp, timer_t *__restrict__ __timerid) throw(); 
# 239
extern int timer_delete(timer_t __timerid) throw(); 
# 242
extern int timer_settime(timer_t __timerid, int __flags, const itimerspec *__restrict__ __value, itimerspec *__restrict__ __ovalue) throw(); 
# 247
extern int timer_gettime(timer_t __timerid, itimerspec * __value) throw(); 
# 251
extern int timer_getoverrun(timer_t __timerid) throw(); 
# 257
extern int timespec_get(timespec * __ts, int __base) throw()
# 258
 __attribute((__nonnull__(1))); 
# 274 "/usr/include/time.h" 3
extern int getdate_err; 
# 283 "/usr/include/time.h" 3
extern tm *getdate(const char * __string); 
# 297 "/usr/include/time.h" 3
extern int getdate_r(const char *__restrict__ __string, tm *__restrict__ __resbufp); 
# 301
}
# 88 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/common_functions.h"
extern "C" {
# 91
extern clock_t clock() throw(); 
# 96 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/common_functions.h"
extern void *memset(void *, int, size_t) throw(); 
# 97 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/common_functions.h"
extern void *memcpy(void *, const void *, size_t) throw(); 
# 99 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/common_functions.h"
}
# 124 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern "C" {
# 222 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern int abs(int a) throw(); 
# 230 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern long labs(long a) throw(); 
# 238 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern long long llabs(long long a) throw(); 
# 288 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double fabs(double x) throw(); 
# 331 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float fabsf(float x) throw(); 
# 341 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern inline int min(const int a, const int b); 
# 348
extern inline unsigned umin(const unsigned a, const unsigned b); 
# 355
extern inline long long llmin(const long long a, const long long b); 
# 362
extern inline unsigned long long ullmin(const unsigned long long a, const unsigned long long b); 
# 383 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float fminf(float x, float y) throw(); 
# 403 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double fmin(double x, double y) throw(); 
# 416 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern inline int max(const int a, const int b); 
# 424
extern inline unsigned umax(const unsigned a, const unsigned b); 
# 431
extern inline long long llmax(const long long a, const long long b); 
# 438
extern inline unsigned long long ullmax(const unsigned long long a, const unsigned long long b); 
# 459 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float fmaxf(float x, float y) throw(); 
# 479 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double fmax(double, double) throw(); 
# 523 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double sin(double x) throw(); 
# 556 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double cos(double x) throw(); 
# 575 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern void sincos(double x, double * sptr, double * cptr) throw(); 
# 591 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern void sincosf(float x, float * sptr, float * cptr) throw(); 
# 636 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double tan(double x) throw(); 
# 705 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double sqrt(double x) throw(); 
# 777 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double rsqrt(double x); 
# 847 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float rsqrtf(float x); 
# 903 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double log2(double x) throw(); 
# 968 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double exp2(double x) throw(); 
# 1033 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float exp2f(float x) throw(); 
# 1100 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double exp10(double x) throw(); 
# 1163 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float exp10f(float x) throw(); 
# 1256 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double expm1(double x) throw(); 
# 1348 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float expm1f(float x) throw(); 
# 1404 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float log2f(float x) throw(); 
# 1458 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double log10(double x) throw(); 
# 1528 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double log(double x) throw(); 
# 1624 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double log1p(double x) throw(); 
# 1723 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float log1pf(float x) throw(); 
# 1787 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double floor(double x) throw(); 
# 1866 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double exp(double x) throw(); 
# 1907 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double cosh(double x) throw(); 
# 1957 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double sinh(double x) throw(); 
# 2007 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double tanh(double x) throw(); 
# 2062 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double acosh(double x) throw(); 
# 2120 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float acoshf(float x) throw(); 
# 2173 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double asinh(double x) throw(); 
# 2226 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float asinhf(float x) throw(); 
# 2280 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double atanh(double x) throw(); 
# 2334 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float atanhf(float x) throw(); 
# 2383 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double ldexp(double x, int exp) throw(); 
# 2429 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float ldexpf(float x, int exp) throw(); 
# 2481 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double logb(double x) throw(); 
# 2536 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float logbf(float x) throw(); 
# 2576 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern int ilogb(double x) throw(); 
# 2616 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern int ilogbf(float x) throw(); 
# 2692 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double scalbn(double x, int n) throw(); 
# 2768 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float scalbnf(float x, int n) throw(); 
# 2844 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double scalbln(double x, long n) throw(); 
# 2920 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float scalblnf(float x, long n) throw(); 
# 2997 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double frexp(double x, int * nptr) throw(); 
# 3071 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float frexpf(float x, int * nptr) throw(); 
# 3123 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double round(double x) throw(); 
# 3178 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float roundf(float x) throw(); 
# 3196 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern long lround(double x) throw(); 
# 3214 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern long lroundf(float x) throw(); 
# 3232 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern long long llround(double x) throw(); 
# 3250 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern long long llroundf(float x) throw(); 
# 3378 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float rintf(float x) throw(); 
# 3395 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern long lrint(double x) throw(); 
# 3412 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern long lrintf(float x) throw(); 
# 3429 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern long long llrint(double x) throw(); 
# 3446 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern long long llrintf(float x) throw(); 
# 3499 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double nearbyint(double x) throw(); 
# 3552 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float nearbyintf(float x) throw(); 
# 3614 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double ceil(double x) throw(); 
# 3664 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double trunc(double x) throw(); 
# 3717 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float truncf(float x) throw(); 
# 3743 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double fdim(double x, double y) throw(); 
# 3769 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float fdimf(float x, float y) throw(); 
# 4069 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double atan2(double y, double x) throw(); 
# 4140 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double atan(double x) throw(); 
# 4163 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double acos(double x) throw(); 
# 4214 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double asin(double x) throw(); 
# 4282 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double hypot(double x, double y) throw(); 
# 4405 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float hypotf(float x, float y) throw(); 
# 5191 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double cbrt(double x) throw(); 
# 5277 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float cbrtf(float x) throw(); 
# 5332 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double rcbrt(double x); 
# 5382 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float rcbrtf(float x); 
# 5442 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double sinpi(double x); 
# 5502 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float sinpif(float x); 
# 5554 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double cospi(double x); 
# 5606 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float cospif(float x); 
# 5636 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern void sincospi(double x, double * sptr, double * cptr); 
# 5666 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern void sincospif(float x, float * sptr, float * cptr); 
# 5999 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double pow(double x, double y) throw(); 
# 6055 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double modf(double x, double * iptr) throw(); 
# 6114 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double fmod(double x, double y) throw(); 
# 6210 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double remainder(double x, double y) throw(); 
# 6309 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float remainderf(float x, float y) throw(); 
# 6381 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double remquo(double x, double y, int * quo) throw(); 
# 6453 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float remquof(float x, float y, int * quo) throw(); 
# 6494 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double j0(double x) throw(); 
# 6536 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float j0f(float x) throw(); 
# 6605 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double j1(double x) throw(); 
# 6674 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float j1f(float x) throw(); 
# 6717 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double jn(int n, double x) throw(); 
# 6760 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float jnf(int n, float x) throw(); 
# 6821 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double y0(double x) throw(); 
# 6882 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float y0f(float x) throw(); 
# 6943 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double y1(double x) throw(); 
# 7004 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float y1f(float x) throw(); 
# 7067 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double yn(int n, double x) throw(); 
# 7130 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float ynf(int n, float x) throw(); 
# 7319 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double erf(double x) throw(); 
# 7401 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float erff(float x) throw(); 
# 7473 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double erfinv(double x); 
# 7538 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float erfinvf(float x); 
# 7577 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double erfc(double x) throw(); 
# 7615 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float erfcf(float x) throw(); 
# 7732 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double lgamma(double x) throw(); 
# 7794 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double erfcinv(double x); 
# 7849 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float erfcinvf(float x); 
# 7917 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double normcdfinv(double x); 
# 7985 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float normcdfinvf(float x); 
# 8028 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double normcdf(double x); 
# 8071 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float normcdff(float x); 
# 8135 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double erfcx(double x); 
# 8199 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float erfcxf(float x); 
# 8318 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float lgammaf(float x) throw(); 
# 8416 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double tgamma(double x) throw(); 
# 8514 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float tgammaf(float x) throw(); 
# 8527 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double copysign(double x, double y) throw(); 
# 8540 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float copysignf(float x, float y) throw(); 
# 8559 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double nextafter(double x, double y) throw(); 
# 8578 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float nextafterf(float x, float y) throw(); 
# 8594 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double nan(const char * tagp) throw(); 
# 8610 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float nanf(const char * tagp) throw(); 
# 8617 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern int __isinff(float) throw(); 
# 8618 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern int __isnanf(float) throw(); 
# 8628 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern int __finite(double) throw(); 
# 8629 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern int __finitef(float) throw(); 
# 8630 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern int __signbit(double) throw(); 
# 8631 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern int __isnan(double) throw(); 
# 8632 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern int __isinf(double) throw(); 
# 8635 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern int __signbitf(float) throw(); 
# 8794 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern double fma(double x, double y, double z) throw(); 
# 8952 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float fmaf(float x, float y, float z) throw(); 
# 8963 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern int __signbitl(long double) throw(); 
# 8969 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern int __finitel(long double) throw(); 
# 8970 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern int __isinfl(long double) throw(); 
# 8971 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern int __isnanl(long double) throw(); 
# 9021 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float acosf(float x) throw(); 
# 9080 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float asinf(float x) throw(); 
# 9160 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float atanf(float x) throw(); 
# 9457 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float atan2f(float y, float x) throw(); 
# 9491 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float cosf(float x) throw(); 
# 9533 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float sinf(float x) throw(); 
# 9575 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float tanf(float x) throw(); 
# 9616 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float coshf(float x) throw(); 
# 9666 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float sinhf(float x) throw(); 
# 9716 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float tanhf(float x) throw(); 
# 9768 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float logf(float x) throw(); 
# 9848 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float expf(float x) throw(); 
# 9900 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float log10f(float x) throw(); 
# 9955 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float modff(float x, float * iptr) throw(); 
# 10285 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float powf(float x, float y) throw(); 
# 10354 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float sqrtf(float x) throw(); 
# 10413 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float ceilf(float x) throw(); 
# 10474 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float floorf(float x) throw(); 
# 10532 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern float fmodf(float x, float y) throw(); 
# 10547 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
}
# 67 "/usr/include/c++/7/bits/cpp_type_traits.h" 3
extern "C++" {
# 69
namespace std __attribute((__visibility__("default"))) { 
# 73
struct __true_type { }; 
# 74
struct __false_type { }; 
# 76
template< bool > 
# 77
struct __truth_type { 
# 78
typedef __false_type __type; }; 
# 81
template<> struct __truth_type< true>  { 
# 82
typedef __true_type __type; }; 
# 86
template< class _Sp, class _Tp> 
# 87
struct __traitor { 
# 89
enum { __value = ((bool)_Sp::__value) || ((bool)_Tp::__value)}; 
# 90
typedef typename __truth_type< __value> ::__type __type; 
# 91
}; 
# 94
template< class , class > 
# 95
struct __are_same { 
# 97
enum { __value}; 
# 98
typedef __false_type __type; 
# 99
}; 
# 101
template< class _Tp> 
# 102
struct __are_same< _Tp, _Tp>  { 
# 104
enum { __value = 1}; 
# 105
typedef __true_type __type; 
# 106
}; 
# 109
template< class _Tp> 
# 110
struct __is_void { 
# 112
enum { __value}; 
# 113
typedef __false_type __type; 
# 114
}; 
# 117
template<> struct __is_void< void>  { 
# 119
enum { __value = 1}; 
# 120
typedef __true_type __type; 
# 121
}; 
# 126
template< class _Tp> 
# 127
struct __is_integer { 
# 129
enum { __value}; 
# 130
typedef __false_type __type; 
# 131
}; 
# 138
template<> struct __is_integer< bool>  { 
# 140
enum { __value = 1}; 
# 141
typedef __true_type __type; 
# 142
}; 
# 145
template<> struct __is_integer< char>  { 
# 147
enum { __value = 1}; 
# 148
typedef __true_type __type; 
# 149
}; 
# 152
template<> struct __is_integer< signed char>  { 
# 154
enum { __value = 1}; 
# 155
typedef __true_type __type; 
# 156
}; 
# 159
template<> struct __is_integer< unsigned char>  { 
# 161
enum { __value = 1}; 
# 162
typedef __true_type __type; 
# 163
}; 
# 167
template<> struct __is_integer< wchar_t>  { 
# 169
enum { __value = 1}; 
# 170
typedef __true_type __type; 
# 171
}; 
# 176
template<> struct __is_integer< char16_t>  { 
# 178
enum { __value = 1}; 
# 179
typedef __true_type __type; 
# 180
}; 
# 183
template<> struct __is_integer< char32_t>  { 
# 185
enum { __value = 1}; 
# 186
typedef __true_type __type; 
# 187
}; 
# 191
template<> struct __is_integer< short>  { 
# 193
enum { __value = 1}; 
# 194
typedef __true_type __type; 
# 195
}; 
# 198
template<> struct __is_integer< unsigned short>  { 
# 200
enum { __value = 1}; 
# 201
typedef __true_type __type; 
# 202
}; 
# 205
template<> struct __is_integer< int>  { 
# 207
enum { __value = 1}; 
# 208
typedef __true_type __type; 
# 209
}; 
# 212
template<> struct __is_integer< unsigned>  { 
# 214
enum { __value = 1}; 
# 215
typedef __true_type __type; 
# 216
}; 
# 219
template<> struct __is_integer< long>  { 
# 221
enum { __value = 1}; 
# 222
typedef __true_type __type; 
# 223
}; 
# 226
template<> struct __is_integer< unsigned long>  { 
# 228
enum { __value = 1}; 
# 229
typedef __true_type __type; 
# 230
}; 
# 233
template<> struct __is_integer< long long>  { 
# 235
enum { __value = 1}; 
# 236
typedef __true_type __type; 
# 237
}; 
# 240
template<> struct __is_integer< unsigned long long>  { 
# 242
enum { __value = 1}; 
# 243
typedef __true_type __type; 
# 244
}; 
# 261 "/usr/include/c++/7/bits/cpp_type_traits.h" 3
template<> struct __is_integer< __int128>  { enum { __value = 1}; typedef __true_type __type; }; template<> struct __is_integer< unsigned __int128>  { enum { __value = 1}; typedef __true_type __type; }; 
# 278 "/usr/include/c++/7/bits/cpp_type_traits.h" 3
template< class _Tp> 
# 279
struct __is_floating { 
# 281
enum { __value}; 
# 282
typedef __false_type __type; 
# 283
}; 
# 287
template<> struct __is_floating< float>  { 
# 289
enum { __value = 1}; 
# 290
typedef __true_type __type; 
# 291
}; 
# 294
template<> struct __is_floating< double>  { 
# 296
enum { __value = 1}; 
# 297
typedef __true_type __type; 
# 298
}; 
# 301
template<> struct __is_floating< long double>  { 
# 303
enum { __value = 1}; 
# 304
typedef __true_type __type; 
# 305
}; 
# 310
template< class _Tp> 
# 311
struct __is_pointer { 
# 313
enum { __value}; 
# 314
typedef __false_type __type; 
# 315
}; 
# 317
template< class _Tp> 
# 318
struct __is_pointer< _Tp *>  { 
# 320
enum { __value = 1}; 
# 321
typedef __true_type __type; 
# 322
}; 
# 327
template< class _Tp> 
# 328
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> >  { 
# 330
}; 
# 335
template< class _Tp> 
# 336
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> >  { 
# 338
}; 
# 343
template< class _Tp> 
# 344
struct __is_char { 
# 346
enum { __value}; 
# 347
typedef __false_type __type; 
# 348
}; 
# 351
template<> struct __is_char< char>  { 
# 353
enum { __value = 1}; 
# 354
typedef __true_type __type; 
# 355
}; 
# 359
template<> struct __is_char< wchar_t>  { 
# 361
enum { __value = 1}; 
# 362
typedef __true_type __type; 
# 363
}; 
# 366
template< class _Tp> 
# 367
struct __is_byte { 
# 369
enum { __value}; 
# 370
typedef __false_type __type; 
# 371
}; 
# 374
template<> struct __is_byte< char>  { 
# 376
enum { __value = 1}; 
# 377
typedef __true_type __type; 
# 378
}; 
# 381
template<> struct __is_byte< signed char>  { 
# 383
enum { __value = 1}; 
# 384
typedef __true_type __type; 
# 385
}; 
# 388
template<> struct __is_byte< unsigned char>  { 
# 390
enum { __value = 1}; 
# 391
typedef __true_type __type; 
# 392
}; 
# 397
template< class _Tp> 
# 398
struct __is_move_iterator { 
# 400
enum { __value}; 
# 401
typedef __false_type __type; 
# 402
}; 
# 406
template< class _Iterator> inline _Iterator 
# 408
__miter_base(_Iterator __it) 
# 409
{ return __it; } 
# 412
}
# 413
}
# 37 "/usr/include/c++/7/ext/type_traits.h" 3
extern "C++" {
# 39
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 44
template< bool , class > 
# 45
struct __enable_if { 
# 46
}; 
# 48
template< class _Tp> 
# 49
struct __enable_if< true, _Tp>  { 
# 50
typedef _Tp __type; }; 
# 54
template< bool _Cond, class _Iftrue, class _Iffalse> 
# 55
struct __conditional_type { 
# 56
typedef _Iftrue __type; }; 
# 58
template< class _Iftrue, class _Iffalse> 
# 59
struct __conditional_type< false, _Iftrue, _Iffalse>  { 
# 60
typedef _Iffalse __type; }; 
# 64
template< class _Tp> 
# 65
struct __add_unsigned { 
# 68
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp>  __if_type; 
# 71
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type; 
# 72
}; 
# 75
template<> struct __add_unsigned< char>  { 
# 76
typedef unsigned char __type; }; 
# 79
template<> struct __add_unsigned< signed char>  { 
# 80
typedef unsigned char __type; }; 
# 83
template<> struct __add_unsigned< short>  { 
# 84
typedef unsigned short __type; }; 
# 87
template<> struct __add_unsigned< int>  { 
# 88
typedef unsigned __type; }; 
# 91
template<> struct __add_unsigned< long>  { 
# 92
typedef unsigned long __type; }; 
# 95
template<> struct __add_unsigned< long long>  { 
# 96
typedef unsigned long long __type; }; 
# 100
template<> struct __add_unsigned< bool> ; 
# 103
template<> struct __add_unsigned< wchar_t> ; 
# 107
template< class _Tp> 
# 108
struct __remove_unsigned { 
# 111
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp>  __if_type; 
# 114
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type; 
# 115
}; 
# 118
template<> struct __remove_unsigned< char>  { 
# 119
typedef signed char __type; }; 
# 122
template<> struct __remove_unsigned< unsigned char>  { 
# 123
typedef signed char __type; }; 
# 126
template<> struct __remove_unsigned< unsigned short>  { 
# 127
typedef short __type; }; 
# 130
template<> struct __remove_unsigned< unsigned>  { 
# 131
typedef int __type; }; 
# 134
template<> struct __remove_unsigned< unsigned long>  { 
# 135
typedef long __type; }; 
# 138
template<> struct __remove_unsigned< unsigned long long>  { 
# 139
typedef long long __type; }; 
# 143
template<> struct __remove_unsigned< bool> ; 
# 146
template<> struct __remove_unsigned< wchar_t> ; 
# 150
template< class _Type> inline bool 
# 152
__is_null_pointer(_Type *__ptr) 
# 153
{ return __ptr == 0; } 
# 155
template< class _Type> inline bool 
# 157
__is_null_pointer(_Type) 
# 158
{ return false; } 
# 162
inline bool __is_null_pointer(std::nullptr_t) 
# 163
{ return true; } 
# 167
template< class _Tp, bool  = std::template __is_integer< _Tp> ::__value> 
# 168
struct __promote { 
# 169
typedef double __type; }; 
# 174
template< class _Tp> 
# 175
struct __promote< _Tp, false>  { 
# 176
}; 
# 179
template<> struct __promote< long double>  { 
# 180
typedef long double __type; }; 
# 183
template<> struct __promote< double>  { 
# 184
typedef double __type; }; 
# 187
template<> struct __promote< float>  { 
# 188
typedef float __type; }; 
# 190
template< class _Tp, class _Up, class 
# 191
_Tp2 = typename __promote< _Tp> ::__type, class 
# 192
_Up2 = typename __promote< _Up> ::__type> 
# 193
struct __promote_2 { 
# 195
typedef __typeof__(_Tp2() + _Up2()) __type; 
# 196
}; 
# 198
template< class _Tp, class _Up, class _Vp, class 
# 199
_Tp2 = typename __promote< _Tp> ::__type, class 
# 200
_Up2 = typename __promote< _Up> ::__type, class 
# 201
_Vp2 = typename __promote< _Vp> ::__type> 
# 202
struct __promote_3 { 
# 204
typedef __typeof__((_Tp2() + _Up2()) + _Vp2()) __type; 
# 205
}; 
# 207
template< class _Tp, class _Up, class _Vp, class _Wp, class 
# 208
_Tp2 = typename __promote< _Tp> ::__type, class 
# 209
_Up2 = typename __promote< _Up> ::__type, class 
# 210
_Vp2 = typename __promote< _Vp> ::__type, class 
# 211
_Wp2 = typename __promote< _Wp> ::__type> 
# 212
struct __promote_4 { 
# 214
typedef __typeof__(((_Tp2() + _Up2()) + _Vp2()) + _Wp2()) __type; 
# 215
}; 
# 218
}
# 219
}
# 34 "/usr/include/math.h" 3
extern "C" {
# 149 "/usr/include/math.h" 3
typedef float float_t; 
# 150
typedef double double_t; 
# 238 "/usr/include/math.h" 3
enum { 
# 239
FP_INT_UPWARD, 
# 242
FP_INT_DOWNWARD, 
# 245
FP_INT_TOWARDZERO, 
# 248
FP_INT_TONEARESTFROMZERO, 
# 251
FP_INT_TONEAREST
# 254
}; 
# 21 "/usr/include/bits/mathcalls-helper-functions.h" 3
extern int __fpclassify(double __value) throw()
# 22
 __attribute((const)); 
# 25
extern int __signbit(double __value) throw()
# 26
 __attribute((const)); 
# 30
extern int __isinf(double __value) throw() __attribute((const)); 
# 33
extern int __finite(double __value) throw() __attribute((const)); 
# 36
extern int __isnan(double __value) throw() __attribute((const)); 
# 39
extern int __iseqsig(double __x, double __y) throw(); 
# 42
extern int __issignaling(double __value) throw()
# 43
 __attribute((const)); 
# 53 "/usr/include/bits/mathcalls.h" 3
extern double acos(double __x) throw(); extern double __acos(double __x) throw(); 
# 55
extern double asin(double __x) throw(); extern double __asin(double __x) throw(); 
# 57
extern double atan(double __x) throw(); extern double __atan(double __x) throw(); 
# 59
extern double atan2(double __y, double __x) throw(); extern double __atan2(double __y, double __x) throw(); 
# 62
extern double cos(double __x) throw(); extern double __cos(double __x) throw(); 
# 64
extern double sin(double __x) throw(); extern double __sin(double __x) throw(); 
# 66
extern double tan(double __x) throw(); extern double __tan(double __x) throw(); 
# 71
extern double cosh(double __x) throw(); extern double __cosh(double __x) throw(); 
# 73
extern double sinh(double __x) throw(); extern double __sinh(double __x) throw(); 
# 75
extern double tanh(double __x) throw(); extern double __tanh(double __x) throw(); 
# 79
extern void sincos(double __x, double * __sinx, double * __cosx) throw(); extern void __sincos(double __x, double * __sinx, double * __cosx) throw(); 
# 85
extern double acosh(double __x) throw(); extern double __acosh(double __x) throw(); 
# 87
extern double asinh(double __x) throw(); extern double __asinh(double __x) throw(); 
# 89
extern double atanh(double __x) throw(); extern double __atanh(double __x) throw(); 
# 95
extern double exp(double __x) throw(); extern double __exp(double __x) throw(); 
# 98
extern double frexp(double __x, int * __exponent) throw(); extern double __frexp(double __x, int * __exponent) throw(); 
# 101
extern double ldexp(double __x, int __exponent) throw(); extern double __ldexp(double __x, int __exponent) throw(); 
# 104
extern double log(double __x) throw(); extern double __log(double __x) throw(); 
# 107
extern double log10(double __x) throw(); extern double __log10(double __x) throw(); 
# 110
extern double modf(double __x, double * __iptr) throw(); extern double __modf(double __x, double * __iptr) throw() __attribute((__nonnull__(2))); 
# 114
extern double exp10(double __x) throw(); extern double __exp10(double __x) throw(); 
# 119
extern double expm1(double __x) throw(); extern double __expm1(double __x) throw(); 
# 122
extern double log1p(double __x) throw(); extern double __log1p(double __x) throw(); 
# 125
extern double logb(double __x) throw(); extern double __logb(double __x) throw(); 
# 130
extern double exp2(double __x) throw(); extern double __exp2(double __x) throw(); 
# 133
extern double log2(double __x) throw(); extern double __log2(double __x) throw(); 
# 140
extern double pow(double __x, double __y) throw(); extern double __pow(double __x, double __y) throw(); 
# 143
extern double sqrt(double __x) throw(); extern double __sqrt(double __x) throw(); 
# 147
extern double hypot(double __x, double __y) throw(); extern double __hypot(double __x, double __y) throw(); 
# 152
extern double cbrt(double __x) throw(); extern double __cbrt(double __x) throw(); 
# 159
extern double ceil(double __x) throw() __attribute((const)); extern double __ceil(double __x) throw() __attribute((const)); 
# 162
extern double fabs(double __x) throw() __attribute((const)); extern double __fabs(double __x) throw() __attribute((const)); 
# 165
extern double floor(double __x) throw() __attribute((const)); extern double __floor(double __x) throw() __attribute((const)); 
# 168
extern double fmod(double __x, double __y) throw(); extern double __fmod(double __x, double __y) throw(); 
# 182 "/usr/include/bits/mathcalls.h" 3
extern int finite(double __value) throw() __attribute((const)); 
# 185
extern double drem(double __x, double __y) throw(); extern double __drem(double __x, double __y) throw(); 
# 189
extern double significand(double __x) throw(); extern double __significand(double __x) throw(); 
# 196
extern double copysign(double __x, double __y) throw() __attribute((const)); extern double __copysign(double __x, double __y) throw() __attribute((const)); 
# 201
extern double nan(const char * __tagb) throw(); extern double __nan(const char * __tagb) throw(); 
# 217 "/usr/include/bits/mathcalls.h" 3
extern double j0(double) throw(); extern double __j0(double) throw(); 
# 218
extern double j1(double) throw(); extern double __j1(double) throw(); 
# 219
extern double jn(int, double) throw(); extern double __jn(int, double) throw(); 
# 220
extern double y0(double) throw(); extern double __y0(double) throw(); 
# 221
extern double y1(double) throw(); extern double __y1(double) throw(); 
# 222
extern double yn(int, double) throw(); extern double __yn(int, double) throw(); 
# 228
extern double erf(double) throw(); extern double __erf(double) throw(); 
# 229
extern double erfc(double) throw(); extern double __erfc(double) throw(); 
# 230
extern double lgamma(double) throw(); extern double __lgamma(double) throw(); 
# 235
extern double tgamma(double) throw(); extern double __tgamma(double) throw(); 
# 241
extern double gamma(double) throw(); extern double __gamma(double) throw(); 
# 249
extern double lgamma_r(double, int * __signgamp) throw(); extern double __lgamma_r(double, int * __signgamp) throw(); 
# 256
extern double rint(double __x) throw(); extern double __rint(double __x) throw(); 
# 259
extern double nextafter(double __x, double __y) throw(); extern double __nextafter(double __x, double __y) throw(); 
# 261
extern double nexttoward(double __x, long double __y) throw(); extern double __nexttoward(double __x, long double __y) throw(); 
# 266
extern double nextdown(double __x) throw(); extern double __nextdown(double __x) throw(); 
# 268
extern double nextup(double __x) throw(); extern double __nextup(double __x) throw(); 
# 272
extern double remainder(double __x, double __y) throw(); extern double __remainder(double __x, double __y) throw(); 
# 276
extern double scalbn(double __x, int __n) throw(); extern double __scalbn(double __x, int __n) throw(); 
# 280
extern int ilogb(double __x) throw(); extern int __ilogb(double __x) throw(); 
# 285
extern long llogb(double __x) throw(); extern long __llogb(double __x) throw(); 
# 290
extern double scalbln(double __x, long __n) throw(); extern double __scalbln(double __x, long __n) throw(); 
# 294
extern double nearbyint(double __x) throw(); extern double __nearbyint(double __x) throw(); 
# 298
extern double round(double __x) throw() __attribute((const)); extern double __round(double __x) throw() __attribute((const)); 
# 302
extern double trunc(double __x) throw() __attribute((const)); extern double __trunc(double __x) throw() __attribute((const)); 
# 307
extern double remquo(double __x, double __y, int * __quo) throw(); extern double __remquo(double __x, double __y, int * __quo) throw(); 
# 314
extern long lrint(double __x) throw(); extern long __lrint(double __x) throw(); 
# 316
__extension__ extern long long llrint(double __x) throw(); extern long long __llrint(double __x) throw(); 
# 320
extern long lround(double __x) throw(); extern long __lround(double __x) throw(); 
# 322
__extension__ extern long long llround(double __x) throw(); extern long long __llround(double __x) throw(); 
# 326
extern double fdim(double __x, double __y) throw(); extern double __fdim(double __x, double __y) throw(); 
# 329
extern double fmax(double __x, double __y) throw() __attribute((const)); extern double __fmax(double __x, double __y) throw() __attribute((const)); 
# 332
extern double fmin(double __x, double __y) throw() __attribute((const)); extern double __fmin(double __x, double __y) throw() __attribute((const)); 
# 335
extern double fma(double __x, double __y, double __z) throw(); extern double __fma(double __x, double __y, double __z) throw(); 
# 340
extern double roundeven(double __x) throw() __attribute((const)); extern double __roundeven(double __x) throw() __attribute((const)); 
# 344
extern __intmax_t fromfp(double __x, int __round, unsigned __width) throw(); extern __intmax_t __fromfp(double __x, int __round, unsigned __width) throw(); 
# 349
extern __uintmax_t ufromfp(double __x, int __round, unsigned __width) throw(); extern __uintmax_t __ufromfp(double __x, int __round, unsigned __width) throw(); 
# 355
extern __intmax_t fromfpx(double __x, int __round, unsigned __width) throw(); extern __intmax_t __fromfpx(double __x, int __round, unsigned __width) throw(); 
# 361
extern __uintmax_t ufromfpx(double __x, int __round, unsigned __width) throw(); extern __uintmax_t __ufromfpx(double __x, int __round, unsigned __width) throw(); 
# 365
extern double fmaxmag(double __x, double __y) throw() __attribute((const)); extern double __fmaxmag(double __x, double __y) throw() __attribute((const)); 
# 368
extern double fminmag(double __x, double __y) throw() __attribute((const)); extern double __fminmag(double __x, double __y) throw() __attribute((const)); 
# 371
extern int canonicalize(double * __cx, const double * __x) throw(); 
# 376
extern int totalorder(const double * __x, const double * __y) throw()
# 378
 __attribute((__pure__)); 
# 381
extern int totalordermag(const double * __x, const double * __y) throw()
# 383
 __attribute((__pure__)); 
# 386
extern double getpayload(const double * __x) throw(); extern double __getpayload(const double * __x) throw(); 
# 389
extern int setpayload(double * __x, double __payload) throw(); 
# 392
extern int setpayloadsig(double * __x, double __payload) throw(); 
# 400
extern double scalb(double __x, double __n) throw(); extern double __scalb(double __x, double __n) throw(); 
# 21 "/usr/include/bits/mathcalls-helper-functions.h" 3
extern int __fpclassifyf(float __value) throw()
# 22
 __attribute((const)); 
# 25
extern int __signbitf(float __value) throw()
# 26
 __attribute((const)); 
# 30
extern int __isinff(float __value) throw() __attribute((const)); 
# 33
extern int __finitef(float __value) throw() __attribute((const)); 
# 36
extern int __isnanf(float __value) throw() __attribute((const)); 
# 39
extern int __iseqsigf(float __x, float __y) throw(); 
# 42
extern int __issignalingf(float __value) throw()
# 43
 __attribute((const)); 
# 53 "/usr/include/bits/mathcalls.h" 3
extern float acosf(float __x) throw(); extern float __acosf(float __x) throw(); 
# 55
extern float asinf(float __x) throw(); extern float __asinf(float __x) throw(); 
# 57
extern float atanf(float __x) throw(); extern float __atanf(float __x) throw(); 
# 59
extern float atan2f(float __y, float __x) throw(); extern float __atan2f(float __y, float __x) throw(); 
# 62
extern float cosf(float __x) throw(); 
# 64
extern float sinf(float __x) throw(); 
# 66
extern float tanf(float __x) throw(); 
# 71
extern float coshf(float __x) throw(); extern float __coshf(float __x) throw(); 
# 73
extern float sinhf(float __x) throw(); extern float __sinhf(float __x) throw(); 
# 75
extern float tanhf(float __x) throw(); extern float __tanhf(float __x) throw(); 
# 79
extern void sincosf(float __x, float * __sinx, float * __cosx) throw(); 
# 85
extern float acoshf(float __x) throw(); extern float __acoshf(float __x) throw(); 
# 87
extern float asinhf(float __x) throw(); extern float __asinhf(float __x) throw(); 
# 89
extern float atanhf(float __x) throw(); extern float __atanhf(float __x) throw(); 
# 95
extern float expf(float __x) throw(); 
# 98
extern float frexpf(float __x, int * __exponent) throw(); extern float __frexpf(float __x, int * __exponent) throw(); 
# 101
extern float ldexpf(float __x, int __exponent) throw(); extern float __ldexpf(float __x, int __exponent) throw(); 
# 104
extern float logf(float __x) throw(); 
# 107
extern float log10f(float __x) throw(); 
# 110
extern float modff(float __x, float * __iptr) throw(); extern float __modff(float __x, float * __iptr) throw() __attribute((__nonnull__(2))); 
# 114
extern float exp10f(float __x) throw(); 
# 119
extern float expm1f(float __x) throw(); extern float __expm1f(float __x) throw(); 
# 122
extern float log1pf(float __x) throw(); extern float __log1pf(float __x) throw(); 
# 125
extern float logbf(float __x) throw(); extern float __logbf(float __x) throw(); 
# 130
extern float exp2f(float __x) throw(); extern float __exp2f(float __x) throw(); 
# 133
extern float log2f(float __x) throw(); 
# 140
extern float powf(float __x, float __y) throw(); 
# 143
extern float sqrtf(float __x) throw(); extern float __sqrtf(float __x) throw(); 
# 147
extern float hypotf(float __x, float __y) throw(); extern float __hypotf(float __x, float __y) throw(); 
# 152
extern float cbrtf(float __x) throw(); extern float __cbrtf(float __x) throw(); 
# 159
extern float ceilf(float __x) throw() __attribute((const)); extern float __ceilf(float __x) throw() __attribute((const)); 
# 162
extern float fabsf(float __x) throw() __attribute((const)); extern float __fabsf(float __x) throw() __attribute((const)); 
# 165
extern float floorf(float __x) throw() __attribute((const)); extern float __floorf(float __x) throw() __attribute((const)); 
# 168
extern float fmodf(float __x, float __y) throw(); extern float __fmodf(float __x, float __y) throw(); 
# 177 "/usr/include/bits/mathcalls.h" 3
extern int isinff(float __value) throw() __attribute((const)); 
# 182
extern int finitef(float __value) throw() __attribute((const)); 
# 185
extern float dremf(float __x, float __y) throw(); extern float __dremf(float __x, float __y) throw(); 
# 189
extern float significandf(float __x) throw(); extern float __significandf(float __x) throw(); 
# 196
extern float copysignf(float __x, float __y) throw() __attribute((const)); extern float __copysignf(float __x, float __y) throw() __attribute((const)); 
# 201
extern float nanf(const char * __tagb) throw(); extern float __nanf(const char * __tagb) throw(); 
# 211 "/usr/include/bits/mathcalls.h" 3
extern int isnanf(float __value) throw() __attribute((const)); 
# 217
extern float j0f(float) throw(); extern float __j0f(float) throw(); 
# 218
extern float j1f(float) throw(); extern float __j1f(float) throw(); 
# 219
extern float jnf(int, float) throw(); extern float __jnf(int, float) throw(); 
# 220
extern float y0f(float) throw(); extern float __y0f(float) throw(); 
# 221
extern float y1f(float) throw(); extern float __y1f(float) throw(); 
# 222
extern float ynf(int, float) throw(); extern float __ynf(int, float) throw(); 
# 228
extern float erff(float) throw(); extern float __erff(float) throw(); 
# 229
extern float erfcf(float) throw(); extern float __erfcf(float) throw(); 
# 230
extern float lgammaf(float) throw(); extern float __lgammaf(float) throw(); 
# 235
extern float tgammaf(float) throw(); extern float __tgammaf(float) throw(); 
# 241
extern float gammaf(float) throw(); extern float __gammaf(float) throw(); 
# 249
extern float lgammaf_r(float, int * __signgamp) throw(); extern float __lgammaf_r(float, int * __signgamp) throw(); 
# 256
extern float rintf(float __x) throw(); extern float __rintf(float __x) throw(); 
# 259
extern float nextafterf(float __x, float __y) throw(); extern float __nextafterf(float __x, float __y) throw(); 
# 261
extern float nexttowardf(float __x, long double __y) throw(); extern float __nexttowardf(float __x, long double __y) throw(); 
# 266
extern float nextdownf(float __x) throw(); extern float __nextdownf(float __x) throw(); 
# 268
extern float nextupf(float __x) throw(); extern float __nextupf(float __x) throw(); 
# 272
extern float remainderf(float __x, float __y) throw(); extern float __remainderf(float __x, float __y) throw(); 
# 276
extern float scalbnf(float __x, int __n) throw(); extern float __scalbnf(float __x, int __n) throw(); 
# 280
extern int ilogbf(float __x) throw(); extern int __ilogbf(float __x) throw(); 
# 285
extern long llogbf(float __x) throw(); extern long __llogbf(float __x) throw(); 
# 290
extern float scalblnf(float __x, long __n) throw(); extern float __scalblnf(float __x, long __n) throw(); 
# 294
extern float nearbyintf(float __x) throw(); extern float __nearbyintf(float __x) throw(); 
# 298
extern float roundf(float __x) throw() __attribute((const)); extern float __roundf(float __x) throw() __attribute((const)); 
# 302
extern float truncf(float __x) throw() __attribute((const)); extern float __truncf(float __x) throw() __attribute((const)); 
# 307
extern float remquof(float __x, float __y, int * __quo) throw(); extern float __remquof(float __x, float __y, int * __quo) throw(); 
# 314
extern long lrintf(float __x) throw(); extern long __lrintf(float __x) throw(); 
# 316
__extension__ extern long long llrintf(float __x) throw(); extern long long __llrintf(float __x) throw(); 
# 320
extern long lroundf(float __x) throw(); extern long __lroundf(float __x) throw(); 
# 322
__extension__ extern long long llroundf(float __x) throw(); extern long long __llroundf(float __x) throw(); 
# 326
extern float fdimf(float __x, float __y) throw(); extern float __fdimf(float __x, float __y) throw(); 
# 329
extern float fmaxf(float __x, float __y) throw() __attribute((const)); extern float __fmaxf(float __x, float __y) throw() __attribute((const)); 
# 332
extern float fminf(float __x, float __y) throw() __attribute((const)); extern float __fminf(float __x, float __y) throw() __attribute((const)); 
# 335
extern float fmaf(float __x, float __y, float __z) throw(); extern float __fmaf(float __x, float __y, float __z) throw(); 
# 340
extern float roundevenf(float __x) throw() __attribute((const)); extern float __roundevenf(float __x) throw() __attribute((const)); 
# 344
extern __intmax_t fromfpf(float __x, int __round, unsigned __width) throw(); extern __intmax_t __fromfpf(float __x, int __round, unsigned __width) throw(); 
# 349
extern __uintmax_t ufromfpf(float __x, int __round, unsigned __width) throw(); extern __uintmax_t __ufromfpf(float __x, int __round, unsigned __width) throw(); 
# 355
extern __intmax_t fromfpxf(float __x, int __round, unsigned __width) throw(); extern __intmax_t __fromfpxf(float __x, int __round, unsigned __width) throw(); 
# 361
extern __uintmax_t ufromfpxf(float __x, int __round, unsigned __width) throw(); extern __uintmax_t __ufromfpxf(float __x, int __round, unsigned __width) throw(); 
# 365
extern float fmaxmagf(float __x, float __y) throw() __attribute((const)); extern float __fmaxmagf(float __x, float __y) throw() __attribute((const)); 
# 368
extern float fminmagf(float __x, float __y) throw() __attribute((const)); extern float __fminmagf(float __x, float __y) throw() __attribute((const)); 
# 371
extern int canonicalizef(float * __cx, const float * __x) throw(); 
# 376
extern int totalorderf(const float * __x, const float * __y) throw()
# 378
 __attribute((__pure__)); 
# 381
extern int totalordermagf(const float * __x, const float * __y) throw()
# 383
 __attribute((__pure__)); 
# 386
extern float getpayloadf(const float * __x) throw(); extern float __getpayloadf(const float * __x) throw(); 
# 389
extern int setpayloadf(float * __x, float __payload) throw(); 
# 392
extern int setpayloadsigf(float * __x, float __payload) throw(); 
# 400
extern float scalbf(float __x, float __n) throw(); extern float __scalbf(float __x, float __n) throw(); 
# 21 "/usr/include/bits/mathcalls-helper-functions.h" 3
extern int __fpclassifyl(long double __value) throw()
# 22
 __attribute((const)); 
# 25
extern int __signbitl(long double __value) throw()
# 26
 __attribute((const)); 
# 30
extern int __isinfl(long double __value) throw() __attribute((const)); 
# 33
extern int __finitel(long double __value) throw() __attribute((const)); 
# 36
extern int __isnanl(long double __value) throw() __attribute((const)); 
# 39
extern int __iseqsigl(long double __x, long double __y) throw(); 
# 42
extern int __issignalingl(long double __value) throw()
# 43
 __attribute((const)); 
# 53 "/usr/include/bits/mathcalls.h" 3
extern long double acosl(long double __x) throw(); extern long double __acosl(long double __x) throw(); 
# 55
extern long double asinl(long double __x) throw(); extern long double __asinl(long double __x) throw(); 
# 57
extern long double atanl(long double __x) throw(); extern long double __atanl(long double __x) throw(); 
# 59
extern long double atan2l(long double __y, long double __x) throw(); extern long double __atan2l(long double __y, long double __x) throw(); 
# 62
extern long double cosl(long double __x) throw(); extern long double __cosl(long double __x) throw(); 
# 64
extern long double sinl(long double __x) throw(); extern long double __sinl(long double __x) throw(); 
# 66
extern long double tanl(long double __x) throw(); extern long double __tanl(long double __x) throw(); 
# 71
extern long double coshl(long double __x) throw(); extern long double __coshl(long double __x) throw(); 
# 73
extern long double sinhl(long double __x) throw(); extern long double __sinhl(long double __x) throw(); 
# 75
extern long double tanhl(long double __x) throw(); extern long double __tanhl(long double __x) throw(); 
# 79
extern void sincosl(long double __x, long double * __sinx, long double * __cosx) throw(); extern void __sincosl(long double __x, long double * __sinx, long double * __cosx) throw(); 
# 85
extern long double acoshl(long double __x) throw(); extern long double __acoshl(long double __x) throw(); 
# 87
extern long double asinhl(long double __x) throw(); extern long double __asinhl(long double __x) throw(); 
# 89
extern long double atanhl(long double __x) throw(); extern long double __atanhl(long double __x) throw(); 
# 95
extern long double expl(long double __x) throw(); extern long double __expl(long double __x) throw(); 
# 98
extern long double frexpl(long double __x, int * __exponent) throw(); extern long double __frexpl(long double __x, int * __exponent) throw(); 
# 101
extern long double ldexpl(long double __x, int __exponent) throw(); extern long double __ldexpl(long double __x, int __exponent) throw(); 
# 104
extern long double logl(long double __x) throw(); extern long double __logl(long double __x) throw(); 
# 107
extern long double log10l(long double __x) throw(); extern long double __log10l(long double __x) throw(); 
# 110
extern long double modfl(long double __x, long double * __iptr) throw(); extern long double __modfl(long double __x, long double * __iptr) throw() __attribute((__nonnull__(2))); 
# 114
extern long double exp10l(long double __x) throw(); extern long double __exp10l(long double __x) throw(); 
# 119
extern long double expm1l(long double __x) throw(); extern long double __expm1l(long double __x) throw(); 
# 122
extern long double log1pl(long double __x) throw(); extern long double __log1pl(long double __x) throw(); 
# 125
extern long double logbl(long double __x) throw(); extern long double __logbl(long double __x) throw(); 
# 130
extern long double exp2l(long double __x) throw(); extern long double __exp2l(long double __x) throw(); 
# 133
extern long double log2l(long double __x) throw(); extern long double __log2l(long double __x) throw(); 
# 140
extern long double powl(long double __x, long double __y) throw(); extern long double __powl(long double __x, long double __y) throw(); 
# 143
extern long double sqrtl(long double __x) throw(); extern long double __sqrtl(long double __x) throw(); 
# 147
extern long double hypotl(long double __x, long double __y) throw(); extern long double __hypotl(long double __x, long double __y) throw(); 
# 152
extern long double cbrtl(long double __x) throw(); extern long double __cbrtl(long double __x) throw(); 
# 159
extern long double ceill(long double __x) throw() __attribute((const)); extern long double __ceill(long double __x) throw() __attribute((const)); 
# 162
extern long double fabsl(long double __x) throw() __attribute((const)); extern long double __fabsl(long double __x) throw() __attribute((const)); 
# 165
extern long double floorl(long double __x) throw() __attribute((const)); extern long double __floorl(long double __x) throw() __attribute((const)); 
# 168
extern long double fmodl(long double __x, long double __y) throw(); extern long double __fmodl(long double __x, long double __y) throw(); 
# 177 "/usr/include/bits/mathcalls.h" 3
extern int isinfl(long double __value) throw() __attribute((const)); 
# 182
extern int finitel(long double __value) throw() __attribute((const)); 
# 185
extern long double dreml(long double __x, long double __y) throw(); extern long double __dreml(long double __x, long double __y) throw(); 
# 189
extern long double significandl(long double __x) throw(); extern long double __significandl(long double __x) throw(); 
# 196
extern long double copysignl(long double __x, long double __y) throw() __attribute((const)); extern long double __copysignl(long double __x, long double __y) throw() __attribute((const)); 
# 201
extern long double nanl(const char * __tagb) throw(); extern long double __nanl(const char * __tagb) throw(); 
# 211 "/usr/include/bits/mathcalls.h" 3
extern int isnanl(long double __value) throw() __attribute((const)); 
# 217
extern long double j0l(long double) throw(); extern long double __j0l(long double) throw(); 
# 218
extern long double j1l(long double) throw(); extern long double __j1l(long double) throw(); 
# 219
extern long double jnl(int, long double) throw(); extern long double __jnl(int, long double) throw(); 
# 220
extern long double y0l(long double) throw(); extern long double __y0l(long double) throw(); 
# 221
extern long double y1l(long double) throw(); extern long double __y1l(long double) throw(); 
# 222
extern long double ynl(int, long double) throw(); extern long double __ynl(int, long double) throw(); 
# 228
extern long double erfl(long double) throw(); extern long double __erfl(long double) throw(); 
# 229
extern long double erfcl(long double) throw(); extern long double __erfcl(long double) throw(); 
# 230
extern long double lgammal(long double) throw(); extern long double __lgammal(long double) throw(); 
# 235
extern long double tgammal(long double) throw(); extern long double __tgammal(long double) throw(); 
# 241
extern long double gammal(long double) throw(); extern long double __gammal(long double) throw(); 
# 249
extern long double lgammal_r(long double, int * __signgamp) throw(); extern long double __lgammal_r(long double, int * __signgamp) throw(); 
# 256
extern long double rintl(long double __x) throw(); extern long double __rintl(long double __x) throw(); 
# 259
extern long double nextafterl(long double __x, long double __y) throw(); extern long double __nextafterl(long double __x, long double __y) throw(); 
# 261
extern long double nexttowardl(long double __x, long double __y) throw(); extern long double __nexttowardl(long double __x, long double __y) throw(); 
# 266
extern long double nextdownl(long double __x) throw(); extern long double __nextdownl(long double __x) throw(); 
# 268
extern long double nextupl(long double __x) throw(); extern long double __nextupl(long double __x) throw(); 
# 272
extern long double remainderl(long double __x, long double __y) throw(); extern long double __remainderl(long double __x, long double __y) throw(); 
# 276
extern long double scalbnl(long double __x, int __n) throw(); extern long double __scalbnl(long double __x, int __n) throw(); 
# 280
extern int ilogbl(long double __x) throw(); extern int __ilogbl(long double __x) throw(); 
# 285
extern long llogbl(long double __x) throw(); extern long __llogbl(long double __x) throw(); 
# 290
extern long double scalblnl(long double __x, long __n) throw(); extern long double __scalblnl(long double __x, long __n) throw(); 
# 294
extern long double nearbyintl(long double __x) throw(); extern long double __nearbyintl(long double __x) throw(); 
# 298
extern long double roundl(long double __x) throw() __attribute((const)); extern long double __roundl(long double __x) throw() __attribute((const)); 
# 302
extern long double truncl(long double __x) throw() __attribute((const)); extern long double __truncl(long double __x) throw() __attribute((const)); 
# 307
extern long double remquol(long double __x, long double __y, int * __quo) throw(); extern long double __remquol(long double __x, long double __y, int * __quo) throw(); 
# 314
extern long lrintl(long double __x) throw(); extern long __lrintl(long double __x) throw(); 
# 316
__extension__ extern long long llrintl(long double __x) throw(); extern long long __llrintl(long double __x) throw(); 
# 320
extern long lroundl(long double __x) throw(); extern long __lroundl(long double __x) throw(); 
# 322
__extension__ extern long long llroundl(long double __x) throw(); extern long long __llroundl(long double __x) throw(); 
# 326
extern long double fdiml(long double __x, long double __y) throw(); extern long double __fdiml(long double __x, long double __y) throw(); 
# 329
extern long double fmaxl(long double __x, long double __y) throw() __attribute((const)); extern long double __fmaxl(long double __x, long double __y) throw() __attribute((const)); 
# 332
extern long double fminl(long double __x, long double __y) throw() __attribute((const)); extern long double __fminl(long double __x, long double __y) throw() __attribute((const)); 
# 335
extern long double fmal(long double __x, long double __y, long double __z) throw(); extern long double __fmal(long double __x, long double __y, long double __z) throw(); 
# 340
extern long double roundevenl(long double __x) throw() __attribute((const)); extern long double __roundevenl(long double __x) throw() __attribute((const)); 
# 344
extern __intmax_t fromfpl(long double __x, int __round, unsigned __width) throw(); extern __intmax_t __fromfpl(long double __x, int __round, unsigned __width) throw(); 
# 349
extern __uintmax_t ufromfpl(long double __x, int __round, unsigned __width) throw(); extern __uintmax_t __ufromfpl(long double __x, int __round, unsigned __width) throw(); 
# 355
extern __intmax_t fromfpxl(long double __x, int __round, unsigned __width) throw(); extern __intmax_t __fromfpxl(long double __x, int __round, unsigned __width) throw(); 
# 361
extern __uintmax_t ufromfpxl(long double __x, int __round, unsigned __width) throw(); extern __uintmax_t __ufromfpxl(long double __x, int __round, unsigned __width) throw(); 
# 365
extern long double fmaxmagl(long double __x, long double __y) throw() __attribute((const)); extern long double __fmaxmagl(long double __x, long double __y) throw() __attribute((const)); 
# 368
extern long double fminmagl(long double __x, long double __y) throw() __attribute((const)); extern long double __fminmagl(long double __x, long double __y) throw() __attribute((const)); 
# 371
extern int canonicalizel(long double * __cx, const long double * __x) throw(); 
# 376
extern int totalorderl(const long double * __x, const long double * __y) throw()
# 378
 __attribute((__pure__)); 
# 381
extern int totalordermagl(const long double * __x, const long double * __y) throw()
# 383
 __attribute((__pure__)); 
# 386
extern long double getpayloadl(const long double * __x) throw(); extern long double __getpayloadl(const long double * __x) throw(); 
# 389
extern int setpayloadl(long double * __x, long double __payload) throw(); 
# 392
extern int setpayloadsigl(long double * __x, long double __payload) throw(); 
# 400
extern long double scalbl(long double __x, long double __n) throw(); extern long double __scalbl(long double __x, long double __n) throw(); 
# 53 "/usr/include/bits/mathcalls.h" 3
extern _Float32 acosf32(_Float32 __x) throw(); extern _Float32 __acosf32(_Float32 __x) throw(); 
# 55
extern _Float32 asinf32(_Float32 __x) throw(); extern _Float32 __asinf32(_Float32 __x) throw(); 
# 57
extern _Float32 atanf32(_Float32 __x) throw(); extern _Float32 __atanf32(_Float32 __x) throw(); 
# 59
extern _Float32 atan2f32(_Float32 __y, _Float32 __x) throw(); extern _Float32 __atan2f32(_Float32 __y, _Float32 __x) throw(); 
# 62
extern _Float32 cosf32(_Float32 __x) throw(); extern _Float32 __cosf32(_Float32 __x) throw(); 
# 64
extern _Float32 sinf32(_Float32 __x) throw(); extern _Float32 __sinf32(_Float32 __x) throw(); 
# 66
extern _Float32 tanf32(_Float32 __x) throw(); extern _Float32 __tanf32(_Float32 __x) throw(); 
# 71
extern _Float32 coshf32(_Float32 __x) throw(); extern _Float32 __coshf32(_Float32 __x) throw(); 
# 73
extern _Float32 sinhf32(_Float32 __x) throw(); extern _Float32 __sinhf32(_Float32 __x) throw(); 
# 75
extern _Float32 tanhf32(_Float32 __x) throw(); extern _Float32 __tanhf32(_Float32 __x) throw(); 
# 79
extern void sincosf32(_Float32 __x, _Float32 * __sinx, _Float32 * __cosx) throw(); extern void __sincosf32(_Float32 __x, _Float32 * __sinx, _Float32 * __cosx) throw(); 
# 85
extern _Float32 acoshf32(_Float32 __x) throw(); extern _Float32 __acoshf32(_Float32 __x) throw(); 
# 87
extern _Float32 asinhf32(_Float32 __x) throw(); extern _Float32 __asinhf32(_Float32 __x) throw(); 
# 89
extern _Float32 atanhf32(_Float32 __x) throw(); extern _Float32 __atanhf32(_Float32 __x) throw(); 
# 95
extern _Float32 expf32(_Float32 __x) throw(); extern _Float32 __expf32(_Float32 __x) throw(); 
# 98
extern _Float32 frexpf32(_Float32 __x, int * __exponent) throw(); extern _Float32 __frexpf32(_Float32 __x, int * __exponent) throw(); 
# 101
extern _Float32 ldexpf32(_Float32 __x, int __exponent) throw(); extern _Float32 __ldexpf32(_Float32 __x, int __exponent) throw(); 
# 104
extern _Float32 logf32(_Float32 __x) throw(); extern _Float32 __logf32(_Float32 __x) throw(); 
# 107
extern _Float32 log10f32(_Float32 __x) throw(); extern _Float32 __log10f32(_Float32 __x) throw(); 
# 110
extern _Float32 modff32(_Float32 __x, _Float32 * __iptr) throw(); extern _Float32 __modff32(_Float32 __x, _Float32 * __iptr) throw() __attribute((__nonnull__(2))); 
# 114
extern _Float32 exp10f32(_Float32 __x) throw(); extern _Float32 __exp10f32(_Float32 __x) throw(); 
# 119
extern _Float32 expm1f32(_Float32 __x) throw(); extern _Float32 __expm1f32(_Float32 __x) throw(); 
# 122
extern _Float32 log1pf32(_Float32 __x) throw(); extern _Float32 __log1pf32(_Float32 __x) throw(); 
# 125
extern _Float32 logbf32(_Float32 __x) throw(); extern _Float32 __logbf32(_Float32 __x) throw(); 
# 130
extern _Float32 exp2f32(_Float32 __x) throw(); extern _Float32 __exp2f32(_Float32 __x) throw(); 
# 133
extern _Float32 log2f32(_Float32 __x) throw(); extern _Float32 __log2f32(_Float32 __x) throw(); 
# 140
extern _Float32 powf32(_Float32 __x, _Float32 __y) throw(); extern _Float32 __powf32(_Float32 __x, _Float32 __y) throw(); 
# 143
extern _Float32 sqrtf32(_Float32 __x) throw(); extern _Float32 __sqrtf32(_Float32 __x) throw(); 
# 147
extern _Float32 hypotf32(_Float32 __x, _Float32 __y) throw(); extern _Float32 __hypotf32(_Float32 __x, _Float32 __y) throw(); 
# 152
extern _Float32 cbrtf32(_Float32 __x) throw(); extern _Float32 __cbrtf32(_Float32 __x) throw(); 
# 159
extern _Float32 ceilf32(_Float32 __x) throw() __attribute((const)); extern _Float32 __ceilf32(_Float32 __x) throw() __attribute((const)); 
# 162
extern _Float32 fabsf32(_Float32 __x) throw() __attribute((const)); extern _Float32 __fabsf32(_Float32 __x) throw() __attribute((const)); 
# 165
extern _Float32 floorf32(_Float32 __x) throw() __attribute((const)); extern _Float32 __floorf32(_Float32 __x) throw() __attribute((const)); 
# 168
extern _Float32 fmodf32(_Float32 __x, _Float32 __y) throw(); extern _Float32 __fmodf32(_Float32 __x, _Float32 __y) throw(); 
# 196 "/usr/include/bits/mathcalls.h" 3
extern _Float32 copysignf32(_Float32 __x, _Float32 __y) throw() __attribute((const)); extern _Float32 __copysignf32(_Float32 __x, _Float32 __y) throw() __attribute((const)); 
# 201
extern _Float32 nanf32(const char * __tagb) throw(); extern _Float32 __nanf32(const char * __tagb) throw(); 
# 217 "/usr/include/bits/mathcalls.h" 3
extern _Float32 j0f32(_Float32) throw(); extern _Float32 __j0f32(_Float32) throw(); 
# 218
extern _Float32 j1f32(_Float32) throw(); extern _Float32 __j1f32(_Float32) throw(); 
# 219
extern _Float32 jnf32(int, _Float32) throw(); extern _Float32 __jnf32(int, _Float32) throw(); 
# 220
extern _Float32 y0f32(_Float32) throw(); extern _Float32 __y0f32(_Float32) throw(); 
# 221
extern _Float32 y1f32(_Float32) throw(); extern _Float32 __y1f32(_Float32) throw(); 
# 222
extern _Float32 ynf32(int, _Float32) throw(); extern _Float32 __ynf32(int, _Float32) throw(); 
# 228
extern _Float32 erff32(_Float32) throw(); extern _Float32 __erff32(_Float32) throw(); 
# 229
extern _Float32 erfcf32(_Float32) throw(); extern _Float32 __erfcf32(_Float32) throw(); 
# 230
extern _Float32 lgammaf32(_Float32) throw(); extern _Float32 __lgammaf32(_Float32) throw(); 
# 235
extern _Float32 tgammaf32(_Float32) throw(); extern _Float32 __tgammaf32(_Float32) throw(); 
# 249 "/usr/include/bits/mathcalls.h" 3
extern _Float32 lgammaf32_r(_Float32, int * __signgamp) throw(); extern _Float32 __lgammaf32_r(_Float32, int * __signgamp) throw(); 
# 256
extern _Float32 rintf32(_Float32 __x) throw(); extern _Float32 __rintf32(_Float32 __x) throw(); 
# 259
extern _Float32 nextafterf32(_Float32 __x, _Float32 __y) throw(); extern _Float32 __nextafterf32(_Float32 __x, _Float32 __y) throw(); 
# 266
extern _Float32 nextdownf32(_Float32 __x) throw(); extern _Float32 __nextdownf32(_Float32 __x) throw(); 
# 268
extern _Float32 nextupf32(_Float32 __x) throw(); extern _Float32 __nextupf32(_Float32 __x) throw(); 
# 272
extern _Float32 remainderf32(_Float32 __x, _Float32 __y) throw(); extern _Float32 __remainderf32(_Float32 __x, _Float32 __y) throw(); 
# 276
extern _Float32 scalbnf32(_Float32 __x, int __n) throw(); extern _Float32 __scalbnf32(_Float32 __x, int __n) throw(); 
# 280
extern int ilogbf32(_Float32 __x) throw(); extern int __ilogbf32(_Float32 __x) throw(); 
# 285
extern long llogbf32(_Float32 __x) throw(); extern long __llogbf32(_Float32 __x) throw(); 
# 290
extern _Float32 scalblnf32(_Float32 __x, long __n) throw(); extern _Float32 __scalblnf32(_Float32 __x, long __n) throw(); 
# 294
extern _Float32 nearbyintf32(_Float32 __x) throw(); extern _Float32 __nearbyintf32(_Float32 __x) throw(); 
# 298
extern _Float32 roundf32(_Float32 __x) throw() __attribute((const)); extern _Float32 __roundf32(_Float32 __x) throw() __attribute((const)); 
# 302
extern _Float32 truncf32(_Float32 __x) throw() __attribute((const)); extern _Float32 __truncf32(_Float32 __x) throw() __attribute((const)); 
# 307
extern _Float32 remquof32(_Float32 __x, _Float32 __y, int * __quo) throw(); extern _Float32 __remquof32(_Float32 __x, _Float32 __y, int * __quo) throw(); 
# 314
extern long lrintf32(_Float32 __x) throw(); extern long __lrintf32(_Float32 __x) throw(); 
# 316
__extension__ extern long long llrintf32(_Float32 __x) throw(); extern long long __llrintf32(_Float32 __x) throw(); 
# 320
extern long lroundf32(_Float32 __x) throw(); extern long __lroundf32(_Float32 __x) throw(); 
# 322
__extension__ extern long long llroundf32(_Float32 __x) throw(); extern long long __llroundf32(_Float32 __x) throw(); 
# 326
extern _Float32 fdimf32(_Float32 __x, _Float32 __y) throw(); extern _Float32 __fdimf32(_Float32 __x, _Float32 __y) throw(); 
# 329
extern _Float32 fmaxf32(_Float32 __x, _Float32 __y) throw() __attribute((const)); extern _Float32 __fmaxf32(_Float32 __x, _Float32 __y) throw() __attribute((const)); 
# 332
extern _Float32 fminf32(_Float32 __x, _Float32 __y) throw() __attribute((const)); extern _Float32 __fminf32(_Float32 __x, _Float32 __y) throw() __attribute((const)); 
# 335
extern _Float32 fmaf32(_Float32 __x, _Float32 __y, _Float32 __z) throw(); extern _Float32 __fmaf32(_Float32 __x, _Float32 __y, _Float32 __z) throw(); 
# 340
extern _Float32 roundevenf32(_Float32 __x) throw() __attribute((const)); extern _Float32 __roundevenf32(_Float32 __x) throw() __attribute((const)); 
# 344
extern __intmax_t fromfpf32(_Float32 __x, int __round, unsigned __width) throw(); extern __intmax_t __fromfpf32(_Float32 __x, int __round, unsigned __width) throw(); 
# 349
extern __uintmax_t ufromfpf32(_Float32 __x, int __round, unsigned __width) throw(); extern __uintmax_t __ufromfpf32(_Float32 __x, int __round, unsigned __width) throw(); 
# 355
extern __intmax_t fromfpxf32(_Float32 __x, int __round, unsigned __width) throw(); extern __intmax_t __fromfpxf32(_Float32 __x, int __round, unsigned __width) throw(); 
# 361
extern __uintmax_t ufromfpxf32(_Float32 __x, int __round, unsigned __width) throw(); extern __uintmax_t __ufromfpxf32(_Float32 __x, int __round, unsigned __width) throw(); 
# 365
extern _Float32 fmaxmagf32(_Float32 __x, _Float32 __y) throw() __attribute((const)); extern _Float32 __fmaxmagf32(_Float32 __x, _Float32 __y) throw() __attribute((const)); 
# 368
extern _Float32 fminmagf32(_Float32 __x, _Float32 __y) throw() __attribute((const)); extern _Float32 __fminmagf32(_Float32 __x, _Float32 __y) throw() __attribute((const)); 
# 371
extern int canonicalizef32(_Float32 * __cx, const _Float32 * __x) throw(); 
# 376
extern int totalorderf32(const _Float32 * __x, const _Float32 * __y) throw()
# 378
 __attribute((__pure__)); 
# 381
extern int totalordermagf32(const _Float32 * __x, const _Float32 * __y) throw()
# 383
 __attribute((__pure__)); 
# 386
extern _Float32 getpayloadf32(const _Float32 * __x) throw(); extern _Float32 __getpayloadf32(const _Float32 * __x) throw(); 
# 389
extern int setpayloadf32(_Float32 * __x, _Float32 __payload) throw(); 
# 392
extern int setpayloadsigf32(_Float32 * __x, _Float32 __payload) throw(); 
# 53 "/usr/include/bits/mathcalls.h" 3
extern _Float64 acosf64(_Float64 __x) throw(); extern _Float64 __acosf64(_Float64 __x) throw(); 
# 55
extern _Float64 asinf64(_Float64 __x) throw(); extern _Float64 __asinf64(_Float64 __x) throw(); 
# 57
extern _Float64 atanf64(_Float64 __x) throw(); extern _Float64 __atanf64(_Float64 __x) throw(); 
# 59
extern _Float64 atan2f64(_Float64 __y, _Float64 __x) throw(); extern _Float64 __atan2f64(_Float64 __y, _Float64 __x) throw(); 
# 62
extern _Float64 cosf64(_Float64 __x) throw(); extern _Float64 __cosf64(_Float64 __x) throw(); 
# 64
extern _Float64 sinf64(_Float64 __x) throw(); extern _Float64 __sinf64(_Float64 __x) throw(); 
# 66
extern _Float64 tanf64(_Float64 __x) throw(); extern _Float64 __tanf64(_Float64 __x) throw(); 
# 71
extern _Float64 coshf64(_Float64 __x) throw(); extern _Float64 __coshf64(_Float64 __x) throw(); 
# 73
extern _Float64 sinhf64(_Float64 __x) throw(); extern _Float64 __sinhf64(_Float64 __x) throw(); 
# 75
extern _Float64 tanhf64(_Float64 __x) throw(); extern _Float64 __tanhf64(_Float64 __x) throw(); 
# 79
extern void sincosf64(_Float64 __x, _Float64 * __sinx, _Float64 * __cosx) throw(); extern void __sincosf64(_Float64 __x, _Float64 * __sinx, _Float64 * __cosx) throw(); 
# 85
extern _Float64 acoshf64(_Float64 __x) throw(); extern _Float64 __acoshf64(_Float64 __x) throw(); 
# 87
extern _Float64 asinhf64(_Float64 __x) throw(); extern _Float64 __asinhf64(_Float64 __x) throw(); 
# 89
extern _Float64 atanhf64(_Float64 __x) throw(); extern _Float64 __atanhf64(_Float64 __x) throw(); 
# 95
extern _Float64 expf64(_Float64 __x) throw(); extern _Float64 __expf64(_Float64 __x) throw(); 
# 98
extern _Float64 frexpf64(_Float64 __x, int * __exponent) throw(); extern _Float64 __frexpf64(_Float64 __x, int * __exponent) throw(); 
# 101
extern _Float64 ldexpf64(_Float64 __x, int __exponent) throw(); extern _Float64 __ldexpf64(_Float64 __x, int __exponent) throw(); 
# 104
extern _Float64 logf64(_Float64 __x) throw(); extern _Float64 __logf64(_Float64 __x) throw(); 
# 107
extern _Float64 log10f64(_Float64 __x) throw(); extern _Float64 __log10f64(_Float64 __x) throw(); 
# 110
extern _Float64 modff64(_Float64 __x, _Float64 * __iptr) throw(); extern _Float64 __modff64(_Float64 __x, _Float64 * __iptr) throw() __attribute((__nonnull__(2))); 
# 114
extern _Float64 exp10f64(_Float64 __x) throw(); extern _Float64 __exp10f64(_Float64 __x) throw(); 
# 119
extern _Float64 expm1f64(_Float64 __x) throw(); extern _Float64 __expm1f64(_Float64 __x) throw(); 
# 122
extern _Float64 log1pf64(_Float64 __x) throw(); extern _Float64 __log1pf64(_Float64 __x) throw(); 
# 125
extern _Float64 logbf64(_Float64 __x) throw(); extern _Float64 __logbf64(_Float64 __x) throw(); 
# 130
extern _Float64 exp2f64(_Float64 __x) throw(); extern _Float64 __exp2f64(_Float64 __x) throw(); 
# 133
extern _Float64 log2f64(_Float64 __x) throw(); extern _Float64 __log2f64(_Float64 __x) throw(); 
# 140
extern _Float64 powf64(_Float64 __x, _Float64 __y) throw(); extern _Float64 __powf64(_Float64 __x, _Float64 __y) throw(); 
# 143
extern _Float64 sqrtf64(_Float64 __x) throw(); extern _Float64 __sqrtf64(_Float64 __x) throw(); 
# 147
extern _Float64 hypotf64(_Float64 __x, _Float64 __y) throw(); extern _Float64 __hypotf64(_Float64 __x, _Float64 __y) throw(); 
# 152
extern _Float64 cbrtf64(_Float64 __x) throw(); extern _Float64 __cbrtf64(_Float64 __x) throw(); 
# 159
extern _Float64 ceilf64(_Float64 __x) throw() __attribute((const)); extern _Float64 __ceilf64(_Float64 __x) throw() __attribute((const)); 
# 162
extern _Float64 fabsf64(_Float64 __x) throw() __attribute((const)); extern _Float64 __fabsf64(_Float64 __x) throw() __attribute((const)); 
# 165
extern _Float64 floorf64(_Float64 __x) throw() __attribute((const)); extern _Float64 __floorf64(_Float64 __x) throw() __attribute((const)); 
# 168
extern _Float64 fmodf64(_Float64 __x, _Float64 __y) throw(); extern _Float64 __fmodf64(_Float64 __x, _Float64 __y) throw(); 
# 196 "/usr/include/bits/mathcalls.h" 3
extern _Float64 copysignf64(_Float64 __x, _Float64 __y) throw() __attribute((const)); extern _Float64 __copysignf64(_Float64 __x, _Float64 __y) throw() __attribute((const)); 
# 201
extern _Float64 nanf64(const char * __tagb) throw(); extern _Float64 __nanf64(const char * __tagb) throw(); 
# 217 "/usr/include/bits/mathcalls.h" 3
extern _Float64 j0f64(_Float64) throw(); extern _Float64 __j0f64(_Float64) throw(); 
# 218
extern _Float64 j1f64(_Float64) throw(); extern _Float64 __j1f64(_Float64) throw(); 
# 219
extern _Float64 jnf64(int, _Float64) throw(); extern _Float64 __jnf64(int, _Float64) throw(); 
# 220
extern _Float64 y0f64(_Float64) throw(); extern _Float64 __y0f64(_Float64) throw(); 
# 221
extern _Float64 y1f64(_Float64) throw(); extern _Float64 __y1f64(_Float64) throw(); 
# 222
extern _Float64 ynf64(int, _Float64) throw(); extern _Float64 __ynf64(int, _Float64) throw(); 
# 228
extern _Float64 erff64(_Float64) throw(); extern _Float64 __erff64(_Float64) throw(); 
# 229
extern _Float64 erfcf64(_Float64) throw(); extern _Float64 __erfcf64(_Float64) throw(); 
# 230
extern _Float64 lgammaf64(_Float64) throw(); extern _Float64 __lgammaf64(_Float64) throw(); 
# 235
extern _Float64 tgammaf64(_Float64) throw(); extern _Float64 __tgammaf64(_Float64) throw(); 
# 249 "/usr/include/bits/mathcalls.h" 3
extern _Float64 lgammaf64_r(_Float64, int * __signgamp) throw(); extern _Float64 __lgammaf64_r(_Float64, int * __signgamp) throw(); 
# 256
extern _Float64 rintf64(_Float64 __x) throw(); extern _Float64 __rintf64(_Float64 __x) throw(); 
# 259
extern _Float64 nextafterf64(_Float64 __x, _Float64 __y) throw(); extern _Float64 __nextafterf64(_Float64 __x, _Float64 __y) throw(); 
# 266
extern _Float64 nextdownf64(_Float64 __x) throw(); extern _Float64 __nextdownf64(_Float64 __x) throw(); 
# 268
extern _Float64 nextupf64(_Float64 __x) throw(); extern _Float64 __nextupf64(_Float64 __x) throw(); 
# 272
extern _Float64 remainderf64(_Float64 __x, _Float64 __y) throw(); extern _Float64 __remainderf64(_Float64 __x, _Float64 __y) throw(); 
# 276
extern _Float64 scalbnf64(_Float64 __x, int __n) throw(); extern _Float64 __scalbnf64(_Float64 __x, int __n) throw(); 
# 280
extern int ilogbf64(_Float64 __x) throw(); extern int __ilogbf64(_Float64 __x) throw(); 
# 285
extern long llogbf64(_Float64 __x) throw(); extern long __llogbf64(_Float64 __x) throw(); 
# 290
extern _Float64 scalblnf64(_Float64 __x, long __n) throw(); extern _Float64 __scalblnf64(_Float64 __x, long __n) throw(); 
# 294
extern _Float64 nearbyintf64(_Float64 __x) throw(); extern _Float64 __nearbyintf64(_Float64 __x) throw(); 
# 298
extern _Float64 roundf64(_Float64 __x) throw() __attribute((const)); extern _Float64 __roundf64(_Float64 __x) throw() __attribute((const)); 
# 302
extern _Float64 truncf64(_Float64 __x) throw() __attribute((const)); extern _Float64 __truncf64(_Float64 __x) throw() __attribute((const)); 
# 307
extern _Float64 remquof64(_Float64 __x, _Float64 __y, int * __quo) throw(); extern _Float64 __remquof64(_Float64 __x, _Float64 __y, int * __quo) throw(); 
# 314
extern long lrintf64(_Float64 __x) throw(); extern long __lrintf64(_Float64 __x) throw(); 
# 316
__extension__ extern long long llrintf64(_Float64 __x) throw(); extern long long __llrintf64(_Float64 __x) throw(); 
# 320
extern long lroundf64(_Float64 __x) throw(); extern long __lroundf64(_Float64 __x) throw(); 
# 322
__extension__ extern long long llroundf64(_Float64 __x) throw(); extern long long __llroundf64(_Float64 __x) throw(); 
# 326
extern _Float64 fdimf64(_Float64 __x, _Float64 __y) throw(); extern _Float64 __fdimf64(_Float64 __x, _Float64 __y) throw(); 
# 329
extern _Float64 fmaxf64(_Float64 __x, _Float64 __y) throw() __attribute((const)); extern _Float64 __fmaxf64(_Float64 __x, _Float64 __y) throw() __attribute((const)); 
# 332
extern _Float64 fminf64(_Float64 __x, _Float64 __y) throw() __attribute((const)); extern _Float64 __fminf64(_Float64 __x, _Float64 __y) throw() __attribute((const)); 
# 335
extern _Float64 fmaf64(_Float64 __x, _Float64 __y, _Float64 __z) throw(); extern _Float64 __fmaf64(_Float64 __x, _Float64 __y, _Float64 __z) throw(); 
# 340
extern _Float64 roundevenf64(_Float64 __x) throw() __attribute((const)); extern _Float64 __roundevenf64(_Float64 __x) throw() __attribute((const)); 
# 344
extern __intmax_t fromfpf64(_Float64 __x, int __round, unsigned __width) throw(); extern __intmax_t __fromfpf64(_Float64 __x, int __round, unsigned __width) throw(); 
# 349
extern __uintmax_t ufromfpf64(_Float64 __x, int __round, unsigned __width) throw(); extern __uintmax_t __ufromfpf64(_Float64 __x, int __round, unsigned __width) throw(); 
# 355
extern __intmax_t fromfpxf64(_Float64 __x, int __round, unsigned __width) throw(); extern __intmax_t __fromfpxf64(_Float64 __x, int __round, unsigned __width) throw(); 
# 361
extern __uintmax_t ufromfpxf64(_Float64 __x, int __round, unsigned __width) throw(); extern __uintmax_t __ufromfpxf64(_Float64 __x, int __round, unsigned __width) throw(); 
# 365
extern _Float64 fmaxmagf64(_Float64 __x, _Float64 __y) throw() __attribute((const)); extern _Float64 __fmaxmagf64(_Float64 __x, _Float64 __y) throw() __attribute((const)); 
# 368
extern _Float64 fminmagf64(_Float64 __x, _Float64 __y) throw() __attribute((const)); extern _Float64 __fminmagf64(_Float64 __x, _Float64 __y) throw() __attribute((const)); 
# 371
extern int canonicalizef64(_Float64 * __cx, const _Float64 * __x) throw(); 
# 376
extern int totalorderf64(const _Float64 * __x, const _Float64 * __y) throw()
# 378
 __attribute((__pure__)); 
# 381
extern int totalordermagf64(const _Float64 * __x, const _Float64 * __y) throw()
# 383
 __attribute((__pure__)); 
# 386
extern _Float64 getpayloadf64(const _Float64 * __x) throw(); extern _Float64 __getpayloadf64(const _Float64 * __x) throw(); 
# 389
extern int setpayloadf64(_Float64 * __x, _Float64 __payload) throw(); 
# 392
extern int setpayloadsigf64(_Float64 * __x, _Float64 __payload) throw(); 
# 21 "/usr/include/bits/mathcalls-helper-functions.h" 3
extern int __fpclassifyf128(_Float128 __value) throw()
# 22
 __attribute((const)); 
# 25
extern int __signbitf128(_Float128 __value) throw()
# 26
 __attribute((const)); 
# 30
extern int __isinff128(_Float128 __value) throw() __attribute((const)); 
# 33
extern int __finitef128(_Float128 __value) throw() __attribute((const)); 
# 36
extern int __isnanf128(_Float128 __value) throw() __attribute((const)); 
# 39
extern int __iseqsigf128(_Float128 __x, _Float128 __y) throw(); 
# 42
extern int __issignalingf128(_Float128 __value) throw()
# 43
 __attribute((const)); 
# 53 "/usr/include/bits/mathcalls.h" 3
extern _Float128 acosf128(_Float128 __x) throw(); extern _Float128 __acosf128(_Float128 __x) throw(); 
# 55
extern _Float128 asinf128(_Float128 __x) throw(); extern _Float128 __asinf128(_Float128 __x) throw(); 
# 57
extern _Float128 atanf128(_Float128 __x) throw(); extern _Float128 __atanf128(_Float128 __x) throw(); 
# 59
extern _Float128 atan2f128(_Float128 __y, _Float128 __x) throw(); extern _Float128 __atan2f128(_Float128 __y, _Float128 __x) throw(); 
# 62
extern _Float128 cosf128(_Float128 __x) throw(); extern _Float128 __cosf128(_Float128 __x) throw(); 
# 64
extern _Float128 sinf128(_Float128 __x) throw(); extern _Float128 __sinf128(_Float128 __x) throw(); 
# 66
extern _Float128 tanf128(_Float128 __x) throw(); extern _Float128 __tanf128(_Float128 __x) throw(); 
# 71
extern _Float128 coshf128(_Float128 __x) throw(); extern _Float128 __coshf128(_Float128 __x) throw(); 
# 73
extern _Float128 sinhf128(_Float128 __x) throw(); extern _Float128 __sinhf128(_Float128 __x) throw(); 
# 75
extern _Float128 tanhf128(_Float128 __x) throw(); extern _Float128 __tanhf128(_Float128 __x) throw(); 
# 79
extern void sincosf128(_Float128 __x, _Float128 * __sinx, _Float128 * __cosx) throw(); extern void __sincosf128(_Float128 __x, _Float128 * __sinx, _Float128 * __cosx) throw(); 
# 85
extern _Float128 acoshf128(_Float128 __x) throw(); extern _Float128 __acoshf128(_Float128 __x) throw(); 
# 87
extern _Float128 asinhf128(_Float128 __x) throw(); extern _Float128 __asinhf128(_Float128 __x) throw(); 
# 89
extern _Float128 atanhf128(_Float128 __x) throw(); extern _Float128 __atanhf128(_Float128 __x) throw(); 
# 95
extern _Float128 expf128(_Float128 __x) throw(); extern _Float128 __expf128(_Float128 __x) throw(); 
# 98
extern _Float128 frexpf128(_Float128 __x, int * __exponent) throw(); extern _Float128 __frexpf128(_Float128 __x, int * __exponent) throw(); 
# 101
extern _Float128 ldexpf128(_Float128 __x, int __exponent) throw(); extern _Float128 __ldexpf128(_Float128 __x, int __exponent) throw(); 
# 104
extern _Float128 logf128(_Float128 __x) throw(); extern _Float128 __logf128(_Float128 __x) throw(); 
# 107
extern _Float128 log10f128(_Float128 __x) throw(); extern _Float128 __log10f128(_Float128 __x) throw(); 
# 110
extern _Float128 modff128(_Float128 __x, _Float128 * __iptr) throw(); extern _Float128 __modff128(_Float128 __x, _Float128 * __iptr) throw() __attribute((__nonnull__(2))); 
# 114
extern _Float128 exp10f128(_Float128 __x) throw(); extern _Float128 __exp10f128(_Float128 __x) throw(); 
# 119
extern _Float128 expm1f128(_Float128 __x) throw(); extern _Float128 __expm1f128(_Float128 __x) throw(); 
# 122
extern _Float128 log1pf128(_Float128 __x) throw(); extern _Float128 __log1pf128(_Float128 __x) throw(); 
# 125
extern _Float128 logbf128(_Float128 __x) throw(); extern _Float128 __logbf128(_Float128 __x) throw(); 
# 130
extern _Float128 exp2f128(_Float128 __x) throw(); extern _Float128 __exp2f128(_Float128 __x) throw(); 
# 133
extern _Float128 log2f128(_Float128 __x) throw(); extern _Float128 __log2f128(_Float128 __x) throw(); 
# 140
extern _Float128 powf128(_Float128 __x, _Float128 __y) throw(); extern _Float128 __powf128(_Float128 __x, _Float128 __y) throw(); 
# 143
extern _Float128 sqrtf128(_Float128 __x) throw(); extern _Float128 __sqrtf128(_Float128 __x) throw(); 
# 147
extern _Float128 hypotf128(_Float128 __x, _Float128 __y) throw(); extern _Float128 __hypotf128(_Float128 __x, _Float128 __y) throw(); 
# 152
extern _Float128 cbrtf128(_Float128 __x) throw(); extern _Float128 __cbrtf128(_Float128 __x) throw(); 
# 159
extern _Float128 ceilf128(_Float128 __x) throw() __attribute((const)); extern _Float128 __ceilf128(_Float128 __x) throw() __attribute((const)); 
# 162
extern _Float128 fabsf128(_Float128 __x) throw() __attribute((const)); extern _Float128 __fabsf128(_Float128 __x) throw() __attribute((const)); 
# 165
extern _Float128 floorf128(_Float128 __x) throw() __attribute((const)); extern _Float128 __floorf128(_Float128 __x) throw() __attribute((const)); 
# 168
extern _Float128 fmodf128(_Float128 __x, _Float128 __y) throw(); extern _Float128 __fmodf128(_Float128 __x, _Float128 __y) throw(); 
# 196 "/usr/include/bits/mathcalls.h" 3
extern _Float128 copysignf128(_Float128 __x, _Float128 __y) throw() __attribute((const)); extern _Float128 __copysignf128(_Float128 __x, _Float128 __y) throw() __attribute((const)); 
# 201
extern _Float128 nanf128(const char * __tagb) throw(); extern _Float128 __nanf128(const char * __tagb) throw(); 
# 217 "/usr/include/bits/mathcalls.h" 3
extern _Float128 j0f128(_Float128) throw(); extern _Float128 __j0f128(_Float128) throw(); 
# 218
extern _Float128 j1f128(_Float128) throw(); extern _Float128 __j1f128(_Float128) throw(); 
# 219
extern _Float128 jnf128(int, _Float128) throw(); extern _Float128 __jnf128(int, _Float128) throw(); 
# 220
extern _Float128 y0f128(_Float128) throw(); extern _Float128 __y0f128(_Float128) throw(); 
# 221
extern _Float128 y1f128(_Float128) throw(); extern _Float128 __y1f128(_Float128) throw(); 
# 222
extern _Float128 ynf128(int, _Float128) throw(); extern _Float128 __ynf128(int, _Float128) throw(); 
# 228
extern _Float128 erff128(_Float128) throw(); extern _Float128 __erff128(_Float128) throw(); 
# 229
extern _Float128 erfcf128(_Float128) throw(); extern _Float128 __erfcf128(_Float128) throw(); 
# 230
extern _Float128 lgammaf128(_Float128) throw(); extern _Float128 __lgammaf128(_Float128) throw(); 
# 235
extern _Float128 tgammaf128(_Float128) throw(); extern _Float128 __tgammaf128(_Float128) throw(); 
# 249 "/usr/include/bits/mathcalls.h" 3
extern _Float128 lgammaf128_r(_Float128, int * __signgamp) throw(); extern _Float128 __lgammaf128_r(_Float128, int * __signgamp) throw(); 
# 256
extern _Float128 rintf128(_Float128 __x) throw(); extern _Float128 __rintf128(_Float128 __x) throw(); 
# 259
extern _Float128 nextafterf128(_Float128 __x, _Float128 __y) throw(); extern _Float128 __nextafterf128(_Float128 __x, _Float128 __y) throw(); 
# 266
extern _Float128 nextdownf128(_Float128 __x) throw(); extern _Float128 __nextdownf128(_Float128 __x) throw(); 
# 268
extern _Float128 nextupf128(_Float128 __x) throw(); extern _Float128 __nextupf128(_Float128 __x) throw(); 
# 272
extern _Float128 remainderf128(_Float128 __x, _Float128 __y) throw(); extern _Float128 __remainderf128(_Float128 __x, _Float128 __y) throw(); 
# 276
extern _Float128 scalbnf128(_Float128 __x, int __n) throw(); extern _Float128 __scalbnf128(_Float128 __x, int __n) throw(); 
# 280
extern int ilogbf128(_Float128 __x) throw(); extern int __ilogbf128(_Float128 __x) throw(); 
# 285
extern long llogbf128(_Float128 __x) throw(); extern long __llogbf128(_Float128 __x) throw(); 
# 290
extern _Float128 scalblnf128(_Float128 __x, long __n) throw(); extern _Float128 __scalblnf128(_Float128 __x, long __n) throw(); 
# 294
extern _Float128 nearbyintf128(_Float128 __x) throw(); extern _Float128 __nearbyintf128(_Float128 __x) throw(); 
# 298
extern _Float128 roundf128(_Float128 __x) throw() __attribute((const)); extern _Float128 __roundf128(_Float128 __x) throw() __attribute((const)); 
# 302
extern _Float128 truncf128(_Float128 __x) throw() __attribute((const)); extern _Float128 __truncf128(_Float128 __x) throw() __attribute((const)); 
# 307
extern _Float128 remquof128(_Float128 __x, _Float128 __y, int * __quo) throw(); extern _Float128 __remquof128(_Float128 __x, _Float128 __y, int * __quo) throw(); 
# 314
extern long lrintf128(_Float128 __x) throw(); extern long __lrintf128(_Float128 __x) throw(); 
# 316
__extension__ extern long long llrintf128(_Float128 __x) throw(); extern long long __llrintf128(_Float128 __x) throw(); 
# 320
extern long lroundf128(_Float128 __x) throw(); extern long __lroundf128(_Float128 __x) throw(); 
# 322
__extension__ extern long long llroundf128(_Float128 __x) throw(); extern long long __llroundf128(_Float128 __x) throw(); 
# 326
extern _Float128 fdimf128(_Float128 __x, _Float128 __y) throw(); extern _Float128 __fdimf128(_Float128 __x, _Float128 __y) throw(); 
# 329
extern _Float128 fmaxf128(_Float128 __x, _Float128 __y) throw() __attribute((const)); extern _Float128 __fmaxf128(_Float128 __x, _Float128 __y) throw() __attribute((const)); 
# 332
extern _Float128 fminf128(_Float128 __x, _Float128 __y) throw() __attribute((const)); extern _Float128 __fminf128(_Float128 __x, _Float128 __y) throw() __attribute((const)); 
# 335
extern _Float128 fmaf128(_Float128 __x, _Float128 __y, _Float128 __z) throw(); extern _Float128 __fmaf128(_Float128 __x, _Float128 __y, _Float128 __z) throw(); 
# 340
extern _Float128 roundevenf128(_Float128 __x) throw() __attribute((const)); extern _Float128 __roundevenf128(_Float128 __x) throw() __attribute((const)); 
# 344
extern __intmax_t fromfpf128(_Float128 __x, int __round, unsigned __width) throw(); extern __intmax_t __fromfpf128(_Float128 __x, int __round, unsigned __width) throw(); 
# 349
extern __uintmax_t ufromfpf128(_Float128 __x, int __round, unsigned __width) throw(); extern __uintmax_t __ufromfpf128(_Float128 __x, int __round, unsigned __width) throw(); 
# 355
extern __intmax_t fromfpxf128(_Float128 __x, int __round, unsigned __width) throw(); extern __intmax_t __fromfpxf128(_Float128 __x, int __round, unsigned __width) throw(); 
# 361
extern __uintmax_t ufromfpxf128(_Float128 __x, int __round, unsigned __width) throw(); extern __uintmax_t __ufromfpxf128(_Float128 __x, int __round, unsigned __width) throw(); 
# 365
extern _Float128 fmaxmagf128(_Float128 __x, _Float128 __y) throw() __attribute((const)); extern _Float128 __fmaxmagf128(_Float128 __x, _Float128 __y) throw() __attribute((const)); 
# 368
extern _Float128 fminmagf128(_Float128 __x, _Float128 __y) throw() __attribute((const)); extern _Float128 __fminmagf128(_Float128 __x, _Float128 __y) throw() __attribute((const)); 
# 371
extern int canonicalizef128(_Float128 * __cx, const _Float128 * __x) throw(); 
# 376
extern int totalorderf128(const _Float128 * __x, const _Float128 * __y) throw()
# 378
 __attribute((__pure__)); 
# 381
extern int totalordermagf128(const _Float128 * __x, const _Float128 * __y) throw()
# 383
 __attribute((__pure__)); 
# 386
extern _Float128 getpayloadf128(const _Float128 * __x) throw(); extern _Float128 __getpayloadf128(const _Float128 * __x) throw(); 
# 389
extern int setpayloadf128(_Float128 * __x, _Float128 __payload) throw(); 
# 392
extern int setpayloadsigf128(_Float128 * __x, _Float128 __payload) throw(); 
# 53 "/usr/include/bits/mathcalls.h" 3
extern _Float32x acosf32x(_Float32x __x) throw(); extern _Float32x __acosf32x(_Float32x __x) throw(); 
# 55
extern _Float32x asinf32x(_Float32x __x) throw(); extern _Float32x __asinf32x(_Float32x __x) throw(); 
# 57
extern _Float32x atanf32x(_Float32x __x) throw(); extern _Float32x __atanf32x(_Float32x __x) throw(); 
# 59
extern _Float32x atan2f32x(_Float32x __y, _Float32x __x) throw(); extern _Float32x __atan2f32x(_Float32x __y, _Float32x __x) throw(); 
# 62
extern _Float32x cosf32x(_Float32x __x) throw(); extern _Float32x __cosf32x(_Float32x __x) throw(); 
# 64
extern _Float32x sinf32x(_Float32x __x) throw(); extern _Float32x __sinf32x(_Float32x __x) throw(); 
# 66
extern _Float32x tanf32x(_Float32x __x) throw(); extern _Float32x __tanf32x(_Float32x __x) throw(); 
# 71
extern _Float32x coshf32x(_Float32x __x) throw(); extern _Float32x __coshf32x(_Float32x __x) throw(); 
# 73
extern _Float32x sinhf32x(_Float32x __x) throw(); extern _Float32x __sinhf32x(_Float32x __x) throw(); 
# 75
extern _Float32x tanhf32x(_Float32x __x) throw(); extern _Float32x __tanhf32x(_Float32x __x) throw(); 
# 79
extern void sincosf32x(_Float32x __x, _Float32x * __sinx, _Float32x * __cosx) throw(); extern void __sincosf32x(_Float32x __x, _Float32x * __sinx, _Float32x * __cosx) throw(); 
# 85
extern _Float32x acoshf32x(_Float32x __x) throw(); extern _Float32x __acoshf32x(_Float32x __x) throw(); 
# 87
extern _Float32x asinhf32x(_Float32x __x) throw(); extern _Float32x __asinhf32x(_Float32x __x) throw(); 
# 89
extern _Float32x atanhf32x(_Float32x __x) throw(); extern _Float32x __atanhf32x(_Float32x __x) throw(); 
# 95
extern _Float32x expf32x(_Float32x __x) throw(); extern _Float32x __expf32x(_Float32x __x) throw(); 
# 98
extern _Float32x frexpf32x(_Float32x __x, int * __exponent) throw(); extern _Float32x __frexpf32x(_Float32x __x, int * __exponent) throw(); 
# 101
extern _Float32x ldexpf32x(_Float32x __x, int __exponent) throw(); extern _Float32x __ldexpf32x(_Float32x __x, int __exponent) throw(); 
# 104
extern _Float32x logf32x(_Float32x __x) throw(); extern _Float32x __logf32x(_Float32x __x) throw(); 
# 107
extern _Float32x log10f32x(_Float32x __x) throw(); extern _Float32x __log10f32x(_Float32x __x) throw(); 
# 110
extern _Float32x modff32x(_Float32x __x, _Float32x * __iptr) throw(); extern _Float32x __modff32x(_Float32x __x, _Float32x * __iptr) throw() __attribute((__nonnull__(2))); 
# 114
extern _Float32x exp10f32x(_Float32x __x) throw(); extern _Float32x __exp10f32x(_Float32x __x) throw(); 
# 119
extern _Float32x expm1f32x(_Float32x __x) throw(); extern _Float32x __expm1f32x(_Float32x __x) throw(); 
# 122
extern _Float32x log1pf32x(_Float32x __x) throw(); extern _Float32x __log1pf32x(_Float32x __x) throw(); 
# 125
extern _Float32x logbf32x(_Float32x __x) throw(); extern _Float32x __logbf32x(_Float32x __x) throw(); 
# 130
extern _Float32x exp2f32x(_Float32x __x) throw(); extern _Float32x __exp2f32x(_Float32x __x) throw(); 
# 133
extern _Float32x log2f32x(_Float32x __x) throw(); extern _Float32x __log2f32x(_Float32x __x) throw(); 
# 140
extern _Float32x powf32x(_Float32x __x, _Float32x __y) throw(); extern _Float32x __powf32x(_Float32x __x, _Float32x __y) throw(); 
# 143
extern _Float32x sqrtf32x(_Float32x __x) throw(); extern _Float32x __sqrtf32x(_Float32x __x) throw(); 
# 147
extern _Float32x hypotf32x(_Float32x __x, _Float32x __y) throw(); extern _Float32x __hypotf32x(_Float32x __x, _Float32x __y) throw(); 
# 152
extern _Float32x cbrtf32x(_Float32x __x) throw(); extern _Float32x __cbrtf32x(_Float32x __x) throw(); 
# 159
extern _Float32x ceilf32x(_Float32x __x) throw() __attribute((const)); extern _Float32x __ceilf32x(_Float32x __x) throw() __attribute((const)); 
# 162
extern _Float32x fabsf32x(_Float32x __x) throw() __attribute((const)); extern _Float32x __fabsf32x(_Float32x __x) throw() __attribute((const)); 
# 165
extern _Float32x floorf32x(_Float32x __x) throw() __attribute((const)); extern _Float32x __floorf32x(_Float32x __x) throw() __attribute((const)); 
# 168
extern _Float32x fmodf32x(_Float32x __x, _Float32x __y) throw(); extern _Float32x __fmodf32x(_Float32x __x, _Float32x __y) throw(); 
# 196 "/usr/include/bits/mathcalls.h" 3
extern _Float32x copysignf32x(_Float32x __x, _Float32x __y) throw() __attribute((const)); extern _Float32x __copysignf32x(_Float32x __x, _Float32x __y) throw() __attribute((const)); 
# 201
extern _Float32x nanf32x(const char * __tagb) throw(); extern _Float32x __nanf32x(const char * __tagb) throw(); 
# 217 "/usr/include/bits/mathcalls.h" 3
extern _Float32x j0f32x(_Float32x) throw(); extern _Float32x __j0f32x(_Float32x) throw(); 
# 218
extern _Float32x j1f32x(_Float32x) throw(); extern _Float32x __j1f32x(_Float32x) throw(); 
# 219
extern _Float32x jnf32x(int, _Float32x) throw(); extern _Float32x __jnf32x(int, _Float32x) throw(); 
# 220
extern _Float32x y0f32x(_Float32x) throw(); extern _Float32x __y0f32x(_Float32x) throw(); 
# 221
extern _Float32x y1f32x(_Float32x) throw(); extern _Float32x __y1f32x(_Float32x) throw(); 
# 222
extern _Float32x ynf32x(int, _Float32x) throw(); extern _Float32x __ynf32x(int, _Float32x) throw(); 
# 228
extern _Float32x erff32x(_Float32x) throw(); extern _Float32x __erff32x(_Float32x) throw(); 
# 229
extern _Float32x erfcf32x(_Float32x) throw(); extern _Float32x __erfcf32x(_Float32x) throw(); 
# 230
extern _Float32x lgammaf32x(_Float32x) throw(); extern _Float32x __lgammaf32x(_Float32x) throw(); 
# 235
extern _Float32x tgammaf32x(_Float32x) throw(); extern _Float32x __tgammaf32x(_Float32x) throw(); 
# 249 "/usr/include/bits/mathcalls.h" 3
extern _Float32x lgammaf32x_r(_Float32x, int * __signgamp) throw(); extern _Float32x __lgammaf32x_r(_Float32x, int * __signgamp) throw(); 
# 256
extern _Float32x rintf32x(_Float32x __x) throw(); extern _Float32x __rintf32x(_Float32x __x) throw(); 
# 259
extern _Float32x nextafterf32x(_Float32x __x, _Float32x __y) throw(); extern _Float32x __nextafterf32x(_Float32x __x, _Float32x __y) throw(); 
# 266
extern _Float32x nextdownf32x(_Float32x __x) throw(); extern _Float32x __nextdownf32x(_Float32x __x) throw(); 
# 268
extern _Float32x nextupf32x(_Float32x __x) throw(); extern _Float32x __nextupf32x(_Float32x __x) throw(); 
# 272
extern _Float32x remainderf32x(_Float32x __x, _Float32x __y) throw(); extern _Float32x __remainderf32x(_Float32x __x, _Float32x __y) throw(); 
# 276
extern _Float32x scalbnf32x(_Float32x __x, int __n) throw(); extern _Float32x __scalbnf32x(_Float32x __x, int __n) throw(); 
# 280
extern int ilogbf32x(_Float32x __x) throw(); extern int __ilogbf32x(_Float32x __x) throw(); 
# 285
extern long llogbf32x(_Float32x __x) throw(); extern long __llogbf32x(_Float32x __x) throw(); 
# 290
extern _Float32x scalblnf32x(_Float32x __x, long __n) throw(); extern _Float32x __scalblnf32x(_Float32x __x, long __n) throw(); 
# 294
extern _Float32x nearbyintf32x(_Float32x __x) throw(); extern _Float32x __nearbyintf32x(_Float32x __x) throw(); 
# 298
extern _Float32x roundf32x(_Float32x __x) throw() __attribute((const)); extern _Float32x __roundf32x(_Float32x __x) throw() __attribute((const)); 
# 302
extern _Float32x truncf32x(_Float32x __x) throw() __attribute((const)); extern _Float32x __truncf32x(_Float32x __x) throw() __attribute((const)); 
# 307
extern _Float32x remquof32x(_Float32x __x, _Float32x __y, int * __quo) throw(); extern _Float32x __remquof32x(_Float32x __x, _Float32x __y, int * __quo) throw(); 
# 314
extern long lrintf32x(_Float32x __x) throw(); extern long __lrintf32x(_Float32x __x) throw(); 
# 316
__extension__ extern long long llrintf32x(_Float32x __x) throw(); extern long long __llrintf32x(_Float32x __x) throw(); 
# 320
extern long lroundf32x(_Float32x __x) throw(); extern long __lroundf32x(_Float32x __x) throw(); 
# 322
__extension__ extern long long llroundf32x(_Float32x __x) throw(); extern long long __llroundf32x(_Float32x __x) throw(); 
# 326
extern _Float32x fdimf32x(_Float32x __x, _Float32x __y) throw(); extern _Float32x __fdimf32x(_Float32x __x, _Float32x __y) throw(); 
# 329
extern _Float32x fmaxf32x(_Float32x __x, _Float32x __y) throw() __attribute((const)); extern _Float32x __fmaxf32x(_Float32x __x, _Float32x __y) throw() __attribute((const)); 
# 332
extern _Float32x fminf32x(_Float32x __x, _Float32x __y) throw() __attribute((const)); extern _Float32x __fminf32x(_Float32x __x, _Float32x __y) throw() __attribute((const)); 
# 335
extern _Float32x fmaf32x(_Float32x __x, _Float32x __y, _Float32x __z) throw(); extern _Float32x __fmaf32x(_Float32x __x, _Float32x __y, _Float32x __z) throw(); 
# 340
extern _Float32x roundevenf32x(_Float32x __x) throw() __attribute((const)); extern _Float32x __roundevenf32x(_Float32x __x) throw() __attribute((const)); 
# 344
extern __intmax_t fromfpf32x(_Float32x __x, int __round, unsigned __width) throw(); extern __intmax_t __fromfpf32x(_Float32x __x, int __round, unsigned __width) throw(); 
# 349
extern __uintmax_t ufromfpf32x(_Float32x __x, int __round, unsigned __width) throw(); extern __uintmax_t __ufromfpf32x(_Float32x __x, int __round, unsigned __width) throw(); 
# 355
extern __intmax_t fromfpxf32x(_Float32x __x, int __round, unsigned __width) throw(); extern __intmax_t __fromfpxf32x(_Float32x __x, int __round, unsigned __width) throw(); 
# 361
extern __uintmax_t ufromfpxf32x(_Float32x __x, int __round, unsigned __width) throw(); extern __uintmax_t __ufromfpxf32x(_Float32x __x, int __round, unsigned __width) throw(); 
# 365
extern _Float32x fmaxmagf32x(_Float32x __x, _Float32x __y) throw() __attribute((const)); extern _Float32x __fmaxmagf32x(_Float32x __x, _Float32x __y) throw() __attribute((const)); 
# 368
extern _Float32x fminmagf32x(_Float32x __x, _Float32x __y) throw() __attribute((const)); extern _Float32x __fminmagf32x(_Float32x __x, _Float32x __y) throw() __attribute((const)); 
# 371
extern int canonicalizef32x(_Float32x * __cx, const _Float32x * __x) throw(); 
# 376
extern int totalorderf32x(const _Float32x * __x, const _Float32x * __y) throw()
# 378
 __attribute((__pure__)); 
# 381
extern int totalordermagf32x(const _Float32x * __x, const _Float32x * __y) throw()
# 383
 __attribute((__pure__)); 
# 386
extern _Float32x getpayloadf32x(const _Float32x * __x) throw(); extern _Float32x __getpayloadf32x(const _Float32x * __x) throw(); 
# 389
extern int setpayloadf32x(_Float32x * __x, _Float32x __payload) throw(); 
# 392
extern int setpayloadsigf32x(_Float32x * __x, _Float32x __payload) throw(); 
# 53 "/usr/include/bits/mathcalls.h" 3
extern _Float64x acosf64x(_Float64x __x) throw(); extern _Float64x __acosf64x(_Float64x __x) throw(); 
# 55
extern _Float64x asinf64x(_Float64x __x) throw(); extern _Float64x __asinf64x(_Float64x __x) throw(); 
# 57
extern _Float64x atanf64x(_Float64x __x) throw(); extern _Float64x __atanf64x(_Float64x __x) throw(); 
# 59
extern _Float64x atan2f64x(_Float64x __y, _Float64x __x) throw(); extern _Float64x __atan2f64x(_Float64x __y, _Float64x __x) throw(); 
# 62
extern _Float64x cosf64x(_Float64x __x) throw(); extern _Float64x __cosf64x(_Float64x __x) throw(); 
# 64
extern _Float64x sinf64x(_Float64x __x) throw(); extern _Float64x __sinf64x(_Float64x __x) throw(); 
# 66
extern _Float64x tanf64x(_Float64x __x) throw(); extern _Float64x __tanf64x(_Float64x __x) throw(); 
# 71
extern _Float64x coshf64x(_Float64x __x) throw(); extern _Float64x __coshf64x(_Float64x __x) throw(); 
# 73
extern _Float64x sinhf64x(_Float64x __x) throw(); extern _Float64x __sinhf64x(_Float64x __x) throw(); 
# 75
extern _Float64x tanhf64x(_Float64x __x) throw(); extern _Float64x __tanhf64x(_Float64x __x) throw(); 
# 79
extern void sincosf64x(_Float64x __x, _Float64x * __sinx, _Float64x * __cosx) throw(); extern void __sincosf64x(_Float64x __x, _Float64x * __sinx, _Float64x * __cosx) throw(); 
# 85
extern _Float64x acoshf64x(_Float64x __x) throw(); extern _Float64x __acoshf64x(_Float64x __x) throw(); 
# 87
extern _Float64x asinhf64x(_Float64x __x) throw(); extern _Float64x __asinhf64x(_Float64x __x) throw(); 
# 89
extern _Float64x atanhf64x(_Float64x __x) throw(); extern _Float64x __atanhf64x(_Float64x __x) throw(); 
# 95
extern _Float64x expf64x(_Float64x __x) throw(); extern _Float64x __expf64x(_Float64x __x) throw(); 
# 98
extern _Float64x frexpf64x(_Float64x __x, int * __exponent) throw(); extern _Float64x __frexpf64x(_Float64x __x, int * __exponent) throw(); 
# 101
extern _Float64x ldexpf64x(_Float64x __x, int __exponent) throw(); extern _Float64x __ldexpf64x(_Float64x __x, int __exponent) throw(); 
# 104
extern _Float64x logf64x(_Float64x __x) throw(); extern _Float64x __logf64x(_Float64x __x) throw(); 
# 107
extern _Float64x log10f64x(_Float64x __x) throw(); extern _Float64x __log10f64x(_Float64x __x) throw(); 
# 110
extern _Float64x modff64x(_Float64x __x, _Float64x * __iptr) throw(); extern _Float64x __modff64x(_Float64x __x, _Float64x * __iptr) throw() __attribute((__nonnull__(2))); 
# 114
extern _Float64x exp10f64x(_Float64x __x) throw(); extern _Float64x __exp10f64x(_Float64x __x) throw(); 
# 119
extern _Float64x expm1f64x(_Float64x __x) throw(); extern _Float64x __expm1f64x(_Float64x __x) throw(); 
# 122
extern _Float64x log1pf64x(_Float64x __x) throw(); extern _Float64x __log1pf64x(_Float64x __x) throw(); 
# 125
extern _Float64x logbf64x(_Float64x __x) throw(); extern _Float64x __logbf64x(_Float64x __x) throw(); 
# 130
extern _Float64x exp2f64x(_Float64x __x) throw(); extern _Float64x __exp2f64x(_Float64x __x) throw(); 
# 133
extern _Float64x log2f64x(_Float64x __x) throw(); extern _Float64x __log2f64x(_Float64x __x) throw(); 
# 140
extern _Float64x powf64x(_Float64x __x, _Float64x __y) throw(); extern _Float64x __powf64x(_Float64x __x, _Float64x __y) throw(); 
# 143
extern _Float64x sqrtf64x(_Float64x __x) throw(); extern _Float64x __sqrtf64x(_Float64x __x) throw(); 
# 147
extern _Float64x hypotf64x(_Float64x __x, _Float64x __y) throw(); extern _Float64x __hypotf64x(_Float64x __x, _Float64x __y) throw(); 
# 152
extern _Float64x cbrtf64x(_Float64x __x) throw(); extern _Float64x __cbrtf64x(_Float64x __x) throw(); 
# 159
extern _Float64x ceilf64x(_Float64x __x) throw() __attribute((const)); extern _Float64x __ceilf64x(_Float64x __x) throw() __attribute((const)); 
# 162
extern _Float64x fabsf64x(_Float64x __x) throw() __attribute((const)); extern _Float64x __fabsf64x(_Float64x __x) throw() __attribute((const)); 
# 165
extern _Float64x floorf64x(_Float64x __x) throw() __attribute((const)); extern _Float64x __floorf64x(_Float64x __x) throw() __attribute((const)); 
# 168
extern _Float64x fmodf64x(_Float64x __x, _Float64x __y) throw(); extern _Float64x __fmodf64x(_Float64x __x, _Float64x __y) throw(); 
# 196 "/usr/include/bits/mathcalls.h" 3
extern _Float64x copysignf64x(_Float64x __x, _Float64x __y) throw() __attribute((const)); extern _Float64x __copysignf64x(_Float64x __x, _Float64x __y) throw() __attribute((const)); 
# 201
extern _Float64x nanf64x(const char * __tagb) throw(); extern _Float64x __nanf64x(const char * __tagb) throw(); 
# 217 "/usr/include/bits/mathcalls.h" 3
extern _Float64x j0f64x(_Float64x) throw(); extern _Float64x __j0f64x(_Float64x) throw(); 
# 218
extern _Float64x j1f64x(_Float64x) throw(); extern _Float64x __j1f64x(_Float64x) throw(); 
# 219
extern _Float64x jnf64x(int, _Float64x) throw(); extern _Float64x __jnf64x(int, _Float64x) throw(); 
# 220
extern _Float64x y0f64x(_Float64x) throw(); extern _Float64x __y0f64x(_Float64x) throw(); 
# 221
extern _Float64x y1f64x(_Float64x) throw(); extern _Float64x __y1f64x(_Float64x) throw(); 
# 222
extern _Float64x ynf64x(int, _Float64x) throw(); extern _Float64x __ynf64x(int, _Float64x) throw(); 
# 228
extern _Float64x erff64x(_Float64x) throw(); extern _Float64x __erff64x(_Float64x) throw(); 
# 229
extern _Float64x erfcf64x(_Float64x) throw(); extern _Float64x __erfcf64x(_Float64x) throw(); 
# 230
extern _Float64x lgammaf64x(_Float64x) throw(); extern _Float64x __lgammaf64x(_Float64x) throw(); 
# 235
extern _Float64x tgammaf64x(_Float64x) throw(); extern _Float64x __tgammaf64x(_Float64x) throw(); 
# 249 "/usr/include/bits/mathcalls.h" 3
extern _Float64x lgammaf64x_r(_Float64x, int * __signgamp) throw(); extern _Float64x __lgammaf64x_r(_Float64x, int * __signgamp) throw(); 
# 256
extern _Float64x rintf64x(_Float64x __x) throw(); extern _Float64x __rintf64x(_Float64x __x) throw(); 
# 259
extern _Float64x nextafterf64x(_Float64x __x, _Float64x __y) throw(); extern _Float64x __nextafterf64x(_Float64x __x, _Float64x __y) throw(); 
# 266
extern _Float64x nextdownf64x(_Float64x __x) throw(); extern _Float64x __nextdownf64x(_Float64x __x) throw(); 
# 268
extern _Float64x nextupf64x(_Float64x __x) throw(); extern _Float64x __nextupf64x(_Float64x __x) throw(); 
# 272
extern _Float64x remainderf64x(_Float64x __x, _Float64x __y) throw(); extern _Float64x __remainderf64x(_Float64x __x, _Float64x __y) throw(); 
# 276
extern _Float64x scalbnf64x(_Float64x __x, int __n) throw(); extern _Float64x __scalbnf64x(_Float64x __x, int __n) throw(); 
# 280
extern int ilogbf64x(_Float64x __x) throw(); extern int __ilogbf64x(_Float64x __x) throw(); 
# 285
extern long llogbf64x(_Float64x __x) throw(); extern long __llogbf64x(_Float64x __x) throw(); 
# 290
extern _Float64x scalblnf64x(_Float64x __x, long __n) throw(); extern _Float64x __scalblnf64x(_Float64x __x, long __n) throw(); 
# 294
extern _Float64x nearbyintf64x(_Float64x __x) throw(); extern _Float64x __nearbyintf64x(_Float64x __x) throw(); 
# 298
extern _Float64x roundf64x(_Float64x __x) throw() __attribute((const)); extern _Float64x __roundf64x(_Float64x __x) throw() __attribute((const)); 
# 302
extern _Float64x truncf64x(_Float64x __x) throw() __attribute((const)); extern _Float64x __truncf64x(_Float64x __x) throw() __attribute((const)); 
# 307
extern _Float64x remquof64x(_Float64x __x, _Float64x __y, int * __quo) throw(); extern _Float64x __remquof64x(_Float64x __x, _Float64x __y, int * __quo) throw(); 
# 314
extern long lrintf64x(_Float64x __x) throw(); extern long __lrintf64x(_Float64x __x) throw(); 
# 316
__extension__ extern long long llrintf64x(_Float64x __x) throw(); extern long long __llrintf64x(_Float64x __x) throw(); 
# 320
extern long lroundf64x(_Float64x __x) throw(); extern long __lroundf64x(_Float64x __x) throw(); 
# 322
__extension__ extern long long llroundf64x(_Float64x __x) throw(); extern long long __llroundf64x(_Float64x __x) throw(); 
# 326
extern _Float64x fdimf64x(_Float64x __x, _Float64x __y) throw(); extern _Float64x __fdimf64x(_Float64x __x, _Float64x __y) throw(); 
# 329
extern _Float64x fmaxf64x(_Float64x __x, _Float64x __y) throw() __attribute((const)); extern _Float64x __fmaxf64x(_Float64x __x, _Float64x __y) throw() __attribute((const)); 
# 332
extern _Float64x fminf64x(_Float64x __x, _Float64x __y) throw() __attribute((const)); extern _Float64x __fminf64x(_Float64x __x, _Float64x __y) throw() __attribute((const)); 
# 335
extern _Float64x fmaf64x(_Float64x __x, _Float64x __y, _Float64x __z) throw(); extern _Float64x __fmaf64x(_Float64x __x, _Float64x __y, _Float64x __z) throw(); 
# 340
extern _Float64x roundevenf64x(_Float64x __x) throw() __attribute((const)); extern _Float64x __roundevenf64x(_Float64x __x) throw() __attribute((const)); 
# 344
extern __intmax_t fromfpf64x(_Float64x __x, int __round, unsigned __width) throw(); extern __intmax_t __fromfpf64x(_Float64x __x, int __round, unsigned __width) throw(); 
# 349
extern __uintmax_t ufromfpf64x(_Float64x __x, int __round, unsigned __width) throw(); extern __uintmax_t __ufromfpf64x(_Float64x __x, int __round, unsigned __width) throw(); 
# 355
extern __intmax_t fromfpxf64x(_Float64x __x, int __round, unsigned __width) throw(); extern __intmax_t __fromfpxf64x(_Float64x __x, int __round, unsigned __width) throw(); 
# 361
extern __uintmax_t ufromfpxf64x(_Float64x __x, int __round, unsigned __width) throw(); extern __uintmax_t __ufromfpxf64x(_Float64x __x, int __round, unsigned __width) throw(); 
# 365
extern _Float64x fmaxmagf64x(_Float64x __x, _Float64x __y) throw() __attribute((const)); extern _Float64x __fmaxmagf64x(_Float64x __x, _Float64x __y) throw() __attribute((const)); 
# 368
extern _Float64x fminmagf64x(_Float64x __x, _Float64x __y) throw() __attribute((const)); extern _Float64x __fminmagf64x(_Float64x __x, _Float64x __y) throw() __attribute((const)); 
# 371
extern int canonicalizef64x(_Float64x * __cx, const _Float64x * __x) throw(); 
# 376
extern int totalorderf64x(const _Float64x * __x, const _Float64x * __y) throw()
# 378
 __attribute((__pure__)); 
# 381
extern int totalordermagf64x(const _Float64x * __x, const _Float64x * __y) throw()
# 383
 __attribute((__pure__)); 
# 386
extern _Float64x getpayloadf64x(const _Float64x * __x) throw(); extern _Float64x __getpayloadf64x(const _Float64x * __x) throw(); 
# 389
extern int setpayloadf64x(_Float64x * __x, _Float64x __payload) throw(); 
# 392
extern int setpayloadsigf64x(_Float64x * __x, _Float64x __payload) throw(); 
# 24 "/usr/include/bits/mathcalls-narrow.h" 3
extern float fadd(double __x, double __y) throw(); 
# 27
extern float fdiv(double __x, double __y) throw(); 
# 30
extern float fmul(double __x, double __y) throw(); 
# 33
extern float fsub(double __x, double __y) throw(); 
# 24 "/usr/include/bits/mathcalls-narrow.h" 3
extern float faddl(long double __x, long double __y) throw(); 
# 27
extern float fdivl(long double __x, long double __y) throw(); 
# 30
extern float fmull(long double __x, long double __y) throw(); 
# 33
extern float fsubl(long double __x, long double __y) throw(); 
# 24 "/usr/include/bits/mathcalls-narrow.h" 3
extern double daddl(long double __x, long double __y) throw(); 
# 27
extern double ddivl(long double __x, long double __y) throw(); 
# 30
extern double dmull(long double __x, long double __y) throw(); 
# 33
extern double dsubl(long double __x, long double __y) throw(); 
# 24 "/usr/include/bits/mathcalls-narrow.h" 3
extern _Float32 f32addf32x(_Float32x __x, _Float32x __y) throw(); 
# 27
extern _Float32 f32divf32x(_Float32x __x, _Float32x __y) throw(); 
# 30
extern _Float32 f32mulf32x(_Float32x __x, _Float32x __y) throw(); 
# 33
extern _Float32 f32subf32x(_Float32x __x, _Float32x __y) throw(); 
# 24 "/usr/include/bits/mathcalls-narrow.h" 3
extern _Float32 f32addf64(_Float64 __x, _Float64 __y) throw(); 
# 27
extern _Float32 f32divf64(_Float64 __x, _Float64 __y) throw(); 
# 30
extern _Float32 f32mulf64(_Float64 __x, _Float64 __y) throw(); 
# 33
extern _Float32 f32subf64(_Float64 __x, _Float64 __y) throw(); 
# 24 "/usr/include/bits/mathcalls-narrow.h" 3
extern _Float32 f32addf64x(_Float64x __x, _Float64x __y) throw(); 
# 27
extern _Float32 f32divf64x(_Float64x __x, _Float64x __y) throw(); 
# 30
extern _Float32 f32mulf64x(_Float64x __x, _Float64x __y) throw(); 
# 33
extern _Float32 f32subf64x(_Float64x __x, _Float64x __y) throw(); 
# 24 "/usr/include/bits/mathcalls-narrow.h" 3
extern _Float32 f32addf128(_Float128 __x, _Float128 __y) throw(); 
# 27
extern _Float32 f32divf128(_Float128 __x, _Float128 __y) throw(); 
# 30
extern _Float32 f32mulf128(_Float128 __x, _Float128 __y) throw(); 
# 33
extern _Float32 f32subf128(_Float128 __x, _Float128 __y) throw(); 
# 24 "/usr/include/bits/mathcalls-narrow.h" 3
extern _Float32x f32xaddf64(_Float64 __x, _Float64 __y) throw(); 
# 27
extern _Float32x f32xdivf64(_Float64 __x, _Float64 __y) throw(); 
# 30
extern _Float32x f32xmulf64(_Float64 __x, _Float64 __y) throw(); 
# 33
extern _Float32x f32xsubf64(_Float64 __x, _Float64 __y) throw(); 
# 24 "/usr/include/bits/mathcalls-narrow.h" 3
extern _Float32x f32xaddf64x(_Float64x __x, _Float64x __y) throw(); 
# 27
extern _Float32x f32xdivf64x(_Float64x __x, _Float64x __y) throw(); 
# 30
extern _Float32x f32xmulf64x(_Float64x __x, _Float64x __y) throw(); 
# 33
extern _Float32x f32xsubf64x(_Float64x __x, _Float64x __y) throw(); 
# 24 "/usr/include/bits/mathcalls-narrow.h" 3
extern _Float32x f32xaddf128(_Float128 __x, _Float128 __y) throw(); 
# 27
extern _Float32x f32xdivf128(_Float128 __x, _Float128 __y) throw(); 
# 30
extern _Float32x f32xmulf128(_Float128 __x, _Float128 __y) throw(); 
# 33
extern _Float32x f32xsubf128(_Float128 __x, _Float128 __y) throw(); 
# 24 "/usr/include/bits/mathcalls-narrow.h" 3
extern _Float64 f64addf64x(_Float64x __x, _Float64x __y) throw(); 
# 27
extern _Float64 f64divf64x(_Float64x __x, _Float64x __y) throw(); 
# 30
extern _Float64 f64mulf64x(_Float64x __x, _Float64x __y) throw(); 
# 33
extern _Float64 f64subf64x(_Float64x __x, _Float64x __y) throw(); 
# 24 "/usr/include/bits/mathcalls-narrow.h" 3
extern _Float64 f64addf128(_Float128 __x, _Float128 __y) throw(); 
# 27
extern _Float64 f64divf128(_Float128 __x, _Float128 __y) throw(); 
# 30
extern _Float64 f64mulf128(_Float128 __x, _Float128 __y) throw(); 
# 33
extern _Float64 f64subf128(_Float128 __x, _Float128 __y) throw(); 
# 24 "/usr/include/bits/mathcalls-narrow.h" 3
extern _Float64x f64xaddf128(_Float128 __x, _Float128 __y) throw(); 
# 27
extern _Float64x f64xdivf128(_Float128 __x, _Float128 __y) throw(); 
# 30
extern _Float64x f64xmulf128(_Float128 __x, _Float128 __y) throw(); 
# 33
extern _Float64x f64xsubf128(_Float128 __x, _Float128 __y) throw(); 
# 773 "/usr/include/math.h" 3
extern int signgam; 
# 854 "/usr/include/math.h" 3
enum { 
# 855
FP_NAN, 
# 858
FP_INFINITE, 
# 861
FP_ZERO, 
# 864
FP_SUBNORMAL, 
# 867
FP_NORMAL
# 870
}; 
# 23 "/usr/include/bits/iscanonical.h" 3
extern int __iscanonicall(long double __x) throw()
# 24
 __attribute((const)); 
# 46 "/usr/include/bits/iscanonical.h" 3
extern "C++" {
# 47
inline int iscanonical(float __val) { return (((void)((__typeof__(__val))__val)), 1); } 
# 48
inline int iscanonical(double __val) { return (((void)((__typeof__(__val))__val)), 1); } 
# 49
inline int iscanonical(long double __val) { return __iscanonicall(__val); } 
# 51
inline int iscanonical(_Float128 __val) { return (((void)((__typeof__(__val))__val)), 1); } 
# 53
}
# 985 "/usr/include/math.h" 3
extern "C++" {
# 986
inline int issignaling(float __val) { return __issignalingf(__val); } 
# 987
inline int issignaling(double __val) { return __issignaling(__val); } 
# 989
inline int issignaling(long double __val) 
# 990
{ 
# 994
return __issignalingl(__val); 
# 996
} 
# 1000
inline int issignaling(_Float128 __val) { return __issignalingf128(__val); } 
# 1002
}
# 1016 "/usr/include/math.h" 3
extern "C++" {
# 1047 "/usr/include/math.h" 3
template< class __T> inline bool 
# 1048
iszero(__T __val) 
# 1049
{ 
# 1050
return __val == 0; 
# 1051
} 
# 1053
}
# 1278 "/usr/include/math.h" 3
extern "C++" {
# 1279
template< class > struct __iseqsig_type; 
# 1281
template<> struct __iseqsig_type< float>  { 
# 1283
static int __call(float __x, float __y) throw() 
# 1284
{ 
# 1285
return __iseqsigf(__x, __y); 
# 1286
} 
# 1287
}; 
# 1289
template<> struct __iseqsig_type< double>  { 
# 1291
static int __call(double __x, double __y) throw() 
# 1292
{ 
# 1293
return __iseqsig(__x, __y); 
# 1294
} 
# 1295
}; 
# 1297
template<> struct __iseqsig_type< long double>  { 
# 1299
static int __call(long double __x, long double __y) throw() 
# 1300
{ 
# 1302
return __iseqsigl(__x, __y); 
# 1306
} 
# 1307
}; 
# 1312
template<> struct __iseqsig_type< __float128>  { 
# 1314
static int __call(_Float128 __x, _Float128 __y) throw() 
# 1315
{ 
# 1316
return __iseqsigf128(__x, __y); 
# 1317
} 
# 1318
}; 
# 1321
template< class _T1, class _T2> inline int 
# 1323
iseqsig(_T1 __x, _T2 __y) throw() 
# 1324
{ 
# 1326
typedef __decltype(((__x + __y) + (0.0F))) _T3; 
# 1330
return __iseqsig_type< __decltype(((__x + __y) + (0.0F)))> ::__call(__x, __y); 
# 1331
} 
# 1333
}
# 1338
}
# 77 "/usr/include/c++/7/cmath" 3
extern "C++" {
# 79
namespace std __attribute((__visibility__("default"))) { 
# 83
using ::acos;
# 87
constexpr float acos(float __x) 
# 88
{ return __builtin_acosf(__x); } 
# 91
constexpr long double acos(long double __x) 
# 92
{ return __builtin_acosl(__x); } 
# 95
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 99
acos(_Tp __x) 
# 100
{ return __builtin_acos(__x); } 
# 102
using ::asin;
# 106
constexpr float asin(float __x) 
# 107
{ return __builtin_asinf(__x); } 
# 110
constexpr long double asin(long double __x) 
# 111
{ return __builtin_asinl(__x); } 
# 114
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 118
asin(_Tp __x) 
# 119
{ return __builtin_asin(__x); } 
# 121
using ::atan;
# 125
constexpr float atan(float __x) 
# 126
{ return __builtin_atanf(__x); } 
# 129
constexpr long double atan(long double __x) 
# 130
{ return __builtin_atanl(__x); } 
# 133
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 137
atan(_Tp __x) 
# 138
{ return __builtin_atan(__x); } 
# 140
using ::atan2;
# 144
constexpr float atan2(float __y, float __x) 
# 145
{ return __builtin_atan2f(__y, __x); } 
# 148
constexpr long double atan2(long double __y, long double __x) 
# 149
{ return __builtin_atan2l(__y, __x); } 
# 152
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 155
atan2(_Tp __y, _Up __x) 
# 156
{ 
# 157
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 158
return atan2((__type)__y, (__type)__x); 
# 159
} 
# 161
using ::ceil;
# 165
constexpr float ceil(float __x) 
# 166
{ return __builtin_ceilf(__x); } 
# 169
constexpr long double ceil(long double __x) 
# 170
{ return __builtin_ceill(__x); } 
# 173
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 177
ceil(_Tp __x) 
# 178
{ return __builtin_ceil(__x); } 
# 180
using ::cos;
# 184
constexpr float cos(float __x) 
# 185
{ return __builtin_cosf(__x); } 
# 188
constexpr long double cos(long double __x) 
# 189
{ return __builtin_cosl(__x); } 
# 192
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 196
cos(_Tp __x) 
# 197
{ return __builtin_cos(__x); } 
# 199
using ::cosh;
# 203
constexpr float cosh(float __x) 
# 204
{ return __builtin_coshf(__x); } 
# 207
constexpr long double cosh(long double __x) 
# 208
{ return __builtin_coshl(__x); } 
# 211
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 215
cosh(_Tp __x) 
# 216
{ return __builtin_cosh(__x); } 
# 218
using ::exp;
# 222
constexpr float exp(float __x) 
# 223
{ return __builtin_expf(__x); } 
# 226
constexpr long double exp(long double __x) 
# 227
{ return __builtin_expl(__x); } 
# 230
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 234
exp(_Tp __x) 
# 235
{ return __builtin_exp(__x); } 
# 237
using ::fabs;
# 241
constexpr float fabs(float __x) 
# 242
{ return __builtin_fabsf(__x); } 
# 245
constexpr long double fabs(long double __x) 
# 246
{ return __builtin_fabsl(__x); } 
# 249
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 253
fabs(_Tp __x) 
# 254
{ return __builtin_fabs(__x); } 
# 256
using ::floor;
# 260
constexpr float floor(float __x) 
# 261
{ return __builtin_floorf(__x); } 
# 264
constexpr long double floor(long double __x) 
# 265
{ return __builtin_floorl(__x); } 
# 268
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 272
floor(_Tp __x) 
# 273
{ return __builtin_floor(__x); } 
# 275
using ::fmod;
# 279
constexpr float fmod(float __x, float __y) 
# 280
{ return __builtin_fmodf(__x, __y); } 
# 283
constexpr long double fmod(long double __x, long double __y) 
# 284
{ return __builtin_fmodl(__x, __y); } 
# 287
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 290
fmod(_Tp __x, _Up __y) 
# 291
{ 
# 292
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 293
return fmod((__type)__x, (__type)__y); 
# 294
} 
# 296
using ::frexp;
# 300
inline float frexp(float __x, int *__exp) 
# 301
{ return __builtin_frexpf(__x, __exp); } 
# 304
inline long double frexp(long double __x, int *__exp) 
# 305
{ return __builtin_frexpl(__x, __exp); } 
# 308
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 312
frexp(_Tp __x, int *__exp) 
# 313
{ return __builtin_frexp(__x, __exp); } 
# 315
using ::ldexp;
# 319
constexpr float ldexp(float __x, int __exp) 
# 320
{ return __builtin_ldexpf(__x, __exp); } 
# 323
constexpr long double ldexp(long double __x, int __exp) 
# 324
{ return __builtin_ldexpl(__x, __exp); } 
# 327
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 331
ldexp(_Tp __x, int __exp) 
# 332
{ return __builtin_ldexp(__x, __exp); } 
# 334
using ::log;
# 338
constexpr float log(float __x) 
# 339
{ return __builtin_logf(__x); } 
# 342
constexpr long double log(long double __x) 
# 343
{ return __builtin_logl(__x); } 
# 346
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 350
log(_Tp __x) 
# 351
{ return __builtin_log(__x); } 
# 353
using ::log10;
# 357
constexpr float log10(float __x) 
# 358
{ return __builtin_log10f(__x); } 
# 361
constexpr long double log10(long double __x) 
# 362
{ return __builtin_log10l(__x); } 
# 365
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 369
log10(_Tp __x) 
# 370
{ return __builtin_log10(__x); } 
# 372
using ::modf;
# 376
inline float modf(float __x, float *__iptr) 
# 377
{ return __builtin_modff(__x, __iptr); } 
# 380
inline long double modf(long double __x, long double *__iptr) 
# 381
{ return __builtin_modfl(__x, __iptr); } 
# 384
using ::pow;
# 388
constexpr float pow(float __x, float __y) 
# 389
{ return __builtin_powf(__x, __y); } 
# 392
constexpr long double pow(long double __x, long double __y) 
# 393
{ return __builtin_powl(__x, __y); } 
# 412 "/usr/include/c++/7/cmath" 3
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 415
pow(_Tp __x, _Up __y) 
# 416
{ 
# 417
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 418
return pow((__type)__x, (__type)__y); 
# 419
} 
# 421
using ::sin;
# 425
constexpr float sin(float __x) 
# 426
{ return __builtin_sinf(__x); } 
# 429
constexpr long double sin(long double __x) 
# 430
{ return __builtin_sinl(__x); } 
# 433
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 437
sin(_Tp __x) 
# 438
{ return __builtin_sin(__x); } 
# 440
using ::sinh;
# 444
constexpr float sinh(float __x) 
# 445
{ return __builtin_sinhf(__x); } 
# 448
constexpr long double sinh(long double __x) 
# 449
{ return __builtin_sinhl(__x); } 
# 452
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 456
sinh(_Tp __x) 
# 457
{ return __builtin_sinh(__x); } 
# 459
using ::sqrt;
# 463
constexpr float sqrt(float __x) 
# 464
{ return __builtin_sqrtf(__x); } 
# 467
constexpr long double sqrt(long double __x) 
# 468
{ return __builtin_sqrtl(__x); } 
# 471
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 475
sqrt(_Tp __x) 
# 476
{ return __builtin_sqrt(__x); } 
# 478
using ::tan;
# 482
constexpr float tan(float __x) 
# 483
{ return __builtin_tanf(__x); } 
# 486
constexpr long double tan(long double __x) 
# 487
{ return __builtin_tanl(__x); } 
# 490
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 494
tan(_Tp __x) 
# 495
{ return __builtin_tan(__x); } 
# 497
using ::tanh;
# 501
constexpr float tanh(float __x) 
# 502
{ return __builtin_tanhf(__x); } 
# 505
constexpr long double tanh(long double __x) 
# 506
{ return __builtin_tanhl(__x); } 
# 509
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 513
tanh(_Tp __x) 
# 514
{ return __builtin_tanh(__x); } 
# 517
}
# 536 "/usr/include/c++/7/cmath" 3
namespace std __attribute((__visibility__("default"))) { 
# 544
constexpr int fpclassify(float __x) 
# 545
{ return __builtin_fpclassify(0, 1, 4, 3, 2, __x); 
# 546
} 
# 549
constexpr int fpclassify(double __x) 
# 550
{ return __builtin_fpclassify(0, 1, 4, 3, 2, __x); 
# 551
} 
# 554
constexpr int fpclassify(long double __x) 
# 555
{ return __builtin_fpclassify(0, 1, 4, 3, 2, __x); 
# 556
} 
# 560
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, int> ::__type 
# 563
fpclassify(_Tp __x) 
# 564
{ return (__x != 0) ? 4 : 2; } 
# 569
constexpr bool isfinite(float __x) 
# 570
{ return __builtin_isfinite(__x); } 
# 573
constexpr bool isfinite(double __x) 
# 574
{ return __builtin_isfinite(__x); } 
# 577
constexpr bool isfinite(long double __x) 
# 578
{ return __builtin_isfinite(__x); } 
# 582
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, bool> ::__type 
# 585
isfinite(_Tp __x) 
# 586
{ return true; } 
# 591
constexpr bool isinf(float __x) 
# 592
{ return __builtin_isinf(__x); } 
# 599
constexpr bool isinf(double __x) 
# 600
{ return __builtin_isinf(__x); } 
# 604
constexpr bool isinf(long double __x) 
# 605
{ return __builtin_isinf(__x); } 
# 609
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, bool> ::__type 
# 612
isinf(_Tp __x) 
# 613
{ return false; } 
# 618
constexpr bool isnan(float __x) 
# 619
{ return __builtin_isnan(__x); } 
# 626
constexpr bool isnan(double __x) 
# 627
{ return __builtin_isnan(__x); } 
# 631
constexpr bool isnan(long double __x) 
# 632
{ return __builtin_isnan(__x); } 
# 636
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, bool> ::__type 
# 639
isnan(_Tp __x) 
# 640
{ return false; } 
# 645
constexpr bool isnormal(float __x) 
# 646
{ return __builtin_isnormal(__x); } 
# 649
constexpr bool isnormal(double __x) 
# 650
{ return __builtin_isnormal(__x); } 
# 653
constexpr bool isnormal(long double __x) 
# 654
{ return __builtin_isnormal(__x); } 
# 658
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, bool> ::__type 
# 661
isnormal(_Tp __x) 
# 662
{ return (__x != 0) ? true : false; } 
# 668
constexpr bool signbit(float __x) 
# 669
{ return __builtin_signbit(__x); } 
# 672
constexpr bool signbit(double __x) 
# 673
{ return __builtin_signbit(__x); } 
# 676
constexpr bool signbit(long double __x) 
# 677
{ return __builtin_signbit(__x); } 
# 681
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, bool> ::__type 
# 684
signbit(_Tp __x) 
# 685
{ return (__x < 0) ? true : false; } 
# 690
constexpr bool isgreater(float __x, float __y) 
# 691
{ return __builtin_isgreater(__x, __y); } 
# 694
constexpr bool isgreater(double __x, double __y) 
# 695
{ return __builtin_isgreater(__x, __y); } 
# 698
constexpr bool isgreater(long double __x, long double __y) 
# 699
{ return __builtin_isgreater(__x, __y); } 
# 703
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value && __is_arithmetic< _Up> ::__value, bool> ::__type 
# 707
isgreater(_Tp __x, _Up __y) 
# 708
{ 
# 709
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 710
return __builtin_isgreater((__type)__x, (__type)__y); 
# 711
} 
# 716
constexpr bool isgreaterequal(float __x, float __y) 
# 717
{ return __builtin_isgreaterequal(__x, __y); } 
# 720
constexpr bool isgreaterequal(double __x, double __y) 
# 721
{ return __builtin_isgreaterequal(__x, __y); } 
# 724
constexpr bool isgreaterequal(long double __x, long double __y) 
# 725
{ return __builtin_isgreaterequal(__x, __y); } 
# 729
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value && __is_arithmetic< _Up> ::__value, bool> ::__type 
# 733
isgreaterequal(_Tp __x, _Up __y) 
# 734
{ 
# 735
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 736
return __builtin_isgreaterequal((__type)__x, (__type)__y); 
# 737
} 
# 742
constexpr bool isless(float __x, float __y) 
# 743
{ return __builtin_isless(__x, __y); } 
# 746
constexpr bool isless(double __x, double __y) 
# 747
{ return __builtin_isless(__x, __y); } 
# 750
constexpr bool isless(long double __x, long double __y) 
# 751
{ return __builtin_isless(__x, __y); } 
# 755
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value && __is_arithmetic< _Up> ::__value, bool> ::__type 
# 759
isless(_Tp __x, _Up __y) 
# 760
{ 
# 761
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 762
return __builtin_isless((__type)__x, (__type)__y); 
# 763
} 
# 768
constexpr bool islessequal(float __x, float __y) 
# 769
{ return __builtin_islessequal(__x, __y); } 
# 772
constexpr bool islessequal(double __x, double __y) 
# 773
{ return __builtin_islessequal(__x, __y); } 
# 776
constexpr bool islessequal(long double __x, long double __y) 
# 777
{ return __builtin_islessequal(__x, __y); } 
# 781
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value && __is_arithmetic< _Up> ::__value, bool> ::__type 
# 785
islessequal(_Tp __x, _Up __y) 
# 786
{ 
# 787
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 788
return __builtin_islessequal((__type)__x, (__type)__y); 
# 789
} 
# 794
constexpr bool islessgreater(float __x, float __y) 
# 795
{ return __builtin_islessgreater(__x, __y); } 
# 798
constexpr bool islessgreater(double __x, double __y) 
# 799
{ return __builtin_islessgreater(__x, __y); } 
# 802
constexpr bool islessgreater(long double __x, long double __y) 
# 803
{ return __builtin_islessgreater(__x, __y); } 
# 807
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value && __is_arithmetic< _Up> ::__value, bool> ::__type 
# 811
islessgreater(_Tp __x, _Up __y) 
# 812
{ 
# 813
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 814
return __builtin_islessgreater((__type)__x, (__type)__y); 
# 815
} 
# 820
constexpr bool isunordered(float __x, float __y) 
# 821
{ return __builtin_isunordered(__x, __y); } 
# 824
constexpr bool isunordered(double __x, double __y) 
# 825
{ return __builtin_isunordered(__x, __y); } 
# 828
constexpr bool isunordered(long double __x, long double __y) 
# 829
{ return __builtin_isunordered(__x, __y); } 
# 833
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value && __is_arithmetic< _Up> ::__value, bool> ::__type 
# 837
isunordered(_Tp __x, _Up __y) 
# 838
{ 
# 839
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 840
return __builtin_isunordered((__type)__x, (__type)__y); 
# 841
} 
# 958 "/usr/include/c++/7/cmath" 3
}
# 1075 "/usr/include/c++/7/cmath" 3
namespace std __attribute((__visibility__("default"))) { 
# 1080
using ::double_t;
# 1081
using ::float_t;
# 1084
using ::acosh;
# 1085
using ::acoshf;
# 1086
using ::acoshl;
# 1088
using ::asinh;
# 1089
using ::asinhf;
# 1090
using ::asinhl;
# 1092
using ::atanh;
# 1093
using ::atanhf;
# 1094
using ::atanhl;
# 1096
using ::cbrt;
# 1097
using ::cbrtf;
# 1098
using ::cbrtl;
# 1100
using ::copysign;
# 1101
using ::copysignf;
# 1102
using ::copysignl;
# 1104
using ::erf;
# 1105
using ::erff;
# 1106
using ::erfl;
# 1108
using ::erfc;
# 1109
using ::erfcf;
# 1110
using ::erfcl;
# 1112
using ::exp2;
# 1113
using ::exp2f;
# 1114
using ::exp2l;
# 1116
using ::expm1;
# 1117
using ::expm1f;
# 1118
using ::expm1l;
# 1120
using ::fdim;
# 1121
using ::fdimf;
# 1122
using ::fdiml;
# 1124
using ::fma;
# 1125
using ::fmaf;
# 1126
using ::fmal;
# 1128
using ::fmax;
# 1129
using ::fmaxf;
# 1130
using ::fmaxl;
# 1132
using ::fmin;
# 1133
using ::fminf;
# 1134
using ::fminl;
# 1136
using ::hypot;
# 1137
using ::hypotf;
# 1138
using ::hypotl;
# 1140
using ::ilogb;
# 1141
using ::ilogbf;
# 1142
using ::ilogbl;
# 1144
using ::lgamma;
# 1145
using ::lgammaf;
# 1146
using ::lgammal;
# 1149
using ::llrint;
# 1150
using ::llrintf;
# 1151
using ::llrintl;
# 1153
using ::llround;
# 1154
using ::llroundf;
# 1155
using ::llroundl;
# 1158
using ::log1p;
# 1159
using ::log1pf;
# 1160
using ::log1pl;
# 1162
using ::log2;
# 1163
using ::log2f;
# 1164
using ::log2l;
# 1166
using ::logb;
# 1167
using ::logbf;
# 1168
using ::logbl;
# 1170
using ::lrint;
# 1171
using ::lrintf;
# 1172
using ::lrintl;
# 1174
using ::lround;
# 1175
using ::lroundf;
# 1176
using ::lroundl;
# 1178
using ::nan;
# 1179
using ::nanf;
# 1180
using ::nanl;
# 1182
using ::nearbyint;
# 1183
using ::nearbyintf;
# 1184
using ::nearbyintl;
# 1186
using ::nextafter;
# 1187
using ::nextafterf;
# 1188
using ::nextafterl;
# 1190
using ::nexttoward;
# 1191
using ::nexttowardf;
# 1192
using ::nexttowardl;
# 1194
using ::remainder;
# 1195
using ::remainderf;
# 1196
using ::remainderl;
# 1198
using ::remquo;
# 1199
using ::remquof;
# 1200
using ::remquol;
# 1202
using ::rint;
# 1203
using ::rintf;
# 1204
using ::rintl;
# 1206
using ::round;
# 1207
using ::roundf;
# 1208
using ::roundl;
# 1210
using ::scalbln;
# 1211
using ::scalblnf;
# 1212
using ::scalblnl;
# 1214
using ::scalbn;
# 1215
using ::scalbnf;
# 1216
using ::scalbnl;
# 1218
using ::tgamma;
# 1219
using ::tgammaf;
# 1220
using ::tgammal;
# 1222
using ::trunc;
# 1223
using ::truncf;
# 1224
using ::truncl;
# 1229
constexpr float acosh(float __x) 
# 1230
{ return __builtin_acoshf(__x); } 
# 1233
constexpr long double acosh(long double __x) 
# 1234
{ return __builtin_acoshl(__x); } 
# 1238
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1241
acosh(_Tp __x) 
# 1242
{ return __builtin_acosh(__x); } 
# 1247
constexpr float asinh(float __x) 
# 1248
{ return __builtin_asinhf(__x); } 
# 1251
constexpr long double asinh(long double __x) 
# 1252
{ return __builtin_asinhl(__x); } 
# 1256
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1259
asinh(_Tp __x) 
# 1260
{ return __builtin_asinh(__x); } 
# 1265
constexpr float atanh(float __x) 
# 1266
{ return __builtin_atanhf(__x); } 
# 1269
constexpr long double atanh(long double __x) 
# 1270
{ return __builtin_atanhl(__x); } 
# 1274
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1277
atanh(_Tp __x) 
# 1278
{ return __builtin_atanh(__x); } 
# 1283
constexpr float cbrt(float __x) 
# 1284
{ return __builtin_cbrtf(__x); } 
# 1287
constexpr long double cbrt(long double __x) 
# 1288
{ return __builtin_cbrtl(__x); } 
# 1292
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1295
cbrt(_Tp __x) 
# 1296
{ return __builtin_cbrt(__x); } 
# 1301
constexpr float copysign(float __x, float __y) 
# 1302
{ return __builtin_copysignf(__x, __y); } 
# 1305
constexpr long double copysign(long double __x, long double __y) 
# 1306
{ return __builtin_copysignl(__x, __y); } 
# 1310
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1312
copysign(_Tp __x, _Up __y) 
# 1313
{ 
# 1314
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1315
return copysign((__type)__x, (__type)__y); 
# 1316
} 
# 1321
constexpr float erf(float __x) 
# 1322
{ return __builtin_erff(__x); } 
# 1325
constexpr long double erf(long double __x) 
# 1326
{ return __builtin_erfl(__x); } 
# 1330
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1333
erf(_Tp __x) 
# 1334
{ return __builtin_erf(__x); } 
# 1339
constexpr float erfc(float __x) 
# 1340
{ return __builtin_erfcf(__x); } 
# 1343
constexpr long double erfc(long double __x) 
# 1344
{ return __builtin_erfcl(__x); } 
# 1348
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1351
erfc(_Tp __x) 
# 1352
{ return __builtin_erfc(__x); } 
# 1357
constexpr float exp2(float __x) 
# 1358
{ return __builtin_exp2f(__x); } 
# 1361
constexpr long double exp2(long double __x) 
# 1362
{ return __builtin_exp2l(__x); } 
# 1366
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1369
exp2(_Tp __x) 
# 1370
{ return __builtin_exp2(__x); } 
# 1375
constexpr float expm1(float __x) 
# 1376
{ return __builtin_expm1f(__x); } 
# 1379
constexpr long double expm1(long double __x) 
# 1380
{ return __builtin_expm1l(__x); } 
# 1384
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1387
expm1(_Tp __x) 
# 1388
{ return __builtin_expm1(__x); } 
# 1393
constexpr float fdim(float __x, float __y) 
# 1394
{ return __builtin_fdimf(__x, __y); } 
# 1397
constexpr long double fdim(long double __x, long double __y) 
# 1398
{ return __builtin_fdiml(__x, __y); } 
# 1402
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1404
fdim(_Tp __x, _Up __y) 
# 1405
{ 
# 1406
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1407
return fdim((__type)__x, (__type)__y); 
# 1408
} 
# 1413
constexpr float fma(float __x, float __y, float __z) 
# 1414
{ return __builtin_fmaf(__x, __y, __z); } 
# 1417
constexpr long double fma(long double __x, long double __y, long double __z) 
# 1418
{ return __builtin_fmal(__x, __y, __z); } 
# 1422
template< class _Tp, class _Up, class _Vp> constexpr typename __gnu_cxx::__promote_3< _Tp, _Up, _Vp> ::__type 
# 1424
fma(_Tp __x, _Up __y, _Vp __z) 
# 1425
{ 
# 1426
typedef typename __gnu_cxx::__promote_3< _Tp, _Up, _Vp> ::__type __type; 
# 1427
return fma((__type)__x, (__type)__y, (__type)__z); 
# 1428
} 
# 1433
constexpr float fmax(float __x, float __y) 
# 1434
{ return __builtin_fmaxf(__x, __y); } 
# 1437
constexpr long double fmax(long double __x, long double __y) 
# 1438
{ return __builtin_fmaxl(__x, __y); } 
# 1442
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1444
fmax(_Tp __x, _Up __y) 
# 1445
{ 
# 1446
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1447
return fmax((__type)__x, (__type)__y); 
# 1448
} 
# 1453
constexpr float fmin(float __x, float __y) 
# 1454
{ return __builtin_fminf(__x, __y); } 
# 1457
constexpr long double fmin(long double __x, long double __y) 
# 1458
{ return __builtin_fminl(__x, __y); } 
# 1462
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1464
fmin(_Tp __x, _Up __y) 
# 1465
{ 
# 1466
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1467
return fmin((__type)__x, (__type)__y); 
# 1468
} 
# 1473
constexpr float hypot(float __x, float __y) 
# 1474
{ return __builtin_hypotf(__x, __y); } 
# 1477
constexpr long double hypot(long double __x, long double __y) 
# 1478
{ return __builtin_hypotl(__x, __y); } 
# 1482
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1484
hypot(_Tp __x, _Up __y) 
# 1485
{ 
# 1486
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1487
return hypot((__type)__x, (__type)__y); 
# 1488
} 
# 1493
constexpr int ilogb(float __x) 
# 1494
{ return __builtin_ilogbf(__x); } 
# 1497
constexpr int ilogb(long double __x) 
# 1498
{ return __builtin_ilogbl(__x); } 
# 1502
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, int> ::__type 
# 1506
ilogb(_Tp __x) 
# 1507
{ return __builtin_ilogb(__x); } 
# 1512
constexpr float lgamma(float __x) 
# 1513
{ return __builtin_lgammaf(__x); } 
# 1516
constexpr long double lgamma(long double __x) 
# 1517
{ return __builtin_lgammal(__x); } 
# 1521
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1524
lgamma(_Tp __x) 
# 1525
{ return __builtin_lgamma(__x); } 
# 1530
constexpr long long llrint(float __x) 
# 1531
{ return __builtin_llrintf(__x); } 
# 1534
constexpr long long llrint(long double __x) 
# 1535
{ return __builtin_llrintl(__x); } 
# 1539
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, long long> ::__type 
# 1542
llrint(_Tp __x) 
# 1543
{ return __builtin_llrint(__x); } 
# 1548
constexpr long long llround(float __x) 
# 1549
{ return __builtin_llroundf(__x); } 
# 1552
constexpr long long llround(long double __x) 
# 1553
{ return __builtin_llroundl(__x); } 
# 1557
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, long long> ::__type 
# 1560
llround(_Tp __x) 
# 1561
{ return __builtin_llround(__x); } 
# 1566
constexpr float log1p(float __x) 
# 1567
{ return __builtin_log1pf(__x); } 
# 1570
constexpr long double log1p(long double __x) 
# 1571
{ return __builtin_log1pl(__x); } 
# 1575
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1578
log1p(_Tp __x) 
# 1579
{ return __builtin_log1p(__x); } 
# 1585
constexpr float log2(float __x) 
# 1586
{ return __builtin_log2f(__x); } 
# 1589
constexpr long double log2(long double __x) 
# 1590
{ return __builtin_log2l(__x); } 
# 1594
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1597
log2(_Tp __x) 
# 1598
{ return __builtin_log2(__x); } 
# 1603
constexpr float logb(float __x) 
# 1604
{ return __builtin_logbf(__x); } 
# 1607
constexpr long double logb(long double __x) 
# 1608
{ return __builtin_logbl(__x); } 
# 1612
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1615
logb(_Tp __x) 
# 1616
{ return __builtin_logb(__x); } 
# 1621
constexpr long lrint(float __x) 
# 1622
{ return __builtin_lrintf(__x); } 
# 1625
constexpr long lrint(long double __x) 
# 1626
{ return __builtin_lrintl(__x); } 
# 1630
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, long> ::__type 
# 1633
lrint(_Tp __x) 
# 1634
{ return __builtin_lrint(__x); } 
# 1639
constexpr long lround(float __x) 
# 1640
{ return __builtin_lroundf(__x); } 
# 1643
constexpr long lround(long double __x) 
# 1644
{ return __builtin_lroundl(__x); } 
# 1648
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, long> ::__type 
# 1651
lround(_Tp __x) 
# 1652
{ return __builtin_lround(__x); } 
# 1657
constexpr float nearbyint(float __x) 
# 1658
{ return __builtin_nearbyintf(__x); } 
# 1661
constexpr long double nearbyint(long double __x) 
# 1662
{ return __builtin_nearbyintl(__x); } 
# 1666
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1669
nearbyint(_Tp __x) 
# 1670
{ return __builtin_nearbyint(__x); } 
# 1675
constexpr float nextafter(float __x, float __y) 
# 1676
{ return __builtin_nextafterf(__x, __y); } 
# 1679
constexpr long double nextafter(long double __x, long double __y) 
# 1680
{ return __builtin_nextafterl(__x, __y); } 
# 1684
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1686
nextafter(_Tp __x, _Up __y) 
# 1687
{ 
# 1688
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1689
return nextafter((__type)__x, (__type)__y); 
# 1690
} 
# 1695
constexpr float nexttoward(float __x, long double __y) 
# 1696
{ return __builtin_nexttowardf(__x, __y); } 
# 1699
constexpr long double nexttoward(long double __x, long double __y) 
# 1700
{ return __builtin_nexttowardl(__x, __y); } 
# 1704
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1707
nexttoward(_Tp __x, long double __y) 
# 1708
{ return __builtin_nexttoward(__x, __y); } 
# 1713
constexpr float remainder(float __x, float __y) 
# 1714
{ return __builtin_remainderf(__x, __y); } 
# 1717
constexpr long double remainder(long double __x, long double __y) 
# 1718
{ return __builtin_remainderl(__x, __y); } 
# 1722
template< class _Tp, class _Up> constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1724
remainder(_Tp __x, _Up __y) 
# 1725
{ 
# 1726
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1727
return remainder((__type)__x, (__type)__y); 
# 1728
} 
# 1733
inline float remquo(float __x, float __y, int *__pquo) 
# 1734
{ return __builtin_remquof(__x, __y, __pquo); } 
# 1737
inline long double remquo(long double __x, long double __y, int *__pquo) 
# 1738
{ return __builtin_remquol(__x, __y, __pquo); } 
# 1742
template< class _Tp, class _Up> inline typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 1744
remquo(_Tp __x, _Up __y, int *__pquo) 
# 1745
{ 
# 1746
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 1747
return remquo((__type)__x, (__type)__y, __pquo); 
# 1748
} 
# 1753
constexpr float rint(float __x) 
# 1754
{ return __builtin_rintf(__x); } 
# 1757
constexpr long double rint(long double __x) 
# 1758
{ return __builtin_rintl(__x); } 
# 1762
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1765
rint(_Tp __x) 
# 1766
{ return __builtin_rint(__x); } 
# 1771
constexpr float round(float __x) 
# 1772
{ return __builtin_roundf(__x); } 
# 1775
constexpr long double round(long double __x) 
# 1776
{ return __builtin_roundl(__x); } 
# 1780
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1783
round(_Tp __x) 
# 1784
{ return __builtin_round(__x); } 
# 1789
constexpr float scalbln(float __x, long __ex) 
# 1790
{ return __builtin_scalblnf(__x, __ex); } 
# 1793
constexpr long double scalbln(long double __x, long __ex) 
# 1794
{ return __builtin_scalblnl(__x, __ex); } 
# 1798
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1801
scalbln(_Tp __x, long __ex) 
# 1802
{ return __builtin_scalbln(__x, __ex); } 
# 1807
constexpr float scalbn(float __x, int __ex) 
# 1808
{ return __builtin_scalbnf(__x, __ex); } 
# 1811
constexpr long double scalbn(long double __x, int __ex) 
# 1812
{ return __builtin_scalbnl(__x, __ex); } 
# 1816
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1819
scalbn(_Tp __x, int __ex) 
# 1820
{ return __builtin_scalbn(__x, __ex); } 
# 1825
constexpr float tgamma(float __x) 
# 1826
{ return __builtin_tgammaf(__x); } 
# 1829
constexpr long double tgamma(long double __x) 
# 1830
{ return __builtin_tgammal(__x); } 
# 1834
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1837
tgamma(_Tp __x) 
# 1838
{ return __builtin_tgamma(__x); } 
# 1843
constexpr float trunc(float __x) 
# 1844
{ return __builtin_truncf(__x); } 
# 1847
constexpr long double trunc(long double __x) 
# 1848
{ return __builtin_truncl(__x); } 
# 1852
template< class _Tp> constexpr typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 1855
trunc(_Tp __x) 
# 1856
{ return __builtin_trunc(__x); } 
# 1860
}
# 1917 "/usr/include/c++/7/cmath" 3
}
# 38 "/usr/include/c++/7/math.h" 3
using std::abs;
# 39
using std::acos;
# 40
using std::asin;
# 41
using std::atan;
# 42
using std::atan2;
# 43
using std::cos;
# 44
using std::sin;
# 45
using std::tan;
# 46
using std::cosh;
# 47
using std::sinh;
# 48
using std::tanh;
# 49
using std::exp;
# 50
using std::frexp;
# 51
using std::ldexp;
# 52
using std::log;
# 53
using std::log10;
# 54
using std::modf;
# 55
using std::pow;
# 56
using std::sqrt;
# 57
using std::ceil;
# 58
using std::fabs;
# 59
using std::floor;
# 60
using std::fmod;
# 63
using std::fpclassify;
# 64
using std::isfinite;
# 65
using std::isinf;
# 66
using std::isnan;
# 67
using std::isnormal;
# 68
using std::signbit;
# 69
using std::isgreater;
# 70
using std::isgreaterequal;
# 71
using std::isless;
# 72
using std::islessequal;
# 73
using std::islessgreater;
# 74
using std::isunordered;
# 78
using std::acosh;
# 79
using std::asinh;
# 80
using std::atanh;
# 81
using std::cbrt;
# 82
using std::copysign;
# 83
using std::erf;
# 84
using std::erfc;
# 85
using std::exp2;
# 86
using std::expm1;
# 87
using std::fdim;
# 88
using std::fma;
# 89
using std::fmax;
# 90
using std::fmin;
# 91
using std::hypot;
# 92
using std::ilogb;
# 93
using std::lgamma;
# 94
using std::llrint;
# 95
using std::llround;
# 96
using std::log1p;
# 97
using std::log2;
# 98
using std::logb;
# 99
using std::lrint;
# 100
using std::lround;
# 101
using std::nearbyint;
# 102
using std::nextafter;
# 103
using std::nexttoward;
# 104
using std::remainder;
# 105
using std::remquo;
# 106
using std::rint;
# 107
using std::round;
# 108
using std::scalbln;
# 109
using std::scalbn;
# 110
using std::tgamma;
# 111
using std::trunc;
# 10626 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
namespace std { 
# 10627
constexpr bool signbit(float x); 
# 10628
constexpr bool signbit(double x); 
# 10629
constexpr bool signbit(long double x); 
# 10630
constexpr bool isfinite(float x); 
# 10631
constexpr bool isfinite(double x); 
# 10632
constexpr bool isfinite(long double x); 
# 10633
constexpr bool isnan(float x); 
# 10638
constexpr bool isnan(double x); 
# 10640
constexpr bool isnan(long double x); 
# 10641
constexpr bool isinf(float x); 
# 10646
constexpr bool isinf(double x); 
# 10648
constexpr bool isinf(long double x); 
# 10649
}
# 10805 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
namespace std { 
# 10807
template< class T> extern T __pow_helper(T, int); 
# 10808
template< class T> extern T __cmath_power(T, unsigned); 
# 10809
}
# 10811
using std::abs;
# 10812
using std::fabs;
# 10813
using std::ceil;
# 10814
using std::floor;
# 10815
using std::sqrt;
# 10817
using std::pow;
# 10819
using std::log;
# 10820
using std::log10;
# 10821
using std::fmod;
# 10822
using std::modf;
# 10823
using std::exp;
# 10824
using std::frexp;
# 10825
using std::ldexp;
# 10826
using std::asin;
# 10827
using std::sin;
# 10828
using std::sinh;
# 10829
using std::acos;
# 10830
using std::cos;
# 10831
using std::cosh;
# 10832
using std::atan;
# 10833
using std::atan2;
# 10834
using std::tan;
# 10835
using std::tanh;
# 11206 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
namespace std { 
# 11215 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern inline long long abs(long long); 
# 11225 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern inline long abs(long); 
# 11226
extern constexpr float abs(float); 
# 11227
extern constexpr double abs(double); 
# 11228
extern constexpr float fabs(float); 
# 11229
extern constexpr float ceil(float); 
# 11230
extern constexpr float floor(float); 
# 11231
extern constexpr float sqrt(float); 
# 11232
extern constexpr float pow(float, float); 
# 11237
template< class _Tp, class _Up> extern constexpr typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type pow(_Tp, _Up); 
# 11247
extern constexpr float log(float); 
# 11248
extern constexpr float log10(float); 
# 11249
extern constexpr float fmod(float, float); 
# 11250
extern inline float modf(float, float *); 
# 11251
extern constexpr float exp(float); 
# 11252
extern inline float frexp(float, int *); 
# 11253
extern constexpr float ldexp(float, int); 
# 11254
extern constexpr float asin(float); 
# 11255
extern constexpr float sin(float); 
# 11256
extern constexpr float sinh(float); 
# 11257
extern constexpr float acos(float); 
# 11258
extern constexpr float cos(float); 
# 11259
extern constexpr float cosh(float); 
# 11260
extern constexpr float atan(float); 
# 11261
extern constexpr float atan2(float, float); 
# 11262
extern constexpr float tan(float); 
# 11263
extern constexpr float tanh(float); 
# 11350 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
}
# 11456 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
namespace std { 
# 11457
constexpr float logb(float a); 
# 11458
constexpr int ilogb(float a); 
# 11459
constexpr float scalbn(float a, int b); 
# 11460
constexpr float scalbln(float a, long b); 
# 11461
constexpr float exp2(float a); 
# 11462
constexpr float expm1(float a); 
# 11463
constexpr float log2(float a); 
# 11464
constexpr float log1p(float a); 
# 11465
constexpr float acosh(float a); 
# 11466
constexpr float asinh(float a); 
# 11467
constexpr float atanh(float a); 
# 11468
constexpr float hypot(float a, float b); 
# 11469
constexpr float cbrt(float a); 
# 11470
constexpr float erf(float a); 
# 11471
constexpr float erfc(float a); 
# 11472
constexpr float lgamma(float a); 
# 11473
constexpr float tgamma(float a); 
# 11474
constexpr float copysign(float a, float b); 
# 11475
constexpr float nextafter(float a, float b); 
# 11476
constexpr float remainder(float a, float b); 
# 11477
inline float remquo(float a, float b, int * quo); 
# 11478
constexpr float round(float a); 
# 11479
constexpr long lround(float a); 
# 11480
constexpr long long llround(float a); 
# 11481
constexpr float trunc(float a); 
# 11482
constexpr float rint(float a); 
# 11483
constexpr long lrint(float a); 
# 11484
constexpr long long llrint(float a); 
# 11485
constexpr float nearbyint(float a); 
# 11486
constexpr float fdim(float a, float b); 
# 11487
constexpr float fma(float a, float b, float c); 
# 11488
constexpr float fmax(float a, float b); 
# 11489
constexpr float fmin(float a, float b); 
# 11490
}
# 11595 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
static inline float exp10(const float a); 
# 11597
static inline float rsqrt(const float a); 
# 11599
static inline float rcbrt(const float a); 
# 11601
static inline float sinpi(const float a); 
# 11603
static inline float cospi(const float a); 
# 11605
static inline void sincospi(const float a, float *const sptr, float *const cptr); 
# 11607
static inline void sincos(const float a, float *const sptr, float *const cptr); 
# 11609
static inline float j0(const float a); 
# 11611
static inline float j1(const float a); 
# 11613
static inline float jn(const int n, const float a); 
# 11615
static inline float y0(const float a); 
# 11617
static inline float y1(const float a); 
# 11619
static inline float yn(const int n, const float a); 
# 11621
__attribute__((unused)) static inline float cyl_bessel_i0(const float a); 
# 11623
__attribute__((unused)) static inline float cyl_bessel_i1(const float a); 
# 11625
static inline float erfinv(const float a); 
# 11627
static inline float erfcinv(const float a); 
# 11629
static inline float normcdfinv(const float a); 
# 11631
static inline float normcdf(const float a); 
# 11633
static inline float erfcx(const float a); 
# 11635
static inline double copysign(const double a, const float b); 
# 11637
static inline double copysign(const float a, const double b); 
# 11645
static inline unsigned min(const unsigned a, const unsigned b); 
# 11653
static inline unsigned min(const int a, const unsigned b); 
# 11661
static inline unsigned min(const unsigned a, const int b); 
# 11669
static inline long min(const long a, const long b); 
# 11677
static inline unsigned long min(const unsigned long a, const unsigned long b); 
# 11685
static inline unsigned long min(const long a, const unsigned long b); 
# 11693
static inline unsigned long min(const unsigned long a, const long b); 
# 11701
static inline long long min(const long long a, const long long b); 
# 11709
static inline unsigned long long min(const unsigned long long a, const unsigned long long b); 
# 11717
static inline unsigned long long min(const long long a, const unsigned long long b); 
# 11725
static inline unsigned long long min(const unsigned long long a, const long long b); 
# 11736 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
static inline float min(const float a, const float b); 
# 11747 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
static inline double min(const double a, const double b); 
# 11757 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
static inline double min(const float a, const double b); 
# 11767 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
static inline double min(const double a, const float b); 
# 11775
static inline unsigned max(const unsigned a, const unsigned b); 
# 11783
static inline unsigned max(const int a, const unsigned b); 
# 11791
static inline unsigned max(const unsigned a, const int b); 
# 11799
static inline long max(const long a, const long b); 
# 11807
static inline unsigned long max(const unsigned long a, const unsigned long b); 
# 11815
static inline unsigned long max(const long a, const unsigned long b); 
# 11823
static inline unsigned long max(const unsigned long a, const long b); 
# 11831
static inline long long max(const long long a, const long long b); 
# 11839
static inline unsigned long long max(const unsigned long long a, const unsigned long long b); 
# 11847
static inline unsigned long long max(const long long a, const unsigned long long b); 
# 11855
static inline unsigned long long max(const unsigned long long a, const long long b); 
# 11866 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
static inline float max(const float a, const float b); 
# 11877 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
static inline double max(const double a, const double b); 
# 11887 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
static inline double max(const float a, const double b); 
# 11897 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
static inline double max(const double a, const float b); 
# 11909 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
extern "C" {
# 11910
__attribute__((unused)) inline void *__nv_aligned_device_malloc(size_t size, size_t align) 
# 11911
{int volatile ___ = 1;(void)size;(void)align;
# 11914
::exit(___);}
#if 0
# 11911
{ 
# 11912
__attribute__((unused)) void *__nv_aligned_device_malloc_impl(size_t, size_t); 
# 11913
return __nv_aligned_device_malloc_impl(size, align); 
# 11914
} 
#endif
# 11915 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.h"
}
# 758 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.hpp"
static inline float exp10(const float a) 
# 759
{ 
# 760
return exp10f(a); 
# 761
} 
# 763
static inline float rsqrt(const float a) 
# 764
{ 
# 765
return rsqrtf(a); 
# 766
} 
# 768
static inline float rcbrt(const float a) 
# 769
{ 
# 770
return rcbrtf(a); 
# 771
} 
# 773
static inline float sinpi(const float a) 
# 774
{ 
# 775
return sinpif(a); 
# 776
} 
# 778
static inline float cospi(const float a) 
# 779
{ 
# 780
return cospif(a); 
# 781
} 
# 783
static inline void sincospi(const float a, float *const sptr, float *const cptr) 
# 784
{ 
# 785
sincospif(a, sptr, cptr); 
# 786
} 
# 788
static inline void sincos(const float a, float *const sptr, float *const cptr) 
# 789
{ 
# 790
sincosf(a, sptr, cptr); 
# 791
} 
# 793
static inline float j0(const float a) 
# 794
{ 
# 795
return j0f(a); 
# 796
} 
# 798
static inline float j1(const float a) 
# 799
{ 
# 800
return j1f(a); 
# 801
} 
# 803
static inline float jn(const int n, const float a) 
# 804
{ 
# 805
return jnf(n, a); 
# 806
} 
# 808
static inline float y0(const float a) 
# 809
{ 
# 810
return y0f(a); 
# 811
} 
# 813
static inline float y1(const float a) 
# 814
{ 
# 815
return y1f(a); 
# 816
} 
# 818
static inline float yn(const int n, const float a) 
# 819
{ 
# 820
return ynf(n, a); 
# 821
} 
# 823
__attribute__((unused)) static inline float cyl_bessel_i0(const float a) 
# 824
{int volatile ___ = 1;(void)a;
# 826
::exit(___);}
#if 0
# 824
{ 
# 825
return cyl_bessel_i0f(a); 
# 826
} 
#endif
# 828 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.hpp"
__attribute__((unused)) static inline float cyl_bessel_i1(const float a) 
# 829
{int volatile ___ = 1;(void)a;
# 831
::exit(___);}
#if 0
# 829
{ 
# 830
return cyl_bessel_i1f(a); 
# 831
} 
#endif
# 833 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.hpp"
static inline float erfinv(const float a) 
# 834
{ 
# 835
return erfinvf(a); 
# 836
} 
# 838
static inline float erfcinv(const float a) 
# 839
{ 
# 840
return erfcinvf(a); 
# 841
} 
# 843
static inline float normcdfinv(const float a) 
# 844
{ 
# 845
return normcdfinvf(a); 
# 846
} 
# 848
static inline float normcdf(const float a) 
# 849
{ 
# 850
return normcdff(a); 
# 851
} 
# 853
static inline float erfcx(const float a) 
# 854
{ 
# 855
return erfcxf(a); 
# 856
} 
# 858
static inline double copysign(const double a, const float b) 
# 859
{ 
# 860
return copysign(a, static_cast< double>(b)); 
# 861
} 
# 863
static inline double copysign(const float a, const double b) 
# 864
{ 
# 865
return copysign(static_cast< double>(a), b); 
# 866
} 
# 868
static inline unsigned min(const unsigned a, const unsigned b) 
# 869
{ 
# 870
return umin(a, b); 
# 871
} 
# 873
static inline unsigned min(const int a, const unsigned b) 
# 874
{ 
# 875
return umin(static_cast< unsigned>(a), b); 
# 876
} 
# 878
static inline unsigned min(const unsigned a, const int b) 
# 879
{ 
# 880
return umin(a, static_cast< unsigned>(b)); 
# 881
} 
# 883
static inline long min(const long a, const long b) 
# 884
{ 
# 885
long retval; 
# 892
if (sizeof(long) == sizeof(int)) { 
# 896
retval = (static_cast< long>(min(static_cast< int>(a), static_cast< int>(b)))); 
# 897
} else { 
# 898
retval = (static_cast< long>(llmin(static_cast< long long>(a), static_cast< long long>(b)))); 
# 899
}  
# 900
return retval; 
# 901
} 
# 903
static inline unsigned long min(const unsigned long a, const unsigned long b) 
# 904
{ 
# 905
unsigned long retval; 
# 910
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 914
retval = (static_cast< unsigned long>(umin(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
# 915
} else { 
# 916
retval = (static_cast< unsigned long>(ullmin(static_cast< unsigned long long>(a), static_cast< unsigned long long>(b)))); 
# 917
}  
# 918
return retval; 
# 919
} 
# 921
static inline unsigned long min(const long a, const unsigned long b) 
# 922
{ 
# 923
unsigned long retval; 
# 928
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 932
retval = (static_cast< unsigned long>(umin(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
# 933
} else { 
# 934
retval = (static_cast< unsigned long>(ullmin(static_cast< unsigned long long>(a), static_cast< unsigned long long>(b)))); 
# 935
}  
# 936
return retval; 
# 937
} 
# 939
static inline unsigned long min(const unsigned long a, const long b) 
# 940
{ 
# 941
unsigned long retval; 
# 946
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 950
retval = (static_cast< unsigned long>(umin(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
# 951
} else { 
# 952
retval = (static_cast< unsigned long>(ullmin(static_cast< unsigned long long>(a), static_cast< unsigned long long>(b)))); 
# 953
}  
# 954
return retval; 
# 955
} 
# 957
static inline long long min(const long long a, const long long b) 
# 958
{ 
# 959
return llmin(a, b); 
# 960
} 
# 962
static inline unsigned long long min(const unsigned long long a, const unsigned long long b) 
# 963
{ 
# 964
return ullmin(a, b); 
# 965
} 
# 967
static inline unsigned long long min(const long long a, const unsigned long long b) 
# 968
{ 
# 969
return ullmin(static_cast< unsigned long long>(a), b); 
# 970
} 
# 972
static inline unsigned long long min(const unsigned long long a, const long long b) 
# 973
{ 
# 974
return ullmin(a, static_cast< unsigned long long>(b)); 
# 975
} 
# 977
static inline float min(const float a, const float b) 
# 978
{ 
# 979
return fminf(a, b); 
# 980
} 
# 982
static inline double min(const double a, const double b) 
# 983
{ 
# 984
return fmin(a, b); 
# 985
} 
# 987
static inline double min(const float a, const double b) 
# 988
{ 
# 989
return fmin(static_cast< double>(a), b); 
# 990
} 
# 992
static inline double min(const double a, const float b) 
# 993
{ 
# 994
return fmin(a, static_cast< double>(b)); 
# 995
} 
# 997
static inline unsigned max(const unsigned a, const unsigned b) 
# 998
{ 
# 999
return umax(a, b); 
# 1000
} 
# 1002
static inline unsigned max(const int a, const unsigned b) 
# 1003
{ 
# 1004
return umax(static_cast< unsigned>(a), b); 
# 1005
} 
# 1007
static inline unsigned max(const unsigned a, const int b) 
# 1008
{ 
# 1009
return umax(a, static_cast< unsigned>(b)); 
# 1010
} 
# 1012
static inline long max(const long a, const long b) 
# 1013
{ 
# 1014
long retval; 
# 1020
if (sizeof(long) == sizeof(int)) { 
# 1024
retval = (static_cast< long>(max(static_cast< int>(a), static_cast< int>(b)))); 
# 1025
} else { 
# 1026
retval = (static_cast< long>(llmax(static_cast< long long>(a), static_cast< long long>(b)))); 
# 1027
}  
# 1028
return retval; 
# 1029
} 
# 1031
static inline unsigned long max(const unsigned long a, const unsigned long b) 
# 1032
{ 
# 1033
unsigned long retval; 
# 1038
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 1042
retval = (static_cast< unsigned long>(umax(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
# 1043
} else { 
# 1044
retval = (static_cast< unsigned long>(ullmax(static_cast< unsigned long long>(a), static_cast< unsigned long long>(b)))); 
# 1045
}  
# 1046
return retval; 
# 1047
} 
# 1049
static inline unsigned long max(const long a, const unsigned long b) 
# 1050
{ 
# 1051
unsigned long retval; 
# 1056
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 1060
retval = (static_cast< unsigned long>(umax(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
# 1061
} else { 
# 1062
retval = (static_cast< unsigned long>(ullmax(static_cast< unsigned long long>(a), static_cast< unsigned long long>(b)))); 
# 1063
}  
# 1064
return retval; 
# 1065
} 
# 1067
static inline unsigned long max(const unsigned long a, const long b) 
# 1068
{ 
# 1069
unsigned long retval; 
# 1074
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 1078
retval = (static_cast< unsigned long>(umax(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
# 1079
} else { 
# 1080
retval = (static_cast< unsigned long>(ullmax(static_cast< unsigned long long>(a), static_cast< unsigned long long>(b)))); 
# 1081
}  
# 1082
return retval; 
# 1083
} 
# 1085
static inline long long max(const long long a, const long long b) 
# 1086
{ 
# 1087
return llmax(a, b); 
# 1088
} 
# 1090
static inline unsigned long long max(const unsigned long long a, const unsigned long long b) 
# 1091
{ 
# 1092
return ullmax(a, b); 
# 1093
} 
# 1095
static inline unsigned long long max(const long long a, const unsigned long long b) 
# 1096
{ 
# 1097
return ullmax(static_cast< unsigned long long>(a), b); 
# 1098
} 
# 1100
static inline unsigned long long max(const unsigned long long a, const long long b) 
# 1101
{ 
# 1102
return ullmax(a, static_cast< unsigned long long>(b)); 
# 1103
} 
# 1105
static inline float max(const float a, const float b) 
# 1106
{ 
# 1107
return fmaxf(a, b); 
# 1108
} 
# 1110
static inline double max(const double a, const double b) 
# 1111
{ 
# 1112
return fmax(a, b); 
# 1113
} 
# 1115
static inline double max(const float a, const double b) 
# 1116
{ 
# 1117
return fmax(static_cast< double>(a), b); 
# 1118
} 
# 1120
static inline double max(const double a, const float b) 
# 1121
{ 
# 1122
return fmax(a, static_cast< double>(b)); 
# 1123
} 
# 1135 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/math_functions.hpp"
inline int min(const int a, const int b) 
# 1136
{ 
# 1137
return (a < b) ? a : b; 
# 1138
} 
# 1140
inline unsigned umin(const unsigned a, const unsigned b) 
# 1141
{ 
# 1142
return (a < b) ? a : b; 
# 1143
} 
# 1145
inline long long llmin(const long long a, const long long b) 
# 1146
{ 
# 1147
return (a < b) ? a : b; 
# 1148
} 
# 1150
inline unsigned long long ullmin(const unsigned long long a, const unsigned long long 
# 1151
b) 
# 1152
{ 
# 1153
return (a < b) ? a : b; 
# 1154
} 
# 1156
inline int max(const int a, const int b) 
# 1157
{ 
# 1158
return (a > b) ? a : b; 
# 1159
} 
# 1161
inline unsigned umax(const unsigned a, const unsigned b) 
# 1162
{ 
# 1163
return (a > b) ? a : b; 
# 1164
} 
# 1166
inline long long llmax(const long long a, const long long b) 
# 1167
{ 
# 1168
return (a > b) ? a : b; 
# 1169
} 
# 1171
inline unsigned long long ullmax(const unsigned long long a, const unsigned long long 
# 1172
b) 
# 1173
{ 
# 1174
return (a > b) ? a : b; 
# 1175
} 
# 95 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
extern "C" {
# 3215 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline int __vimax_s32_relu(const int a, const int b); 
# 3227 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline unsigned __vimax_s16x2_relu(const unsigned a, const unsigned b); 
# 3236 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline int __vimin_s32_relu(const int a, const int b); 
# 3248 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline unsigned __vimin_s16x2_relu(const unsigned a, const unsigned b); 
# 3257 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline int __vimax3_s32(const int a, const int b, const int c); 
# 3269 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline unsigned __vimax3_s16x2(const unsigned a, const unsigned b, const unsigned c); 
# 3278 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline unsigned __vimax3_u32(const unsigned a, const unsigned b, const unsigned c); 
# 3290 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline unsigned __vimax3_u16x2(const unsigned a, const unsigned b, const unsigned c); 
# 3299 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline int __vimin3_s32(const int a, const int b, const int c); 
# 3311 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline unsigned __vimin3_s16x2(const unsigned a, const unsigned b, const unsigned c); 
# 3320 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline unsigned __vimin3_u32(const unsigned a, const unsigned b, const unsigned c); 
# 3332 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline unsigned __vimin3_u16x2(const unsigned a, const unsigned b, const unsigned c); 
# 3341 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline int __vimax3_s32_relu(const int a, const int b, const int c); 
# 3353 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline unsigned __vimax3_s16x2_relu(const unsigned a, const unsigned b, const unsigned c); 
# 3362 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline int __vimin3_s32_relu(const int a, const int b, const int c); 
# 3374 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline unsigned __vimin3_s16x2_relu(const unsigned a, const unsigned b, const unsigned c); 
# 3383 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline int __viaddmax_s32(const int a, const int b, const int c); 
# 3395 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline unsigned __viaddmax_s16x2(const unsigned a, const unsigned b, const unsigned c); 
# 3404 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline unsigned __viaddmax_u32(const unsigned a, const unsigned b, const unsigned c); 
# 3416 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline unsigned __viaddmax_u16x2(const unsigned a, const unsigned b, const unsigned c); 
# 3425 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline int __viaddmin_s32(const int a, const int b, const int c); 
# 3437 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline unsigned __viaddmin_s16x2(const unsigned a, const unsigned b, const unsigned c); 
# 3446 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline unsigned __viaddmin_u32(const unsigned a, const unsigned b, const unsigned c); 
# 3458 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline unsigned __viaddmin_u16x2(const unsigned a, const unsigned b, const unsigned c); 
# 3468 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline int __viaddmax_s32_relu(const int a, const int b, const int c); 
# 3480 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline unsigned __viaddmax_s16x2_relu(const unsigned a, const unsigned b, const unsigned c); 
# 3490 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline int __viaddmin_s32_relu(const int a, const int b, const int c); 
# 3502 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline unsigned __viaddmin_s16x2_relu(const unsigned a, const unsigned b, const unsigned c); 
# 3511 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline int __vibmax_s32(const int a, const int b, bool *const pred); 
# 3520 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline unsigned __vibmax_u32(const unsigned a, const unsigned b, bool *const pred); 
# 3529 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline int __vibmin_s32(const int a, const int b, bool *const pred); 
# 3538 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline unsigned __vibmin_u32(const unsigned a, const unsigned b, bool *const pred); 
# 3552 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline unsigned __vibmax_s16x2(const unsigned a, const unsigned b, bool *const pred_hi, bool *const pred_lo); 
# 3566 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline unsigned __vibmax_u16x2(const unsigned a, const unsigned b, bool *const pred_hi, bool *const pred_lo); 
# 3580 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline unsigned __vibmin_s16x2(const unsigned a, const unsigned b, bool *const pred_hi, bool *const pred_lo); 
# 3594 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
static inline unsigned __vibmin_u16x2(const unsigned a, const unsigned b, bool *const pred_hi, bool *const pred_lo); 
# 3601
}
# 108 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
static inline int __vimax_s32_relu(const int a, const int b) { 
# 115
int ans = max(a, b); 
# 117
return (ans > 0) ? ans : 0; 
# 119
} 
# 121
static inline unsigned __vimax_s16x2_relu(const unsigned a, const unsigned b) { 
# 122
unsigned res; 
# 130
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 131
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 133
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 134
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 137
short aS_lo = *((short *)(&aU_lo)); 
# 138
short aS_hi = *((short *)(&aU_hi)); 
# 140
short bS_lo = *((short *)(&bU_lo)); 
# 141
short bS_hi = *((short *)(&bU_hi)); 
# 144
short ansS_lo = (short)max(aS_lo, bS_lo); 
# 145
short ansS_hi = (short)max(aS_hi, bS_hi); 
# 148
if (ansS_lo < 0) { ansS_lo = (0); }  
# 149
if (ansS_hi < 0) { ansS_hi = (0); }  
# 152
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
# 153
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
# 156
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 159
return res; 
# 160
} 
# 162
static inline int __vimin_s32_relu(const int a, const int b) { 
# 169
int ans = min(a, b); 
# 171
return (ans > 0) ? ans : 0; 
# 173
} 
# 175
static inline unsigned __vimin_s16x2_relu(const unsigned a, const unsigned b) { 
# 176
unsigned res; 
# 184
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 185
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 187
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 188
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 191
short aS_lo = *((short *)(&aU_lo)); 
# 192
short aS_hi = *((short *)(&aU_hi)); 
# 194
short bS_lo = *((short *)(&bU_lo)); 
# 195
short bS_hi = *((short *)(&bU_hi)); 
# 198
short ansS_lo = (short)min(aS_lo, bS_lo); 
# 199
short ansS_hi = (short)min(aS_hi, bS_hi); 
# 202
if (ansS_lo < 0) { ansS_lo = (0); }  
# 203
if (ansS_hi < 0) { ansS_hi = (0); }  
# 206
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
# 207
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
# 210
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 213
return res; 
# 214
} 
# 216
static inline int __vimax3_s32(const int a, const int b, const int c) { 
# 226 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
return max(max(a, b), c); 
# 228
} 
# 230
static inline unsigned __vimax3_s16x2(const unsigned a, const unsigned b, const unsigned c) { 
# 231
unsigned res; 
# 243 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 244
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 246
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 247
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 249
unsigned short cU_lo = (unsigned short)(c & 65535U); 
# 250
unsigned short cU_hi = (unsigned short)(c >> 16); 
# 253
short aS_lo = *((short *)(&aU_lo)); 
# 254
short aS_hi = *((short *)(&aU_hi)); 
# 256
short bS_lo = *((short *)(&bU_lo)); 
# 257
short bS_hi = *((short *)(&bU_hi)); 
# 259
short cS_lo = *((short *)(&cU_lo)); 
# 260
short cS_hi = *((short *)(&cU_hi)); 
# 263
short ansS_lo = (short)max(max(aS_lo, bS_lo), cS_lo); 
# 264
short ansS_hi = (short)max(max(aS_hi, bS_hi), cS_hi); 
# 267
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
# 268
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
# 271
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 273
return res; 
# 274
} 
# 276
static inline unsigned __vimax3_u32(const unsigned a, const unsigned b, const unsigned c) { 
# 286 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
return max(max(a, b), c); 
# 288
} 
# 290
static inline unsigned __vimax3_u16x2(const unsigned a, const unsigned b, const unsigned c) { 
# 291
unsigned res; 
# 302 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 303
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 305
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 306
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 308
unsigned short cU_lo = (unsigned short)(c & 65535U); 
# 309
unsigned short cU_hi = (unsigned short)(c >> 16); 
# 312
unsigned short ansU_lo = (unsigned short)max(max(aU_lo, bU_lo), cU_lo); 
# 313
unsigned short ansU_hi = (unsigned short)max(max(aU_hi, bU_hi), cU_hi); 
# 316
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 319
return res; 
# 320
} 
# 322
static inline int __vimin3_s32(const int a, const int b, const int c) { 
# 332 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
return min(min(a, b), c); 
# 334
} 
# 336
static inline unsigned __vimin3_s16x2(const unsigned a, const unsigned b, const unsigned c) { 
# 337
unsigned res; 
# 348 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 349
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 351
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 352
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 354
unsigned short cU_lo = (unsigned short)(c & 65535U); 
# 355
unsigned short cU_hi = (unsigned short)(c >> 16); 
# 358
short aS_lo = *((short *)(&aU_lo)); 
# 359
short aS_hi = *((short *)(&aU_hi)); 
# 361
short bS_lo = *((short *)(&bU_lo)); 
# 362
short bS_hi = *((short *)(&bU_hi)); 
# 364
short cS_lo = *((short *)(&cU_lo)); 
# 365
short cS_hi = *((short *)(&cU_hi)); 
# 368
short ansS_lo = (short)min(min(aS_lo, bS_lo), cS_lo); 
# 369
short ansS_hi = (short)min(min(aS_hi, bS_hi), cS_hi); 
# 372
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
# 373
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
# 376
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 379
return res; 
# 380
} 
# 382
static inline unsigned __vimin3_u32(const unsigned a, const unsigned b, const unsigned c) { 
# 392 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
return min(min(a, b), c); 
# 394
} 
# 396
static inline unsigned __vimin3_u16x2(const unsigned a, const unsigned b, const unsigned c) { 
# 397
unsigned res; 
# 408 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 409
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 411
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 412
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 414
unsigned short cU_lo = (unsigned short)(c & 65535U); 
# 415
unsigned short cU_hi = (unsigned short)(c >> 16); 
# 418
unsigned short ansU_lo = (unsigned short)min(min(aU_lo, bU_lo), cU_lo); 
# 419
unsigned short ansU_hi = (unsigned short)min(min(aU_hi, bU_hi), cU_hi); 
# 422
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 425
return res; 
# 426
} 
# 428
static inline int __vimax3_s32_relu(const int a, const int b, const int c) { 
# 438 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
int ans = max(max(a, b), c); 
# 440
return (ans > 0) ? ans : 0; 
# 442
} 
# 444
static inline unsigned __vimax3_s16x2_relu(const unsigned a, const unsigned b, const unsigned c) { 
# 445
unsigned res; 
# 456 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 457
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 459
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 460
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 462
unsigned short cU_lo = (unsigned short)(c & 65535U); 
# 463
unsigned short cU_hi = (unsigned short)(c >> 16); 
# 466
short aS_lo = *((short *)(&aU_lo)); 
# 467
short aS_hi = *((short *)(&aU_hi)); 
# 469
short bS_lo = *((short *)(&bU_lo)); 
# 470
short bS_hi = *((short *)(&bU_hi)); 
# 472
short cS_lo = *((short *)(&cU_lo)); 
# 473
short cS_hi = *((short *)(&cU_hi)); 
# 476
short ansS_lo = (short)max(max(aS_lo, bS_lo), cS_lo); 
# 477
short ansS_hi = (short)max(max(aS_hi, bS_hi), cS_hi); 
# 480
if (ansS_lo < 0) { ansS_lo = (0); }  
# 481
if (ansS_hi < 0) { ansS_hi = (0); }  
# 484
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
# 485
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
# 488
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 491
return res; 
# 492
} 
# 494
static inline int __vimin3_s32_relu(const int a, const int b, const int c) { 
# 504 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
int ans = min(min(a, b), c); 
# 506
return (ans > 0) ? ans : 0; 
# 508
} 
# 510
static inline unsigned __vimin3_s16x2_relu(const unsigned a, const unsigned b, const unsigned c) { 
# 511
unsigned res; 
# 522 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 523
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 525
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 526
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 528
unsigned short cU_lo = (unsigned short)(c & 65535U); 
# 529
unsigned short cU_hi = (unsigned short)(c >> 16); 
# 532
short aS_lo = *((short *)(&aU_lo)); 
# 533
short aS_hi = *((short *)(&aU_hi)); 
# 535
short bS_lo = *((short *)(&bU_lo)); 
# 536
short bS_hi = *((short *)(&bU_hi)); 
# 538
short cS_lo = *((short *)(&cU_lo)); 
# 539
short cS_hi = *((short *)(&cU_hi)); 
# 542
short ansS_lo = (short)min(min(aS_lo, bS_lo), cS_lo); 
# 543
short ansS_hi = (short)min(min(aS_hi, bS_hi), cS_hi); 
# 546
if (ansS_lo < 0) { ansS_lo = (0); }  
# 547
if (ansS_hi < 0) { ansS_hi = (0); }  
# 550
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
# 551
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
# 554
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 557
return res; 
# 558
} 
# 560
static inline int __viaddmax_s32(const int a, const int b, const int c) { 
# 570 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
return max(a + b, c); 
# 572
} 
# 574
static inline unsigned __viaddmax_s16x2(const unsigned a, const unsigned b, const unsigned c) { 
# 575
unsigned res; 
# 586 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 587
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 589
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 590
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 592
unsigned short cU_lo = (unsigned short)(c & 65535U); 
# 593
unsigned short cU_hi = (unsigned short)(c >> 16); 
# 596
short aS_lo = *((short *)(&aU_lo)); 
# 597
short aS_hi = *((short *)(&aU_hi)); 
# 599
short bS_lo = *((short *)(&bU_lo)); 
# 600
short bS_hi = *((short *)(&bU_hi)); 
# 602
short cS_lo = *((short *)(&cU_lo)); 
# 603
short cS_hi = *((short *)(&cU_hi)); 
# 606
short ansS_lo = (short)max((short)(aS_lo + bS_lo), cS_lo); 
# 607
short ansS_hi = (short)max((short)(aS_hi + bS_hi), cS_hi); 
# 610
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
# 611
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
# 614
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 617
return res; 
# 618
} 
# 620
static inline unsigned __viaddmax_u32(const unsigned a, const unsigned b, const unsigned c) { 
# 630 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
return max(a + b, c); 
# 632
} 
# 634
static inline unsigned __viaddmax_u16x2(const unsigned a, const unsigned b, const unsigned c) { 
# 635
unsigned res; 
# 646 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 647
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 649
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 650
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 652
unsigned short cU_lo = (unsigned short)(c & 65535U); 
# 653
unsigned short cU_hi = (unsigned short)(c >> 16); 
# 656
unsigned short ansU_lo = (unsigned short)max((unsigned short)(aU_lo + bU_lo), cU_lo); 
# 657
unsigned short ansU_hi = (unsigned short)max((unsigned short)(aU_hi + bU_hi), cU_hi); 
# 660
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 663
return res; 
# 664
} 
# 666
static inline int __viaddmin_s32(const int a, const int b, const int c) { 
# 676 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
return min(a + b, c); 
# 678
} 
# 680
static inline unsigned __viaddmin_s16x2(const unsigned a, const unsigned b, const unsigned c) { 
# 681
unsigned res; 
# 692 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 693
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 695
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 696
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 698
unsigned short cU_lo = (unsigned short)(c & 65535U); 
# 699
unsigned short cU_hi = (unsigned short)(c >> 16); 
# 702
short aS_lo = *((short *)(&aU_lo)); 
# 703
short aS_hi = *((short *)(&aU_hi)); 
# 705
short bS_lo = *((short *)(&bU_lo)); 
# 706
short bS_hi = *((short *)(&bU_hi)); 
# 708
short cS_lo = *((short *)(&cU_lo)); 
# 709
short cS_hi = *((short *)(&cU_hi)); 
# 712
short ansS_lo = (short)min((short)(aS_lo + bS_lo), cS_lo); 
# 713
short ansS_hi = (short)min((short)(aS_hi + bS_hi), cS_hi); 
# 716
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
# 717
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
# 720
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 723
return res; 
# 724
} 
# 726
static inline unsigned __viaddmin_u32(const unsigned a, const unsigned b, const unsigned c) { 
# 736 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
return min(a + b, c); 
# 738
} 
# 740
static inline unsigned __viaddmin_u16x2(const unsigned a, const unsigned b, const unsigned c) { 
# 741
unsigned res; 
# 752 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 753
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 755
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 756
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 758
unsigned short cU_lo = (unsigned short)(c & 65535U); 
# 759
unsigned short cU_hi = (unsigned short)(c >> 16); 
# 762
unsigned short ansU_lo = (unsigned short)min((unsigned short)(aU_lo + bU_lo), cU_lo); 
# 763
unsigned short ansU_hi = (unsigned short)min((unsigned short)(aU_hi + bU_hi), cU_hi); 
# 766
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 769
return res; 
# 770
} 
# 772
static inline int __viaddmax_s32_relu(const int a, const int b, const int c) { 
# 782 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
int ans = max(a + b, c); 
# 784
return (ans > 0) ? ans : 0; 
# 786
} 
# 788
static inline unsigned __viaddmax_s16x2_relu(const unsigned a, const unsigned b, const unsigned c) { 
# 789
unsigned res; 
# 800 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 801
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 803
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 804
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 806
unsigned short cU_lo = (unsigned short)(c & 65535U); 
# 807
unsigned short cU_hi = (unsigned short)(c >> 16); 
# 810
short aS_lo = *((short *)(&aU_lo)); 
# 811
short aS_hi = *((short *)(&aU_hi)); 
# 813
short bS_lo = *((short *)(&bU_lo)); 
# 814
short bS_hi = *((short *)(&bU_hi)); 
# 816
short cS_lo = *((short *)(&cU_lo)); 
# 817
short cS_hi = *((short *)(&cU_hi)); 
# 820
short ansS_lo = (short)max((short)(aS_lo + bS_lo), cS_lo); 
# 821
short ansS_hi = (short)max((short)(aS_hi + bS_hi), cS_hi); 
# 823
if (ansS_lo < 0) { ansS_lo = (0); }  
# 824
if (ansS_hi < 0) { ansS_hi = (0); }  
# 827
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
# 828
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
# 831
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 834
return res; 
# 835
} 
# 837
static inline int __viaddmin_s32_relu(const int a, const int b, const int c) { 
# 847 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
int ans = min(a + b, c); 
# 849
return (ans > 0) ? ans : 0; 
# 851
} 
# 853
static inline unsigned __viaddmin_s16x2_relu(const unsigned a, const unsigned b, const unsigned c) { 
# 854
unsigned res; 
# 865 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 866
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 868
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 869
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 871
unsigned short cU_lo = (unsigned short)(c & 65535U); 
# 872
unsigned short cU_hi = (unsigned short)(c >> 16); 
# 875
short aS_lo = *((short *)(&aU_lo)); 
# 876
short aS_hi = *((short *)(&aU_hi)); 
# 878
short bS_lo = *((short *)(&bU_lo)); 
# 879
short bS_hi = *((short *)(&bU_hi)); 
# 881
short cS_lo = *((short *)(&cU_lo)); 
# 882
short cS_hi = *((short *)(&cU_hi)); 
# 885
short ansS_lo = (short)min((short)(aS_lo + bS_lo), cS_lo); 
# 886
short ansS_hi = (short)min((short)(aS_hi + bS_hi), cS_hi); 
# 888
if (ansS_lo < 0) { ansS_lo = (0); }  
# 889
if (ansS_hi < 0) { ansS_hi = (0); }  
# 892
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
# 893
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
# 896
res = (((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16)); 
# 899
return res; 
# 900
} 
# 904
static inline int __vibmax_s32(const int a, const int b, bool *const pred) { 
# 918 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
int ans = max(a, b); 
# 920
(*pred) = (a >= b); 
# 921
return ans; 
# 923
} 
# 925
static inline unsigned __vibmax_u32(const unsigned a, const unsigned b, bool *const pred) { 
# 939 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
unsigned ans = max(a, b); 
# 941
(*pred) = (a >= b); 
# 942
return ans; 
# 944
} 
# 947
static inline int __vibmin_s32(const int a, const int b, bool *const pred) { 
# 961 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
int ans = min(a, b); 
# 963
(*pred) = (a <= b); 
# 964
return ans; 
# 966
} 
# 969
static inline unsigned __vibmin_u32(const unsigned a, const unsigned b, bool *const pred) { 
# 983 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
unsigned ans = min(a, b); 
# 985
(*pred) = (a <= b); 
# 986
return ans; 
# 988
} 
# 990
static inline unsigned __vibmax_s16x2(const unsigned a, const unsigned b, bool *const pred_hi, bool *const pred_lo) { 
# 1012 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 1013
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 1015
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 1016
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 1019
short aS_lo = *((short *)(&aU_lo)); 
# 1020
short aS_hi = *((short *)(&aU_hi)); 
# 1022
short bS_lo = *((short *)(&bU_lo)); 
# 1023
short bS_hi = *((short *)(&bU_hi)); 
# 1026
short ansS_lo = (short)max(aS_lo, bS_lo); 
# 1027
short ansS_hi = (short)max(aS_hi, bS_hi); 
# 1029
(*pred_hi) = (aS_hi >= bS_hi); 
# 1030
(*pred_lo) = (aS_lo >= bS_lo); 
# 1033
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
# 1034
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
# 1037
unsigned ans = ((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16); 
# 1039
return ans; 
# 1041
} 
# 1043
static inline unsigned __vibmax_u16x2(const unsigned a, const unsigned b, bool *const pred_hi, bool *const pred_lo) { 
# 1065 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 1066
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 1068
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 1069
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 1072
unsigned short ansU_lo = (unsigned short)max(aU_lo, bU_lo); 
# 1073
unsigned short ansU_hi = (unsigned short)max(aU_hi, bU_hi); 
# 1075
(*pred_hi) = (aU_hi >= bU_hi); 
# 1076
(*pred_lo) = (aU_lo >= bU_lo); 
# 1079
unsigned ans = ((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16); 
# 1081
return ans; 
# 1083
} 
# 1085
static inline unsigned __vibmin_s16x2(const unsigned a, const unsigned b, bool *const pred_hi, bool *const pred_lo) { 
# 1107 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 1108
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 1110
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 1111
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 1114
short aS_lo = *((short *)(&aU_lo)); 
# 1115
short aS_hi = *((short *)(&aU_hi)); 
# 1117
short bS_lo = *((short *)(&bU_lo)); 
# 1118
short bS_hi = *((short *)(&bU_hi)); 
# 1121
short ansS_lo = (short)min(aS_lo, bS_lo); 
# 1122
short ansS_hi = (short)min(aS_hi, bS_hi); 
# 1124
(*pred_hi) = (aS_hi <= bS_hi); 
# 1125
(*pred_lo) = (aS_lo <= bS_lo); 
# 1128
unsigned short ansU_lo = *((unsigned short *)(&ansS_lo)); 
# 1129
unsigned short ansU_hi = *((unsigned short *)(&ansS_hi)); 
# 1132
unsigned ans = ((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16); 
# 1134
return ans; 
# 1136
} 
# 1138
static inline unsigned __vibmin_u16x2(const unsigned a, const unsigned b, bool *const pred_hi, bool *const pred_lo) { 
# 1160 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.hpp"
unsigned short aU_lo = (unsigned short)(a & 65535U); 
# 1161
unsigned short aU_hi = (unsigned short)(a >> 16); 
# 1163
unsigned short bU_lo = (unsigned short)(b & 65535U); 
# 1164
unsigned short bU_hi = (unsigned short)(b >> 16); 
# 1167
unsigned short ansU_lo = (unsigned short)min(aU_lo, bU_lo); 
# 1168
unsigned short ansU_hi = (unsigned short)min(aU_hi, bU_hi); 
# 1170
(*pred_hi) = (aU_hi <= bU_hi); 
# 1171
(*pred_lo) = (aU_lo <= bU_lo); 
# 1174
unsigned ans = ((unsigned)ansU_lo) | (((unsigned)ansU_hi) << 16); 
# 1176
return ans; 
# 1178
} 
# 89 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 89
{ } 
#endif
# 91 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 91
{ } 
#endif
# 93 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 93
{ } 
#endif
# 95 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 95
{ } 
#endif
# 97 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 97
{ } 
#endif
# 99 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 99
{ } 
#endif
# 101 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 101
{ } 
#endif
# 103 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 103
{ } 
#endif
# 105 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 105
{ } 
#endif
# 107 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 107
{ } 
#endif
# 109 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 109
{ } 
#endif
# 111 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 111
{ } 
#endif
# 113 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 113
{ } 
#endif
# 115 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 115
{ } 
#endif
# 117 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 117
{ } 
#endif
# 119 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 119
{ } 
#endif
# 121 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 121
{ } 
#endif
# 123 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 123
{ } 
#endif
# 125 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 125
{ } 
#endif
# 127 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 127
{ } 
#endif
# 129 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 129
{ } 
#endif
# 156 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
extern "C" {
# 160
}
# 169 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 169
{ } 
#endif
# 171 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 171
{ } 
#endif
# 173 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS(unsigned long long *address, unsigned long long compare, unsigned long long val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 173
{ } 
#endif
# 175 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute((deprecated("__any() is deprecated in favor of __any_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning)."))) __attribute__((unused)) static inline bool any(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
# 175
{ } 
#endif
# 177 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_atomic_functions.h"
__attribute((deprecated("__all() is deprecated in favor of __all_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning)."))) __attribute__((unused)) static inline bool all(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
# 177
{ } 
#endif
# 90 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_double_functions.h"
extern "C" {
# 1142 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_double_functions.h"
}
# 1150
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode); 
# 1154
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
# 1156
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
# 1158
__attribute__((unused)) static inline double dsub(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
# 1160
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode = cudaRoundZero); 
# 1162
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero); 
# 1164
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode = cudaRoundZero); 
# 1166
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode = cudaRoundZero); 
# 1168
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode = cudaRoundNearest); 
# 1170
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode = cudaRoundNearest); 
# 1172
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest); 
# 1174
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest); 
# 1176
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest); 
# 93 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode) 
# 94
{int volatile ___ = 1;(void)a;(void)b;(void)c;(void)mode;
# 99
::exit(___);}
#if 0
# 94
{ 
# 95
return (mode == (cudaRoundZero)) ? __fma_rz(a, b, c) : ((mode == (cudaRoundPosInf)) ? __fma_ru(a, b, c) : ((mode == (cudaRoundMinInf)) ? __fma_rd(a, b, c) : __fma_rn(a, b, c))); 
# 99
} 
#endif
# 101 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode) 
# 102
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 107
::exit(___);}
#if 0
# 102
{ 
# 103
return (mode == (cudaRoundZero)) ? __dmul_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dmul_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dmul_rd(a, b) : __dmul_rn(a, b))); 
# 107
} 
#endif
# 109 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode) 
# 110
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 115
::exit(___);}
#if 0
# 110
{ 
# 111
return (mode == (cudaRoundZero)) ? __dadd_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dadd_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dadd_rd(a, b) : __dadd_rn(a, b))); 
# 115
} 
#endif
# 117 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double dsub(double a, double b, cudaRoundMode mode) 
# 118
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 123
::exit(___);}
#if 0
# 118
{ 
# 119
return (mode == (cudaRoundZero)) ? __dsub_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dsub_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dsub_rd(a, b) : __dsub_rn(a, b))); 
# 123
} 
#endif
# 125 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode) 
# 126
{int volatile ___ = 1;(void)a;(void)mode;
# 131
::exit(___);}
#if 0
# 126
{ 
# 127
return (mode == (cudaRoundNearest)) ? __double2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2int_rd(a) : __double2int_rz(a))); 
# 131
} 
#endif
# 133 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode) 
# 134
{int volatile ___ = 1;(void)a;(void)mode;
# 139
::exit(___);}
#if 0
# 134
{ 
# 135
return (mode == (cudaRoundNearest)) ? __double2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2uint_rd(a) : __double2uint_rz(a))); 
# 139
} 
#endif
# 141 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode) 
# 142
{int volatile ___ = 1;(void)a;(void)mode;
# 147
::exit(___);}
#if 0
# 142
{ 
# 143
return (mode == (cudaRoundNearest)) ? __double2ll_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ll_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ll_rd(a) : __double2ll_rz(a))); 
# 147
} 
#endif
# 149 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode) 
# 150
{int volatile ___ = 1;(void)a;(void)mode;
# 155
::exit(___);}
#if 0
# 150
{ 
# 151
return (mode == (cudaRoundNearest)) ? __double2ull_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ull_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ull_rd(a) : __double2ull_rz(a))); 
# 155
} 
#endif
# 157 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode) 
# 158
{int volatile ___ = 1;(void)a;(void)mode;
# 163
::exit(___);}
#if 0
# 158
{ 
# 159
return (mode == (cudaRoundZero)) ? __ll2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ll2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ll2double_rd(a) : __ll2double_rn(a))); 
# 163
} 
#endif
# 165 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode) 
# 166
{int volatile ___ = 1;(void)a;(void)mode;
# 171
::exit(___);}
#if 0
# 166
{ 
# 167
return (mode == (cudaRoundZero)) ? __ull2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ull2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ull2double_rd(a) : __ull2double_rn(a))); 
# 171
} 
#endif
# 173 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode) 
# 174
{int volatile ___ = 1;(void)a;(void)mode;
# 176
::exit(___);}
#if 0
# 174
{ 
# 175
return (double)a; 
# 176
} 
#endif
# 178 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode) 
# 179
{int volatile ___ = 1;(void)a;(void)mode;
# 181
::exit(___);}
#if 0
# 179
{ 
# 180
return (double)a; 
# 181
} 
#endif
# 183 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode) 
# 184
{int volatile ___ = 1;(void)a;(void)mode;
# 186
::exit(___);}
#if 0
# 184
{ 
# 185
return (double)a; 
# 186
} 
#endif
# 88 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_20_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 88
{ } 
#endif
# 89 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMin(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 89
{ } 
#endif
# 91 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMax(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 91
{ } 
#endif
# 93 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicAnd(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 93
{ } 
#endif
# 95 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicOr(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 95
{ } 
#endif
# 97 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicXor(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 97
{ } 
#endif
# 99 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMin(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 99
{ } 
#endif
# 101 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMax(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 101
{ } 
#endif
# 103 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAnd(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 103
{ } 
#endif
# 105 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicOr(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 105
{ } 
#endif
# 107 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicXor(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 107
{ } 
#endif
# 93 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline double atomicAdd(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 93
{ } 
#endif
# 96 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 96
{ } 
#endif
# 99 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 99
{ } 
#endif
# 102 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 102
{ } 
#endif
# 105 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 105
{ } 
#endif
# 108 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 108
{ } 
#endif
# 111 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 111
{ } 
#endif
# 114 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 114
{ } 
#endif
# 117 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 117
{ } 
#endif
# 120 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline double atomicAdd_block(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 120
{ } 
#endif
# 123 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline double atomicAdd_system(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 123
{ } 
#endif
# 126 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 126
{ } 
#endif
# 129 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 129
{ } 
#endif
# 132 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 132
{ } 
#endif
# 135 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 135
{ } 
#endif
# 138 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 138
{ } 
#endif
# 141 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 141
{ } 
#endif
# 144 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 144
{ } 
#endif
# 147 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 147
{ } 
#endif
# 150 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 150
{ } 
#endif
# 153 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 153
{ } 
#endif
# 156 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 156
{ } 
#endif
# 159 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 159
{ } 
#endif
# 162 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 162
{ } 
#endif
# 165 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 165
{ } 
#endif
# 168 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMin_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 168
{ } 
#endif
# 171 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMin_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 171
{ } 
#endif
# 174 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 174
{ } 
#endif
# 177 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 177
{ } 
#endif
# 180 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMin_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 180
{ } 
#endif
# 183 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMin_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 183
{ } 
#endif
# 186 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 186
{ } 
#endif
# 189 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 189
{ } 
#endif
# 192 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMax_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 192
{ } 
#endif
# 195 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMax_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 195
{ } 
#endif
# 198 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 198
{ } 
#endif
# 201 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 201
{ } 
#endif
# 204 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMax_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 204
{ } 
#endif
# 207 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMax_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 207
{ } 
#endif
# 210 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 210
{ } 
#endif
# 213 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 213
{ } 
#endif
# 216 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 216
{ } 
#endif
# 219 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 219
{ } 
#endif
# 222 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS_block(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 222
{ } 
#endif
# 225 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS_system(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 225
{ } 
#endif
# 228 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS_block(unsigned *address, unsigned compare, unsigned 
# 229
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 229
{ } 
#endif
# 232 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS_system(unsigned *address, unsigned compare, unsigned 
# 233
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 233
{ } 
#endif
# 236 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS_block(unsigned long long *address, unsigned long long 
# 237
compare, unsigned long long 
# 238
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 238
{ } 
#endif
# 241 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS_system(unsigned long long *address, unsigned long long 
# 242
compare, unsigned long long 
# 243
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 243
{ } 
#endif
# 246 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 246
{ } 
#endif
# 249 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 249
{ } 
#endif
# 252 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicAnd_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 252
{ } 
#endif
# 255 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicAnd_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 255
{ } 
#endif
# 258 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 258
{ } 
#endif
# 261 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 261
{ } 
#endif
# 264 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAnd_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 264
{ } 
#endif
# 267 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAnd_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 267
{ } 
#endif
# 270 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 270
{ } 
#endif
# 273 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 273
{ } 
#endif
# 276 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicOr_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 276
{ } 
#endif
# 279 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicOr_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 279
{ } 
#endif
# 282 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 282
{ } 
#endif
# 285 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 285
{ } 
#endif
# 288 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicOr_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 288
{ } 
#endif
# 291 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicOr_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 291
{ } 
#endif
# 294 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 294
{ } 
#endif
# 297 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 297
{ } 
#endif
# 300 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicXor_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 300
{ } 
#endif
# 303 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicXor_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 303
{ } 
#endif
# 306 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 306
{ } 
#endif
# 309 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 309
{ } 
#endif
# 312 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicXor_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 312
{ } 
#endif
# 315 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicXor_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 315
{ } 
#endif
# 95 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_20_intrinsics.h"
extern "C" {
# 1508 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_20_intrinsics.h"
}
# 1515
__attribute((deprecated("__ballot() is deprecated in favor of __ballot_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to" " suppress this warning)."))) __attribute__((unused)) static inline unsigned ballot(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1515
{ } 
#endif
# 1517 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline int syncthreads_count(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1517
{ } 
#endif
# 1519 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_and(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1519
{ } 
#endif
# 1521 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_or(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1521
{ } 
#endif
# 1526 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned __isGlobal(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1526
{ } 
#endif
# 1527 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned __isShared(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1527
{ } 
#endif
# 1528 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned __isConstant(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1528
{ } 
#endif
# 1529 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned __isLocal(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1529
{ } 
#endif
# 1531 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned __isGridConstant(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1531
{ } 
#endif
# 1533 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline size_t __cvta_generic_to_global(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1533
{ } 
#endif
# 1534 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline size_t __cvta_generic_to_shared(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1534
{ } 
#endif
# 1535 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline size_t __cvta_generic_to_constant(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1535
{ } 
#endif
# 1536 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline size_t __cvta_generic_to_local(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1536
{ } 
#endif
# 1538 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline size_t __cvta_generic_to_grid_constant(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1538
{ } 
#endif
# 1541 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline void *__cvta_global_to_generic(size_t rawbits) {int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
# 1541
{ } 
#endif
# 1542 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline void *__cvta_shared_to_generic(size_t rawbits) {int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
# 1542
{ } 
#endif
# 1543 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline void *__cvta_constant_to_generic(size_t rawbits) {int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
# 1543
{ } 
#endif
# 1544 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline void *__cvta_local_to_generic(size_t rawbits) {int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
# 1544
{ } 
#endif
# 1546 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline void *__cvta_grid_constant_to_generic(size_t rawbits) {int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
# 1546
{ } 
#endif
# 123 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __fns(unsigned mask, unsigned base, int offset) {int volatile ___ = 1;(void)mask;(void)base;(void)offset;::exit(___);}
#if 0
# 123
{ } 
#endif
# 124 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline void __barrier_sync(unsigned id) {int volatile ___ = 1;(void)id;::exit(___);}
#if 0
# 124
{ } 
#endif
# 125 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline void __barrier_sync_count(unsigned id, unsigned cnt) {int volatile ___ = 1;(void)id;(void)cnt;::exit(___);}
#if 0
# 125
{ } 
#endif
# 126 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline void __syncwarp(unsigned mask = 4294967295U) {int volatile ___ = 1;(void)mask;::exit(___);}
#if 0
# 126
{ } 
#endif
# 127 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __all_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 127
{ } 
#endif
# 128 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __any_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 128
{ } 
#endif
# 129 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __uni_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 129
{ } 
#endif
# 130 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __ballot_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 130
{ } 
#endif
# 131 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __activemask() {int volatile ___ = 1;::exit(___);}
#if 0
# 131
{ } 
#endif
# 140 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline int __shfl(int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 140
{ } 
#endif
# 141 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline unsigned __shfl(unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 141
{ } 
#endif
# 142 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline int __shfl_up(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 142
{ } 
#endif
# 143 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline unsigned __shfl_up(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 143
{ } 
#endif
# 144 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline int __shfl_down(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 144
{ } 
#endif
# 145 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline unsigned __shfl_down(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 145
{ } 
#endif
# 146 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline int __shfl_xor(int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 146
{ } 
#endif
# 147 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline unsigned __shfl_xor(unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 147
{ } 
#endif
# 148 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline float __shfl(float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 148
{ } 
#endif
# 149 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline float __shfl_up(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 149
{ } 
#endif
# 150 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline float __shfl_down(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 150
{ } 
#endif
# 151 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline float __shfl_xor(float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 151
{ } 
#endif
# 154 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_sync(unsigned mask, int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 154
{ } 
#endif
# 155 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __shfl_sync(unsigned mask, unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 155
{ } 
#endif
# 156 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_up_sync(unsigned mask, int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 156
{ } 
#endif
# 157 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __shfl_up_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 157
{ } 
#endif
# 158 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_down_sync(unsigned mask, int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 158
{ } 
#endif
# 159 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __shfl_down_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 159
{ } 
#endif
# 160 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_xor_sync(unsigned mask, int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 160
{ } 
#endif
# 161 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __shfl_xor_sync(unsigned mask, unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 161
{ } 
#endif
# 162 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_sync(unsigned mask, float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 162
{ } 
#endif
# 163 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_up_sync(unsigned mask, float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 163
{ } 
#endif
# 164 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_down_sync(unsigned mask, float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 164
{ } 
#endif
# 165 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_xor_sync(unsigned mask, float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 165
{ } 
#endif
# 169 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl(unsigned long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 169
{ } 
#endif
# 170 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline long long __shfl(long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 170
{ } 
#endif
# 171 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline long long __shfl_up(long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 171
{ } 
#endif
# 172 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl_up(unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 172
{ } 
#endif
# 173 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline long long __shfl_down(long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 173
{ } 
#endif
# 174 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl_down(unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 174
{ } 
#endif
# 175 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline long long __shfl_xor(long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 175
{ } 
#endif
# 176 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl_xor(unsigned long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 176
{ } 
#endif
# 177 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline double __shfl(double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 177
{ } 
#endif
# 178 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline double __shfl_up(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 178
{ } 
#endif
# 179 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline double __shfl_down(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 179
{ } 
#endif
# 180 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline double __shfl_xor(double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 180
{ } 
#endif
# 183 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long long __shfl_sync(unsigned mask, long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 183
{ } 
#endif
# 184 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __shfl_sync(unsigned mask, unsigned long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 184
{ } 
#endif
# 185 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long long __shfl_up_sync(unsigned mask, long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 185
{ } 
#endif
# 186 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __shfl_up_sync(unsigned mask, unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 186
{ } 
#endif
# 187 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long long __shfl_down_sync(unsigned mask, long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 187
{ } 
#endif
# 188 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __shfl_down_sync(unsigned mask, unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 188
{ } 
#endif
# 189 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long long __shfl_xor_sync(unsigned mask, long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 189
{ } 
#endif
# 190 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __shfl_xor_sync(unsigned mask, unsigned long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 190
{ } 
#endif
# 191 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline double __shfl_sync(unsigned mask, double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 191
{ } 
#endif
# 192 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline double __shfl_up_sync(unsigned mask, double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 192
{ } 
#endif
# 193 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline double __shfl_down_sync(unsigned mask, double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 193
{ } 
#endif
# 194 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline double __shfl_xor_sync(unsigned mask, double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 194
{ } 
#endif
# 198 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline long __shfl(long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 198
{ } 
#endif
# 199 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline unsigned long __shfl(unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 199
{ } 
#endif
# 200 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline long __shfl_up(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 200
{ } 
#endif
# 201 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline unsigned long __shfl_up(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 201
{ } 
#endif
# 202 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline long __shfl_down(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 202
{ } 
#endif
# 203 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline unsigned long __shfl_down(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 203
{ } 
#endif
# 204 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline long __shfl_xor(long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 204
{ } 
#endif
# 205 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline unsigned long __shfl_xor(unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 205
{ } 
#endif
# 208 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long __shfl_sync(unsigned mask, long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 208
{ } 
#endif
# 209 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long __shfl_sync(unsigned mask, unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 209
{ } 
#endif
# 210 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long __shfl_up_sync(unsigned mask, long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 210
{ } 
#endif
# 211 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long __shfl_up_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 211
{ } 
#endif
# 212 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long __shfl_down_sync(unsigned mask, long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 212
{ } 
#endif
# 213 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long __shfl_down_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 213
{ } 
#endif
# 214 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long __shfl_xor_sync(unsigned mask, long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 214
{ } 
#endif
# 215 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long __shfl_xor_sync(unsigned mask, unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 215
{ } 
#endif
# 91 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 91
{ } 
#endif
# 92 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 92
{ } 
#endif
# 94 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 94
{ } 
#endif
# 95 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 95
{ } 
#endif
# 96 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 96
{ } 
#endif
# 97 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldg(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 99
{ } 
#endif
# 100 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 100
{ } 
#endif
# 101 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 101
{ } 
#endif
# 102 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 102
{ } 
#endif
# 103 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 103
{ } 
#endif
# 104 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 104
{ } 
#endif
# 105 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 105
{ } 
#endif
# 107 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 107
{ } 
#endif
# 108 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 108
{ } 
#endif
# 109 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 109
{ } 
#endif
# 110 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldg(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 110
{ } 
#endif
# 111 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 111
{ } 
#endif
# 112 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 112
{ } 
#endif
# 113 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 113
{ } 
#endif
# 114 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 114
{ } 
#endif
# 115 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 115
{ } 
#endif
# 116 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 116
{ } 
#endif
# 117 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 117
{ } 
#endif
# 119 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 119
{ } 
#endif
# 120 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 120
{ } 
#endif
# 121 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 121
{ } 
#endif
# 122 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 122
{ } 
#endif
# 123 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 123
{ } 
#endif
# 128 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldcg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 128
{ } 
#endif
# 129 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldcg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 129
{ } 
#endif
# 131 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldcg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 131
{ } 
#endif
# 132 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldcg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 132
{ } 
#endif
# 133 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldcg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 133
{ } 
#endif
# 134 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldcg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 134
{ } 
#endif
# 135 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldcg(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 135
{ } 
#endif
# 136 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldcg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 136
{ } 
#endif
# 137 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldcg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 137
{ } 
#endif
# 138 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldcg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 138
{ } 
#endif
# 139 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldcg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 139
{ } 
#endif
# 140 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldcg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 140
{ } 
#endif
# 141 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldcg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 141
{ } 
#endif
# 142 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldcg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 142
{ } 
#endif
# 144 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldcg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 144
{ } 
#endif
# 145 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldcg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 145
{ } 
#endif
# 146 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldcg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 146
{ } 
#endif
# 147 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldcg(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 147
{ } 
#endif
# 148 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldcg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 148
{ } 
#endif
# 149 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldcg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 149
{ } 
#endif
# 150 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldcg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 150
{ } 
#endif
# 151 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldcg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 151
{ } 
#endif
# 152 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldcg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 152
{ } 
#endif
# 153 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldcg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 153
{ } 
#endif
# 154 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldcg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 154
{ } 
#endif
# 156 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldcg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 156
{ } 
#endif
# 157 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldcg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 157
{ } 
#endif
# 158 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldcg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 158
{ } 
#endif
# 159 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldcg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 159
{ } 
#endif
# 160 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldcg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 160
{ } 
#endif
# 164 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldca(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 164
{ } 
#endif
# 165 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldca(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 165
{ } 
#endif
# 167 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldca(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 167
{ } 
#endif
# 168 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldca(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 168
{ } 
#endif
# 169 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldca(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 169
{ } 
#endif
# 170 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldca(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 170
{ } 
#endif
# 171 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldca(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 171
{ } 
#endif
# 172 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldca(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 172
{ } 
#endif
# 173 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldca(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 173
{ } 
#endif
# 174 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldca(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 174
{ } 
#endif
# 175 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldca(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 175
{ } 
#endif
# 176 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldca(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 176
{ } 
#endif
# 177 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldca(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 177
{ } 
#endif
# 178 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldca(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 178
{ } 
#endif
# 180 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldca(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 180
{ } 
#endif
# 181 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldca(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 181
{ } 
#endif
# 182 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldca(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 182
{ } 
#endif
# 183 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldca(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 183
{ } 
#endif
# 184 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldca(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 184
{ } 
#endif
# 185 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldca(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 185
{ } 
#endif
# 186 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldca(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 186
{ } 
#endif
# 187 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldca(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 187
{ } 
#endif
# 188 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldca(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 188
{ } 
#endif
# 189 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldca(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 189
{ } 
#endif
# 190 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldca(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 190
{ } 
#endif
# 192 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldca(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 192
{ } 
#endif
# 193 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldca(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 193
{ } 
#endif
# 194 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldca(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 194
{ } 
#endif
# 195 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldca(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 195
{ } 
#endif
# 196 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldca(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 196
{ } 
#endif
# 200 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldcs(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 200
{ } 
#endif
# 201 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldcs(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 201
{ } 
#endif
# 203 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldcs(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 203
{ } 
#endif
# 204 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldcs(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 204
{ } 
#endif
# 205 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldcs(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 205
{ } 
#endif
# 206 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldcs(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 206
{ } 
#endif
# 207 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldcs(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 207
{ } 
#endif
# 208 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldcs(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 208
{ } 
#endif
# 209 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldcs(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 209
{ } 
#endif
# 210 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldcs(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 210
{ } 
#endif
# 211 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldcs(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 211
{ } 
#endif
# 212 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldcs(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 212
{ } 
#endif
# 213 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldcs(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 213
{ } 
#endif
# 214 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldcs(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 214
{ } 
#endif
# 216 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldcs(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 216
{ } 
#endif
# 217 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldcs(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 217
{ } 
#endif
# 218 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldcs(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 218
{ } 
#endif
# 219 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldcs(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 219
{ } 
#endif
# 220 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldcs(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 220
{ } 
#endif
# 221 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldcs(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 221
{ } 
#endif
# 222 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldcs(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 222
{ } 
#endif
# 223 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldcs(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 223
{ } 
#endif
# 224 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldcs(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 224
{ } 
#endif
# 225 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldcs(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 225
{ } 
#endif
# 226 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldcs(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 226
{ } 
#endif
# 228 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldcs(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 228
{ } 
#endif
# 229 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldcs(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 229
{ } 
#endif
# 230 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldcs(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 230
{ } 
#endif
# 231 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldcs(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 231
{ } 
#endif
# 232 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldcs(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 232
{ } 
#endif
# 236 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldlu(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 236
{ } 
#endif
# 237 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldlu(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 237
{ } 
#endif
# 239 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldlu(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 239
{ } 
#endif
# 240 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldlu(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 240
{ } 
#endif
# 241 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldlu(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 241
{ } 
#endif
# 242 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldlu(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 242
{ } 
#endif
# 243 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldlu(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 243
{ } 
#endif
# 244 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldlu(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 244
{ } 
#endif
# 245 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldlu(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 245
{ } 
#endif
# 246 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldlu(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 246
{ } 
#endif
# 247 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldlu(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 247
{ } 
#endif
# 248 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldlu(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 248
{ } 
#endif
# 249 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldlu(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 249
{ } 
#endif
# 250 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldlu(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 250
{ } 
#endif
# 252 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldlu(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 252
{ } 
#endif
# 253 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldlu(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 253
{ } 
#endif
# 254 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldlu(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 254
{ } 
#endif
# 255 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldlu(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 255
{ } 
#endif
# 256 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldlu(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 256
{ } 
#endif
# 257 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldlu(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 257
{ } 
#endif
# 258 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldlu(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 258
{ } 
#endif
# 259 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldlu(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 259
{ } 
#endif
# 260 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldlu(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 260
{ } 
#endif
# 261 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldlu(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 261
{ } 
#endif
# 262 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldlu(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 262
{ } 
#endif
# 264 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldlu(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 264
{ } 
#endif
# 265 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldlu(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 265
{ } 
#endif
# 266 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldlu(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 266
{ } 
#endif
# 267 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldlu(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 267
{ } 
#endif
# 268 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldlu(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 268
{ } 
#endif
# 272 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldcv(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 272
{ } 
#endif
# 273 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldcv(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 273
{ } 
#endif
# 275 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldcv(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 275
{ } 
#endif
# 276 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldcv(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 276
{ } 
#endif
# 277 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldcv(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 277
{ } 
#endif
# 278 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldcv(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 278
{ } 
#endif
# 279 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldcv(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 279
{ } 
#endif
# 280 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldcv(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 280
{ } 
#endif
# 281 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldcv(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 281
{ } 
#endif
# 282 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldcv(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 282
{ } 
#endif
# 283 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldcv(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 283
{ } 
#endif
# 284 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldcv(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 284
{ } 
#endif
# 285 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldcv(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 285
{ } 
#endif
# 286 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldcv(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 286
{ } 
#endif
# 288 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldcv(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 288
{ } 
#endif
# 289 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldcv(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 289
{ } 
#endif
# 290 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldcv(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 290
{ } 
#endif
# 291 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldcv(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 291
{ } 
#endif
# 292 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldcv(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 292
{ } 
#endif
# 293 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldcv(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 293
{ } 
#endif
# 294 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldcv(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 294
{ } 
#endif
# 295 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldcv(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 295
{ } 
#endif
# 296 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldcv(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 296
{ } 
#endif
# 297 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldcv(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 297
{ } 
#endif
# 298 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldcv(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 298
{ } 
#endif
# 300 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldcv(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 300
{ } 
#endif
# 301 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldcv(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 301
{ } 
#endif
# 302 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldcv(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 302
{ } 
#endif
# 303 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldcv(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 303
{ } 
#endif
# 304 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldcv(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 304
{ } 
#endif
# 308 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(long *ptr, long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 308
{ } 
#endif
# 309 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(unsigned long *ptr, unsigned long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 309
{ } 
#endif
# 311 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(char *ptr, char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 311
{ } 
#endif
# 312 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(signed char *ptr, signed char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 312
{ } 
#endif
# 313 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(short *ptr, short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 313
{ } 
#endif
# 314 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(int *ptr, int value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 314
{ } 
#endif
# 315 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(long long *ptr, long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 315
{ } 
#endif
# 316 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(char2 *ptr, char2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 316
{ } 
#endif
# 317 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(char4 *ptr, char4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 317
{ } 
#endif
# 318 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(short2 *ptr, short2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 318
{ } 
#endif
# 319 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(short4 *ptr, short4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 319
{ } 
#endif
# 320 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(int2 *ptr, int2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 320
{ } 
#endif
# 321 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(int4 *ptr, int4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 321
{ } 
#endif
# 322 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(longlong2 *ptr, longlong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 322
{ } 
#endif
# 324 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(unsigned char *ptr, unsigned char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 324
{ } 
#endif
# 325 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(unsigned short *ptr, unsigned short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 325
{ } 
#endif
# 326 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(unsigned *ptr, unsigned value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 326
{ } 
#endif
# 327 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(unsigned long long *ptr, unsigned long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 327
{ } 
#endif
# 328 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(uchar2 *ptr, uchar2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 328
{ } 
#endif
# 329 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(uchar4 *ptr, uchar4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 329
{ } 
#endif
# 330 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(ushort2 *ptr, ushort2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 330
{ } 
#endif
# 331 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(ushort4 *ptr, ushort4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 331
{ } 
#endif
# 332 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(uint2 *ptr, uint2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 332
{ } 
#endif
# 333 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(uint4 *ptr, uint4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 333
{ } 
#endif
# 334 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(ulonglong2 *ptr, ulonglong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 334
{ } 
#endif
# 336 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(float *ptr, float value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 336
{ } 
#endif
# 337 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(double *ptr, double value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 337
{ } 
#endif
# 338 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(float2 *ptr, float2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 338
{ } 
#endif
# 339 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(float4 *ptr, float4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 339
{ } 
#endif
# 340 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwb(double2 *ptr, double2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 340
{ } 
#endif
# 344 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(long *ptr, long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 344
{ } 
#endif
# 345 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(unsigned long *ptr, unsigned long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 345
{ } 
#endif
# 347 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(char *ptr, char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 347
{ } 
#endif
# 348 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(signed char *ptr, signed char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 348
{ } 
#endif
# 349 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(short *ptr, short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 349
{ } 
#endif
# 350 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(int *ptr, int value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 350
{ } 
#endif
# 351 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(long long *ptr, long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 351
{ } 
#endif
# 352 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(char2 *ptr, char2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 352
{ } 
#endif
# 353 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(char4 *ptr, char4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 353
{ } 
#endif
# 354 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(short2 *ptr, short2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 354
{ } 
#endif
# 355 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(short4 *ptr, short4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 355
{ } 
#endif
# 356 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(int2 *ptr, int2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 356
{ } 
#endif
# 357 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(int4 *ptr, int4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 357
{ } 
#endif
# 358 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(longlong2 *ptr, longlong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 358
{ } 
#endif
# 360 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(unsigned char *ptr, unsigned char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 360
{ } 
#endif
# 361 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(unsigned short *ptr, unsigned short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 361
{ } 
#endif
# 362 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(unsigned *ptr, unsigned value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 362
{ } 
#endif
# 363 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(unsigned long long *ptr, unsigned long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 363
{ } 
#endif
# 364 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(uchar2 *ptr, uchar2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 364
{ } 
#endif
# 365 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(uchar4 *ptr, uchar4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 365
{ } 
#endif
# 366 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(ushort2 *ptr, ushort2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 366
{ } 
#endif
# 367 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(ushort4 *ptr, ushort4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 367
{ } 
#endif
# 368 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(uint2 *ptr, uint2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 368
{ } 
#endif
# 369 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(uint4 *ptr, uint4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 369
{ } 
#endif
# 370 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(ulonglong2 *ptr, ulonglong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 370
{ } 
#endif
# 372 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(float *ptr, float value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 372
{ } 
#endif
# 373 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(double *ptr, double value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 373
{ } 
#endif
# 374 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(float2 *ptr, float2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 374
{ } 
#endif
# 375 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(float4 *ptr, float4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 375
{ } 
#endif
# 376 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcg(double2 *ptr, double2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 376
{ } 
#endif
# 380 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(long *ptr, long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 380
{ } 
#endif
# 381 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(unsigned long *ptr, unsigned long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 381
{ } 
#endif
# 383 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(char *ptr, char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 383
{ } 
#endif
# 384 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(signed char *ptr, signed char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 384
{ } 
#endif
# 385 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(short *ptr, short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 385
{ } 
#endif
# 386 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(int *ptr, int value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 386
{ } 
#endif
# 387 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(long long *ptr, long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 387
{ } 
#endif
# 388 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(char2 *ptr, char2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 388
{ } 
#endif
# 389 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(char4 *ptr, char4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 389
{ } 
#endif
# 390 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(short2 *ptr, short2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 390
{ } 
#endif
# 391 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(short4 *ptr, short4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 391
{ } 
#endif
# 392 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(int2 *ptr, int2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 392
{ } 
#endif
# 393 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(int4 *ptr, int4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 393
{ } 
#endif
# 394 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(longlong2 *ptr, longlong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 394
{ } 
#endif
# 396 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(unsigned char *ptr, unsigned char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 396
{ } 
#endif
# 397 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(unsigned short *ptr, unsigned short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 397
{ } 
#endif
# 398 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(unsigned *ptr, unsigned value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 398
{ } 
#endif
# 399 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(unsigned long long *ptr, unsigned long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 399
{ } 
#endif
# 400 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(uchar2 *ptr, uchar2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 400
{ } 
#endif
# 401 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(uchar4 *ptr, uchar4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 401
{ } 
#endif
# 402 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(ushort2 *ptr, ushort2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 402
{ } 
#endif
# 403 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(ushort4 *ptr, ushort4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 403
{ } 
#endif
# 404 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(uint2 *ptr, uint2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 404
{ } 
#endif
# 405 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(uint4 *ptr, uint4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 405
{ } 
#endif
# 406 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(ulonglong2 *ptr, ulonglong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 406
{ } 
#endif
# 408 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(float *ptr, float value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 408
{ } 
#endif
# 409 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(double *ptr, double value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 409
{ } 
#endif
# 410 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(float2 *ptr, float2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 410
{ } 
#endif
# 411 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(float4 *ptr, float4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 411
{ } 
#endif
# 412 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stcs(double2 *ptr, double2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 412
{ } 
#endif
# 416 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(long *ptr, long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 416
{ } 
#endif
# 417 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(unsigned long *ptr, unsigned long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 417
{ } 
#endif
# 419 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(char *ptr, char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 419
{ } 
#endif
# 420 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(signed char *ptr, signed char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 420
{ } 
#endif
# 421 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(short *ptr, short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 421
{ } 
#endif
# 422 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(int *ptr, int value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 422
{ } 
#endif
# 423 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(long long *ptr, long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 423
{ } 
#endif
# 424 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(char2 *ptr, char2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 424
{ } 
#endif
# 425 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(char4 *ptr, char4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 425
{ } 
#endif
# 426 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(short2 *ptr, short2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 426
{ } 
#endif
# 427 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(short4 *ptr, short4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 427
{ } 
#endif
# 428 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(int2 *ptr, int2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 428
{ } 
#endif
# 429 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(int4 *ptr, int4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 429
{ } 
#endif
# 430 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(longlong2 *ptr, longlong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 430
{ } 
#endif
# 432 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(unsigned char *ptr, unsigned char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 432
{ } 
#endif
# 433 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(unsigned short *ptr, unsigned short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 433
{ } 
#endif
# 434 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(unsigned *ptr, unsigned value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 434
{ } 
#endif
# 435 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(unsigned long long *ptr, unsigned long long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 435
{ } 
#endif
# 436 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(uchar2 *ptr, uchar2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 436
{ } 
#endif
# 437 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(uchar4 *ptr, uchar4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 437
{ } 
#endif
# 438 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(ushort2 *ptr, ushort2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 438
{ } 
#endif
# 439 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(ushort4 *ptr, ushort4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 439
{ } 
#endif
# 440 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(uint2 *ptr, uint2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 440
{ } 
#endif
# 441 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(uint4 *ptr, uint4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 441
{ } 
#endif
# 442 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(ulonglong2 *ptr, ulonglong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 442
{ } 
#endif
# 444 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(float *ptr, float value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 444
{ } 
#endif
# 445 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(double *ptr, double value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 445
{ } 
#endif
# 446 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(float2 *ptr, float2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 446
{ } 
#endif
# 447 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(float4 *ptr, float4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 447
{ } 
#endif
# 448 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline void __stwt(double2 *ptr, double2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
# 448
{ } 
#endif
# 465 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __funnelshift_l(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 465
{ } 
#endif
# 477 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __funnelshift_lc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 477
{ } 
#endif
# 490 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __funnelshift_r(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 490
{ } 
#endif
# 502 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __funnelshift_rc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 502
{ } 
#endif
# 102 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp2a_lo(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 102
{ } 
#endif
# 113 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp2a_lo(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 113
{ } 
#endif
# 125 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp2a_lo(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 125
{ } 
#endif
# 136 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp2a_lo(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 136
{ } 
#endif
# 148 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp2a_hi(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 148
{ } 
#endif
# 159 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp2a_hi(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 159
{ } 
#endif
# 171 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp2a_hi(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 171
{ } 
#endif
# 182 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp2a_hi(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 182
{ } 
#endif
# 197 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp4a(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 197
{ } 
#endif
# 206 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp4a(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 206
{ } 
#endif
# 216 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp4a(char4 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 216
{ } 
#endif
# 225 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp4a(uchar4 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 225
{ } 
#endif
# 98 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 99
{ } 
#endif
# 100 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, unsigned long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 100
{ } 
#endif
# 101 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 101
{ } 
#endif
# 102 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, unsigned long long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 102
{ } 
#endif
# 103 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, long long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 103
{ } 
#endif
# 104 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, float value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 104
{ } 
#endif
# 105 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, double value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 105
{ } 
#endif
# 107 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, unsigned value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 107
{ } 
#endif
# 108 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, int value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 108
{ } 
#endif
# 109 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, unsigned long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 109
{ } 
#endif
# 110 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 110
{ } 
#endif
# 111 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, unsigned long long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 111
{ } 
#endif
# 112 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, long long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 112
{ } 
#endif
# 113 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, float value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 113
{ } 
#endif
# 114 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, double value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 114
{ } 
#endif
# 116 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline void __nanosleep(unsigned ns) {int volatile ___ = 1;(void)ns;::exit(___);}
#if 0
# 116
{ } 
#endif
# 118 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned short atomicCAS(unsigned short *address, unsigned short compare, unsigned short val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 118
{ } 
#endif
# 97 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_80_rt.h"
__attribute__((unused)) static inline unsigned __reduce_add_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_80_rt.h"
__attribute__((unused)) static inline unsigned __reduce_min_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_80_rt.h"
__attribute__((unused)) static inline unsigned __reduce_max_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 99
{ } 
#endif
# 101 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_80_rt.h"
__attribute__((unused)) static inline int __reduce_add_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 101
{ } 
#endif
# 102 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_80_rt.h"
__attribute__((unused)) static inline int __reduce_min_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 102
{ } 
#endif
# 103 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_80_rt.h"
__attribute__((unused)) static inline int __reduce_max_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 103
{ } 
#endif
# 105 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_80_rt.h"
__attribute__((unused)) static inline unsigned __reduce_and_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 105
{ } 
#endif
# 106 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_80_rt.h"
__attribute__((unused)) static inline unsigned __reduce_or_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 106
{ } 
#endif
# 107 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_80_rt.h"
__attribute__((unused)) static inline unsigned __reduce_xor_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 107
{ } 
#endif
# 112 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_80_rt.h"
extern "C" {
# 113
__attribute__((unused)) inline void *__nv_associate_access_property(const void *ptr, unsigned long long 
# 114
property) {int volatile ___ = 1;(void)ptr;(void)property;
# 118
::exit(___);}
#if 0
# 114
{ 
# 115
__attribute__((unused)) extern void *__nv_associate_access_property_impl(const void *, unsigned long long); 
# 117
return __nv_associate_access_property_impl(ptr, property); 
# 118
} 
#endif
# 120 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_80_rt.h"
__attribute__((unused)) inline void __nv_memcpy_async_shared_global_4(void *dst, const void *
# 121
src, unsigned 
# 122
src_size) {int volatile ___ = 1;(void)dst;(void)src;(void)src_size;
# 127
::exit(___);}
#if 0
# 122
{ 
# 123
__attribute__((unused)) extern void __nv_memcpy_async_shared_global_4_impl(void *, const void *, unsigned); 
# 126
__nv_memcpy_async_shared_global_4_impl(dst, src, src_size); 
# 127
} 
#endif
# 129 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_80_rt.h"
__attribute__((unused)) inline void __nv_memcpy_async_shared_global_8(void *dst, const void *
# 130
src, unsigned 
# 131
src_size) {int volatile ___ = 1;(void)dst;(void)src;(void)src_size;
# 136
::exit(___);}
#if 0
# 131
{ 
# 132
__attribute__((unused)) extern void __nv_memcpy_async_shared_global_8_impl(void *, const void *, unsigned); 
# 135
__nv_memcpy_async_shared_global_8_impl(dst, src, src_size); 
# 136
} 
#endif
# 138 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_80_rt.h"
__attribute__((unused)) inline void __nv_memcpy_async_shared_global_16(void *dst, const void *
# 139
src, unsigned 
# 140
src_size) {int volatile ___ = 1;(void)dst;(void)src;(void)src_size;
# 145
::exit(___);}
#if 0
# 140
{ 
# 141
__attribute__((unused)) extern void __nv_memcpy_async_shared_global_16_impl(void *, const void *, unsigned); 
# 144
__nv_memcpy_async_shared_global_16_impl(dst, src, src_size); 
# 145
} 
#endif
# 147 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_80_rt.h"
}
# 92 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline unsigned __isCtaShared(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 92
{ } 
#endif
# 93 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline unsigned __isClusterShared(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 93
{ } 
#endif
# 94 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline void *__cluster_map_shared_rank(const void *ptr, unsigned target_block_rank) {int volatile ___ = 1;(void)ptr;(void)target_block_rank;::exit(___);}
#if 0
# 94
{ } 
#endif
# 95 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline unsigned __cluster_query_shared_rank(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 95
{ } 
#endif
# 96 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline uint2 __cluster_map_shared_multicast(const void *ptr, unsigned cluster_cta_mask) {int volatile ___ = 1;(void)ptr;(void)cluster_cta_mask;::exit(___);}
#if 0
# 96
{ } 
#endif
# 97 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline unsigned __clusterDimIsSpecified() {int volatile ___ = 1;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline dim3 __clusterDim() {int volatile ___ = 1;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline dim3 __clusterRelativeBlockIdx() {int volatile ___ = 1;::exit(___);}
#if 0
# 99
{ } 
#endif
# 100 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline dim3 __clusterGridDimInClusters() {int volatile ___ = 1;::exit(___);}
#if 0
# 100
{ } 
#endif
# 101 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline dim3 __clusterIdx() {int volatile ___ = 1;::exit(___);}
#if 0
# 101
{ } 
#endif
# 102 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline unsigned __clusterRelativeBlockRank() {int volatile ___ = 1;::exit(___);}
#if 0
# 102
{ } 
#endif
# 103 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline unsigned __clusterSizeInBlocks() {int volatile ___ = 1;::exit(___);}
#if 0
# 103
{ } 
#endif
# 104 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline void __cluster_barrier_arrive() {int volatile ___ = 1;::exit(___);}
#if 0
# 104
{ } 
#endif
# 105 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline void __cluster_barrier_arrive_relaxed() {int volatile ___ = 1;::exit(___);}
#if 0
# 105
{ } 
#endif
# 106 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline void __cluster_barrier_wait() {int volatile ___ = 1;::exit(___);}
#if 0
# 106
{ } 
#endif
# 107 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline void __threadfence_cluster() {int volatile ___ = 1;::exit(___);}
#if 0
# 107
{ } 
#endif
# 109 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline float2 atomicAdd(float2 *__address, float2 val) {int volatile ___ = 1;(void)__address;(void)val;::exit(___);}
#if 0
# 109
{ } 
#endif
# 110 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline float2 atomicAdd_block(float2 *__address, float2 val) {int volatile ___ = 1;(void)__address;(void)val;::exit(___);}
#if 0
# 110
{ } 
#endif
# 111 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline float2 atomicAdd_system(float2 *__address, float2 val) {int volatile ___ = 1;(void)__address;(void)val;::exit(___);}
#if 0
# 111
{ } 
#endif
# 112 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline float4 atomicAdd(float4 *__address, float4 val) {int volatile ___ = 1;(void)__address;(void)val;::exit(___);}
#if 0
# 112
{ } 
#endif
# 113 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline float4 atomicAdd_block(float4 *__address, float4 val) {int volatile ___ = 1;(void)__address;(void)val;::exit(___);}
#if 0
# 113
{ } 
#endif
# 114 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
__attribute__((unused)) static inline float4 atomicAdd_system(float4 *__address, float4 val) {int volatile ___ = 1;(void)__address;(void)val;::exit(___);}
#if 0
# 114
{ } 
#endif
# 125 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
extern "C" {
# 132
}
# 139
template< bool __b, class _T> 
# 140
struct __nv_atomic_enable_if { }; 
# 142
template< class _T> 
# 143
struct __nv_atomic_enable_if< true, _T>  { typedef _T __type; }; 
# 153 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
template< class _T> 
# 154
struct __nv_atomic_triv_cp_helper { 
# 161
static const bool __val = __is_trivially_copyable(_T); 
# 166
}; 
# 201 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
template< class _T> __attribute__((unused)) static inline typename __nv_atomic_enable_if< (sizeof(_T) == (16)) && (__alignof__(_T) >= (16)) && __nv_atomic_triv_cp_helper< _T> ::__val, _T> ::__type 
# 203
atomicCAS(_T *__address, _T __compare, _T __val) {int volatile ___ = 1;(void)__address;(void)__compare;(void)__val;
# 210
::exit(___);}
#if 0
# 203
{ 
# 204
union _U { _T __ret; _U() {int *volatile ___ = 0;::free(___);}
#if 0
# 204
{ } 
#endif
# 204 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
}; _U __u; 
# 205
__u128AtomicCAS((void *)__address, (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__compare)))), (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__val)))), (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__u.__ret))))); 
# 209
return __u.__ret; 
# 210
} 
#endif
# 212 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
template< class _T> __attribute__((unused)) static inline typename __nv_atomic_enable_if< (sizeof(_T) == (16)) && (__alignof__(_T) >= (16)) && __nv_atomic_triv_cp_helper< _T> ::__val, _T> ::__type 
# 214
atomicCAS_block(_T *__address, _T __compare, _T __val) {int volatile ___ = 1;(void)__address;(void)__compare;(void)__val;
# 221
::exit(___);}
#if 0
# 214
{ 
# 215
union _U { _T __ret; _U() {int *volatile ___ = 0;::free(___);}
#if 0
# 215
{ } 
#endif
# 215 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
}; _U __u; 
# 216
__u128AtomicCAS_block((void *)__address, (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__compare)))), (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__val)))), (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__u.__ret))))); 
# 220
return __u.__ret; 
# 221
} 
#endif
# 223 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
template< class _T> __attribute__((unused)) static inline typename __nv_atomic_enable_if< (sizeof(_T) == (16)) && (__alignof__(_T) >= (16)) && __nv_atomic_triv_cp_helper< _T> ::__val, _T> ::__type 
# 225
atomicCAS_system(_T *__address, _T __compare, _T __val) {int volatile ___ = 1;(void)__address;(void)__compare;(void)__val;
# 232
::exit(___);}
#if 0
# 225
{ 
# 226
union _U { _T __ret; _U() {int *volatile ___ = 0;::free(___);}
#if 0
# 226
{ } 
#endif
# 226 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
}; _U __u; 
# 227
__u128AtomicCAS_system((void *)__address, (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__compare)))), (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__val)))), (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__u.__ret))))); 
# 231
return __u.__ret; 
# 232
} 
#endif
# 234 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
template< class _T> __attribute__((unused)) static inline typename __nv_atomic_enable_if< (sizeof(_T) == (16)) && (__alignof__(_T) >= (16)) && __nv_atomic_triv_cp_helper< _T> ::__val, _T> ::__type 
# 236
atomicExch(_T *__address, _T __val) {int volatile ___ = 1;(void)__address;(void)__val;
# 242
::exit(___);}
#if 0
# 236
{ 
# 237
union _U { _T __ret; _U() {int *volatile ___ = 0;::free(___);}
#if 0
# 237
{ } 
#endif
# 237 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
}; _U __u; 
# 238
__u128AtomicExch((void *)__address, (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__val)))), (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__u.__ret))))); 
# 241
return __u.__ret; 
# 242
} 
#endif
# 244 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
template< class _T> __attribute__((unused)) static inline typename __nv_atomic_enable_if< (sizeof(_T) == (16)) && (__alignof__(_T) >= (16)) && __nv_atomic_triv_cp_helper< _T> ::__val, _T> ::__type 
# 246
atomicExch_block(_T *__address, _T __val) {int volatile ___ = 1;(void)__address;(void)__val;
# 252
::exit(___);}
#if 0
# 246
{ 
# 247
union _U { _T __ret; _U() {int *volatile ___ = 0;::free(___);}
#if 0
# 247
{ } 
#endif
# 247 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
}; _U __u; 
# 248
__u128AtomicExch_block((void *)__address, (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__val)))), (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__u.__ret))))); 
# 251
return __u.__ret; 
# 252
} 
#endif
# 254 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
template< class _T> __attribute__((unused)) static inline typename __nv_atomic_enable_if< (sizeof(_T) == (16)) && (__alignof__(_T) >= (16)) && __nv_atomic_triv_cp_helper< _T> ::__val, _T> ::__type 
# 256
atomicExch_system(_T *__address, _T __val) {int volatile ___ = 1;(void)__address;(void)__val;
# 262
::exit(___);}
#if 0
# 256
{ 
# 257
union _U { _T __ret; _U() {int *volatile ___ = 0;::free(___);}
#if 0
# 257
{ } 
#endif
# 257 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/sm_90_rt.h"
}; _U __u; 
# 258
__u128AtomicExch_system((void *)__address, (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__val)))), (void *)(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__u.__ret))))); 
# 261
return __u.__ret; 
# 262
} 
#endif
# 65 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> struct __nv_itex_trait { }; 
# 66
template<> struct __nv_itex_trait< char>  { typedef void type; }; 
# 67
template<> struct __nv_itex_trait< signed char>  { typedef void type; }; 
# 68
template<> struct __nv_itex_trait< char1>  { typedef void type; }; 
# 69
template<> struct __nv_itex_trait< char2>  { typedef void type; }; 
# 70
template<> struct __nv_itex_trait< char4>  { typedef void type; }; 
# 71
template<> struct __nv_itex_trait< unsigned char>  { typedef void type; }; 
# 72
template<> struct __nv_itex_trait< uchar1>  { typedef void type; }; 
# 73
template<> struct __nv_itex_trait< uchar2>  { typedef void type; }; 
# 74
template<> struct __nv_itex_trait< uchar4>  { typedef void type; }; 
# 75
template<> struct __nv_itex_trait< short>  { typedef void type; }; 
# 76
template<> struct __nv_itex_trait< short1>  { typedef void type; }; 
# 77
template<> struct __nv_itex_trait< short2>  { typedef void type; }; 
# 78
template<> struct __nv_itex_trait< short4>  { typedef void type; }; 
# 79
template<> struct __nv_itex_trait< unsigned short>  { typedef void type; }; 
# 80
template<> struct __nv_itex_trait< ushort1>  { typedef void type; }; 
# 81
template<> struct __nv_itex_trait< ushort2>  { typedef void type; }; 
# 82
template<> struct __nv_itex_trait< ushort4>  { typedef void type; }; 
# 83
template<> struct __nv_itex_trait< int>  { typedef void type; }; 
# 84
template<> struct __nv_itex_trait< int1>  { typedef void type; }; 
# 85
template<> struct __nv_itex_trait< int2>  { typedef void type; }; 
# 86
template<> struct __nv_itex_trait< int4>  { typedef void type; }; 
# 87
template<> struct __nv_itex_trait< unsigned>  { typedef void type; }; 
# 88
template<> struct __nv_itex_trait< uint1>  { typedef void type; }; 
# 89
template<> struct __nv_itex_trait< uint2>  { typedef void type; }; 
# 90
template<> struct __nv_itex_trait< uint4>  { typedef void type; }; 
# 101 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template<> struct __nv_itex_trait< float>  { typedef void type; }; 
# 102
template<> struct __nv_itex_trait< float1>  { typedef void type; }; 
# 103
template<> struct __nv_itex_trait< float2>  { typedef void type; }; 
# 104
template<> struct __nv_itex_trait< float4>  { typedef void type; }; 
# 108
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 109
tex1Dfetch(T *ptr, cudaTextureObject_t obj, int x) 
# 110
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;
# 112
::exit(___);}
#if 0
# 110
{ 
# 111
__nv_tex_surf_handler("__itex1Dfetch", ptr, obj, x); 
# 112
} 
#endif
# 114 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 115
tex1Dfetch(cudaTextureObject_t texObject, int x) 
# 116
{int volatile ___ = 1;(void)texObject;(void)x;
# 120
::exit(___);}
#if 0
# 116
{ 
# 117
T ret; 
# 118
tex1Dfetch(&ret, texObject, x); 
# 119
return ret; 
# 120
} 
#endif
# 122 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 123
tex1D(T *ptr, cudaTextureObject_t obj, float x) 
# 124
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;
# 126
::exit(___);}
#if 0
# 124
{ 
# 125
__nv_tex_surf_handler("__itex1D", ptr, obj, x); 
# 126
} 
#endif
# 129 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 130
tex1D(cudaTextureObject_t texObject, float x) 
# 131
{int volatile ___ = 1;(void)texObject;(void)x;
# 135
::exit(___);}
#if 0
# 131
{ 
# 132
T ret; 
# 133
tex1D(&ret, texObject, x); 
# 134
return ret; 
# 135
} 
#endif
# 138 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 139
tex2D(T *ptr, cudaTextureObject_t obj, float x, float y) 
# 140
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;
# 142
::exit(___);}
#if 0
# 140
{ 
# 141
__nv_tex_surf_handler("__itex2D", ptr, obj, x, y); 
# 142
} 
#endif
# 144 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 145
tex2D(cudaTextureObject_t texObject, float x, float y) 
# 146
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;
# 150
::exit(___);}
#if 0
# 146
{ 
# 147
T ret; 
# 148
tex2D(&ret, texObject, x, y); 
# 149
return ret; 
# 150
} 
#endif
# 153 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 154
tex2D(T *ptr, cudaTextureObject_t obj, float x, float y, bool *
# 155
isResident) 
# 156
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)isResident;
# 160
::exit(___);}
#if 0
# 156
{ 
# 157
unsigned char res; 
# 158
__nv_tex_surf_handler("__itex2D_sparse", ptr, obj, x, y, &res); 
# 159
(*isResident) = (res != 0); 
# 160
} 
#endif
# 162 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 163
tex2D(cudaTextureObject_t texObject, float x, float y, bool *isResident) 
# 164
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)isResident;
# 168
::exit(___);}
#if 0
# 164
{ 
# 165
T ret; 
# 166
tex2D(&ret, texObject, x, y, isResident); 
# 167
return ret; 
# 168
} 
#endif
# 173 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 174
tex3D(T *ptr, cudaTextureObject_t obj, float x, float y, float z) 
# 175
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;
# 177
::exit(___);}
#if 0
# 175
{ 
# 176
__nv_tex_surf_handler("__itex3D", ptr, obj, x, y, z); 
# 177
} 
#endif
# 179 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 180
tex3D(cudaTextureObject_t texObject, float x, float y, float z) 
# 181
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;
# 185
::exit(___);}
#if 0
# 181
{ 
# 182
T ret; 
# 183
tex3D(&ret, texObject, x, y, z); 
# 184
return ret; 
# 185
} 
#endif
# 188 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 189
tex3D(T *ptr, cudaTextureObject_t obj, float x, float y, float z, bool *
# 190
isResident) 
# 191
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)isResident;
# 195
::exit(___);}
#if 0
# 191
{ 
# 192
unsigned char res; 
# 193
__nv_tex_surf_handler("__itex3D_sparse", ptr, obj, x, y, z, &res); 
# 194
(*isResident) = (res != 0); 
# 195
} 
#endif
# 197 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 198
tex3D(cudaTextureObject_t texObject, float x, float y, float z, bool *isResident) 
# 199
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)isResident;
# 203
::exit(___);}
#if 0
# 199
{ 
# 200
T ret; 
# 201
tex3D(&ret, texObject, x, y, z, isResident); 
# 202
return ret; 
# 203
} 
#endif
# 207 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 208
tex1DLayered(T *ptr, cudaTextureObject_t obj, float x, int layer) 
# 209
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;
# 211
::exit(___);}
#if 0
# 209
{ 
# 210
__nv_tex_surf_handler("__itex1DLayered", ptr, obj, x, layer); 
# 211
} 
#endif
# 213 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 214
tex1DLayered(cudaTextureObject_t texObject, float x, int layer) 
# 215
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;
# 219
::exit(___);}
#if 0
# 215
{ 
# 216
T ret; 
# 217
tex1DLayered(&ret, texObject, x, layer); 
# 218
return ret; 
# 219
} 
#endif
# 221 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 222
tex2DLayered(T *ptr, cudaTextureObject_t obj, float x, float y, int layer) 
# 223
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;
# 225
::exit(___);}
#if 0
# 223
{ 
# 224
__nv_tex_surf_handler("__itex2DLayered", ptr, obj, x, y, layer); 
# 225
} 
#endif
# 227 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 228
tex2DLayered(cudaTextureObject_t texObject, float x, float y, int layer) 
# 229
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;
# 233
::exit(___);}
#if 0
# 229
{ 
# 230
T ret; 
# 231
tex2DLayered(&ret, texObject, x, y, layer); 
# 232
return ret; 
# 233
} 
#endif
# 236 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 237
tex2DLayered(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, bool *isResident) 
# 238
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)isResident;
# 242
::exit(___);}
#if 0
# 238
{ 
# 239
unsigned char res; 
# 240
__nv_tex_surf_handler("__itex2DLayered_sparse", ptr, obj, x, y, layer, &res); 
# 241
(*isResident) = (res != 0); 
# 242
} 
#endif
# 244 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 245
tex2DLayered(cudaTextureObject_t texObject, float x, float y, int layer, bool *isResident) 
# 246
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)isResident;
# 250
::exit(___);}
#if 0
# 246
{ 
# 247
T ret; 
# 248
tex2DLayered(&ret, texObject, x, y, layer, isResident); 
# 249
return ret; 
# 250
} 
#endif
# 254 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 255
texCubemap(T *ptr, cudaTextureObject_t obj, float x, float y, float z) 
# 256
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;
# 258
::exit(___);}
#if 0
# 256
{ 
# 257
__nv_tex_surf_handler("__itexCubemap", ptr, obj, x, y, z); 
# 258
} 
#endif
# 261 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 262
texCubemap(cudaTextureObject_t texObject, float x, float y, float z) 
# 263
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;
# 267
::exit(___);}
#if 0
# 263
{ 
# 264
T ret; 
# 265
texCubemap(&ret, texObject, x, y, z); 
# 266
return ret; 
# 267
} 
#endif
# 270 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 271
texCubemapLayered(T *ptr, cudaTextureObject_t obj, float x, float y, float z, int layer) 
# 272
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;
# 274
::exit(___);}
#if 0
# 272
{ 
# 273
__nv_tex_surf_handler("__itexCubemapLayered", ptr, obj, x, y, z, layer); 
# 274
} 
#endif
# 276 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 277
texCubemapLayered(cudaTextureObject_t texObject, float x, float y, float z, int layer) 
# 278
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;
# 282
::exit(___);}
#if 0
# 278
{ 
# 279
T ret; 
# 280
texCubemapLayered(&ret, texObject, x, y, z, layer); 
# 281
return ret; 
# 282
} 
#endif
# 284 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 285
tex2Dgather(T *ptr, cudaTextureObject_t obj, float x, float y, int comp = 0) 
# 286
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)comp;
# 288
::exit(___);}
#if 0
# 286
{ 
# 287
__nv_tex_surf_handler("__itex2Dgather", ptr, obj, x, y, comp); 
# 288
} 
#endif
# 290 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 291
tex2Dgather(cudaTextureObject_t to, float x, float y, int comp = 0) 
# 292
{int volatile ___ = 1;(void)to;(void)x;(void)y;(void)comp;
# 296
::exit(___);}
#if 0
# 292
{ 
# 293
T ret; 
# 294
tex2Dgather(&ret, to, x, y, comp); 
# 295
return ret; 
# 296
} 
#endif
# 299 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 300
tex2Dgather(T *ptr, cudaTextureObject_t obj, float x, float y, bool *isResident, int comp = 0) 
# 301
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)isResident;(void)comp;
# 305
::exit(___);}
#if 0
# 301
{ 
# 302
unsigned char res; 
# 303
__nv_tex_surf_handler("__itex2Dgather_sparse", ptr, obj, x, y, comp, &res); 
# 304
(*isResident) = (res != 0); 
# 305
} 
#endif
# 307 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 308
tex2Dgather(cudaTextureObject_t to, float x, float y, bool *isResident, int comp = 0) 
# 309
{int volatile ___ = 1;(void)to;(void)x;(void)y;(void)isResident;(void)comp;
# 313
::exit(___);}
#if 0
# 309
{ 
# 310
T ret; 
# 311
tex2Dgather(&ret, to, x, y, isResident, comp); 
# 312
return ret; 
# 313
} 
#endif
# 317 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 318
tex1DLod(T *ptr, cudaTextureObject_t obj, float x, float level) 
# 319
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)level;
# 321
::exit(___);}
#if 0
# 319
{ 
# 320
__nv_tex_surf_handler("__itex1DLod", ptr, obj, x, level); 
# 321
} 
#endif
# 323 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 324
tex1DLod(cudaTextureObject_t texObject, float x, float level) 
# 325
{int volatile ___ = 1;(void)texObject;(void)x;(void)level;
# 329
::exit(___);}
#if 0
# 325
{ 
# 326
T ret; 
# 327
tex1DLod(&ret, texObject, x, level); 
# 328
return ret; 
# 329
} 
#endif
# 332 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 333
tex2DLod(T *ptr, cudaTextureObject_t obj, float x, float y, float level) 
# 334
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)level;
# 336
::exit(___);}
#if 0
# 334
{ 
# 335
__nv_tex_surf_handler("__itex2DLod", ptr, obj, x, y, level); 
# 336
} 
#endif
# 338 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 339
tex2DLod(cudaTextureObject_t texObject, float x, float y, float level) 
# 340
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)level;
# 344
::exit(___);}
#if 0
# 340
{ 
# 341
T ret; 
# 342
tex2DLod(&ret, texObject, x, y, level); 
# 343
return ret; 
# 344
} 
#endif
# 348 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 349
tex2DLod(T *ptr, cudaTextureObject_t obj, float x, float y, float level, bool *isResident) 
# 350
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)level;(void)isResident;
# 354
::exit(___);}
#if 0
# 350
{ 
# 351
unsigned char res; 
# 352
__nv_tex_surf_handler("__itex2DLod_sparse", ptr, obj, x, y, level, &res); 
# 353
(*isResident) = (res != 0); 
# 354
} 
#endif
# 356 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 357
tex2DLod(cudaTextureObject_t texObject, float x, float y, float level, bool *isResident) 
# 358
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)level;(void)isResident;
# 362
::exit(___);}
#if 0
# 358
{ 
# 359
T ret; 
# 360
tex2DLod(&ret, texObject, x, y, level, isResident); 
# 361
return ret; 
# 362
} 
#endif
# 367 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 368
tex3DLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float level) 
# 369
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;
# 371
::exit(___);}
#if 0
# 369
{ 
# 370
__nv_tex_surf_handler("__itex3DLod", ptr, obj, x, y, z, level); 
# 371
} 
#endif
# 373 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 374
tex3DLod(cudaTextureObject_t texObject, float x, float y, float z, float level) 
# 375
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;
# 379
::exit(___);}
#if 0
# 375
{ 
# 376
T ret; 
# 377
tex3DLod(&ret, texObject, x, y, z, level); 
# 378
return ret; 
# 379
} 
#endif
# 382 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 383
tex3DLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float level, bool *isResident) 
# 384
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;(void)isResident;
# 388
::exit(___);}
#if 0
# 384
{ 
# 385
unsigned char res; 
# 386
__nv_tex_surf_handler("__itex3DLod_sparse", ptr, obj, x, y, z, level, &res); 
# 387
(*isResident) = (res != 0); 
# 388
} 
#endif
# 390 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 391
tex3DLod(cudaTextureObject_t texObject, float x, float y, float z, float level, bool *isResident) 
# 392
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;(void)isResident;
# 396
::exit(___);}
#if 0
# 392
{ 
# 393
T ret; 
# 394
tex3DLod(&ret, texObject, x, y, z, level, isResident); 
# 395
return ret; 
# 396
} 
#endif
# 401 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 402
tex1DLayeredLod(T *ptr, cudaTextureObject_t obj, float x, int layer, float level) 
# 403
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)level;
# 405
::exit(___);}
#if 0
# 403
{ 
# 404
__nv_tex_surf_handler("__itex1DLayeredLod", ptr, obj, x, layer, level); 
# 405
} 
#endif
# 407 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 408
tex1DLayeredLod(cudaTextureObject_t texObject, float x, int layer, float level) 
# 409
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)level;
# 413
::exit(___);}
#if 0
# 409
{ 
# 410
T ret; 
# 411
tex1DLayeredLod(&ret, texObject, x, layer, level); 
# 412
return ret; 
# 413
} 
#endif
# 416 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 417
tex2DLayeredLod(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, float level) 
# 418
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)level;
# 420
::exit(___);}
#if 0
# 418
{ 
# 419
__nv_tex_surf_handler("__itex2DLayeredLod", ptr, obj, x, y, layer, level); 
# 420
} 
#endif
# 422 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 423
tex2DLayeredLod(cudaTextureObject_t texObject, float x, float y, int layer, float level) 
# 424
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)level;
# 428
::exit(___);}
#if 0
# 424
{ 
# 425
T ret; 
# 426
tex2DLayeredLod(&ret, texObject, x, y, layer, level); 
# 427
return ret; 
# 428
} 
#endif
# 431 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 432
tex2DLayeredLod(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, float level, bool *isResident) 
# 433
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)level;(void)isResident;
# 437
::exit(___);}
#if 0
# 433
{ 
# 434
unsigned char res; 
# 435
__nv_tex_surf_handler("__itex2DLayeredLod_sparse", ptr, obj, x, y, layer, level, &res); 
# 436
(*isResident) = (res != 0); 
# 437
} 
#endif
# 439 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 440
tex2DLayeredLod(cudaTextureObject_t texObject, float x, float y, int layer, float level, bool *isResident) 
# 441
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)level;(void)isResident;
# 445
::exit(___);}
#if 0
# 441
{ 
# 442
T ret; 
# 443
tex2DLayeredLod(&ret, texObject, x, y, layer, level, isResident); 
# 444
return ret; 
# 445
} 
#endif
# 448 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 449
texCubemapLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float level) 
# 450
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;
# 452
::exit(___);}
#if 0
# 450
{ 
# 451
__nv_tex_surf_handler("__itexCubemapLod", ptr, obj, x, y, z, level); 
# 452
} 
#endif
# 454 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 455
texCubemapLod(cudaTextureObject_t texObject, float x, float y, float z, float level) 
# 456
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;
# 460
::exit(___);}
#if 0
# 456
{ 
# 457
T ret; 
# 458
texCubemapLod(&ret, texObject, x, y, z, level); 
# 459
return ret; 
# 460
} 
#endif
# 463 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 464
texCubemapGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 465
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 467
::exit(___);}
#if 0
# 465
{ 
# 466
__nv_tex_surf_handler("__itexCubemapGrad_v2", ptr, obj, x, y, z, &dPdx, &dPdy); 
# 467
} 
#endif
# 469 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 470
texCubemapGrad(cudaTextureObject_t texObject, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 471
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 475
::exit(___);}
#if 0
# 471
{ 
# 472
T ret; 
# 473
texCubemapGrad(&ret, texObject, x, y, z, dPdx, dPdy); 
# 474
return ret; 
# 475
} 
#endif
# 477 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 478
texCubemapLayeredLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, int layer, float level) 
# 479
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 481
::exit(___);}
#if 0
# 479
{ 
# 480
__nv_tex_surf_handler("__itexCubemapLayeredLod", ptr, obj, x, y, z, layer, level); 
# 481
} 
#endif
# 483 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 484
texCubemapLayeredLod(cudaTextureObject_t texObject, float x, float y, float z, int layer, float level) 
# 485
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 489
::exit(___);}
#if 0
# 485
{ 
# 486
T ret; 
# 487
texCubemapLayeredLod(&ret, texObject, x, y, z, layer, level); 
# 488
return ret; 
# 489
} 
#endif
# 491 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 492
tex1DGrad(T *ptr, cudaTextureObject_t obj, float x, float dPdx, float dPdy) 
# 493
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)dPdx;(void)dPdy;
# 495
::exit(___);}
#if 0
# 493
{ 
# 494
__nv_tex_surf_handler("__itex1DGrad", ptr, obj, x, dPdx, dPdy); 
# 495
} 
#endif
# 497 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 498
tex1DGrad(cudaTextureObject_t texObject, float x, float dPdx, float dPdy) 
# 499
{int volatile ___ = 1;(void)texObject;(void)x;(void)dPdx;(void)dPdy;
# 503
::exit(___);}
#if 0
# 499
{ 
# 500
T ret; 
# 501
tex1DGrad(&ret, texObject, x, dPdx, dPdy); 
# 502
return ret; 
# 503
} 
#endif
# 506 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 507
tex2DGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float2 dPdx, float2 dPdy) 
# 508
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 510
::exit(___);}
#if 0
# 508
{ 
# 509
__nv_tex_surf_handler("__itex2DGrad_v2", ptr, obj, x, y, &dPdx, &dPdy); 
# 510
} 
#endif
# 512 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 513
tex2DGrad(cudaTextureObject_t texObject, float x, float y, float2 dPdx, float2 dPdy) 
# 514
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 518
::exit(___);}
#if 0
# 514
{ 
# 515
T ret; 
# 516
tex2DGrad(&ret, texObject, x, y, dPdx, dPdy); 
# 517
return ret; 
# 518
} 
#endif
# 521 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 522
tex2DGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float2 dPdx, float2 dPdy, bool *isResident) 
# 523
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)dPdx;(void)dPdy;(void)isResident;
# 527
::exit(___);}
#if 0
# 523
{ 
# 524
unsigned char res; 
# 525
__nv_tex_surf_handler("__itex2DGrad_sparse", ptr, obj, x, y, &dPdx, &dPdy, &res); 
# 526
(*isResident) = (res != 0); 
# 527
} 
#endif
# 529 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 530
tex2DGrad(cudaTextureObject_t texObject, float x, float y, float2 dPdx, float2 dPdy, bool *isResident) 
# 531
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)dPdx;(void)dPdy;(void)isResident;
# 535
::exit(___);}
#if 0
# 531
{ 
# 532
T ret; 
# 533
tex2DGrad(&ret, texObject, x, y, dPdx, dPdy, isResident); 
# 534
return ret; 
# 535
} 
#endif
# 539 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 540
tex3DGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 541
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 543
::exit(___);}
#if 0
# 541
{ 
# 542
__nv_tex_surf_handler("__itex3DGrad_v2", ptr, obj, x, y, z, &dPdx, &dPdy); 
# 543
} 
#endif
# 545 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 546
tex3DGrad(cudaTextureObject_t texObject, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 547
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 551
::exit(___);}
#if 0
# 547
{ 
# 548
T ret; 
# 549
tex3DGrad(&ret, texObject, x, y, z, dPdx, dPdy); 
# 550
return ret; 
# 551
} 
#endif
# 554 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 555
tex3DGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float4 dPdx, float4 dPdy, bool *isResident) 
# 556
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;(void)isResident;
# 560
::exit(___);}
#if 0
# 556
{ 
# 557
unsigned char res; 
# 558
__nv_tex_surf_handler("__itex3DGrad_sparse", ptr, obj, x, y, z, &dPdx, &dPdy, &res); 
# 559
(*isResident) = (res != 0); 
# 560
} 
#endif
# 562 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 563
tex3DGrad(cudaTextureObject_t texObject, float x, float y, float z, float4 dPdx, float4 dPdy, bool *isResident) 
# 564
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;(void)isResident;
# 568
::exit(___);}
#if 0
# 564
{ 
# 565
T ret; 
# 566
tex3DGrad(&ret, texObject, x, y, z, dPdx, dPdy, isResident); 
# 567
return ret; 
# 568
} 
#endif
# 573 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 574
tex1DLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, int layer, float dPdx, float dPdy) 
# 575
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 577
::exit(___);}
#if 0
# 575
{ 
# 576
__nv_tex_surf_handler("__itex1DLayeredGrad", ptr, obj, x, layer, dPdx, dPdy); 
# 577
} 
#endif
# 579 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 580
tex1DLayeredGrad(cudaTextureObject_t texObject, float x, int layer, float dPdx, float dPdy) 
# 581
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 585
::exit(___);}
#if 0
# 581
{ 
# 582
T ret; 
# 583
tex1DLayeredGrad(&ret, texObject, x, layer, dPdx, dPdy); 
# 584
return ret; 
# 585
} 
#endif
# 588 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 589
tex2DLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 590
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 592
::exit(___);}
#if 0
# 590
{ 
# 591
__nv_tex_surf_handler("__itex2DLayeredGrad_v2", ptr, obj, x, y, layer, &dPdx, &dPdy); 
# 592
} 
#endif
# 594 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 595
tex2DLayeredGrad(cudaTextureObject_t texObject, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 596
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 600
::exit(___);}
#if 0
# 596
{ 
# 597
T ret; 
# 598
tex2DLayeredGrad(&ret, texObject, x, y, layer, dPdx, dPdy); 
# 599
return ret; 
# 600
} 
#endif
# 603 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 604
tex2DLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, float2 dPdx, float2 dPdy, bool *isResident) 
# 605
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;(void)isResident;
# 609
::exit(___);}
#if 0
# 605
{ 
# 606
unsigned char res; 
# 607
__nv_tex_surf_handler("__itex2DLayeredGrad_sparse", ptr, obj, x, y, layer, &dPdx, &dPdy, &res); 
# 608
(*isResident) = (res != 0); 
# 609
} 
#endif
# 611 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 612
tex2DLayeredGrad(cudaTextureObject_t texObject, float x, float y, int layer, float2 dPdx, float2 dPdy, bool *isResident) 
# 613
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;(void)isResident;
# 617
::exit(___);}
#if 0
# 613
{ 
# 614
T ret; 
# 615
tex2DLayeredGrad(&ret, texObject, x, y, layer, dPdx, dPdy, isResident); 
# 616
return ret; 
# 617
} 
#endif
# 621 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 622
texCubemapLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, int layer, float4 dPdx, float4 dPdy) 
# 623
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
# 625
::exit(___);}
#if 0
# 623
{ 
# 624
__nv_tex_surf_handler("__itexCubemapLayeredGrad_v2", ptr, obj, x, y, z, layer, &dPdx, &dPdy); 
# 625
} 
#endif
# 627 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 628
texCubemapLayeredGrad(cudaTextureObject_t texObject, float x, float y, float z, int layer, float4 dPdx, float4 dPdy) 
# 629
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
# 633
::exit(___);}
#if 0
# 629
{ 
# 630
T ret; 
# 631
texCubemapLayeredGrad(&ret, texObject, x, y, z, layer, dPdx, dPdy); 
# 632
return ret; 
# 633
} 
#endif
# 58 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/surface_indirect_functions.h"
template< class T> struct __nv_isurf_trait { }; 
# 59
template<> struct __nv_isurf_trait< char>  { typedef void type; }; 
# 60
template<> struct __nv_isurf_trait< signed char>  { typedef void type; }; 
# 61
template<> struct __nv_isurf_trait< char1>  { typedef void type; }; 
# 62
template<> struct __nv_isurf_trait< unsigned char>  { typedef void type; }; 
# 63
template<> struct __nv_isurf_trait< uchar1>  { typedef void type; }; 
# 64
template<> struct __nv_isurf_trait< short>  { typedef void type; }; 
# 65
template<> struct __nv_isurf_trait< short1>  { typedef void type; }; 
# 66
template<> struct __nv_isurf_trait< unsigned short>  { typedef void type; }; 
# 67
template<> struct __nv_isurf_trait< ushort1>  { typedef void type; }; 
# 68
template<> struct __nv_isurf_trait< int>  { typedef void type; }; 
# 69
template<> struct __nv_isurf_trait< int1>  { typedef void type; }; 
# 70
template<> struct __nv_isurf_trait< unsigned>  { typedef void type; }; 
# 71
template<> struct __nv_isurf_trait< uint1>  { typedef void type; }; 
# 72
template<> struct __nv_isurf_trait< long long>  { typedef void type; }; 
# 73
template<> struct __nv_isurf_trait< longlong1>  { typedef void type; }; 
# 74
template<> struct __nv_isurf_trait< unsigned long long>  { typedef void type; }; 
# 75
template<> struct __nv_isurf_trait< ulonglong1>  { typedef void type; }; 
# 76
template<> struct __nv_isurf_trait< float>  { typedef void type; }; 
# 77
template<> struct __nv_isurf_trait< float1>  { typedef void type; }; 
# 79
template<> struct __nv_isurf_trait< char2>  { typedef void type; }; 
# 80
template<> struct __nv_isurf_trait< uchar2>  { typedef void type; }; 
# 81
template<> struct __nv_isurf_trait< short2>  { typedef void type; }; 
# 82
template<> struct __nv_isurf_trait< ushort2>  { typedef void type; }; 
# 83
template<> struct __nv_isurf_trait< int2>  { typedef void type; }; 
# 84
template<> struct __nv_isurf_trait< uint2>  { typedef void type; }; 
# 85
template<> struct __nv_isurf_trait< longlong2>  { typedef void type; }; 
# 86
template<> struct __nv_isurf_trait< ulonglong2>  { typedef void type; }; 
# 87
template<> struct __nv_isurf_trait< float2>  { typedef void type; }; 
# 89
template<> struct __nv_isurf_trait< char4>  { typedef void type; }; 
# 90
template<> struct __nv_isurf_trait< uchar4>  { typedef void type; }; 
# 91
template<> struct __nv_isurf_trait< short4>  { typedef void type; }; 
# 92
template<> struct __nv_isurf_trait< ushort4>  { typedef void type; }; 
# 93
template<> struct __nv_isurf_trait< int4>  { typedef void type; }; 
# 94
template<> struct __nv_isurf_trait< uint4>  { typedef void type; }; 
# 95
template<> struct __nv_isurf_trait< float4>  { typedef void type; }; 
# 98
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 99
surf1Dread(T *ptr, cudaSurfaceObject_t obj, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 100
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)mode;
# 102
::exit(___);}
#if 0
# 100
{ 
# 101
__nv_tex_surf_handler("__isurf1Dread", ptr, obj, x, mode); 
# 102
} 
#endif
# 104 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 105
surf1Dread(cudaSurfaceObject_t surfObject, int x, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 106
{int volatile ___ = 1;(void)surfObject;(void)x;(void)boundaryMode;
# 110
::exit(___);}
#if 0
# 106
{ 
# 107
T ret; 
# 108
surf1Dread(&ret, surfObject, x, boundaryMode); 
# 109
return ret; 
# 110
} 
#endif
# 112 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 113
surf2Dread(T *ptr, cudaSurfaceObject_t obj, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 114
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)mode;
# 116
::exit(___);}
#if 0
# 114
{ 
# 115
__nv_tex_surf_handler("__isurf2Dread", ptr, obj, x, y, mode); 
# 116
} 
#endif
# 118 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 119
surf2Dread(cudaSurfaceObject_t surfObject, int x, int y, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 120
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)boundaryMode;
# 124
::exit(___);}
#if 0
# 120
{ 
# 121
T ret; 
# 122
surf2Dread(&ret, surfObject, x, y, boundaryMode); 
# 123
return ret; 
# 124
} 
#endif
# 127 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 128
surf3Dread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 129
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)mode;
# 131
::exit(___);}
#if 0
# 129
{ 
# 130
__nv_tex_surf_handler("__isurf3Dread", ptr, obj, x, y, z, mode); 
# 131
} 
#endif
# 133 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 134
surf3Dread(cudaSurfaceObject_t surfObject, int x, int y, int z, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 135
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)z;(void)boundaryMode;
# 139
::exit(___);}
#if 0
# 135
{ 
# 136
T ret; 
# 137
surf3Dread(&ret, surfObject, x, y, z, boundaryMode); 
# 138
return ret; 
# 139
} 
#endif
# 141 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 142
surf1DLayeredread(T *ptr, cudaSurfaceObject_t obj, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 143
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)mode;
# 145
::exit(___);}
#if 0
# 143
{ 
# 144
__nv_tex_surf_handler("__isurf1DLayeredread", ptr, obj, x, layer, mode); 
# 145
} 
#endif
# 147 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 148
surf1DLayeredread(cudaSurfaceObject_t surfObject, int x, int layer, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 149
{int volatile ___ = 1;(void)surfObject;(void)x;(void)layer;(void)boundaryMode;
# 153
::exit(___);}
#if 0
# 149
{ 
# 150
T ret; 
# 151
surf1DLayeredread(&ret, surfObject, x, layer, boundaryMode); 
# 152
return ret; 
# 153
} 
#endif
# 155 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 156
surf2DLayeredread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 157
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)mode;
# 159
::exit(___);}
#if 0
# 157
{ 
# 158
__nv_tex_surf_handler("__isurf2DLayeredread", ptr, obj, x, y, layer, mode); 
# 159
} 
#endif
# 161 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 162
surf2DLayeredread(cudaSurfaceObject_t surfObject, int x, int y, int layer, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 163
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layer;(void)boundaryMode;
# 167
::exit(___);}
#if 0
# 163
{ 
# 164
T ret; 
# 165
surf2DLayeredread(&ret, surfObject, x, y, layer, boundaryMode); 
# 166
return ret; 
# 167
} 
#endif
# 169 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 170
surfCubemapread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 171
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)face;(void)mode;
# 173
::exit(___);}
#if 0
# 171
{ 
# 172
__nv_tex_surf_handler("__isurfCubemapread", ptr, obj, x, y, face, mode); 
# 173
} 
#endif
# 175 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 176
surfCubemapread(cudaSurfaceObject_t surfObject, int x, int y, int face, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 177
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)face;(void)boundaryMode;
# 181
::exit(___);}
#if 0
# 177
{ 
# 178
T ret; 
# 179
surfCubemapread(&ret, surfObject, x, y, face, boundaryMode); 
# 180
return ret; 
# 181
} 
#endif
# 183 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 184
surfCubemapLayeredread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int layerface, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 185
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layerface;(void)mode;
# 187
::exit(___);}
#if 0
# 185
{ 
# 186
__nv_tex_surf_handler("__isurfCubemapLayeredread", ptr, obj, x, y, layerface, mode); 
# 187
} 
#endif
# 189 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 190
surfCubemapLayeredread(cudaSurfaceObject_t surfObject, int x, int y, int layerface, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 191
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layerface;(void)boundaryMode;
# 195
::exit(___);}
#if 0
# 191
{ 
# 192
T ret; 
# 193
surfCubemapLayeredread(&ret, surfObject, x, y, layerface, boundaryMode); 
# 194
return ret; 
# 195
} 
#endif
# 197 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 198
surf1Dwrite(T val, cudaSurfaceObject_t obj, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 199
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)mode;
# 201
::exit(___);}
#if 0
# 199
{ 
# 200
__nv_tex_surf_handler("__isurf1Dwrite_v2", &val, obj, x, mode); 
# 201
} 
#endif
# 203 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 204
surf2Dwrite(T val, cudaSurfaceObject_t obj, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 205
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)mode;
# 207
::exit(___);}
#if 0
# 205
{ 
# 206
__nv_tex_surf_handler("__isurf2Dwrite_v2", &val, obj, x, y, mode); 
# 207
} 
#endif
# 209 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 210
surf3Dwrite(T val, cudaSurfaceObject_t obj, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 211
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)z;(void)mode;
# 213
::exit(___);}
#if 0
# 211
{ 
# 212
__nv_tex_surf_handler("__isurf3Dwrite_v2", &val, obj, x, y, z, mode); 
# 213
} 
#endif
# 215 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 216
surf1DLayeredwrite(T val, cudaSurfaceObject_t obj, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 217
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)layer;(void)mode;
# 219
::exit(___);}
#if 0
# 217
{ 
# 218
__nv_tex_surf_handler("__isurf1DLayeredwrite_v2", &val, obj, x, layer, mode); 
# 219
} 
#endif
# 221 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 222
surf2DLayeredwrite(T val, cudaSurfaceObject_t obj, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 223
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)layer;(void)mode;
# 225
::exit(___);}
#if 0
# 223
{ 
# 224
__nv_tex_surf_handler("__isurf2DLayeredwrite_v2", &val, obj, x, y, layer, mode); 
# 225
} 
#endif
# 227 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 228
surfCubemapwrite(T val, cudaSurfaceObject_t obj, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 229
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)face;(void)mode;
# 231
::exit(___);}
#if 0
# 229
{ 
# 230
__nv_tex_surf_handler("__isurfCubemapwrite_v2", &val, obj, x, y, face, mode); 
# 231
} 
#endif
# 233 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 234
surfCubemapLayeredwrite(T val, cudaSurfaceObject_t obj, int x, int y, int layerface, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 235
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)layerface;(void)mode;
# 237
::exit(___);}
#if 0
# 235
{ 
# 236
__nv_tex_surf_handler("__isurfCubemapLayeredwrite_v2", &val, obj, x, y, layerface, mode); 
# 237
} 
#endif
# 3641 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/crt/device_functions.h"
extern "C" unsigned __cudaPushCallConfiguration(dim3 gridDim, dim3 blockDim, size_t sharedMem = 0, CUstream_st * stream = 0); 
# 68 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/device_launch_parameters.h"
extern "C" {
# 71
extern const uint3 __device_builtin_variable_threadIdx; 
# 72
extern const uint3 __device_builtin_variable_blockIdx; 
# 73
extern const dim3 __device_builtin_variable_blockDim; 
# 74
extern const dim3 __device_builtin_variable_gridDim; 
# 75
extern const int __device_builtin_variable_warpSize; 
# 80
}
# 67 "/usr/include/c++/7/bits/stl_relops.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 69
namespace rel_ops { 
# 85 "/usr/include/c++/7/bits/stl_relops.h" 3
template< class _Tp> inline bool 
# 87
operator!=(const _Tp &__x, const _Tp &__y) 
# 88
{ return !(__x == __y); } 
# 98 "/usr/include/c++/7/bits/stl_relops.h" 3
template< class _Tp> inline bool 
# 100
operator>(const _Tp &__x, const _Tp &__y) 
# 101
{ return __y < __x; } 
# 111 "/usr/include/c++/7/bits/stl_relops.h" 3
template< class _Tp> inline bool 
# 113
operator<=(const _Tp &__x, const _Tp &__y) 
# 114
{ return !(__y < __x); } 
# 124 "/usr/include/c++/7/bits/stl_relops.h" 3
template< class _Tp> inline bool 
# 126
operator>=(const _Tp &__x, const _Tp &__y) 
# 127
{ return !(__x < __y); } 
# 130
}
# 132
}
# 36 "/usr/include/c++/7/bits/move.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 45
template< class _Tp> constexpr _Tp *
# 47
__addressof(_Tp &__r) noexcept 
# 48
{ return __builtin_addressof(__r); } 
# 51
}
# 42 "/usr/include/c++/7/type_traits" 3
namespace std { 
# 44
typedef unsigned short uint_least16_t; 
# 45
typedef unsigned uint_least32_t; 
# 46
}
# 52
namespace std __attribute((__visibility__("default"))) { 
# 68 "/usr/include/c++/7/type_traits" 3
template< class _Tp, _Tp __v> 
# 69
struct integral_constant { 
# 71
static constexpr _Tp value = (__v); 
# 72
typedef _Tp value_type; 
# 73
typedef integral_constant type; 
# 74
constexpr operator value_type() const noexcept { return value; } 
# 79
constexpr value_type operator()() const noexcept { return value; } 
# 81
}; 
# 83
template< class _Tp, _Tp __v> constexpr _Tp integral_constant< _Tp, __v> ::value; 
# 87
typedef integral_constant< bool, true>  true_type; 
# 90
typedef integral_constant< bool, false>  false_type; 
# 92
template< bool __v> using __bool_constant = integral_constant< bool, __v> ; 
# 103 "/usr/include/c++/7/type_traits" 3
template< bool , class , class > struct conditional; 
# 106
template< class ...> struct __or_; 
# 110
template<> struct __or_< >  : public false_type { 
# 112
}; 
# 114
template< class _B1> 
# 115
struct __or_< _B1>  : public _B1 { 
# 117
}; 
# 119
template< class _B1, class _B2> 
# 120
struct __or_< _B1, _B2>  : public conditional< _B1::value, _B1, _B2> ::type { 
# 122
}; 
# 124
template< class _B1, class _B2, class _B3, class ..._Bn> 
# 125
struct __or_< _B1, _B2, _B3, _Bn...>  : public conditional< _B1::value, _B1, std::__or_< _B2, _B3, _Bn...> > ::type { 
# 127
}; 
# 129
template< class ...> struct __and_; 
# 133
template<> struct __and_< >  : public true_type { 
# 135
}; 
# 137
template< class _B1> 
# 138
struct __and_< _B1>  : public _B1 { 
# 140
}; 
# 142
template< class _B1, class _B2> 
# 143
struct __and_< _B1, _B2>  : public conditional< _B1::value, _B2, _B1> ::type { 
# 145
}; 
# 147
template< class _B1, class _B2, class _B3, class ..._Bn> 
# 148
struct __and_< _B1, _B2, _B3, _Bn...>  : public conditional< _B1::value, std::__and_< _B2, _B3, _Bn...> , _B1> ::type { 
# 150
}; 
# 152
template< class _Pp> 
# 153
struct __not_ : public __bool_constant< !((bool)_Pp::value)>  { 
# 155
}; 
# 192 "/usr/include/c++/7/type_traits" 3
template< class _Tp> 
# 193
struct __success_type { 
# 194
typedef _Tp type; }; 
# 196
struct __failure_type { 
# 197
}; 
# 201
template< class > struct remove_cv; 
# 204
template< class > 
# 205
struct __is_void_helper : public false_type { 
# 206
}; 
# 209
template<> struct __is_void_helper< void>  : public true_type { 
# 210
}; 
# 213
template< class _Tp> 
# 214
struct is_void : public __is_void_helper< typename remove_cv< _Tp> ::type> ::type { 
# 216
}; 
# 218
template< class > 
# 219
struct __is_integral_helper : public false_type { 
# 220
}; 
# 223
template<> struct __is_integral_helper< bool>  : public true_type { 
# 224
}; 
# 227
template<> struct __is_integral_helper< char>  : public true_type { 
# 228
}; 
# 231
template<> struct __is_integral_helper< signed char>  : public true_type { 
# 232
}; 
# 235
template<> struct __is_integral_helper< unsigned char>  : public true_type { 
# 236
}; 
# 240
template<> struct __is_integral_helper< wchar_t>  : public true_type { 
# 241
}; 
# 245
template<> struct __is_integral_helper< char16_t>  : public true_type { 
# 246
}; 
# 249
template<> struct __is_integral_helper< char32_t>  : public true_type { 
# 250
}; 
# 253
template<> struct __is_integral_helper< short>  : public true_type { 
# 254
}; 
# 257
template<> struct __is_integral_helper< unsigned short>  : public true_type { 
# 258
}; 
# 261
template<> struct __is_integral_helper< int>  : public true_type { 
# 262
}; 
# 265
template<> struct __is_integral_helper< unsigned>  : public true_type { 
# 266
}; 
# 269
template<> struct __is_integral_helper< long>  : public true_type { 
# 270
}; 
# 273
template<> struct __is_integral_helper< unsigned long>  : public true_type { 
# 274
}; 
# 277
template<> struct __is_integral_helper< long long>  : public true_type { 
# 278
}; 
# 281
template<> struct __is_integral_helper< unsigned long long>  : public true_type { 
# 282
}; 
# 288
template<> struct __is_integral_helper< __int128>  : public true_type { 
# 289
}; 
# 292
template<> struct __is_integral_helper< unsigned __int128>  : public true_type { 
# 293
}; 
# 324 "/usr/include/c++/7/type_traits" 3
template< class _Tp> 
# 325
struct is_integral : public __is_integral_helper< typename remove_cv< _Tp> ::type> ::type { 
# 327
}; 
# 329
template< class > 
# 330
struct __is_floating_point_helper : public false_type { 
# 331
}; 
# 334
template<> struct __is_floating_point_helper< float>  : public true_type { 
# 335
}; 
# 338
template<> struct __is_floating_point_helper< double>  : public true_type { 
# 339
}; 
# 342
template<> struct __is_floating_point_helper< long double>  : public true_type { 
# 343
}; 
# 347
template<> struct __is_floating_point_helper< __float128>  : public true_type { 
# 348
}; 
# 352
template< class _Tp> 
# 353
struct is_floating_point : public __is_floating_point_helper< typename remove_cv< _Tp> ::type> ::type { 
# 355
}; 
# 358
template< class > 
# 359
struct is_array : public false_type { 
# 360
}; 
# 362
template< class _Tp, size_t _Size> 
# 363
struct is_array< _Tp [_Size]>  : public true_type { 
# 364
}; 
# 366
template< class _Tp> 
# 367
struct is_array< _Tp []>  : public true_type { 
# 368
}; 
# 370
template< class > 
# 371
struct __is_pointer_helper : public false_type { 
# 372
}; 
# 374
template< class _Tp> 
# 375
struct __is_pointer_helper< _Tp *>  : public true_type { 
# 376
}; 
# 379
template< class _Tp> 
# 380
struct is_pointer : public __is_pointer_helper< typename remove_cv< _Tp> ::type> ::type { 
# 382
}; 
# 385
template< class > 
# 386
struct is_lvalue_reference : public false_type { 
# 387
}; 
# 389
template< class _Tp> 
# 390
struct is_lvalue_reference< _Tp &>  : public true_type { 
# 391
}; 
# 394
template< class > 
# 395
struct is_rvalue_reference : public false_type { 
# 396
}; 
# 398
template< class _Tp> 
# 399
struct is_rvalue_reference< _Tp &&>  : public true_type { 
# 400
}; 
# 402
template< class > struct is_function; 
# 405
template< class > 
# 406
struct __is_member_object_pointer_helper : public false_type { 
# 407
}; 
# 409
template< class _Tp, class _Cp> 
# 410
struct __is_member_object_pointer_helper< _Tp (_Cp::*)>  : public integral_constant< bool, !is_function< _Tp> ::value>  { 
# 411
}; 
# 414
template< class _Tp> 
# 415
struct is_member_object_pointer : public __is_member_object_pointer_helper< typename remove_cv< _Tp> ::type> ::type { 
# 418
}; 
# 420
template< class > 
# 421
struct __is_member_function_pointer_helper : public false_type { 
# 422
}; 
# 424
template< class _Tp, class _Cp> 
# 425
struct __is_member_function_pointer_helper< _Tp (_Cp::*)>  : public integral_constant< bool, is_function< _Tp> ::value>  { 
# 426
}; 
# 429
template< class _Tp> 
# 430
struct is_member_function_pointer : public __is_member_function_pointer_helper< typename remove_cv< _Tp> ::type> ::type { 
# 433
}; 
# 436
template< class _Tp> 
# 437
struct is_enum : public integral_constant< bool, __is_enum(_Tp)>  { 
# 439
}; 
# 442
template< class _Tp> 
# 443
struct is_union : public integral_constant< bool, __is_union(_Tp)>  { 
# 445
}; 
# 448
template< class _Tp> 
# 449
struct is_class : public integral_constant< bool, __is_class(_Tp)>  { 
# 451
}; 
# 454
template< class > 
# 455
struct is_function : public false_type { 
# 456
}; 
# 458
template< class _Res, class ..._ArgTypes> 
# 459
struct is_function< _Res (_ArgTypes ...)>  : public true_type { 
# 460
}; 
# 462
template< class _Res, class ..._ArgTypes> 
# 463
struct is_function< _Res (_ArgTypes ...) &>  : public true_type { 
# 464
}; 
# 466
template< class _Res, class ..._ArgTypes> 
# 467
struct is_function< _Res (_ArgTypes ...) &&>  : public true_type { 
# 468
}; 
# 470
template< class _Res, class ..._ArgTypes> 
# 471
struct is_function< _Res (_ArgTypes ..., ...)>  : public true_type { 
# 472
}; 
# 474
template< class _Res, class ..._ArgTypes> 
# 475
struct is_function< _Res (_ArgTypes ..., ...) &>  : public true_type { 
# 476
}; 
# 478
template< class _Res, class ..._ArgTypes> 
# 479
struct is_function< _Res (_ArgTypes ..., ...) &&>  : public true_type { 
# 480
}; 
# 482
template< class _Res, class ..._ArgTypes> 
# 483
struct is_function< _Res (_ArgTypes ...) const>  : public true_type { 
# 484
}; 
# 486
template< class _Res, class ..._ArgTypes> 
# 487
struct is_function< _Res (_ArgTypes ...) const &>  : public true_type { 
# 488
}; 
# 490
template< class _Res, class ..._ArgTypes> 
# 491
struct is_function< _Res (_ArgTypes ...) const &&>  : public true_type { 
# 492
}; 
# 494
template< class _Res, class ..._ArgTypes> 
# 495
struct is_function< _Res (_ArgTypes ..., ...) const>  : public true_type { 
# 496
}; 
# 498
template< class _Res, class ..._ArgTypes> 
# 499
struct is_function< _Res (_ArgTypes ..., ...) const &>  : public true_type { 
# 500
}; 
# 502
template< class _Res, class ..._ArgTypes> 
# 503
struct is_function< _Res (_ArgTypes ..., ...) const &&>  : public true_type { 
# 504
}; 
# 506
template< class _Res, class ..._ArgTypes> 
# 507
struct is_function< _Res (_ArgTypes ...) volatile>  : public true_type { 
# 508
}; 
# 510
template< class _Res, class ..._ArgTypes> 
# 511
struct is_function< _Res (_ArgTypes ...) volatile &>  : public true_type { 
# 512
}; 
# 514
template< class _Res, class ..._ArgTypes> 
# 515
struct is_function< _Res (_ArgTypes ...) volatile &&>  : public true_type { 
# 516
}; 
# 518
template< class _Res, class ..._ArgTypes> 
# 519
struct is_function< _Res (_ArgTypes ..., ...) volatile>  : public true_type { 
# 520
}; 
# 522
template< class _Res, class ..._ArgTypes> 
# 523
struct is_function< _Res (_ArgTypes ..., ...) volatile &>  : public true_type { 
# 524
}; 
# 526
template< class _Res, class ..._ArgTypes> 
# 527
struct is_function< _Res (_ArgTypes ..., ...) volatile &&>  : public true_type { 
# 528
}; 
# 530
template< class _Res, class ..._ArgTypes> 
# 531
struct is_function< _Res (_ArgTypes ...) const volatile>  : public true_type { 
# 532
}; 
# 534
template< class _Res, class ..._ArgTypes> 
# 535
struct is_function< _Res (_ArgTypes ...) const volatile &>  : public true_type { 
# 536
}; 
# 538
template< class _Res, class ..._ArgTypes> 
# 539
struct is_function< _Res (_ArgTypes ...) const volatile &&>  : public true_type { 
# 540
}; 
# 542
template< class _Res, class ..._ArgTypes> 
# 543
struct is_function< _Res (_ArgTypes ..., ...) const volatile>  : public true_type { 
# 544
}; 
# 546
template< class _Res, class ..._ArgTypes> 
# 547
struct is_function< _Res (_ArgTypes ..., ...) const volatile &>  : public true_type { 
# 548
}; 
# 550
template< class _Res, class ..._ArgTypes> 
# 551
struct is_function< _Res (_ArgTypes ..., ...) const volatile &&>  : public true_type { 
# 552
}; 
# 556
template< class > 
# 557
struct __is_null_pointer_helper : public false_type { 
# 558
}; 
# 561
template<> struct __is_null_pointer_helper< __decltype((nullptr))>  : public true_type { 
# 562
}; 
# 565
template< class _Tp> 
# 566
struct is_null_pointer : public __is_null_pointer_helper< typename remove_cv< _Tp> ::type> ::type { 
# 568
}; 
# 571
template< class _Tp> 
# 572
struct __is_nullptr_t : public is_null_pointer< _Tp>  { 
# 574
}; 
# 579
template< class _Tp> 
# 580
struct is_reference : public __or_< is_lvalue_reference< _Tp> , is_rvalue_reference< _Tp> > ::type { 
# 583
}; 
# 586
template< class _Tp> 
# 587
struct is_arithmetic : public __or_< is_integral< _Tp> , is_floating_point< _Tp> > ::type { 
# 589
}; 
# 592
template< class _Tp> 
# 593
struct is_fundamental : public __or_< is_arithmetic< _Tp> , is_void< _Tp> , is_null_pointer< _Tp> > ::type { 
# 596
}; 
# 599
template< class _Tp> 
# 600
struct is_object : public __not_< __or_< is_function< _Tp> , is_reference< _Tp> , is_void< _Tp> > > ::type { 
# 603
}; 
# 605
template< class > struct is_member_pointer; 
# 609
template< class _Tp> 
# 610
struct is_scalar : public __or_< is_arithmetic< _Tp> , is_enum< _Tp> , is_pointer< _Tp> , is_member_pointer< _Tp> , is_null_pointer< _Tp> > ::type { 
# 613
}; 
# 616
template< class _Tp> 
# 617
struct is_compound : public integral_constant< bool, !is_fundamental< _Tp> ::value>  { 
# 618
}; 
# 620
template< class _Tp> 
# 621
struct __is_member_pointer_helper : public false_type { 
# 622
}; 
# 624
template< class _Tp, class _Cp> 
# 625
struct __is_member_pointer_helper< _Tp (_Cp::*)>  : public true_type { 
# 626
}; 
# 629
template< class _Tp> 
# 630
struct is_member_pointer : public __is_member_pointer_helper< typename remove_cv< _Tp> ::type> ::type { 
# 632
}; 
# 636
template< class _Tp> 
# 637
struct __is_referenceable : public __or_< is_object< _Tp> , is_reference< _Tp> > ::type { 
# 639
}; 
# 641
template< class _Res, class ..._Args> 
# 642
struct __is_referenceable< _Res (_Args ...)>  : public true_type { 
# 644
}; 
# 646
template< class _Res, class ..._Args> 
# 647
struct __is_referenceable< _Res (_Args ..., ...)>  : public true_type { 
# 649
}; 
# 654
template< class > 
# 655
struct is_const : public false_type { 
# 656
}; 
# 658
template< class _Tp> 
# 659
struct is_const< const _Tp>  : public true_type { 
# 660
}; 
# 663
template< class > 
# 664
struct is_volatile : public false_type { 
# 665
}; 
# 667
template< class _Tp> 
# 668
struct is_volatile< volatile _Tp>  : public true_type { 
# 669
}; 
# 672
template< class _Tp> 
# 673
struct is_trivial : public integral_constant< bool, __is_trivial(_Tp)>  { 
# 675
}; 
# 678
template< class _Tp> 
# 679
struct is_trivially_copyable : public integral_constant< bool, __is_trivially_copyable(_Tp)>  { 
# 681
}; 
# 684
template< class _Tp> 
# 685
struct is_standard_layout : public integral_constant< bool, __is_standard_layout(_Tp)>  { 
# 687
}; 
# 691
template< class _Tp> 
# 692
struct is_pod : public integral_constant< bool, __is_pod(_Tp)>  { 
# 694
}; 
# 697
template< class _Tp> 
# 698
struct is_literal_type : public integral_constant< bool, __is_literal_type(_Tp)>  { 
# 700
}; 
# 703
template< class _Tp> 
# 704
struct is_empty : public integral_constant< bool, __is_empty(_Tp)>  { 
# 706
}; 
# 709
template< class _Tp> 
# 710
struct is_polymorphic : public integral_constant< bool, __is_polymorphic(_Tp)>  { 
# 712
}; 
# 717
template< class _Tp> 
# 718
struct is_final : public integral_constant< bool, __is_final(_Tp)>  { 
# 720
}; 
# 724
template< class _Tp> 
# 725
struct is_abstract : public integral_constant< bool, __is_abstract(_Tp)>  { 
# 727
}; 
# 729
template< class _Tp, bool 
# 730
 = is_arithmetic< _Tp> ::value> 
# 731
struct __is_signed_helper : public false_type { 
# 732
}; 
# 734
template< class _Tp> 
# 735
struct __is_signed_helper< _Tp, true>  : public integral_constant< bool, ((_Tp)(-1)) < ((_Tp)0)>  { 
# 737
}; 
# 740
template< class _Tp> 
# 741
struct is_signed : public __is_signed_helper< _Tp> ::type { 
# 743
}; 
# 746
template< class _Tp> 
# 747
struct is_unsigned : public __and_< is_arithmetic< _Tp> , __not_< is_signed< _Tp> > >  { 
# 749
}; 
# 754
template< class > struct add_rvalue_reference; 
# 761
template< class _Tp> inline typename add_rvalue_reference< _Tp> ::type declval() noexcept; 
# 764
template< class , unsigned  = 0U> struct extent; 
# 767
template< class > struct remove_all_extents; 
# 770
template< class _Tp> 
# 771
struct __is_array_known_bounds : public integral_constant< bool, (extent< _Tp> ::value > 0)>  { 
# 773
}; 
# 775
template< class _Tp> 
# 776
struct __is_array_unknown_bounds : public __and_< is_array< _Tp> , __not_< extent< _Tp> > >  { 
# 778
}; 
# 785
struct __do_is_destructible_impl { 
# 787
template< class _Tp, class  = __decltype((declval< _Tp &> ().~_Tp()))> static true_type __test(int); 
# 790
template< class > static false_type __test(...); 
# 792
}; 
# 794
template< class _Tp> 
# 795
struct __is_destructible_impl : public __do_is_destructible_impl { 
# 798
typedef __decltype((__test< _Tp> (0))) type; 
# 799
}; 
# 801
template< class _Tp, bool 
# 802
 = __or_< is_void< _Tp> , __is_array_unknown_bounds< _Tp> , is_function< _Tp> > ::value, bool 
# 805
 = __or_< is_reference< _Tp> , is_scalar< _Tp> > ::value> struct __is_destructible_safe; 
# 808
template< class _Tp> 
# 809
struct __is_destructible_safe< _Tp, false, false>  : public __is_destructible_impl< typename remove_all_extents< _Tp> ::type> ::type { 
# 812
}; 
# 814
template< class _Tp> 
# 815
struct __is_destructible_safe< _Tp, true, false>  : public false_type { 
# 816
}; 
# 818
template< class _Tp> 
# 819
struct __is_destructible_safe< _Tp, false, true>  : public true_type { 
# 820
}; 
# 823
template< class _Tp> 
# 824
struct is_destructible : public __is_destructible_safe< _Tp> ::type { 
# 826
}; 
# 832
struct __do_is_nt_destructible_impl { 
# 834
template< class _Tp> static integral_constant< bool, noexcept(declval< _Tp &> ().~_Tp())>  __test(int); 
# 838
template< class > static false_type __test(...); 
# 840
}; 
# 842
template< class _Tp> 
# 843
struct __is_nt_destructible_impl : public __do_is_nt_destructible_impl { 
# 846
typedef __decltype((__test< _Tp> (0))) type; 
# 847
}; 
# 849
template< class _Tp, bool 
# 850
 = __or_< is_void< _Tp> , __is_array_unknown_bounds< _Tp> , is_function< _Tp> > ::value, bool 
# 853
 = __or_< is_reference< _Tp> , is_scalar< _Tp> > ::value> struct __is_nt_destructible_safe; 
# 856
template< class _Tp> 
# 857
struct __is_nt_destructible_safe< _Tp, false, false>  : public __is_nt_destructible_impl< typename remove_all_extents< _Tp> ::type> ::type { 
# 860
}; 
# 862
template< class _Tp> 
# 863
struct __is_nt_destructible_safe< _Tp, true, false>  : public false_type { 
# 864
}; 
# 866
template< class _Tp> 
# 867
struct __is_nt_destructible_safe< _Tp, false, true>  : public true_type { 
# 868
}; 
# 871
template< class _Tp> 
# 872
struct is_nothrow_destructible : public __is_nt_destructible_safe< _Tp> ::type { 
# 874
}; 
# 876
struct __do_is_default_constructible_impl { 
# 878
template< class _Tp, class  = __decltype((_Tp()))> static true_type __test(int); 
# 881
template< class > static false_type __test(...); 
# 883
}; 
# 885
template< class _Tp> 
# 886
struct __is_default_constructible_impl : public __do_is_default_constructible_impl { 
# 889
typedef __decltype((__test< _Tp> (0))) type; 
# 890
}; 
# 892
template< class _Tp> 
# 893
struct __is_default_constructible_atom : public __and_< __not_< is_void< _Tp> > , __is_default_constructible_impl< _Tp> >  { 
# 896
}; 
# 898
template< class _Tp, bool  = is_array< _Tp> ::value> struct __is_default_constructible_safe; 
# 906
template< class _Tp> 
# 907
struct __is_default_constructible_safe< _Tp, true>  : public __and_< __is_array_known_bounds< _Tp> , __is_default_constructible_atom< typename remove_all_extents< _Tp> ::type> >  { 
# 911
}; 
# 913
template< class _Tp> 
# 914
struct __is_default_constructible_safe< _Tp, false>  : public __is_default_constructible_atom< _Tp> ::type { 
# 916
}; 
# 919
template< class _Tp> 
# 920
struct is_default_constructible : public __is_default_constructible_safe< _Tp> ::type { 
# 922
}; 
# 936 "/usr/include/c++/7/type_traits" 3
struct __do_is_static_castable_impl { 
# 938
template< class _From, class _To, class 
# 939
 = __decltype((static_cast< _To>(declval< _From> ())))> static true_type 
# 938
__test(int); 
# 942
template< class , class > static false_type __test(...); 
# 944
}; 
# 946
template< class _From, class _To> 
# 947
struct __is_static_castable_impl : public __do_is_static_castable_impl { 
# 950
typedef __decltype((__test< _From, _To> (0))) type; 
# 951
}; 
# 953
template< class _From, class _To> 
# 954
struct __is_static_castable_safe : public __is_static_castable_impl< _From, _To> ::type { 
# 956
}; 
# 959
template< class _From, class _To> 
# 960
struct __is_static_castable : public integral_constant< bool, __is_static_castable_safe< _From, _To> ::value>  { 
# 963
}; 
# 970
struct __do_is_direct_constructible_impl { 
# 972
template< class _Tp, class _Arg, class 
# 973
 = __decltype((::new _Tp(declval< _Arg> ())))> static true_type 
# 972
__test(int); 
# 976
template< class , class > static false_type __test(...); 
# 978
}; 
# 980
template< class _Tp, class _Arg> 
# 981
struct __is_direct_constructible_impl : public __do_is_direct_constructible_impl { 
# 984
typedef __decltype((__test< _Tp, _Arg> (0))) type; 
# 985
}; 
# 987
template< class _Tp, class _Arg> 
# 988
struct __is_direct_constructible_new_safe : public __and_< is_destructible< _Tp> , __is_direct_constructible_impl< _Tp, _Arg> >  { 
# 991
}; 
# 993
template< class , class > struct is_same; 
# 996
template< class , class > struct is_base_of; 
# 999
template< class > struct remove_reference; 
# 1002
template< class _From, class _To, bool 
# 1003
 = __not_< __or_< is_void< _From> , is_function< _From> > > ::value> struct __is_base_to_derived_ref; 
# 1007
template< class _Tp, class ..._Args> struct is_constructible; 
# 1012
template< class _From, class _To> 
# 1013
struct __is_base_to_derived_ref< _From, _To, true>  { 
# 1016
typedef typename remove_cv< typename remove_reference< _From> ::type> ::type __src_t; 
# 1018
typedef typename remove_cv< typename remove_reference< _To> ::type> ::type __dst_t; 
# 1021
typedef __and_< __not_< is_same< __src_t, __dst_t> > , is_base_of< __src_t, __dst_t> , __not_< is_constructible< __dst_t, _From> > >  type; 
# 1022
static constexpr bool value = (type::value); 
# 1023
}; 
# 1025
template< class _From, class _To> 
# 1026
struct __is_base_to_derived_ref< _From, _To, false>  : public false_type { 
# 1028
}; 
# 1030
template< class _From, class _To, bool 
# 1031
 = __and_< is_lvalue_reference< _From> , is_rvalue_reference< _To> > ::value> struct __is_lvalue_to_rvalue_ref; 
# 1037
template< class _From, class _To> 
# 1038
struct __is_lvalue_to_rvalue_ref< _From, _To, true>  { 
# 1041
typedef typename remove_cv< typename remove_reference< _From> ::type> ::type __src_t; 
# 1043
typedef typename remove_cv< typename remove_reference< _To> ::type> ::type __dst_t; 
# 1046
typedef __and_< __not_< is_function< __src_t> > , __or_< is_same< __src_t, __dst_t> , is_base_of< __dst_t, __src_t> > >  type; 
# 1047
static constexpr bool value = (type::value); 
# 1048
}; 
# 1050
template< class _From, class _To> 
# 1051
struct __is_lvalue_to_rvalue_ref< _From, _To, false>  : public false_type { 
# 1053
}; 
# 1061
template< class _Tp, class _Arg> 
# 1062
struct __is_direct_constructible_ref_cast : public __and_< __is_static_castable< _Arg, _Tp> , __not_< __or_< __is_base_to_derived_ref< _Arg, _Tp> , __is_lvalue_to_rvalue_ref< _Arg, _Tp> > > >  { 
# 1067
}; 
# 1069
template< class _Tp, class _Arg> 
# 1070
struct __is_direct_constructible_new : public conditional< is_reference< _Tp> ::value, __is_direct_constructible_ref_cast< _Tp, _Arg> , __is_direct_constructible_new_safe< _Tp, _Arg> > ::type { 
# 1075
}; 
# 1077
template< class _Tp, class _Arg> 
# 1078
struct __is_direct_constructible : public __is_direct_constructible_new< _Tp, _Arg> ::type { 
# 1080
}; 
# 1087
struct __do_is_nary_constructible_impl { 
# 1089
template< class _Tp, class ..._Args, class 
# 1090
 = __decltype((_Tp(declval< _Args> ()...)))> static true_type 
# 1089
__test(int); 
# 1093
template< class , class ...> static false_type __test(...); 
# 1095
}; 
# 1097
template< class _Tp, class ..._Args> 
# 1098
struct __is_nary_constructible_impl : public __do_is_nary_constructible_impl { 
# 1101
typedef __decltype((__test< _Tp, _Args...> (0))) type; 
# 1102
}; 
# 1104
template< class _Tp, class ..._Args> 
# 1105
struct __is_nary_constructible : public __is_nary_constructible_impl< _Tp, _Args...> ::type { 
# 1108
static_assert((sizeof...(_Args) > (1)), "Only useful for > 1 arguments");
# 1110
}; 
# 1112
template< class _Tp, class ..._Args> 
# 1113
struct __is_constructible_impl : public __is_nary_constructible< _Tp, _Args...>  { 
# 1115
}; 
# 1117
template< class _Tp, class _Arg> 
# 1118
struct __is_constructible_impl< _Tp, _Arg>  : public __is_direct_constructible< _Tp, _Arg>  { 
# 1120
}; 
# 1122
template< class _Tp> 
# 1123
struct __is_constructible_impl< _Tp>  : public is_default_constructible< _Tp>  { 
# 1125
}; 
# 1128
template< class _Tp, class ..._Args> 
# 1129
struct is_constructible : public __is_constructible_impl< _Tp, _Args...> ::type { 
# 1131
}; 
# 1133
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_copy_constructible_impl; 
# 1136
template< class _Tp> 
# 1137
struct __is_copy_constructible_impl< _Tp, false>  : public false_type { 
# 1138
}; 
# 1140
template< class _Tp> 
# 1141
struct __is_copy_constructible_impl< _Tp, true>  : public is_constructible< _Tp, const _Tp &>  { 
# 1143
}; 
# 1146
template< class _Tp> 
# 1147
struct is_copy_constructible : public __is_copy_constructible_impl< _Tp>  { 
# 1149
}; 
# 1151
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_move_constructible_impl; 
# 1154
template< class _Tp> 
# 1155
struct __is_move_constructible_impl< _Tp, false>  : public false_type { 
# 1156
}; 
# 1158
template< class _Tp> 
# 1159
struct __is_move_constructible_impl< _Tp, true>  : public is_constructible< _Tp, _Tp &&>  { 
# 1161
}; 
# 1164
template< class _Tp> 
# 1165
struct is_move_constructible : public __is_move_constructible_impl< _Tp>  { 
# 1167
}; 
# 1169
template< class _Tp> 
# 1170
struct __is_nt_default_constructible_atom : public integral_constant< bool, noexcept((_Tp()))>  { 
# 1172
}; 
# 1174
template< class _Tp, bool  = is_array< _Tp> ::value> struct __is_nt_default_constructible_impl; 
# 1177
template< class _Tp> 
# 1178
struct __is_nt_default_constructible_impl< _Tp, true>  : public __and_< __is_array_known_bounds< _Tp> , __is_nt_default_constructible_atom< typename remove_all_extents< _Tp> ::type> >  { 
# 1182
}; 
# 1184
template< class _Tp> 
# 1185
struct __is_nt_default_constructible_impl< _Tp, false>  : public __is_nt_default_constructible_atom< _Tp>  { 
# 1187
}; 
# 1190
template< class _Tp> 
# 1191
struct is_nothrow_default_constructible : public __and_< is_default_constructible< _Tp> , __is_nt_default_constructible_impl< _Tp> >  { 
# 1194
}; 
# 1196
template< class _Tp, class ..._Args> 
# 1197
struct __is_nt_constructible_impl : public integral_constant< bool, noexcept((_Tp(declval< _Args> ()...)))>  { 
# 1199
}; 
# 1201
template< class _Tp, class _Arg> 
# 1202
struct __is_nt_constructible_impl< _Tp, _Arg>  : public integral_constant< bool, noexcept((static_cast< _Tp>(declval< _Arg> ())))>  { 
# 1205
}; 
# 1207
template< class _Tp> 
# 1208
struct __is_nt_constructible_impl< _Tp>  : public is_nothrow_default_constructible< _Tp>  { 
# 1210
}; 
# 1213
template< class _Tp, class ..._Args> 
# 1214
struct is_nothrow_constructible : public __and_< is_constructible< _Tp, _Args...> , __is_nt_constructible_impl< _Tp, _Args...> >  { 
# 1217
}; 
# 1219
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_nothrow_copy_constructible_impl; 
# 1222
template< class _Tp> 
# 1223
struct __is_nothrow_copy_constructible_impl< _Tp, false>  : public false_type { 
# 1224
}; 
# 1226
template< class _Tp> 
# 1227
struct __is_nothrow_copy_constructible_impl< _Tp, true>  : public is_nothrow_constructible< _Tp, const _Tp &>  { 
# 1229
}; 
# 1232
template< class _Tp> 
# 1233
struct is_nothrow_copy_constructible : public __is_nothrow_copy_constructible_impl< _Tp>  { 
# 1235
}; 
# 1237
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_nothrow_move_constructible_impl; 
# 1240
template< class _Tp> 
# 1241
struct __is_nothrow_move_constructible_impl< _Tp, false>  : public false_type { 
# 1242
}; 
# 1244
template< class _Tp> 
# 1245
struct __is_nothrow_move_constructible_impl< _Tp, true>  : public is_nothrow_constructible< _Tp, _Tp &&>  { 
# 1247
}; 
# 1250
template< class _Tp> 
# 1251
struct is_nothrow_move_constructible : public __is_nothrow_move_constructible_impl< _Tp>  { 
# 1253
}; 
# 1255
template< class _Tp, class _Up> 
# 1256
class __is_assignable_helper { 
# 1258
template< class _Tp1, class _Up1, class 
# 1259
 = __decltype((declval< _Tp1> () = declval< _Up1> ()))> static true_type 
# 1258
__test(int); 
# 1263
template< class , class > static false_type __test(...); 
# 1268
public: typedef __decltype((__test< _Tp, _Up> (0))) type; 
# 1269
}; 
# 1272
template< class _Tp, class _Up> 
# 1273
struct is_assignable : public __is_assignable_helper< _Tp, _Up> ::type { 
# 1275
}; 
# 1277
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_copy_assignable_impl; 
# 1280
template< class _Tp> 
# 1281
struct __is_copy_assignable_impl< _Tp, false>  : public false_type { 
# 1282
}; 
# 1284
template< class _Tp> 
# 1285
struct __is_copy_assignable_impl< _Tp, true>  : public is_assignable< _Tp &, const _Tp &>  { 
# 1287
}; 
# 1290
template< class _Tp> 
# 1291
struct is_copy_assignable : public __is_copy_assignable_impl< _Tp>  { 
# 1293
}; 
# 1295
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_move_assignable_impl; 
# 1298
template< class _Tp> 
# 1299
struct __is_move_assignable_impl< _Tp, false>  : public false_type { 
# 1300
}; 
# 1302
template< class _Tp> 
# 1303
struct __is_move_assignable_impl< _Tp, true>  : public is_assignable< _Tp &, _Tp &&>  { 
# 1305
}; 
# 1308
template< class _Tp> 
# 1309
struct is_move_assignable : public __is_move_assignable_impl< _Tp>  { 
# 1311
}; 
# 1313
template< class _Tp, class _Up> 
# 1314
struct __is_nt_assignable_impl : public integral_constant< bool, noexcept((declval< _Tp> () = declval< _Up> ()))>  { 
# 1316
}; 
# 1319
template< class _Tp, class _Up> 
# 1320
struct is_nothrow_assignable : public __and_< is_assignable< _Tp, _Up> , __is_nt_assignable_impl< _Tp, _Up> >  { 
# 1323
}; 
# 1325
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_nt_copy_assignable_impl; 
# 1328
template< class _Tp> 
# 1329
struct __is_nt_copy_assignable_impl< _Tp, false>  : public false_type { 
# 1330
}; 
# 1332
template< class _Tp> 
# 1333
struct __is_nt_copy_assignable_impl< _Tp, true>  : public is_nothrow_assignable< _Tp &, const _Tp &>  { 
# 1335
}; 
# 1338
template< class _Tp> 
# 1339
struct is_nothrow_copy_assignable : public __is_nt_copy_assignable_impl< _Tp>  { 
# 1341
}; 
# 1343
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> struct __is_nt_move_assignable_impl; 
# 1346
template< class _Tp> 
# 1347
struct __is_nt_move_assignable_impl< _Tp, false>  : public false_type { 
# 1348
}; 
# 1350
template< class _Tp> 
# 1351
struct __is_nt_move_assignable_impl< _Tp, true>  : public is_nothrow_assignable< _Tp &, _Tp &&>  { 
# 1353
}; 
# 1356
template< class _Tp> 
# 1357
struct is_nothrow_move_assignable : public __is_nt_move_assignable_impl< _Tp>  { 
# 1359
}; 
# 1362
template< class _Tp, class ..._Args> 
# 1363
struct is_trivially_constructible : public __and_< is_constructible< _Tp, _Args...> , integral_constant< bool, __is_trivially_constructible(_Tp, _Args...)> >  { 
# 1366
}; 
# 1369
template< class _Tp> 
# 1370
struct is_trivially_default_constructible : public is_trivially_constructible< _Tp> ::type { 
# 1372
}; 
# 1374
struct __do_is_implicitly_default_constructible_impl { 
# 1376
template< class _Tp> static void __helper(const _Tp &); 
# 1379
template< class _Tp> static true_type __test(const _Tp &, __decltype((__helper< const _Tp &> ({}))) * = 0); 
# 1383
static false_type __test(...); 
# 1384
}; 
# 1386
template< class _Tp> 
# 1387
struct __is_implicitly_default_constructible_impl : public __do_is_implicitly_default_constructible_impl { 
# 1390
typedef __decltype((__test(declval< _Tp> ()))) type; 
# 1391
}; 
# 1393
template< class _Tp> 
# 1394
struct __is_implicitly_default_constructible_safe : public __is_implicitly_default_constructible_impl< _Tp> ::type { 
# 1396
}; 
# 1398
template< class _Tp> 
# 1399
struct __is_implicitly_default_constructible : public __and_< is_default_constructible< _Tp> , __is_implicitly_default_constructible_safe< _Tp> >  { 
# 1402
}; 
# 1405
template< class _Tp> 
# 1406
struct is_trivially_copy_constructible : public __and_< is_copy_constructible< _Tp> , integral_constant< bool, __is_trivially_constructible(_Tp, const _Tp &)> >  { 
# 1410
}; 
# 1413
template< class _Tp> 
# 1414
struct is_trivially_move_constructible : public __and_< is_move_constructible< _Tp> , integral_constant< bool, __is_trivially_constructible(_Tp, _Tp &&)> >  { 
# 1418
}; 
# 1421
template< class _Tp, class _Up> 
# 1422
struct is_trivially_assignable : public __and_< is_assignable< _Tp, _Up> , integral_constant< bool, __is_trivially_assignable(_Tp, _Up)> >  { 
# 1426
}; 
# 1429
template< class _Tp> 
# 1430
struct is_trivially_copy_assignable : public __and_< is_copy_assignable< _Tp> , integral_constant< bool, __is_trivially_assignable(_Tp &, const _Tp &)> >  { 
# 1434
}; 
# 1437
template< class _Tp> 
# 1438
struct is_trivially_move_assignable : public __and_< is_move_assignable< _Tp> , integral_constant< bool, __is_trivially_assignable(_Tp &, _Tp &&)> >  { 
# 1442
}; 
# 1445
template< class _Tp> 
# 1446
struct is_trivially_destructible : public __and_< is_destructible< _Tp> , integral_constant< bool, __has_trivial_destructor(_Tp)> >  { 
# 1449
}; 
# 1453
template< class _Tp> 
# 1454
struct has_virtual_destructor : public integral_constant< bool, __has_virtual_destructor(_Tp)>  { 
# 1456
}; 
# 1462
template< class _Tp> 
# 1463
struct alignment_of : public integral_constant< unsigned long, __alignof__(_Tp)>  { 
# 1464
}; 
# 1467
template< class > 
# 1468
struct rank : public integral_constant< unsigned long, 0UL>  { 
# 1469
}; 
# 1471
template< class _Tp, size_t _Size> 
# 1472
struct rank< _Tp [_Size]>  : public integral_constant< unsigned long, 1 + std::rank< _Tp> ::value>  { 
# 1473
}; 
# 1475
template< class _Tp> 
# 1476
struct rank< _Tp []>  : public integral_constant< unsigned long, 1 + std::rank< _Tp> ::value>  { 
# 1477
}; 
# 1480
template< class , unsigned _Uint> 
# 1481
struct extent : public integral_constant< unsigned long, 0UL>  { 
# 1482
}; 
# 1484
template< class _Tp, unsigned _Uint, size_t _Size> 
# 1485
struct extent< _Tp [_Size], _Uint>  : public integral_constant< unsigned long, (_Uint == (0)) ? _Size : std::extent< _Tp, _Uint - (1)> ::value>  { 
# 1489
}; 
# 1491
template< class _Tp, unsigned _Uint> 
# 1492
struct extent< _Tp [], _Uint>  : public integral_constant< unsigned long, (_Uint == (0)) ? 0 : std::extent< _Tp, _Uint - (1)> ::value>  { 
# 1496
}; 
# 1502
template< class , class > 
# 1503
struct is_same : public false_type { 
# 1504
}; 
# 1506
template< class _Tp> 
# 1507
struct is_same< _Tp, _Tp>  : public true_type { 
# 1508
}; 
# 1511
template< class _Base, class _Derived> 
# 1512
struct is_base_of : public integral_constant< bool, __is_base_of(_Base, _Derived)>  { 
# 1514
}; 
# 1516
template< class _From, class _To, bool 
# 1517
 = __or_< is_void< _From> , is_function< _To> , is_array< _To> > ::value> 
# 1519
struct __is_convertible_helper { 
# 1520
typedef typename is_void< _To> ::type type; }; 
# 1522
template< class _From, class _To> 
# 1523
class __is_convertible_helper< _From, _To, false>  { 
# 1525
template< class _To1> static void __test_aux(_To1); 
# 1528
template< class _From1, class _To1, class 
# 1529
 = __decltype((__test_aux< _To1> (std::declval< _From1> ())))> static true_type 
# 1528
__test(int); 
# 1533
template< class , class > static false_type __test(...); 
# 1538
public: typedef __decltype((__test< _From, _To> (0))) type; 
# 1539
}; 
# 1543
template< class _From, class _To> 
# 1544
struct is_convertible : public __is_convertible_helper< _From, _To> ::type { 
# 1546
}; 
# 1552
template< class _Tp> 
# 1553
struct remove_const { 
# 1554
typedef _Tp type; }; 
# 1556
template< class _Tp> 
# 1557
struct remove_const< const _Tp>  { 
# 1558
typedef _Tp type; }; 
# 1561
template< class _Tp> 
# 1562
struct remove_volatile { 
# 1563
typedef _Tp type; }; 
# 1565
template< class _Tp> 
# 1566
struct remove_volatile< volatile _Tp>  { 
# 1567
typedef _Tp type; }; 
# 1570
template< class _Tp> 
# 1571
struct remove_cv { 
# 1574
typedef typename remove_const< typename remove_volatile< _Tp> ::type> ::type type; 
# 1575
}; 
# 1578
template< class _Tp> 
# 1579
struct add_const { 
# 1580
typedef const _Tp type; }; 
# 1583
template< class _Tp> 
# 1584
struct add_volatile { 
# 1585
typedef volatile _Tp type; }; 
# 1588
template< class _Tp> 
# 1589
struct add_cv { 
# 1592
typedef typename add_const< typename add_volatile< _Tp> ::type> ::type type; 
# 1593
}; 
# 1600
template< class _Tp> using remove_const_t = typename remove_const< _Tp> ::type; 
# 1604
template< class _Tp> using remove_volatile_t = typename remove_volatile< _Tp> ::type; 
# 1608
template< class _Tp> using remove_cv_t = typename remove_cv< _Tp> ::type; 
# 1612
template< class _Tp> using add_const_t = typename add_const< _Tp> ::type; 
# 1616
template< class _Tp> using add_volatile_t = typename add_volatile< _Tp> ::type; 
# 1620
template< class _Tp> using add_cv_t = typename add_cv< _Tp> ::type; 
# 1627
template< class _Tp> 
# 1628
struct remove_reference { 
# 1629
typedef _Tp type; }; 
# 1631
template< class _Tp> 
# 1632
struct remove_reference< _Tp &>  { 
# 1633
typedef _Tp type; }; 
# 1635
template< class _Tp> 
# 1636
struct remove_reference< _Tp &&>  { 
# 1637
typedef _Tp type; }; 
# 1639
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> 
# 1640
struct __add_lvalue_reference_helper { 
# 1641
typedef _Tp type; }; 
# 1643
template< class _Tp> 
# 1644
struct __add_lvalue_reference_helper< _Tp, true>  { 
# 1645
typedef _Tp &type; }; 
# 1648
template< class _Tp> 
# 1649
struct add_lvalue_reference : public __add_lvalue_reference_helper< _Tp>  { 
# 1651
}; 
# 1653
template< class _Tp, bool  = __is_referenceable< _Tp> ::value> 
# 1654
struct __add_rvalue_reference_helper { 
# 1655
typedef _Tp type; }; 
# 1657
template< class _Tp> 
# 1658
struct __add_rvalue_reference_helper< _Tp, true>  { 
# 1659
typedef _Tp &&type; }; 
# 1662
template< class _Tp> 
# 1663
struct add_rvalue_reference : public __add_rvalue_reference_helper< _Tp>  { 
# 1665
}; 
# 1669
template< class _Tp> using remove_reference_t = typename remove_reference< _Tp> ::type; 
# 1673
template< class _Tp> using add_lvalue_reference_t = typename add_lvalue_reference< _Tp> ::type; 
# 1677
template< class _Tp> using add_rvalue_reference_t = typename add_rvalue_reference< _Tp> ::type; 
# 1684
template< class _Unqualified, bool _IsConst, bool _IsVol> struct __cv_selector; 
# 1687
template< class _Unqualified> 
# 1688
struct __cv_selector< _Unqualified, false, false>  { 
# 1689
typedef _Unqualified __type; }; 
# 1691
template< class _Unqualified> 
# 1692
struct __cv_selector< _Unqualified, false, true>  { 
# 1693
typedef volatile _Unqualified __type; }; 
# 1695
template< class _Unqualified> 
# 1696
struct __cv_selector< _Unqualified, true, false>  { 
# 1697
typedef const _Unqualified __type; }; 
# 1699
template< class _Unqualified> 
# 1700
struct __cv_selector< _Unqualified, true, true>  { 
# 1701
typedef const volatile _Unqualified __type; }; 
# 1703
template< class _Qualified, class _Unqualified, bool 
# 1704
_IsConst = is_const< _Qualified> ::value, bool 
# 1705
_IsVol = is_volatile< _Qualified> ::value> 
# 1706
class __match_cv_qualifiers { 
# 1708
typedef __cv_selector< _Unqualified, _IsConst, _IsVol>  __match; 
# 1711
public: typedef typename __cv_selector< _Unqualified, _IsConst, _IsVol> ::__type __type; 
# 1712
}; 
# 1715
template< class _Tp> 
# 1716
struct __make_unsigned { 
# 1717
typedef _Tp __type; }; 
# 1720
template<> struct __make_unsigned< char>  { 
# 1721
typedef unsigned char __type; }; 
# 1724
template<> struct __make_unsigned< signed char>  { 
# 1725
typedef unsigned char __type; }; 
# 1728
template<> struct __make_unsigned< short>  { 
# 1729
typedef unsigned short __type; }; 
# 1732
template<> struct __make_unsigned< int>  { 
# 1733
typedef unsigned __type; }; 
# 1736
template<> struct __make_unsigned< long>  { 
# 1737
typedef unsigned long __type; }; 
# 1740
template<> struct __make_unsigned< long long>  { 
# 1741
typedef unsigned long long __type; }; 
# 1745
template<> struct __make_unsigned< wchar_t>  : public std::__make_unsigned< int>  { 
# 1746
}; 
# 1751
template<> struct __make_unsigned< __int128>  { 
# 1752
typedef unsigned __int128 __type; }; 
# 1771 "/usr/include/c++/7/type_traits" 3
template< class _Tp, bool 
# 1772
_IsInt = is_integral< _Tp> ::value, bool 
# 1773
_IsEnum = is_enum< _Tp> ::value> class __make_unsigned_selector; 
# 1776
template< class _Tp> 
# 1777
class __make_unsigned_selector< _Tp, true, false>  { 
# 1779
typedef __make_unsigned< typename remove_cv< _Tp> ::type>  __unsignedt; 
# 1780
typedef typename __make_unsigned< typename remove_cv< _Tp> ::type> ::__type __unsigned_type; 
# 1781
typedef __match_cv_qualifiers< _Tp, __unsigned_type>  __cv_unsigned; 
# 1784
public: typedef typename __match_cv_qualifiers< _Tp, __unsigned_type> ::__type __type; 
# 1785
}; 
# 1787
template< class _Tp> 
# 1788
class __make_unsigned_selector< _Tp, false, true>  { 
# 1791
typedef unsigned char __smallest; 
# 1792
static const bool __b0 = (sizeof(_Tp) <= sizeof(__smallest)); 
# 1793
static const bool __b1 = (sizeof(_Tp) <= sizeof(unsigned short)); 
# 1794
static const bool __b2 = (sizeof(_Tp) <= sizeof(unsigned)); 
# 1795
static const bool __b3 = (sizeof(_Tp) <= sizeof(unsigned long)); 
# 1796
typedef conditional< __b3, unsigned long, unsigned long long>  __cond3; 
# 1797
typedef typename conditional< __b3, unsigned long, unsigned long long> ::type __cond3_type; 
# 1798
typedef conditional< __b2, unsigned, __cond3_type>  __cond2; 
# 1799
typedef typename conditional< __b2, unsigned, __cond3_type> ::type __cond2_type; 
# 1800
typedef conditional< __b1, unsigned short, __cond2_type>  __cond1; 
# 1801
typedef typename conditional< __b1, unsigned short, __cond2_type> ::type __cond1_type; 
# 1804
typedef typename conditional< __b0, unsigned char, __cond1_type> ::type __unsigned_type; 
# 1805
typedef __match_cv_qualifiers< _Tp, __unsigned_type>  __cv_unsigned; 
# 1808
public: typedef typename __match_cv_qualifiers< _Tp, __unsigned_type> ::__type __type; 
# 1809
}; 
# 1815
template< class _Tp> 
# 1816
struct make_unsigned { 
# 1817
typedef typename __make_unsigned_selector< _Tp> ::__type type; }; 
# 1821
template<> struct make_unsigned< bool> ; 
# 1825
template< class _Tp> 
# 1826
struct __make_signed { 
# 1827
typedef _Tp __type; }; 
# 1830
template<> struct __make_signed< char>  { 
# 1831
typedef signed char __type; }; 
# 1834
template<> struct __make_signed< unsigned char>  { 
# 1835
typedef signed char __type; }; 
# 1838
template<> struct __make_signed< unsigned short>  { 
# 1839
typedef signed short __type; }; 
# 1842
template<> struct __make_signed< unsigned>  { 
# 1843
typedef signed int __type; }; 
# 1846
template<> struct __make_signed< unsigned long>  { 
# 1847
typedef signed long __type; }; 
# 1850
template<> struct __make_signed< unsigned long long>  { 
# 1851
typedef signed long long __type; }; 
# 1861 "/usr/include/c++/7/type_traits" 3
template<> struct __make_signed< char16_t>  : public std::__make_signed< unsigned short>  { 
# 1862
}; 
# 1864
template<> struct __make_signed< char32_t>  : public std::__make_signed< unsigned>  { 
# 1865
}; 
# 1870
template<> struct __make_signed< unsigned __int128>  { 
# 1871
typedef __int128 __type; }; 
# 1890 "/usr/include/c++/7/type_traits" 3
template< class _Tp, bool 
# 1891
_IsInt = is_integral< _Tp> ::value, bool 
# 1892
_IsEnum = is_enum< _Tp> ::value> class __make_signed_selector; 
# 1895
template< class _Tp> 
# 1896
class __make_signed_selector< _Tp, true, false>  { 
# 1898
typedef __make_signed< typename remove_cv< _Tp> ::type>  __signedt; 
# 1899
typedef typename __make_signed< typename remove_cv< _Tp> ::type> ::__type __signed_type; 
# 1900
typedef __match_cv_qualifiers< _Tp, __signed_type>  __cv_signed; 
# 1903
public: typedef typename __match_cv_qualifiers< _Tp, __signed_type> ::__type __type; 
# 1904
}; 
# 1906
template< class _Tp> 
# 1907
class __make_signed_selector< _Tp, false, true>  { 
# 1909
typedef typename __make_unsigned_selector< _Tp> ::__type __unsigned_type; 
# 1912
public: typedef typename std::__make_signed_selector< __unsigned_type> ::__type __type; 
# 1913
}; 
# 1919
template< class _Tp> 
# 1920
struct make_signed { 
# 1921
typedef typename __make_signed_selector< _Tp> ::__type type; }; 
# 1925
template<> struct make_signed< bool> ; 
# 1929
template< class _Tp> using make_signed_t = typename make_signed< _Tp> ::type; 
# 1933
template< class _Tp> using make_unsigned_t = typename make_unsigned< _Tp> ::type; 
# 1940
template< class _Tp> 
# 1941
struct remove_extent { 
# 1942
typedef _Tp type; }; 
# 1944
template< class _Tp, size_t _Size> 
# 1945
struct remove_extent< _Tp [_Size]>  { 
# 1946
typedef _Tp type; }; 
# 1948
template< class _Tp> 
# 1949
struct remove_extent< _Tp []>  { 
# 1950
typedef _Tp type; }; 
# 1953
template< class _Tp> 
# 1954
struct remove_all_extents { 
# 1955
typedef _Tp type; }; 
# 1957
template< class _Tp, size_t _Size> 
# 1958
struct remove_all_extents< _Tp [_Size]>  { 
# 1959
typedef typename std::remove_all_extents< _Tp> ::type type; }; 
# 1961
template< class _Tp> 
# 1962
struct remove_all_extents< _Tp []>  { 
# 1963
typedef typename std::remove_all_extents< _Tp> ::type type; }; 
# 1967
template< class _Tp> using remove_extent_t = typename remove_extent< _Tp> ::type; 
# 1971
template< class _Tp> using remove_all_extents_t = typename remove_all_extents< _Tp> ::type; 
# 1977
template< class _Tp, class > 
# 1978
struct __remove_pointer_helper { 
# 1979
typedef _Tp type; }; 
# 1981
template< class _Tp, class _Up> 
# 1982
struct __remove_pointer_helper< _Tp, _Up *>  { 
# 1983
typedef _Up type; }; 
# 1986
template< class _Tp> 
# 1987
struct remove_pointer : public __remove_pointer_helper< _Tp, typename remove_cv< _Tp> ::type>  { 
# 1989
}; 
# 1992
template< class _Tp, bool  = __or_< __is_referenceable< _Tp> , is_void< _Tp> > ::value> 
# 1994
struct __add_pointer_helper { 
# 1995
typedef _Tp type; }; 
# 1997
template< class _Tp> 
# 1998
struct __add_pointer_helper< _Tp, true>  { 
# 1999
typedef typename remove_reference< _Tp> ::type *type; }; 
# 2001
template< class _Tp> 
# 2002
struct add_pointer : public __add_pointer_helper< _Tp>  { 
# 2004
}; 
# 2008
template< class _Tp> using remove_pointer_t = typename remove_pointer< _Tp> ::type; 
# 2012
template< class _Tp> using add_pointer_t = typename add_pointer< _Tp> ::type; 
# 2016
template< size_t _Len> 
# 2017
struct __aligned_storage_msa { 
# 2019
union __type { 
# 2021
unsigned char __data[_Len]; 
# 2022
struct __attribute((__aligned__)) { } __align; 
# 2023
}; 
# 2024
}; 
# 2036 "/usr/include/c++/7/type_traits" 3
template< size_t _Len, size_t _Align = __alignof__(typename __aligned_storage_msa< _Len> ::__type)> 
# 2038
struct aligned_storage { 
# 2040
union type { 
# 2042
unsigned char __data[_Len]; 
# 2043
struct __attribute((__aligned__(_Align))) { } __align; 
# 2044
}; 
# 2045
}; 
# 2047
template< class ..._Types> 
# 2048
struct __strictest_alignment { 
# 2050
static const size_t _S_alignment = (0); 
# 2051
static const size_t _S_size = (0); 
# 2052
}; 
# 2054
template< class _Tp, class ..._Types> 
# 2055
struct __strictest_alignment< _Tp, _Types...>  { 
# 2057
static const size_t _S_alignment = ((__alignof__(_Tp) > __strictest_alignment< _Types...> ::_S_alignment) ? __alignof__(_Tp) : __strictest_alignment< _Types...> ::_S_alignment); 
# 2060
static const size_t _S_size = ((sizeof(_Tp) > __strictest_alignment< _Types...> ::_S_size) ? sizeof(_Tp) : __strictest_alignment< _Types...> ::_S_size); 
# 2063
}; 
# 2075 "/usr/include/c++/7/type_traits" 3
template< size_t _Len, class ..._Types> 
# 2076
struct aligned_union { 
# 2079
static_assert((sizeof...(_Types) != (0)), "At least one type is required");
# 2081
private: using __strictest = __strictest_alignment< _Types...> ; 
# 2082
static const size_t _S_len = ((_Len > __strictest::_S_size) ? _Len : __strictest::_S_size); 
# 2086
public: static const size_t alignment_value = (__strictest::_S_alignment); 
# 2088
typedef typename aligned_storage< _S_len, alignment_value> ::type type; 
# 2089
}; 
# 2091
template< size_t _Len, class ..._Types> const size_t aligned_union< _Len, _Types...> ::alignment_value; 
# 2096
template< class _Up, bool 
# 2097
_IsArray = is_array< _Up> ::value, bool 
# 2098
_IsFunction = is_function< _Up> ::value> struct __decay_selector; 
# 2102
template< class _Up> 
# 2103
struct __decay_selector< _Up, false, false>  { 
# 2104
typedef typename remove_cv< _Up> ::type __type; }; 
# 2106
template< class _Up> 
# 2107
struct __decay_selector< _Up, true, false>  { 
# 2108
typedef typename remove_extent< _Up> ::type *__type; }; 
# 2110
template< class _Up> 
# 2111
struct __decay_selector< _Up, false, true>  { 
# 2112
typedef typename add_pointer< _Up> ::type __type; }; 
# 2115
template< class _Tp> 
# 2116
class decay { 
# 2118
typedef typename remove_reference< _Tp> ::type __remove_type; 
# 2121
public: typedef typename __decay_selector< __remove_type> ::__type type; 
# 2122
}; 
# 2124
template< class _Tp> class reference_wrapper; 
# 2128
template< class _Tp> 
# 2129
struct __strip_reference_wrapper { 
# 2131
typedef _Tp __type; 
# 2132
}; 
# 2134
template< class _Tp> 
# 2135
struct __strip_reference_wrapper< reference_wrapper< _Tp> >  { 
# 2137
typedef _Tp &__type; 
# 2138
}; 
# 2140
template< class _Tp> 
# 2141
struct __decay_and_strip { 
# 2144
typedef typename __strip_reference_wrapper< typename decay< _Tp> ::type> ::__type __type; 
# 2145
}; 
# 2150
template< bool , class _Tp = void> 
# 2151
struct enable_if { 
# 2152
}; 
# 2155
template< class _Tp> 
# 2156
struct enable_if< true, _Tp>  { 
# 2157
typedef _Tp type; }; 
# 2159
template< class ..._Cond> using _Require = typename enable_if< __and_< _Cond...> ::value> ::type; 
# 2164
template< bool _Cond, class _Iftrue, class _Iffalse> 
# 2165
struct conditional { 
# 2166
typedef _Iftrue type; }; 
# 2169
template< class _Iftrue, class _Iffalse> 
# 2170
struct conditional< false, _Iftrue, _Iffalse>  { 
# 2171
typedef _Iffalse type; }; 
# 2174
template< class ..._Tp> struct common_type; 
# 2179
struct __do_common_type_impl { 
# 2181
template< class _Tp, class _Up> static __success_type< typename decay< __decltype((true ? std::declval< _Tp> () : std::declval< _Up> ()))> ::type>  _S_test(int); 
# 2186
template< class , class > static __failure_type _S_test(...); 
# 2188
}; 
# 2190
template< class _Tp, class _Up> 
# 2191
struct __common_type_impl : private __do_common_type_impl { 
# 2194
typedef __decltype((_S_test< _Tp, _Up> (0))) type; 
# 2195
}; 
# 2197
struct __do_member_type_wrapper { 
# 2199
template< class _Tp> static __success_type< typename _Tp::type>  _S_test(int); 
# 2202
template< class > static __failure_type _S_test(...); 
# 2204
}; 
# 2206
template< class _Tp> 
# 2207
struct __member_type_wrapper : private __do_member_type_wrapper { 
# 2210
typedef __decltype((_S_test< _Tp> (0))) type; 
# 2211
}; 
# 2213
template< class _CTp, class ..._Args> 
# 2214
struct __expanded_common_type_wrapper { 
# 2216
typedef common_type< typename _CTp::type, _Args...>  type; 
# 2217
}; 
# 2219
template< class ..._Args> 
# 2220
struct __expanded_common_type_wrapper< __failure_type, _Args...>  { 
# 2221
typedef __failure_type type; }; 
# 2223
template< class _Tp> 
# 2224
struct common_type< _Tp>  { 
# 2225
typedef typename decay< _Tp> ::type type; }; 
# 2227
template< class _Tp, class _Up> 
# 2228
struct common_type< _Tp, _Up>  : public __common_type_impl< _Tp, _Up> ::type { 
# 2230
}; 
# 2232
template< class _Tp, class _Up, class ..._Vp> 
# 2233
struct common_type< _Tp, _Up, _Vp...>  : public __expanded_common_type_wrapper< typename __member_type_wrapper< std::common_type< _Tp, _Up> > ::type, _Vp...> ::type { 
# 2236
}; 
# 2239
template< class _Tp> 
# 2240
struct underlying_type { 
# 2242
typedef __underlying_type(_Tp) type; 
# 2243
}; 
# 2245
template< class _Tp> 
# 2246
struct __declval_protector { 
# 2248
static const bool __stop = false; 
# 2249
static typename add_rvalue_reference< _Tp> ::type __delegate(); 
# 2250
}; 
# 2252
template< class _Tp> inline typename add_rvalue_reference< _Tp> ::type 
# 2254
declval() noexcept 
# 2255
{ 
# 2256
static_assert((__declval_protector< _Tp> ::__stop), "declval() must not be used!");
# 2258
return __declval_protector< _Tp> ::__delegate(); 
# 2259
} 
# 2262
template< class _Signature> class result_of; 
# 2269
struct __invoke_memfun_ref { }; 
# 2270
struct __invoke_memfun_deref { }; 
# 2271
struct __invoke_memobj_ref { }; 
# 2272
struct __invoke_memobj_deref { }; 
# 2273
struct __invoke_other { }; 
# 2276
template< class _Tp, class _Tag> 
# 2277
struct __result_of_success : public __success_type< _Tp>  { 
# 2278
using __invoke_type = _Tag; }; 
# 2281
struct __result_of_memfun_ref_impl { 
# 2283
template< class _Fp, class _Tp1, class ..._Args> static __result_of_success< __decltype(((std::declval< _Tp1> ().*std::declval< _Fp> ())(std::declval< _Args> ()...))), __invoke_memfun_ref>  _S_test(int); 
# 2288
template< class ...> static __failure_type _S_test(...); 
# 2290
}; 
# 2292
template< class _MemPtr, class _Arg, class ..._Args> 
# 2293
struct __result_of_memfun_ref : private __result_of_memfun_ref_impl { 
# 2296
typedef __decltype((_S_test< _MemPtr, _Arg, _Args...> (0))) type; 
# 2297
}; 
# 2300
struct __result_of_memfun_deref_impl { 
# 2302
template< class _Fp, class _Tp1, class ..._Args> static __result_of_success< __decltype((((*std::declval< _Tp1> ()).*std::declval< _Fp> ())(std::declval< _Args> ()...))), __invoke_memfun_deref>  _S_test(int); 
# 2307
template< class ...> static __failure_type _S_test(...); 
# 2309
}; 
# 2311
template< class _MemPtr, class _Arg, class ..._Args> 
# 2312
struct __result_of_memfun_deref : private __result_of_memfun_deref_impl { 
# 2315
typedef __decltype((_S_test< _MemPtr, _Arg, _Args...> (0))) type; 
# 2316
}; 
# 2319
struct __result_of_memobj_ref_impl { 
# 2321
template< class _Fp, class _Tp1> static __result_of_success< __decltype((std::declval< _Tp1> ().*std::declval< _Fp> ())), __invoke_memobj_ref>  _S_test(int); 
# 2326
template< class , class > static __failure_type _S_test(...); 
# 2328
}; 
# 2330
template< class _MemPtr, class _Arg> 
# 2331
struct __result_of_memobj_ref : private __result_of_memobj_ref_impl { 
# 2334
typedef __decltype((_S_test< _MemPtr, _Arg> (0))) type; 
# 2335
}; 
# 2338
struct __result_of_memobj_deref_impl { 
# 2340
template< class _Fp, class _Tp1> static __result_of_success< __decltype(((*std::declval< _Tp1> ()).*std::declval< _Fp> ())), __invoke_memobj_deref>  _S_test(int); 
# 2345
template< class , class > static __failure_type _S_test(...); 
# 2347
}; 
# 2349
template< class _MemPtr, class _Arg> 
# 2350
struct __result_of_memobj_deref : private __result_of_memobj_deref_impl { 
# 2353
typedef __decltype((_S_test< _MemPtr, _Arg> (0))) type; 
# 2354
}; 
# 2356
template< class _MemPtr, class _Arg> struct __result_of_memobj; 
# 2359
template< class _Res, class _Class, class _Arg> 
# 2360
struct __result_of_memobj< _Res (_Class::*), _Arg>  { 
# 2363
typedef typename remove_cv< typename remove_reference< _Arg> ::type> ::type _Argval; 
# 2364
typedef _Res (_Class::*_MemPtr); 
# 2369
typedef typename conditional< __or_< is_same< _Argval, _Class> , is_base_of< _Class, _Argval> > ::value, __result_of_memobj_ref< _MemPtr, _Arg> , __result_of_memobj_deref< _MemPtr, _Arg> > ::type::type type; 
# 2370
}; 
# 2372
template< class _MemPtr, class _Arg, class ..._Args> struct __result_of_memfun; 
# 2375
template< class _Res, class _Class, class _Arg, class ..._Args> 
# 2376
struct __result_of_memfun< _Res (_Class::*), _Arg, _Args...>  { 
# 2379
typedef typename remove_cv< typename remove_reference< _Arg> ::type> ::type _Argval; 
# 2380
typedef _Res (_Class::*_MemPtr); 
# 2385
typedef typename conditional< __or_< is_same< _Argval, _Class> , is_base_of< _Class, _Argval> > ::value, __result_of_memfun_ref< _MemPtr, _Arg, _Args...> , __result_of_memfun_deref< _MemPtr, _Arg, _Args...> > ::type::type type; 
# 2386
}; 
# 2393
template< class _Tp, class _Up = typename decay< _Tp> ::type> 
# 2394
struct __inv_unwrap { 
# 2396
using type = _Tp; 
# 2397
}; 
# 2399
template< class _Tp, class _Up> 
# 2400
struct __inv_unwrap< _Tp, reference_wrapper< _Up> >  { 
# 2402
using type = _Up &; 
# 2403
}; 
# 2405
template< bool , bool , class _Functor, class ..._ArgTypes> 
# 2406
struct __result_of_impl { 
# 2408
typedef __failure_type type; 
# 2409
}; 
# 2411
template< class _MemPtr, class _Arg> 
# 2412
struct __result_of_impl< true, false, _MemPtr, _Arg>  : public __result_of_memobj< typename decay< _MemPtr> ::type, typename __inv_unwrap< _Arg> ::type>  { 
# 2415
}; 
# 2417
template< class _MemPtr, class _Arg, class ..._Args> 
# 2418
struct __result_of_impl< false, true, _MemPtr, _Arg, _Args...>  : public __result_of_memfun< typename decay< _MemPtr> ::type, typename __inv_unwrap< _Arg> ::type, _Args...>  { 
# 2421
}; 
# 2424
struct __result_of_other_impl { 
# 2426
template< class _Fn, class ..._Args> static __result_of_success< __decltype((std::declval< _Fn> ()(std::declval< _Args> ()...))), __invoke_other>  _S_test(int); 
# 2431
template< class ...> static __failure_type _S_test(...); 
# 2433
}; 
# 2435
template< class _Functor, class ..._ArgTypes> 
# 2436
struct __result_of_impl< false, false, _Functor, _ArgTypes...>  : private __result_of_other_impl { 
# 2439
typedef __decltype((_S_test< _Functor, _ArgTypes...> (0))) type; 
# 2440
}; 
# 2443
template< class _Functor, class ..._ArgTypes> 
# 2444
struct __invoke_result : public __result_of_impl< is_member_object_pointer< typename remove_reference< _Functor> ::type> ::value, is_member_function_pointer< typename remove_reference< _Functor> ::type> ::value, _Functor, _ArgTypes...> ::type { 
# 2454
}; 
# 2456
template< class _Functor, class ..._ArgTypes> 
# 2457
struct result_of< _Functor (_ArgTypes ...)>  : public __invoke_result< _Functor, _ArgTypes...>  { 
# 2459
}; 
# 2463
template< size_t _Len, size_t _Align = __alignof__(typename __aligned_storage_msa< _Len> ::__type)> using aligned_storage_t = typename aligned_storage< _Len, _Align> ::type; 
# 2467
template< size_t _Len, class ..._Types> using aligned_union_t = typename aligned_union< _Len, _Types...> ::type; 
# 2471
template< class _Tp> using decay_t = typename decay< _Tp> ::type; 
# 2475
template< bool _Cond, class _Tp = void> using enable_if_t = typename enable_if< _Cond, _Tp> ::type; 
# 2479
template< bool _Cond, class _Iftrue, class _Iffalse> using conditional_t = typename conditional< _Cond, _Iftrue, _Iffalse> ::type; 
# 2483
template< class ..._Tp> using common_type_t = typename common_type< _Tp...> ::type; 
# 2487
template< class _Tp> using underlying_type_t = typename underlying_type< _Tp> ::type; 
# 2491
template< class _Tp> using result_of_t = typename result_of< _Tp> ::type; 
# 2496
template< bool _Cond, class _Tp = void> using __enable_if_t = typename enable_if< _Cond, _Tp> ::type; 
# 2500
template< class ...> using __void_t = void; 
# 2505
template< class ...> using void_t = void; 
# 2509
template< class _Default, class _AlwaysVoid, 
# 2510
template< class ...>  class _Op, class ..._Args> 
# 2511
struct __detector { 
# 2513
using value_t = false_type; 
# 2514
using type = _Default; 
# 2515
}; 
# 2518
template< class _Default, template< class ...>  class _Op, class ...
# 2519
_Args> 
# 2520
struct __detector< _Default, __void_t< _Op< _Args...> > , _Op, _Args...>  { 
# 2522
using value_t = true_type; 
# 2523
using type = _Op< _Args...> ; 
# 2524
}; 
# 2527
template< class _Default, template< class ...>  class _Op, class ...
# 2528
_Args> using __detected_or = __detector< _Default, void, _Op, _Args...> ; 
# 2532
template< class _Default, template< class ...>  class _Op, class ...
# 2533
_Args> using __detected_or_t = typename __detected_or< _Default, _Op, _Args...> ::type; 
# 2553 "/usr/include/c++/7/type_traits" 3
template< class _Tp> struct __is_swappable; 
# 2556
template< class _Tp> struct __is_nothrow_swappable; 
# 2559
template< class ..._Elements> class tuple; 
# 2562
template< class > 
# 2563
struct __is_tuple_like_impl : public false_type { 
# 2564
}; 
# 2566
template< class ..._Tps> 
# 2567
struct __is_tuple_like_impl< tuple< _Tps...> >  : public true_type { 
# 2568
}; 
# 2571
template< class _Tp> 
# 2572
struct __is_tuple_like : public __is_tuple_like_impl< typename remove_cv< typename remove_reference< _Tp> ::type> ::type> ::type { 
# 2575
}; 
# 2577
template< class _Tp> inline typename enable_if< __and_< __not_< __is_tuple_like< _Tp> > , is_move_constructible< _Tp> , is_move_assignable< _Tp> > ::value> ::type swap(_Tp &, _Tp &) noexcept(__and_< is_nothrow_move_constructible< _Tp> , is_nothrow_move_assignable< _Tp> > ::value); 
# 2586
template< class _Tp, size_t _Nm> inline typename enable_if< __is_swappable< _Tp> ::value> ::type swap(_Tp (& __a)[_Nm], _Tp (& __b)[_Nm]) noexcept(__is_nothrow_swappable< _Tp> ::value); 
# 2592
namespace __swappable_details { 
# 2593
using std::swap;
# 2595
struct __do_is_swappable_impl { 
# 2597
template< class _Tp, class 
# 2598
 = __decltype((swap(std::declval< _Tp &> (), std::declval< _Tp &> ())))> static true_type 
# 2597
__test(int); 
# 2601
template< class > static false_type __test(...); 
# 2603
}; 
# 2605
struct __do_is_nothrow_swappable_impl { 
# 2607
template< class _Tp> static __bool_constant< noexcept(swap(std::declval< _Tp &> (), std::declval< _Tp &> ()))>  __test(int); 
# 2612
template< class > static false_type __test(...); 
# 2614
}; 
# 2616
}
# 2618
template< class _Tp> 
# 2619
struct __is_swappable_impl : public __swappable_details::__do_is_swappable_impl { 
# 2622
typedef __decltype((__test< _Tp> (0))) type; 
# 2623
}; 
# 2625
template< class _Tp> 
# 2626
struct __is_nothrow_swappable_impl : public __swappable_details::__do_is_nothrow_swappable_impl { 
# 2629
typedef __decltype((__test< _Tp> (0))) type; 
# 2630
}; 
# 2632
template< class _Tp> 
# 2633
struct __is_swappable : public __is_swappable_impl< _Tp> ::type { 
# 2635
}; 
# 2637
template< class _Tp> 
# 2638
struct __is_nothrow_swappable : public __is_nothrow_swappable_impl< _Tp> ::type { 
# 2640
}; 
# 2647
template< class _Tp> 
# 2648
struct is_swappable : public __is_swappable_impl< _Tp> ::type { 
# 2650
}; 
# 2653
template< class _Tp> 
# 2654
struct is_nothrow_swappable : public __is_nothrow_swappable_impl< _Tp> ::type { 
# 2656
}; 
# 2660
template< class _Tp> constexpr bool 
# 2661
is_swappable_v = (is_swappable< _Tp> ::value); 
# 2665
template< class _Tp> constexpr bool 
# 2666
is_nothrow_swappable_v = (is_nothrow_swappable< _Tp> ::value); 
# 2670
namespace __swappable_with_details { 
# 2671
using std::swap;
# 2673
struct __do_is_swappable_with_impl { 
# 2675
template< class _Tp, class _Up, class 
# 2676
 = __decltype((swap(std::declval< _Tp> (), std::declval< _Up> ()))), class 
# 2678
 = __decltype((swap(std::declval< _Up> (), std::declval< _Tp> ())))> static true_type 
# 2675
__test(int); 
# 2681
template< class , class > static false_type __test(...); 
# 2683
}; 
# 2685
struct __do_is_nothrow_swappable_with_impl { 
# 2687
template< class _Tp, class _Up> static __bool_constant< noexcept(swap(std::declval< _Tp> (), std::declval< _Up> ())) && noexcept(swap(std::declval< _Up> (), std::declval< _Tp> ()))>  __test(int); 
# 2694
template< class , class > static false_type __test(...); 
# 2696
}; 
# 2698
}
# 2700
template< class _Tp, class _Up> 
# 2701
struct __is_swappable_with_impl : public __swappable_with_details::__do_is_swappable_with_impl { 
# 2704
typedef __decltype((__test< _Tp, _Up> (0))) type; 
# 2705
}; 
# 2708
template< class _Tp> 
# 2709
struct __is_swappable_with_impl< _Tp &, _Tp &>  : public __swappable_details::__do_is_swappable_impl { 
# 2712
typedef __decltype((__test< _Tp &> (0))) type; 
# 2713
}; 
# 2715
template< class _Tp, class _Up> 
# 2716
struct __is_nothrow_swappable_with_impl : public __swappable_with_details::__do_is_nothrow_swappable_with_impl { 
# 2719
typedef __decltype((__test< _Tp, _Up> (0))) type; 
# 2720
}; 
# 2723
template< class _Tp> 
# 2724
struct __is_nothrow_swappable_with_impl< _Tp &, _Tp &>  : public __swappable_details::__do_is_nothrow_swappable_impl { 
# 2727
typedef __decltype((__test< _Tp &> (0))) type; 
# 2728
}; 
# 2731
template< class _Tp, class _Up> 
# 2732
struct is_swappable_with : public __is_swappable_with_impl< _Tp, _Up> ::type { 
# 2734
}; 
# 2737
template< class _Tp, class _Up> 
# 2738
struct is_nothrow_swappable_with : public __is_nothrow_swappable_with_impl< _Tp, _Up> ::type { 
# 2740
}; 
# 2744
template< class _Tp, class _Up> constexpr bool 
# 2745
is_swappable_with_v = (is_swappable_with< _Tp, _Up> ::value); 
# 2749
template< class _Tp, class _Up> constexpr bool 
# 2750
is_nothrow_swappable_with_v = (is_nothrow_swappable_with< _Tp, _Up> ::value); 
# 2758
template< class _Result, class _Ret, class  = void> 
# 2759
struct __is_invocable_impl : public false_type { }; 
# 2761
template< class _Result, class _Ret> 
# 2762
struct __is_invocable_impl< _Result, _Ret, __void_t< typename _Result::type> >  : public __or_< is_void< _Ret> , is_convertible< typename _Result::type, _Ret> > ::type { 
# 2764
}; 
# 2766
template< class _Fn, class ..._ArgTypes> 
# 2767
struct __is_invocable : public __is_invocable_impl< __invoke_result< _Fn, _ArgTypes...> , void> ::type { 
# 2769
}; 
# 2771
template< class _Fn, class _Tp, class ..._Args> constexpr bool 
# 2772
__call_is_nt(__invoke_memfun_ref) 
# 2773
{ 
# 2774
using _Up = typename __inv_unwrap< _Tp> ::type; 
# 2775
return noexcept((std::declval< typename __inv_unwrap< _Tp> ::type> ().*std::declval< _Fn> ())(std::declval< _Args> ()...)); 
# 2777
} 
# 2779
template< class _Fn, class _Tp, class ..._Args> constexpr bool 
# 2780
__call_is_nt(__invoke_memfun_deref) 
# 2781
{ 
# 2782
return noexcept(((*std::declval< _Tp> ()).*std::declval< _Fn> ())(std::declval< _Args> ()...)); 
# 2784
} 
# 2786
template< class _Fn, class _Tp> constexpr bool 
# 2787
__call_is_nt(__invoke_memobj_ref) 
# 2788
{ 
# 2789
using _Up = typename __inv_unwrap< _Tp> ::type; 
# 2790
return noexcept((std::declval< typename __inv_unwrap< _Tp> ::type> ().*std::declval< _Fn> ())); 
# 2791
} 
# 2793
template< class _Fn, class _Tp> constexpr bool 
# 2794
__call_is_nt(__invoke_memobj_deref) 
# 2795
{ 
# 2796
return noexcept(((*std::declval< _Tp> ()).*std::declval< _Fn> ())); 
# 2797
} 
# 2799
template< class _Fn, class ..._Args> constexpr bool 
# 2800
__call_is_nt(__invoke_other) 
# 2801
{ 
# 2802
return noexcept(std::declval< _Fn> ()(std::declval< _Args> ()...)); 
# 2803
} 
# 2805
template< class _Result, class _Fn, class ..._Args> 
# 2806
struct __call_is_nothrow : public __bool_constant< std::__call_is_nt< _Fn, _Args...> (typename _Result::__invoke_type{})>  { 
# 2810
}; 
# 2812
template< class _Fn, class ..._Args> using __call_is_nothrow_ = __call_is_nothrow< __invoke_result< _Fn, _Args...> , _Fn, _Args...> ; 
# 2817
template< class _Fn, class ..._Args> 
# 2818
struct __is_nothrow_invocable : public __and_< __is_invocable< _Fn, _Args...> , __call_is_nothrow_< _Fn, _Args...> > ::type { 
# 2821
}; 
# 2823
struct __nonesuch { 
# 2824
__nonesuch() = delete;
# 2825
~__nonesuch() = delete;
# 2826
__nonesuch(const __nonesuch &) = delete;
# 2827
void operator=(const __nonesuch &) = delete;
# 2828
}; 
# 3109 "/usr/include/c++/7/type_traits" 3
}
# 56 "/usr/include/c++/7/bits/move.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 71 "/usr/include/c++/7/bits/move.h" 3
template< class _Tp> constexpr _Tp &&
# 73
forward(typename remove_reference< _Tp> ::type &__t) noexcept 
# 74
{ return static_cast< _Tp &&>(__t); } 
# 82
template< class _Tp> constexpr _Tp &&
# 84
forward(typename remove_reference< _Tp> ::type &&__t) noexcept 
# 85
{ 
# 86
static_assert((!std::template is_lvalue_reference< _Tp> ::value), "template argument substituting _Tp is an lvalue reference type");
# 88
return static_cast< _Tp &&>(__t); 
# 89
} 
# 96
template< class _Tp> constexpr typename remove_reference< _Tp> ::type &&
# 98
move(_Tp &&__t) noexcept 
# 99
{ return static_cast< typename remove_reference< _Tp> ::type &&>(__t); } 
# 102
template< class _Tp> 
# 103
struct __move_if_noexcept_cond : public __and_< __not_< is_nothrow_move_constructible< _Tp> > , is_copy_constructible< _Tp> > ::type { 
# 105
}; 
# 115 "/usr/include/c++/7/bits/move.h" 3
template< class _Tp> constexpr typename conditional< __move_if_noexcept_cond< _Tp> ::value, const _Tp &, _Tp &&> ::type 
# 118
move_if_noexcept(_Tp &__x) noexcept 
# 119
{ return std::move(__x); } 
# 135 "/usr/include/c++/7/bits/move.h" 3
template< class _Tp> inline _Tp *
# 137
addressof(_Tp &__r) noexcept 
# 138
{ return std::__addressof(__r); } 
# 142
template < typename _Tp >
    const _Tp * addressof ( const _Tp && ) = delete;
# 146
template< class _Tp, class _Up = _Tp> inline _Tp 
# 148
__exchange(_Tp &__obj, _Up &&__new_val) 
# 149
{ 
# 150
_Tp __old_val = std::move(__obj); 
# 151
__obj = std::forward< _Up> (__new_val); 
# 152
return __old_val; 
# 153
} 
# 157
}
# 166 "/usr/include/c++/7/bits/move.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 181 "/usr/include/c++/7/bits/move.h" 3
template< class _Tp> inline typename enable_if< __and_< __not_< __is_tuple_like< _Tp> > , is_move_constructible< _Tp> , is_move_assignable< _Tp> > ::value> ::type 
# 187
swap(_Tp &__a, _Tp &__b) noexcept(__and_< is_nothrow_move_constructible< _Tp> , is_nothrow_move_assignable< _Tp> > ::value) 
# 194
{ 
# 198
_Tp __tmp = std::move(__a); 
# 199
__a = std::move(__b); 
# 200
__b = std::move(__tmp); 
# 201
} 
# 206
template< class _Tp, size_t _Nm> inline typename enable_if< __is_swappable< _Tp> ::value> ::type 
# 210
swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm]) noexcept(__is_nothrow_swappable< _Tp> ::value) 
# 216
{ 
# 217
for (size_t __n = (0); __n < _Nm; ++__n) { 
# 218
swap(__a[__n], __b[__n]); }  
# 219
} 
# 223
}
# 65 "/usr/include/c++/7/bits/stl_pair.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 76 "/usr/include/c++/7/bits/stl_pair.h" 3
struct piecewise_construct_t { explicit piecewise_construct_t() = default;}; 
# 79
constexpr piecewise_construct_t piecewise_construct = piecewise_construct_t(); 
# 83
template< class ...> class tuple; 
# 86
template< size_t ...> struct _Index_tuple; 
# 94
template< bool , class _T1, class _T2> 
# 95
struct _PCC { 
# 97
template< class _U1, class _U2> static constexpr bool 
# 98
_ConstructiblePair() 
# 99
{ 
# 100
return __and_< is_constructible< _T1, const _U1 &> , is_constructible< _T2, const _U2 &> > ::value; 
# 102
} 
# 104
template< class _U1, class _U2> static constexpr bool 
# 105
_ImplicitlyConvertiblePair() 
# 106
{ 
# 107
return __and_< is_convertible< const _U1 &, _T1> , is_convertible< const _U2 &, _T2> > ::value; 
# 109
} 
# 111
template< class _U1, class _U2> static constexpr bool 
# 112
_MoveConstructiblePair() 
# 113
{ 
# 114
return __and_< is_constructible< _T1, _U1 &&> , is_constructible< _T2, _U2 &&> > ::value; 
# 116
} 
# 118
template< class _U1, class _U2> static constexpr bool 
# 119
_ImplicitlyMoveConvertiblePair() 
# 120
{ 
# 121
return __and_< is_convertible< _U1 &&, _T1> , is_convertible< _U2 &&, _T2> > ::value; 
# 123
} 
# 125
template< bool __implicit, class _U1, class _U2> static constexpr bool 
# 126
_CopyMovePair() 
# 127
{ 
# 128
using __do_converts = __and_< is_convertible< const _U1 &, _T1> , is_convertible< _U2 &&, _T2> > ; 
# 130
using __converts = typename conditional< __implicit, __and_< is_convertible< const _U1 &, _T1> , is_convertible< _U2 &&, _T2> > , __not_< __and_< is_convertible< const _U1 &, _T1> , is_convertible< _U2 &&, _T2> > > > ::type; 
# 133
return __and_< is_constructible< _T1, const _U1 &> , is_constructible< _T2, _U2 &&> , typename conditional< __implicit, __and_< is_convertible< const _U1 &, _T1> , is_convertible< _U2 &&, _T2> > , __not_< __and_< is_convertible< const _U1 &, _T1> , is_convertible< _U2 &&, _T2> > > > ::type> ::value; 
# 137
} 
# 139
template< bool __implicit, class _U1, class _U2> static constexpr bool 
# 140
_MoveCopyPair() 
# 141
{ 
# 142
using __do_converts = __and_< is_convertible< _U1 &&, _T1> , is_convertible< const _U2 &, _T2> > ; 
# 144
using __converts = typename conditional< __implicit, __and_< is_convertible< _U1 &&, _T1> , is_convertible< const _U2 &, _T2> > , __not_< __and_< is_convertible< _U1 &&, _T1> , is_convertible< const _U2 &, _T2> > > > ::type; 
# 147
return __and_< is_constructible< _T1, _U1 &&> , is_constructible< _T2, const _U2 &&> , typename conditional< __implicit, __and_< is_convertible< _U1 &&, _T1> , is_convertible< const _U2 &, _T2> > , __not_< __and_< is_convertible< _U1 &&, _T1> , is_convertible< const _U2 &, _T2> > > > ::type> ::value; 
# 151
} 
# 152
}; 
# 154
template< class _T1, class _T2> 
# 155
struct _PCC< false, _T1, _T2>  { 
# 157
template< class _U1, class _U2> static constexpr bool 
# 158
_ConstructiblePair() 
# 159
{ 
# 160
return false; 
# 161
} 
# 163
template< class _U1, class _U2> static constexpr bool 
# 164
_ImplicitlyConvertiblePair() 
# 165
{ 
# 166
return false; 
# 167
} 
# 169
template< class _U1, class _U2> static constexpr bool 
# 170
_MoveConstructiblePair() 
# 171
{ 
# 172
return false; 
# 173
} 
# 175
template< class _U1, class _U2> static constexpr bool 
# 176
_ImplicitlyMoveConvertiblePair() 
# 177
{ 
# 178
return false; 
# 179
} 
# 180
}; 
# 185
struct __nonesuch_no_braces : public __nonesuch { 
# 186
explicit __nonesuch_no_braces(const __nonesuch &) = delete;
# 187
}; 
# 190
template< class _U1, class _U2> class __pair_base { 
# 193
template< class _T1, class _T2> friend struct pair; 
# 194
__pair_base() = default;
# 195
~__pair_base() = default;
# 196
__pair_base(const __pair_base &) = default;
# 197
__pair_base &operator=(const __pair_base &) = delete;
# 199
}; 
# 207
template< class _T1, class _T2> 
# 208
struct pair : private __pair_base< _T1, _T2>  { 
# 211
typedef _T1 first_type; 
# 212
typedef _T2 second_type; 
# 214
_T1 first; 
# 215
_T2 second; 
# 222
template< class _U1 = _T1, class 
# 223
_U2 = _T2, typename enable_if< __and_< __is_implicitly_default_constructible< _U1> , __is_implicitly_default_constructible< _U2> > ::value, bool> ::type 
# 227
 = true> constexpr 
# 229
pair() : first(), second() 
# 230
{ } 
# 233
template< class _U1 = _T1, class 
# 234
_U2 = _T2, typename enable_if< __and_< is_default_constructible< _U1> , is_default_constructible< _U2> , __not_< __and_< __is_implicitly_default_constructible< _U1> , __is_implicitly_default_constructible< _U2> > > > ::value, bool> ::type 
# 241
 = false> constexpr explicit 
# 242
pair() : first(), second() 
# 243
{ } 
# 252 "/usr/include/c++/7/bits/stl_pair.h" 3
using _PCCP = _PCC< true, _T1, _T2> ; 
# 254
template< class _U1 = _T1, class _U2 = _T2, typename enable_if< _PCC< true, _T1, _T2> ::template _ConstructiblePair< _U1, _U2> () && _PCC< true, _T1, _T2> ::template _ImplicitlyConvertiblePair< _U1, _U2> (), bool> ::type 
# 259
 = true> constexpr 
# 260
pair(const _T1 &__a, const _T2 &__b) : first(__a), second(__b) 
# 261
{ } 
# 263
template< class _U1 = _T1, class _U2 = _T2, typename enable_if< _PCC< true, _T1, _T2> ::template _ConstructiblePair< _U1, _U2> () && (!_PCC< true, _T1, _T2> ::template _ImplicitlyConvertiblePair< _U1, _U2> ()), bool> ::type 
# 268
 = false> constexpr explicit 
# 269
pair(const _T1 &__a, const _T2 &__b) : first(__a), second(__b) 
# 270
{ } 
# 280 "/usr/include/c++/7/bits/stl_pair.h" 3
template< class _U1, class _U2> using _PCCFP = _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ; 
# 285
template< class _U1, class _U2, typename enable_if< _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _ConstructiblePair< _U1, _U2> () && _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _ImplicitlyConvertiblePair< _U1, _U2> (), bool> ::type 
# 290
 = true> constexpr 
# 291
pair(const pair< _U1, _U2>  &__p) : first((__p.first)), second((__p.second)) 
# 292
{ } 
# 294
template< class _U1, class _U2, typename enable_if< _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _ConstructiblePair< _U1, _U2> () && (!_PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _ImplicitlyConvertiblePair< _U1, _U2> ()), bool> ::type 
# 299
 = false> constexpr explicit 
# 300
pair(const pair< _U1, _U2>  &__p) : first((__p.first)), second((__p.second)) 
# 301
{ } 
# 303
constexpr pair(const pair &) = default;
# 304
constexpr pair(pair &&) = default;
# 307
template< class _U1, typename enable_if< _PCC< true, _T1, _T2> ::template _MoveCopyPair< true, _U1, _T2> (), bool> ::type 
# 310
 = true> constexpr 
# 311
pair(_U1 &&__x, const _T2 &__y) : first(std::forward< _U1> (__x)), second(__y) 
# 312
{ } 
# 314
template< class _U1, typename enable_if< _PCC< true, _T1, _T2> ::template _MoveCopyPair< false, _U1, _T2> (), bool> ::type 
# 317
 = false> constexpr explicit 
# 318
pair(_U1 &&__x, const _T2 &__y) : first(std::forward< _U1> (__x)), second(__y) 
# 319
{ } 
# 321
template< class _U2, typename enable_if< _PCC< true, _T1, _T2> ::template _CopyMovePair< true, _T1, _U2> (), bool> ::type 
# 324
 = true> constexpr 
# 325
pair(const _T1 &__x, _U2 &&__y) : first(__x), second(std::forward< _U2> (__y)) 
# 326
{ } 
# 328
template< class _U2, typename enable_if< _PCC< true, _T1, _T2> ::template _CopyMovePair< false, _T1, _U2> (), bool> ::type 
# 331
 = false> explicit 
# 332
pair(const _T1 &__x, _U2 &&__y) : first(__x), second(std::forward< _U2> (__y)) 
# 333
{ } 
# 335
template< class _U1, class _U2, typename enable_if< _PCC< true, _T1, _T2> ::template _MoveConstructiblePair< _U1, _U2> () && _PCC< true, _T1, _T2> ::template _ImplicitlyMoveConvertiblePair< _U1, _U2> (), bool> ::type 
# 340
 = true> constexpr 
# 341
pair(_U1 &&__x, _U2 &&__y) : first(std::forward< _U1> (__x)), second(std::forward< _U2> (__y)) 
# 342
{ } 
# 344
template< class _U1, class _U2, typename enable_if< _PCC< true, _T1, _T2> ::template _MoveConstructiblePair< _U1, _U2> () && (!_PCC< true, _T1, _T2> ::template _ImplicitlyMoveConvertiblePair< _U1, _U2> ()), bool> ::type 
# 349
 = false> constexpr explicit 
# 350
pair(_U1 &&__x, _U2 &&__y) : first(std::forward< _U1> (__x)), second(std::forward< _U2> (__y)) 
# 351
{ } 
# 354
template< class _U1, class _U2, typename enable_if< _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _MoveConstructiblePair< _U1, _U2> () && _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _ImplicitlyMoveConvertiblePair< _U1, _U2> (), bool> ::type 
# 359
 = true> constexpr 
# 360
pair(pair< _U1, _U2>  &&__p) : first(std::forward< _U1> ((__p.first))), second(std::forward< _U2> ((__p.second))) 
# 362
{ } 
# 364
template< class _U1, class _U2, typename enable_if< _PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _MoveConstructiblePair< _U1, _U2> () && (!_PCC< (!is_same< _T1, _U1> ::value) || (!is_same< _T2, _U2> ::value), _T1, _T2> ::template _ImplicitlyMoveConvertiblePair< _U1, _U2> ()), bool> ::type 
# 369
 = false> constexpr explicit 
# 370
pair(pair< _U1, _U2>  &&__p) : first(std::forward< _U1> ((__p.first))), second(std::forward< _U2> ((__p.second))) 
# 372
{ } 
# 374
template< class ..._Args1, class ..._Args2> pair(std::piecewise_construct_t, tuple< _Args1...> , tuple< _Args2...> ); 
# 378
pair &operator=(typename conditional< __and_< is_copy_assignable< _T1> , is_copy_assignable< _T2> > ::value, const pair &, const std::__nonesuch_no_braces &> ::type 
# 381
__p) 
# 382
{ 
# 383
(first) = (__p.first); 
# 384
(second) = (__p.second); 
# 385
return *this; 
# 386
} 
# 389
pair &operator=(typename conditional< __and_< is_move_assignable< _T1> , is_move_assignable< _T2> > ::value, pair &&, std::__nonesuch_no_braces &&> ::type 
# 392
__p) noexcept(__and_< is_nothrow_move_assignable< _T1> , is_nothrow_move_assignable< _T2> > ::value) 
# 395
{ 
# 396
(first) = std::forward< first_type> ((__p.first)); 
# 397
(second) = std::forward< second_type> ((__p.second)); 
# 398
return *this; 
# 399
} 
# 401
template< class _U1, class _U2> typename enable_if< __and_< is_assignable< _T1 &, const _U1 &> , is_assignable< _T2 &, const _U2 &> > ::value, pair &> ::type 
# 405
operator=(const pair< _U1, _U2>  &__p) 
# 406
{ 
# 407
(first) = (__p.first); 
# 408
(second) = (__p.second); 
# 409
return *this; 
# 410
} 
# 412
template< class _U1, class _U2> typename enable_if< __and_< is_assignable< _T1 &, _U1 &&> , is_assignable< _T2 &, _U2 &&> > ::value, pair &> ::type 
# 416
operator=(pair< _U1, _U2>  &&__p) 
# 417
{ 
# 418
(first) = std::forward< _U1> ((__p.first)); 
# 419
(second) = std::forward< _U2> ((__p.second)); 
# 420
return *this; 
# 421
} 
# 424
void swap(pair &__p) noexcept(__and_< __is_nothrow_swappable< _T1> , __is_nothrow_swappable< _T2> > ::value) 
# 427
{ 
# 428
using std::swap;
# 429
swap(first, __p.first); 
# 430
swap(second, __p.second); 
# 431
} 
# 434
private: template< class ..._Args1, std::size_t ..._Indexes1, class ...
# 435
_Args2, std::size_t ..._Indexes2> 
# 434
pair(tuple< _Args1...>  &, tuple< _Args2...>  &, _Index_tuple< _Indexes1...> , _Index_tuple< _Indexes2...> ); 
# 439
}; 
# 446
template< class _T1, class _T2> constexpr bool 
# 448
operator==(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 449
{ return ((__x.first) == (__y.first)) && ((__x.second) == (__y.second)); } 
# 452
template< class _T1, class _T2> constexpr bool 
# 454
operator<(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 455
{ return ((__x.first) < (__y.first)) || ((!((__y.first) < (__x.first))) && ((__x.second) < (__y.second))); 
# 456
} 
# 459
template< class _T1, class _T2> constexpr bool 
# 461
operator!=(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 462
{ return !(__x == __y); } 
# 465
template< class _T1, class _T2> constexpr bool 
# 467
operator>(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 468
{ return __y < __x; } 
# 471
template< class _T1, class _T2> constexpr bool 
# 473
operator<=(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 474
{ return !(__y < __x); } 
# 477
template< class _T1, class _T2> constexpr bool 
# 479
operator>=(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 480
{ return !(__x < __y); } 
# 486
template< class _T1, class _T2> inline typename enable_if< __and_< __is_swappable< _T1> , __is_swappable< _T2> > ::value> ::type 
# 495
swap(pair< _T1, _T2>  &__x, pair< _T1, _T2>  &__y) noexcept(noexcept(__x.swap(__y))) 
# 497
{ __x.swap(__y); } 
# 500
template < typename _T1, typename _T2 >
    typename enable_if < ! __and_ < __is_swappable < _T1 >,
          __is_swappable < _T2 > > :: value > :: type
    swap ( pair < _T1, _T2 > &, pair < _T1, _T2 > & ) = delete;
# 521 "/usr/include/c++/7/bits/stl_pair.h" 3
template< class _T1, class _T2> constexpr pair< typename __decay_and_strip< _T1> ::__type, typename __decay_and_strip< _T2> ::__type>  
# 524
make_pair(_T1 &&__x, _T2 &&__y) 
# 525
{ 
# 526
typedef typename __decay_and_strip< _T1> ::__type __ds_type1; 
# 527
typedef typename __decay_and_strip< _T2> ::__type __ds_type2; 
# 528
typedef pair< typename __decay_and_strip< _T1> ::__type, typename __decay_and_strip< _T2> ::__type>  __pair_type; 
# 529
return __pair_type(std::forward< _T1> (__x), std::forward< _T2> (__y)); 
# 530
} 
# 541 "/usr/include/c++/7/bits/stl_pair.h" 3
}
# 39 "/usr/include/c++/7/initializer_list" 3
#pragma GCC visibility push ( default )
# 43
namespace std { 
# 46
template< class _E> 
# 47
class initializer_list { 
# 50
public: typedef _E value_type; 
# 51
typedef const _E &reference; 
# 52
typedef const _E &const_reference; 
# 53
typedef size_t size_type; 
# 54
typedef const _E *iterator; 
# 55
typedef const _E *const_iterator; 
# 58
private: iterator _M_array; 
# 59
size_type _M_len; 
# 62
constexpr initializer_list(const_iterator __a, size_type __l) : _M_array(__a), _M_len(__l) 
# 63
{ } 
# 66
public: constexpr initializer_list() noexcept : _M_array((0)), _M_len((0)) 
# 67
{ } 
# 71
constexpr size_type size() const noexcept { return _M_len; } 
# 75
constexpr const_iterator begin() const noexcept { return _M_array; } 
# 79
constexpr const_iterator end() const noexcept { return begin() + size(); } 
# 80
}; 
# 87
template< class _Tp> constexpr const _Tp *
# 89
begin(initializer_list< _Tp>  __ils) noexcept 
# 90
{ return __ils.begin(); } 
# 97
template< class _Tp> constexpr const _Tp *
# 99
end(initializer_list< _Tp>  __ils) noexcept 
# 100
{ return __ils.end(); } 
# 101
}
# 103
#pragma GCC visibility pop
# 78 "/usr/include/c++/7/utility" 3
namespace std __attribute((__visibility__("default"))) { 
# 83
template< class _Tp> struct tuple_size; 
# 90
template< class _Tp, class  = void> 
# 91
struct __tuple_size_cv_impl { }; 
# 93
template< class _Tp> 
# 94
struct __tuple_size_cv_impl< _Tp, __void_t< __decltype(tuple_size< _Tp> ::value)> >  : public integral_constant< unsigned long, tuple_size< _Tp> ::value>  { 
# 95
}; 
# 99
template< class _Tp> 
# 100
struct tuple_size< const _Tp>  : public __tuple_size_cv_impl< _Tp>  { }; 
# 102
template< class _Tp> 
# 103
struct tuple_size< volatile _Tp>  : public __tuple_size_cv_impl< _Tp>  { }; 
# 105
template< class _Tp> 
# 106
struct tuple_size< const volatile _Tp>  : public __tuple_size_cv_impl< _Tp>  { }; 
# 128 "/usr/include/c++/7/utility" 3
template< size_t __i, class _Tp> struct tuple_element; 
# 132
template< size_t __i, class _Tp> using __tuple_element_t = typename tuple_element< __i, _Tp> ::type; 
# 135
template< size_t __i, class _Tp> 
# 136
struct tuple_element< __i, const _Tp>  { 
# 138
typedef typename add_const< __tuple_element_t< __i, _Tp> > ::type type; 
# 139
}; 
# 141
template< size_t __i, class _Tp> 
# 142
struct tuple_element< __i, volatile _Tp>  { 
# 144
typedef typename add_volatile< __tuple_element_t< __i, _Tp> > ::type type; 
# 145
}; 
# 147
template< size_t __i, class _Tp> 
# 148
struct tuple_element< __i, const volatile _Tp>  { 
# 150
typedef typename add_cv< __tuple_element_t< __i, _Tp> > ::type type; 
# 151
}; 
# 156
template< size_t __i, class _Tp> using tuple_element_t = typename tuple_element< __i, _Tp> ::type; 
# 163
template< class _T1, class _T2> 
# 164
struct __is_tuple_like_impl< pair< _T1, _T2> >  : public true_type { 
# 165
}; 
# 168
template< class _Tp1, class _Tp2> 
# 169
struct tuple_size< pair< _Tp1, _Tp2> >  : public integral_constant< unsigned long, 2UL>  { 
# 170
}; 
# 173
template< class _Tp1, class _Tp2> 
# 174
struct tuple_element< 0, pair< _Tp1, _Tp2> >  { 
# 175
typedef _Tp1 type; }; 
# 178
template< class _Tp1, class _Tp2> 
# 179
struct tuple_element< 1, pair< _Tp1, _Tp2> >  { 
# 180
typedef _Tp2 type; }; 
# 182
template< size_t _Int> struct __pair_get; 
# 186
template<> struct __pair_get< 0UL>  { 
# 188
template< class _Tp1, class _Tp2> static constexpr _Tp1 &
# 190
__get(pair< _Tp1, _Tp2>  &__pair) noexcept 
# 191
{ return __pair.first; } 
# 193
template< class _Tp1, class _Tp2> static constexpr _Tp1 &&
# 195
__move_get(pair< _Tp1, _Tp2>  &&__pair) noexcept 
# 196
{ return std::forward< _Tp1> ((__pair.first)); } 
# 198
template< class _Tp1, class _Tp2> static constexpr const _Tp1 &
# 200
__const_get(const pair< _Tp1, _Tp2>  &__pair) noexcept 
# 201
{ return __pair.first; } 
# 202
}; 
# 205
template<> struct __pair_get< 1UL>  { 
# 207
template< class _Tp1, class _Tp2> static constexpr _Tp2 &
# 209
__get(pair< _Tp1, _Tp2>  &__pair) noexcept 
# 210
{ return __pair.second; } 
# 212
template< class _Tp1, class _Tp2> static constexpr _Tp2 &&
# 214
__move_get(pair< _Tp1, _Tp2>  &&__pair) noexcept 
# 215
{ return std::forward< _Tp2> ((__pair.second)); } 
# 217
template< class _Tp1, class _Tp2> static constexpr const _Tp2 &
# 219
__const_get(const pair< _Tp1, _Tp2>  &__pair) noexcept 
# 220
{ return __pair.second; } 
# 221
}; 
# 223
template< size_t _Int, class _Tp1, class _Tp2> constexpr typename tuple_element< _Int, pair< _Tp1, _Tp2> > ::type &
# 225
get(pair< _Tp1, _Tp2>  &__in) noexcept 
# 226
{ return __pair_get< _Int> ::__get(__in); } 
# 228
template< size_t _Int, class _Tp1, class _Tp2> constexpr typename tuple_element< _Int, pair< _Tp1, _Tp2> > ::type &&
# 230
get(pair< _Tp1, _Tp2>  &&__in) noexcept 
# 231
{ return __pair_get< _Int> ::__move_get(std::move(__in)); } 
# 233
template< size_t _Int, class _Tp1, class _Tp2> constexpr const typename tuple_element< _Int, pair< _Tp1, _Tp2> > ::type &
# 235
get(const pair< _Tp1, _Tp2>  &__in) noexcept 
# 236
{ return __pair_get< _Int> ::__const_get(__in); } 
# 242
template< class _Tp, class _Up> constexpr _Tp &
# 244
get(pair< _Tp, _Up>  &__p) noexcept 
# 245
{ return __p.first; } 
# 247
template< class _Tp, class _Up> constexpr const _Tp &
# 249
get(const pair< _Tp, _Up>  &__p) noexcept 
# 250
{ return __p.first; } 
# 252
template< class _Tp, class _Up> constexpr _Tp &&
# 254
get(pair< _Tp, _Up>  &&__p) noexcept 
# 255
{ return std::move((__p.first)); } 
# 257
template< class _Tp, class _Up> constexpr _Tp &
# 259
get(pair< _Up, _Tp>  &__p) noexcept 
# 260
{ return __p.second; } 
# 262
template< class _Tp, class _Up> constexpr const _Tp &
# 264
get(const pair< _Up, _Tp>  &__p) noexcept 
# 265
{ return __p.second; } 
# 267
template< class _Tp, class _Up> constexpr _Tp &&
# 269
get(pair< _Up, _Tp>  &&__p) noexcept 
# 270
{ return std::move((__p.second)); } 
# 275
template< class _Tp, class _Up = _Tp> inline _Tp 
# 277
exchange(_Tp &__obj, _Up &&__new_val) 
# 278
{ return std::__exchange(__obj, std::forward< _Up> (__new_val)); } 
# 283
template< size_t ..._Indexes> struct _Index_tuple { }; 
# 286
template< class _Itup1, class _Itup2> struct _Itup_cat; 
# 288
template< size_t ..._Ind1, size_t ..._Ind2> 
# 289
struct _Itup_cat< _Index_tuple< _Ind1...> , _Index_tuple< _Ind2...> >  { 
# 291
using __type = _Index_tuple< _Ind1..., (_Ind2 + sizeof...(_Ind1))...> ; 
# 292
}; 
# 295
template< size_t _Num> 
# 296
struct _Build_index_tuple : public _Itup_cat< typename _Build_index_tuple< _Num / (2)> ::__type, typename _Build_index_tuple< _Num - (_Num / (2))> ::__type>  { 
# 299
}; 
# 302
template<> struct _Build_index_tuple< 1UL>  { 
# 304
typedef _Index_tuple< 0UL>  __type; 
# 305
}; 
# 308
template<> struct _Build_index_tuple< 0UL>  { 
# 310
typedef _Index_tuple< >  __type; 
# 311
}; 
# 318
template< class _Tp, _Tp ..._Idx> 
# 319
struct integer_sequence { 
# 321
typedef _Tp value_type; 
# 322
static constexpr size_t size() noexcept { return sizeof...(_Idx); } 
# 323
}; 
# 325
template< class _Tp, _Tp _Num, class 
# 326
_ISeq = typename _Build_index_tuple< _Num> ::__type> struct _Make_integer_sequence; 
# 329
template< class _Tp, _Tp _Num, size_t ..._Idx> 
# 330
struct _Make_integer_sequence< _Tp, _Num, _Index_tuple< _Idx...> >  { 
# 332
static_assert((_Num >= 0), "Cannot make integer sequence of negative length");
# 335
typedef integer_sequence< _Tp, (static_cast< _Tp>(_Idx))...>  __type; 
# 336
}; 
# 339
template< class _Tp, _Tp _Num> using make_integer_sequence = typename _Make_integer_sequence< _Tp, _Num> ::__type; 
# 344
template< size_t ..._Idx> using index_sequence = integer_sequence< unsigned long, _Idx...> ; 
# 348
template< size_t _Num> using make_index_sequence = make_integer_sequence< unsigned long, _Num> ; 
# 352
template< class ..._Types> using index_sequence_for = make_index_sequence< sizeof...(_Types)> ; 
# 403 "/usr/include/c++/7/utility" 3
}
# 206 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 207
cudaLaunchKernel(const T *
# 208
func, dim3 
# 209
gridDim, dim3 
# 210
blockDim, void **
# 211
args, size_t 
# 212
sharedMem = 0, cudaStream_t 
# 213
stream = 0) 
# 215
{ 
# 216
return ::cudaLaunchKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
# 217
} 
# 277 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class ...ExpTypes, class ...ActTypes> static inline cudaError_t 
# 278
cudaLaunchKernelEx(const cudaLaunchConfig_t *
# 279
config, void (*
# 280
kernel)(ExpTypes ...), ActTypes &&...
# 281
args) 
# 283
{ 
# 284
return [&](ExpTypes ...coercedArgs) { 
# 285
void *pArgs[] = {(&coercedArgs)...}; 
# 286
return ::cudaLaunchKernelExC(config, (const void *)(kernel), pArgs); 
# 287
} (std::forward< ActTypes> (args)...); 
# 288
} 
# 340 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 341
cudaLaunchCooperativeKernel(const T *
# 342
func, dim3 
# 343
gridDim, dim3 
# 344
blockDim, void **
# 345
args, size_t 
# 346
sharedMem = 0, cudaStream_t 
# 347
stream = 0) 
# 349
{ 
# 350
return ::cudaLaunchCooperativeKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
# 351
} 
# 384 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
static inline cudaError_t cudaEventCreate(cudaEvent_t *
# 385
event, unsigned 
# 386
flags) 
# 388
{ 
# 389
return ::cudaEventCreateWithFlags(event, flags); 
# 390
} 
# 428 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
static inline cudaError_t cudaGraphInstantiate(cudaGraphExec_t *
# 429
pGraphExec, cudaGraph_t 
# 430
graph, cudaGraphNode_t *
# 431
pErrorNode, char *
# 432
pLogBuffer, size_t 
# 433
bufferSize) 
# 435
{ 
# 436
(void)pErrorNode; 
# 437
(void)pLogBuffer; 
# 438
(void)bufferSize; 
# 439
return ::cudaGraphInstantiate(pGraphExec, graph, 0); 
# 440
} 
# 499 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
static inline cudaError_t cudaMallocHost(void **
# 500
ptr, size_t 
# 501
size, unsigned 
# 502
flags) 
# 504
{ 
# 505
return ::cudaHostAlloc(ptr, size, flags); 
# 506
} 
# 508
template< class T> static inline cudaError_t 
# 509
cudaHostAlloc(T **
# 510
ptr, size_t 
# 511
size, unsigned 
# 512
flags) 
# 514
{ 
# 515
return ::cudaHostAlloc((void **)((void *)ptr), size, flags); 
# 516
} 
# 518
template< class T> static inline cudaError_t 
# 519
cudaHostGetDevicePointer(T **
# 520
pDevice, void *
# 521
pHost, unsigned 
# 522
flags) 
# 524
{ 
# 525
return ::cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags); 
# 526
} 
# 628 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 629
cudaMallocManaged(T **
# 630
devPtr, size_t 
# 631
size, unsigned 
# 632
flags = 1) 
# 634
{ 
# 635
return ::cudaMallocManaged((void **)((void *)devPtr), size, flags); 
# 636
} 
# 646 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> cudaError_t 
# 647
cudaMemAdvise(T *
# 648
devPtr, size_t 
# 649
count, cudaMemoryAdvise 
# 650
advice, cudaMemLocation 
# 651
location) 
# 653
{ 
# 654
return ::cudaMemAdvise_v2((const void *)devPtr, count, advice, location); 
# 655
} 
# 657
template< class T> static inline cudaError_t 
# 658
cudaMemPrefetchAsync(T *
# 659
devPtr, size_t 
# 660
count, cudaMemLocation 
# 661
location, unsigned 
# 662
flags, cudaStream_t 
# 663
stream = 0) 
# 665
{ 
# 666
return ::cudaMemPrefetchAsync_v2((const void *)devPtr, count, location, flags, stream); 
# 667
} 
# 749 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 750
cudaStreamAttachMemAsync(cudaStream_t 
# 751
stream, T *
# 752
devPtr, size_t 
# 753
length = 0, unsigned 
# 754
flags = 4) 
# 756
{ 
# 757
return ::cudaStreamAttachMemAsync(stream, (void *)devPtr, length, flags); 
# 758
} 
# 760
template< class T> inline cudaError_t 
# 761
cudaMalloc(T **
# 762
devPtr, size_t 
# 763
size) 
# 765
{ 
# 766
return ::cudaMalloc((void **)((void *)devPtr), size); 
# 767
} 
# 769
template< class T> static inline cudaError_t 
# 770
cudaMallocHost(T **
# 771
ptr, size_t 
# 772
size, unsigned 
# 773
flags = 0) 
# 775
{ 
# 776
return cudaMallocHost((void **)((void *)ptr), size, flags); 
# 777
} 
# 779
template< class T> static inline cudaError_t 
# 780
cudaMallocPitch(T **
# 781
devPtr, size_t *
# 782
pitch, size_t 
# 783
width, size_t 
# 784
height) 
# 786
{ 
# 787
return ::cudaMallocPitch((void **)((void *)devPtr), pitch, width, height); 
# 788
} 
# 799 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
static inline cudaError_t cudaMallocAsync(void **
# 800
ptr, size_t 
# 801
size, cudaMemPool_t 
# 802
memPool, cudaStream_t 
# 803
stream) 
# 805
{ 
# 806
return ::cudaMallocFromPoolAsync(ptr, size, memPool, stream); 
# 807
} 
# 809
template< class T> static inline cudaError_t 
# 810
cudaMallocAsync(T **
# 811
ptr, size_t 
# 812
size, cudaMemPool_t 
# 813
memPool, cudaStream_t 
# 814
stream) 
# 816
{ 
# 817
return ::cudaMallocFromPoolAsync((void **)((void *)ptr), size, memPool, stream); 
# 818
} 
# 820
template< class T> static inline cudaError_t 
# 821
cudaMallocAsync(T **
# 822
ptr, size_t 
# 823
size, cudaStream_t 
# 824
stream) 
# 826
{ 
# 827
return ::cudaMallocAsync((void **)((void *)ptr), size, stream); 
# 828
} 
# 830
template< class T> static inline cudaError_t 
# 831
cudaMallocFromPoolAsync(T **
# 832
ptr, size_t 
# 833
size, cudaMemPool_t 
# 834
memPool, cudaStream_t 
# 835
stream) 
# 837
{ 
# 838
return ::cudaMallocFromPoolAsync((void **)((void *)ptr), size, memPool, stream); 
# 839
} 
# 878 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 879
cudaMemcpyToSymbol(const T &
# 880
symbol, const void *
# 881
src, size_t 
# 882
count, size_t 
# 883
offset = 0, cudaMemcpyKind 
# 884
kind = cudaMemcpyHostToDevice) 
# 886
{ 
# 887
return ::cudaMemcpyToSymbol((const void *)(&symbol), src, count, offset, kind); 
# 888
} 
# 932 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 933
cudaMemcpyToSymbolAsync(const T &
# 934
symbol, const void *
# 935
src, size_t 
# 936
count, size_t 
# 937
offset = 0, cudaMemcpyKind 
# 938
kind = cudaMemcpyHostToDevice, cudaStream_t 
# 939
stream = 0) 
# 941
{ 
# 942
return ::cudaMemcpyToSymbolAsync((const void *)(&symbol), src, count, offset, kind, stream); 
# 943
} 
# 980 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 981
cudaMemcpyFromSymbol(void *
# 982
dst, const T &
# 983
symbol, size_t 
# 984
count, size_t 
# 985
offset = 0, cudaMemcpyKind 
# 986
kind = cudaMemcpyDeviceToHost) 
# 988
{ 
# 989
return ::cudaMemcpyFromSymbol(dst, (const void *)(&symbol), count, offset, kind); 
# 990
} 
# 1034 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1035
cudaMemcpyFromSymbolAsync(void *
# 1036
dst, const T &
# 1037
symbol, size_t 
# 1038
count, size_t 
# 1039
offset = 0, cudaMemcpyKind 
# 1040
kind = cudaMemcpyDeviceToHost, cudaStream_t 
# 1041
stream = 0) 
# 1043
{ 
# 1044
return ::cudaMemcpyFromSymbolAsync(dst, (const void *)(&symbol), count, offset, kind, stream); 
# 1045
} 
# 1103 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1104
cudaGraphAddMemcpyNodeToSymbol(cudaGraphNode_t *
# 1105
pGraphNode, cudaGraph_t 
# 1106
graph, const cudaGraphNode_t *
# 1107
pDependencies, size_t 
# 1108
numDependencies, const T &
# 1109
symbol, const void *
# 1110
src, size_t 
# 1111
count, size_t 
# 1112
offset, cudaMemcpyKind 
# 1113
kind) 
# 1114
{ 
# 1115
return ::cudaGraphAddMemcpyNodeToSymbol(pGraphNode, graph, pDependencies, numDependencies, (const void *)(&symbol), src, count, offset, kind); 
# 1116
} 
# 1174 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1175
cudaGraphAddMemcpyNodeFromSymbol(cudaGraphNode_t *
# 1176
pGraphNode, cudaGraph_t 
# 1177
graph, const cudaGraphNode_t *
# 1178
pDependencies, size_t 
# 1179
numDependencies, void *
# 1180
dst, const T &
# 1181
symbol, size_t 
# 1182
count, size_t 
# 1183
offset, cudaMemcpyKind 
# 1184
kind) 
# 1185
{ 
# 1186
return ::cudaGraphAddMemcpyNodeFromSymbol(pGraphNode, graph, pDependencies, numDependencies, dst, (const void *)(&symbol), count, offset, kind); 
# 1187
} 
# 1225 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1226
cudaGraphMemcpyNodeSetParamsToSymbol(cudaGraphNode_t 
# 1227
node, const T &
# 1228
symbol, const void *
# 1229
src, size_t 
# 1230
count, size_t 
# 1231
offset, cudaMemcpyKind 
# 1232
kind) 
# 1233
{ 
# 1234
return ::cudaGraphMemcpyNodeSetParamsToSymbol(node, (const void *)(&symbol), src, count, offset, kind); 
# 1235
} 
# 1273 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1274
cudaGraphMemcpyNodeSetParamsFromSymbol(cudaGraphNode_t 
# 1275
node, void *
# 1276
dst, const T &
# 1277
symbol, size_t 
# 1278
count, size_t 
# 1279
offset, cudaMemcpyKind 
# 1280
kind) 
# 1281
{ 
# 1282
return ::cudaGraphMemcpyNodeSetParamsFromSymbol(node, dst, (const void *)(&symbol), count, offset, kind); 
# 1283
} 
# 1331 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1332
cudaGraphExecMemcpyNodeSetParamsToSymbol(cudaGraphExec_t 
# 1333
hGraphExec, cudaGraphNode_t 
# 1334
node, const T &
# 1335
symbol, const void *
# 1336
src, size_t 
# 1337
count, size_t 
# 1338
offset, cudaMemcpyKind 
# 1339
kind) 
# 1340
{ 
# 1341
return ::cudaGraphExecMemcpyNodeSetParamsToSymbol(hGraphExec, node, (const void *)(&symbol), src, count, offset, kind); 
# 1342
} 
# 1390 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1391
cudaGraphExecMemcpyNodeSetParamsFromSymbol(cudaGraphExec_t 
# 1392
hGraphExec, cudaGraphNode_t 
# 1393
node, void *
# 1394
dst, const T &
# 1395
symbol, size_t 
# 1396
count, size_t 
# 1397
offset, cudaMemcpyKind 
# 1398
kind) 
# 1399
{ 
# 1400
return ::cudaGraphExecMemcpyNodeSetParamsFromSymbol(hGraphExec, node, dst, (const void *)(&symbol), count, offset, kind); 
# 1401
} 
# 1404
static inline cudaError_t cudaGraphExecUpdate(cudaGraphExec_t hGraphExec, cudaGraph_t hGraph, cudaGraphNode_t *hErrorNode_out, cudaGraphExecUpdateResult *updateResult_out) 
# 1405
{ 
# 1406
cudaGraphExecUpdateResultInfo resultInfo; 
# 1407
cudaError_t status = cudaGraphExecUpdate(hGraphExec, hGraph, &resultInfo); 
# 1408
if (hErrorNode_out) { 
# 1409
(*hErrorNode_out) = (resultInfo.errorNode); 
# 1410
}  
# 1411
if (updateResult_out) { 
# 1412
(*updateResult_out) = (resultInfo.result); 
# 1413
}  
# 1414
return status; 
# 1415
} 
# 1443 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1444
cudaUserObjectCreate(cudaUserObject_t *
# 1445
object_out, T *
# 1446
objectToWrap, unsigned 
# 1447
initialRefcount, unsigned 
# 1448
flags) 
# 1449
{ 
# 1450
return ::cudaUserObjectCreate(object_out, objectToWrap, [](void *
# 1453
vpObj) { delete (reinterpret_cast< T *>(vpObj)); } , initialRefcount, flags); 
# 1456
} 
# 1458
template< class T> static inline cudaError_t 
# 1459
cudaUserObjectCreate(cudaUserObject_t *
# 1460
object_out, T *
# 1461
objectToWrap, unsigned 
# 1462
initialRefcount, cudaUserObjectFlags 
# 1463
flags) 
# 1464
{ 
# 1465
return cudaUserObjectCreate(object_out, objectToWrap, initialRefcount, (unsigned)flags); 
# 1466
} 
# 1493 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1494
cudaGetSymbolAddress(void **
# 1495
devPtr, const T &
# 1496
symbol) 
# 1498
{ 
# 1499
return ::cudaGetSymbolAddress(devPtr, (const void *)(&symbol)); 
# 1500
} 
# 1525 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1526
cudaGetSymbolSize(size_t *
# 1527
size, const T &
# 1528
symbol) 
# 1530
{ 
# 1531
return ::cudaGetSymbolSize(size, (const void *)(&symbol)); 
# 1532
} 
# 1577 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1578
cudaFuncSetCacheConfig(T *
# 1579
func, cudaFuncCache 
# 1580
cacheConfig) 
# 1582
{ 
# 1583
return ::cudaFuncSetCacheConfig((const void *)func, cacheConfig); 
# 1584
} 
# 1586
template< class T> 
# 1588
__attribute((deprecated)) static inline cudaError_t 
# 1589
cudaFuncSetSharedMemConfig(T *
# 1590
func, cudaSharedMemConfig 
# 1591
config) 
# 1593
{ 
# 1595
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 1600
return ::cudaFuncSetSharedMemConfig((const void *)func, config); 
# 1602
#pragma GCC diagnostic pop
# 1604
} 
# 1636 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> inline cudaError_t 
# 1637
cudaOccupancyMaxActiveBlocksPerMultiprocessor(int *
# 1638
numBlocks, T 
# 1639
func, int 
# 1640
blockSize, size_t 
# 1641
dynamicSMemSize) 
# 1642
{ 
# 1643
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, 0); 
# 1644
} 
# 1688 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> inline cudaError_t 
# 1689
cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int *
# 1690
numBlocks, T 
# 1691
func, int 
# 1692
blockSize, size_t 
# 1693
dynamicSMemSize, unsigned 
# 1694
flags) 
# 1695
{ 
# 1696
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, flags); 
# 1697
} 
# 1702
class __cudaOccupancyB2DHelper { 
# 1703
size_t n; 
# 1705
public: __cudaOccupancyB2DHelper(size_t n_) : n(n_) { } 
# 1706
size_t operator()(int) 
# 1707
{ 
# 1708
return n; 
# 1709
} 
# 1710
}; 
# 1758 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class UnaryFunction, class T> static inline cudaError_t 
# 1759
cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(int *
# 1760
minGridSize, int *
# 1761
blockSize, T 
# 1762
func, UnaryFunction 
# 1763
blockSizeToDynamicSMemSize, int 
# 1764
blockSizeLimit = 0, unsigned 
# 1765
flags = 0) 
# 1766
{ 
# 1767
cudaError_t status; 
# 1770
int device; 
# 1771
cudaFuncAttributes attr; 
# 1774
int maxThreadsPerMultiProcessor; 
# 1775
int warpSize; 
# 1776
int devMaxThreadsPerBlock; 
# 1777
int multiProcessorCount; 
# 1778
int funcMaxThreadsPerBlock; 
# 1779
int occupancyLimit; 
# 1780
int granularity; 
# 1783
int maxBlockSize = 0; 
# 1784
int numBlocks = 0; 
# 1785
int maxOccupancy = 0; 
# 1788
int blockSizeToTryAligned; 
# 1789
int blockSizeToTry; 
# 1790
int blockSizeLimitAligned; 
# 1791
int occupancyInBlocks; 
# 1792
int occupancyInThreads; 
# 1793
size_t dynamicSMemSize; 
# 1799
if (((!minGridSize) || (!blockSize)) || (!func)) { 
# 1800
return cudaErrorInvalidValue; 
# 1801
}  
# 1807
status = ::cudaGetDevice(&device); 
# 1808
if (status != (cudaSuccess)) { 
# 1809
return status; 
# 1810
}  
# 1812
status = cudaDeviceGetAttribute(&maxThreadsPerMultiProcessor, cudaDevAttrMaxThreadsPerMultiProcessor, device); 
# 1816
if (status != (cudaSuccess)) { 
# 1817
return status; 
# 1818
}  
# 1820
status = cudaDeviceGetAttribute(&warpSize, cudaDevAttrWarpSize, device); 
# 1824
if (status != (cudaSuccess)) { 
# 1825
return status; 
# 1826
}  
# 1828
status = cudaDeviceGetAttribute(&devMaxThreadsPerBlock, cudaDevAttrMaxThreadsPerBlock, device); 
# 1832
if (status != (cudaSuccess)) { 
# 1833
return status; 
# 1834
}  
# 1836
status = cudaDeviceGetAttribute(&multiProcessorCount, cudaDevAttrMultiProcessorCount, device); 
# 1840
if (status != (cudaSuccess)) { 
# 1841
return status; 
# 1842
}  
# 1844
status = cudaFuncGetAttributes(&attr, func); 
# 1845
if (status != (cudaSuccess)) { 
# 1846
return status; 
# 1847
}  
# 1849
funcMaxThreadsPerBlock = (attr.maxThreadsPerBlock); 
# 1855
occupancyLimit = maxThreadsPerMultiProcessor; 
# 1856
granularity = warpSize; 
# 1858
if (blockSizeLimit == 0) { 
# 1859
blockSizeLimit = devMaxThreadsPerBlock; 
# 1860
}  
# 1862
if (devMaxThreadsPerBlock < blockSizeLimit) { 
# 1863
blockSizeLimit = devMaxThreadsPerBlock; 
# 1864
}  
# 1866
if (funcMaxThreadsPerBlock < blockSizeLimit) { 
# 1867
blockSizeLimit = funcMaxThreadsPerBlock; 
# 1868
}  
# 1870
blockSizeLimitAligned = (((blockSizeLimit + (granularity - 1)) / granularity) * granularity); 
# 1872
for (blockSizeToTryAligned = blockSizeLimitAligned; blockSizeToTryAligned > 0; blockSizeToTryAligned -= granularity) { 
# 1876
if (blockSizeLimit < blockSizeToTryAligned) { 
# 1877
blockSizeToTry = blockSizeLimit; 
# 1878
} else { 
# 1879
blockSizeToTry = blockSizeToTryAligned; 
# 1880
}  
# 1882
dynamicSMemSize = blockSizeToDynamicSMemSize(blockSizeToTry); 
# 1884
status = cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(&occupancyInBlocks, func, blockSizeToTry, dynamicSMemSize, flags); 
# 1891
if (status != (cudaSuccess)) { 
# 1892
return status; 
# 1893
}  
# 1895
occupancyInThreads = (blockSizeToTry * occupancyInBlocks); 
# 1897
if (occupancyInThreads > maxOccupancy) { 
# 1898
maxBlockSize = blockSizeToTry; 
# 1899
numBlocks = occupancyInBlocks; 
# 1900
maxOccupancy = occupancyInThreads; 
# 1901
}  
# 1905
if (occupancyLimit == maxOccupancy) { 
# 1906
break; 
# 1907
}  
# 1908
}  
# 1916
(*minGridSize) = (numBlocks * multiProcessorCount); 
# 1917
(*blockSize) = maxBlockSize; 
# 1919
return status; 
# 1920
} 
# 1954 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class UnaryFunction, class T> static inline cudaError_t 
# 1955
cudaOccupancyMaxPotentialBlockSizeVariableSMem(int *
# 1956
minGridSize, int *
# 1957
blockSize, T 
# 1958
func, UnaryFunction 
# 1959
blockSizeToDynamicSMemSize, int 
# 1960
blockSizeLimit = 0) 
# 1961
{ 
# 1962
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, blockSizeToDynamicSMemSize, blockSizeLimit, 0); 
# 1963
} 
# 2000 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 2001
cudaOccupancyMaxPotentialBlockSize(int *
# 2002
minGridSize, int *
# 2003
blockSize, T 
# 2004
func, size_t 
# 2005
dynamicSMemSize = 0, int 
# 2006
blockSizeLimit = 0) 
# 2007
{ 
# 2008
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, 0); 
# 2009
} 
# 2038 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 2039
cudaOccupancyAvailableDynamicSMemPerBlock(size_t *
# 2040
dynamicSmemSize, T 
# 2041
func, int 
# 2042
numBlocks, int 
# 2043
blockSize) 
# 2044
{ 
# 2045
return ::cudaOccupancyAvailableDynamicSMemPerBlock(dynamicSmemSize, (const void *)func, numBlocks, blockSize); 
# 2046
} 
# 2097 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 2098
cudaOccupancyMaxPotentialBlockSizeWithFlags(int *
# 2099
minGridSize, int *
# 2100
blockSize, T 
# 2101
func, size_t 
# 2102
dynamicSMemSize = 0, int 
# 2103
blockSizeLimit = 0, unsigned 
# 2104
flags = 0) 
# 2105
{ 
# 2106
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, flags); 
# 2107
} 
# 2141 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 2142
cudaOccupancyMaxPotentialClusterSize(int *
# 2143
clusterSize, T *
# 2144
func, const cudaLaunchConfig_t *
# 2145
config) 
# 2146
{ 
# 2147
return ::cudaOccupancyMaxPotentialClusterSize(clusterSize, (const void *)func, config); 
# 2148
} 
# 2184 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 2185
cudaOccupancyMaxActiveClusters(int *
# 2186
numClusters, T *
# 2187
func, const cudaLaunchConfig_t *
# 2188
config) 
# 2189
{ 
# 2190
return ::cudaOccupancyMaxActiveClusters(numClusters, (const void *)func, config); 
# 2191
} 
# 2224 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> inline cudaError_t 
# 2225
cudaFuncGetAttributes(cudaFuncAttributes *
# 2226
attr, T *
# 2227
entry) 
# 2229
{ 
# 2230
return ::cudaFuncGetAttributes(attr, (const void *)entry); 
# 2231
} 
# 2286 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 2287
cudaFuncSetAttribute(T *
# 2288
entry, cudaFuncAttribute 
# 2289
attr, int 
# 2290
value) 
# 2292
{ 
# 2293
return ::cudaFuncSetAttribute((const void *)entry, attr, value); 
# 2294
} 
# 2318 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 2319
cudaFuncGetName(const char **
# 2320
name, const T *
# 2321
func) 
# 2323
{ 
# 2324
return ::cudaFuncGetName(name, (const void *)func); 
# 2325
} 
# 2341 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 2342
cudaGetKernel(cudaKernel_t *
# 2343
kernelPtr, const T *
# 2344
entryFuncAddr) 
# 2346
{ 
# 2347
return ::cudaGetKernel(kernelPtr, (const void *)entryFuncAddr); 
# 2348
} 
# 2359 "/soft/compilers/cudatoolkit/cuda-12.4.1/bin/../targets/x86_64-linux/include/cuda_runtime.h"
#pragma GCC diagnostic pop
# 64 "CMakeCUDACompilerId.cu"
const char *info_compiler = ("INFO:compiler[NVIDIA]"); 
# 66
const char *info_simulate = ("INFO:simulate[GNU]"); 
# 369 "CMakeCUDACompilerId.cu"
const char info_version[] = {'I', 'N', 'F', 'O', ':', 'c', 'o', 'm', 'p', 'i', 'l', 'e', 'r', '_', 'v', 'e', 'r', 's', 'i', 'o', 'n', '[', (('0') + ((12 / 10000000) % 10)), (('0') + ((12 / 1000000) % 10)), (('0') + ((12 / 100000) % 10)), (('0') + ((12 / 10000) % 10)), (('0') + ((12 / 1000) % 10)), (('0') + ((12 / 100) % 10)), (('0') + ((12 / 10) % 10)), (('0') + (12 % 10)), '.', (('0') + ((4 / 10000000) % 10)), (('0') + ((4 / 1000000) % 10)), (('0') + ((4 / 100000) % 10)), (('0') + ((4 / 10000) % 10)), (('0') + ((4 / 1000) % 10)), (('0') + ((4 / 100) % 10)), (('0') + ((4 / 10) % 10)), (('0') + (4 % 10)), '.', (('0') + ((131 / 10000000) % 10)), (('0') + ((131 / 1000000) % 10)), (('0') + ((131 / 100000) % 10)), (('0') + ((131 / 10000) % 10)), (('0') + ((131 / 1000) % 10)), (('0') + ((131 / 100) % 10)), (('0') + ((131 / 10) % 10)), (('0') + (131 % 10)), ']', '\000'}; 
# 398 "CMakeCUDACompilerId.cu"
const char info_simulate_version[] = {'I', 'N', 'F', 'O', ':', 's', 'i', 'm', 'u', 'l', 'a', 't', 'e', '_', 'v', 'e', 'r', 's', 'i', 'o', 'n', '[', (('0') + ((7 / 10000000) % 10)), (('0') + ((7 / 1000000) % 10)), (('0') + ((7 / 100000) % 10)), (('0') + ((7 / 10000) % 10)), (('0') + ((7 / 1000) % 10)), (('0') + ((7 / 100) % 10)), (('0') + ((7 / 10) % 10)), (('0') + (7 % 10)), '.', (('0') + ((5 / 10000000) % 10)), (('0') + ((5 / 1000000) % 10)), (('0') + ((5 / 100000) % 10)), (('0') + ((5 / 10000) % 10)), (('0') + ((5 / 1000) % 10)), (('0') + ((5 / 100) % 10)), (('0') + ((5 / 10) % 10)), (('0') + (5 % 10)), ']', '\000'}; 
# 418
const char *info_platform = ("INFO:platform[Linux]"); 
# 419
const char *info_arch = ("INFO:arch[]"); 
# 423
const char *info_language_standard_default = ("INFO:standard_default[14]"); 
# 439
const char *info_language_extensions_default = ("INFO:extensions_default[ON]"); 
# 450
int main(int argc, char *argv[]) 
# 451
{ 
# 452
int require = 0; 
# 453
require += (info_compiler[argc]); 
# 454
require += (info_platform[argc]); 
# 456
require += (info_version[argc]); 
# 459
require += (info_simulate[argc]); 
# 462
require += (info_simulate_version[argc]); 
# 464
require += (info_language_standard_default[argc]); 
# 465
require += (info_language_extensions_default[argc]); 
# 466
(void)argv; 
# 467
return require; 
# 468
} 

# 1 "CMakeCUDACompilerId.cudafe1.stub.c"
#define _NV_ANON_NAMESPACE _GLOBAL__N__9b40597e_22_CMakeCUDACompilerId_cu_bd57c623
#ifdef _NV_ANON_NAMESPACE
#endif
# 1 "CMakeCUDACompilerId.cudafe1.stub.c"
#include "CMakeCUDACompilerId.cudafe1.stub.c"
# 1 "CMakeCUDACompilerId.cudafe1.stub.c"
#undef _NV_ANON_NAMESPACE
