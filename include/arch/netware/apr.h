/* ====================================================================
 * The Apache Software License, Version 1.1
 *
 * Copyright (c) 2000-2001 The Apache Software Foundation.  All rights
 * reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. The end-user documentation included with the redistribution,
 *    if any, must include the following acknowledgment:
 *       "This product includes software developed by the
 *        Apache Software Foundation (http://www.apache.org/)."
 *    Alternately, this acknowledgment may appear in the software itself,
 *    if and wherever such third-party acknowledgments normally appear.
 *
 * 4. The names "Apache" and "Apache Software Foundation" must
 *    not be used to endorse or promote products derived from this
 *    software without prior written permission. For written
 *    permission, please contact apache@apache.org.
 *
 * 5. Products derived from this software may not be called "Apache",
 *    nor may "Apache" appear in their name, without prior written
 *    permission of the Apache Software Foundation.
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED.  IN NO EVENT SHALL THE APACHE SOFTWARE FOUNDATION OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 * USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 * ====================================================================
 *
 * This software consists of voluntary contributions made by many
 * individuals on behalf of the Apache Software Foundation.  For more
 * information on the Apache Software Foundation, please see
 * <http://www.apache.org/>.
 */

/* 
 * Note: This is a NetWare specific version of apr.h. It is renamed to
 * apr.h at the start of a Windows build.
 */
#ifdef NETWARE
/**
 * @file netware/apr.h netware/apr.h
 * @brief APR header for NetWare
 */

/**
 * @defgroup APR APR Functions
 * @{
 */


#ifndef APR_H
#define APR_H



#include <sys/types.h>
#include <stddef.h>
#include <stdio.h>
#include <time.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <nks/thread.h>
#include <nks/synch.h>
#include <nks/time.h>
//#include <process.h>
#include <signal.h>


#include <WS2NLM.h>

#define _POSIX_THREAD_SAFE_FUNCTIONS    1
#define READDIR_IS_THREAD_SAFE          1

#define APR_INLINE __inline
#define APR_HAS_INLINE		1
#define __attribute__(__x)
#define ENUM_BITFIELD(e,n,w)  signed int n : w

#define APR_HAVE_ARPA_INET_H    0
#define APR_HAVE_CONIO_H        0
#define APR_HAVE_CRYPT_H        0
#define APR_HAVE_CTYPE_H        1
#define APR_HAVE_DIRENT_H       1
#define APR_HAVE_ERRNO_H        1
#define APR_HAVE_FCNTL_H        1
#define APR_HAVE_IO_H           0
#define APR_HAVE_LIMITS_H       1
#define APR_HAVE_NETDB_H        0
#define APR_HAVE_NETINET_IN_H   0
#define APR_HAVE_PTHREAD_H      0
#define APR_HAVE_SIGNAL_H       1
#define APR_HAVE_STDARG_H       1
#define APR_HAVE_STDIO_H        1
#define APR_HAVE_STDLIB_H       1
#define APR_HAVE_STRING_H       1
#define APR_HAVE_STRINGS_H      0
#define APR_HAVE_SYS_SIGNAL_H   0
#define APR_HAVE_SYS_SOCKET_H   0
#define APR_HAVE_SYS_SYSLIMITS_H 0
#define APR_HAVE_SYS_TYPES_H    1
#define APR_HAVE_SYS_UIO_H      1
#define APR_HAVE_SYS_WAIT_H     0
#define APR_HAVE_UNISTD_H       1

#define APR_USE_FLOCK_SERIALIZE           0 
#define APR_USE_SYSVSEM_SERIALIZE         0
#define APR_USE_FCNTL_SERIALIZE           0
#define APR_USE_PROC_PTHREAD_SERIALIZE    0 
#define APR_USE_PTHREAD_SERIALIZE         0 

#define APR_PROCESS_LOCK_IS_GLOBAL        0

#define APR_USES_ANONYMOUS_SHM            0
#define APR_USES_FILEBASED_SHM            0
#define APR_USES_KEYBASED_SHM             0

#define APR_FILE_BASED_SHM      0
#define APR_MEM_BASED_SHM       0

#define APR_HAVE_CORKABLE_TCP	0
#define APR_HAVE_GETRLIMIT      0
#define APR_HAVE_IN_ADDR        1
#define APR_HAVE_INET_ADDR		1
#define APR_HAVE_INET_NETWORK   0
#define APR_HAVE_IPV6           0
#define APR_HAVE_MEMCHR         1
#define APR_HAVE_MEMMOVE        1
#define APR_HAVE_SETRLIMIT      0
#define APR_HAVE_SIGACTION      0
#define APR_HAVE_STRCASECMP     1
#define APR_HAVE_STRDUP         1
#define APR_HAVE_STRICMP        1
#define APR_HAVE_STRNCASECMP    0
#define APR_HAVE_STRNICMP       1
#define APR_HAVE_STRSTR         1
#define APR_HAVE_STRUCT_RLIMIT  0
#define APR_HAVE_UNION_SEMUN    0


#if APR_HAVE_SYS_TYPES_H
#include <sys/types.h>
#endif

/*  APR Feature Macros */
#define APR_HAS_SHARED_MEMORY     0
#define APR_HAS_THREADS           1
#define APR_HAS_SENDFILE          0
#define APR_HAS_MMAP              0
#define APR_HAS_FORK              0
#define APR_HAS_RANDOM            0
#define APR_HAS_XLATE             0
#define APR_HAS_OTHER_CHILD       0
#define APR_HAS_DSO               1
#define APR_HAS_UNICODE_FS        1
#define APR_HAS_USER              1
#define APR_HAS_LARGE_FILES       1

/* Not all platforms have a real INADDR_NONE.  This macro replaces INADDR_NONE
 * on all platforms.
 */
#define APR_INADDR_NONE           INADDR_NONE

/* This macro indicates whether or not EBCDIC is the native character set.
 */
#define APR_CHARSET_EBCDIC        0

/* Typedefs that APR needs. */

typedef  unsigned char     apr_byte_t;

typedef  short             apr_int16_t;
typedef  unsigned short    apr_uint16_t;
                                               
typedef  int               apr_int32_t;
typedef  unsigned int      apr_uint32_t;
                                               
typedef  INT64			   apr_int64_t;
typedef  unsigned INT64    apr_uint64_t;

typedef  size_t            apr_size_t;
typedef  ssize_t           apr_ssize_t;
typedef  off_t             apr_off_t;
typedef  int               apr_socklen_t;
//typedef  int               pid_t;
//typedef  int               uid_t;
//typedef  int               gid_t;


/* Mechanisms to properly type numeric literals */

#define APR_INT64_C(val) (val##i64)

//srj added in here, libc c no longer takes care of these

typedef unsigned char   nuint8;
typedef unsigned short  nuint16;

#define NGetLo8(a16)       ((nuint8)((nuint16)(a16) & 0xFF))
#define NGetHi8(a16)       ((nuint8)((nuint16)(a16) >> 8))


#if !defined( HIBYTE )
      #define HIBYTE      NGetHi8
   #endif
   #if !defined( LOBYTE )
      #define LOBYTE      NGetLo8
#endif


/* Definitions that APR programs need to work properly. */

#define APR_THREAD_FUNC          __stdcall

/**
 * APR_DECLARE_EXPORT is defined when building the APR dynamic library,
 * so that all public symbols are exported.
 *
 * APR_DECLARE_STATIC is defined when including the APR public headers,
 * to provide static linkage when the dynamic library may be unavailable.
 *
 * APR_DECLARE_STATIC and APR_DECLARE_EXPORT are left undefined when
 * including the APR public headers, to import and link the symbols from the 
 * dynamic APR library and assure appropriate indirection and calling 
 * conventions at compile time.
 */

#if !defined(WIN32)
/**
 * The public APR functions are declared with APR_DECLARE(), so they may
 * use the most appropriate calling convention.  Public APR functions with 
 * variable arguments must use APR_DECLARE_NONSTD().
 *
 * @deffunc APR_DECLARE(rettype) apr_func(args);
 */
#define APR_DECLARE(type)            type
/**
 * The public APR functions using variable arguments are declared with 
 * AP_DECLARE(), as they must use the C language calling convention.
 *
 * @deffunc APR_DECLARE_NONSTD(rettype) apr_func(args, ...);
 */
#define APR_DECLARE_NONSTD(type)     type
/**
 * The public APR variables are declared with AP_MODULE_DECLARE_DATA.
 * This assures the appropriate indirection is invoked at compile time.
 *
 * @deffunc APR_DECLARE_DATA type apr_variable;
 * @tip extern APR_DECLARE_DATA type apr_variable; syntax is required for
 * declarations within headers to properly import the variable.
 */
#define APR_DECLARE_DATA
#elif defined(APR_DECLARE_STATIC)
#define APR_DECLARE(type)            type __stdcall
#define APR_DECLARE_NONSTD(type)     type
#define APR_DECLARE_DATA
#elif defined(APR_DECLARE_EXPORT)
#define APR_DECLARE(type)            __declspec(dllexport) type __stdcall
#define APR_DECLARE_NONSTD(type)     __declspec(dllexport) type
#define APR_DECLARE_DATA             __declspec(dllexport)
#else
#define APR_DECLARE(type)            __declspec(dllimport) type __stdcall
#define APR_DECLARE_NONSTD(type)     __declspec(dllimport) type
#define APR_DECLARE_DATA             __declspec(dllimport)
#endif

#define APR_SSIZE_T_FMT          "d"

#define APR_SIZE_T_FMT           "d"

#define APR_OFF_T_FMT            "ld"

#define APR_OS_PROC_T_FMT        "d"

/* Local machine definition for console and log output. */
#define APR_EOL_STR              "\r\n"

typedef int apr_wait_t;

/* struct iovec is needed to emulate Unix writev */
//struct iovec {
//    char* iov_base;
//    int   iov_len;
//};

/* Nasty Win32 .h ommissions we really need */
#define STDIN_FILENO  0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2

#if APR_HAS_UNICODE_FS
/* An arbitrary size that is digestable. True max is a bit less than 32000 */
#define APR_PATH_MAX 8192
#else /* !APR_HAS_UNICODE_FS */
#define APR_PATH_MAX MAX_PATH
#endif

///* These need to move into apr_compat.h when the symbol rename is complete 
// */
//#define APR_EXPORT(t)         APR_DECLARE(t)
//#define APR_EXPORT_NONSTD(t)  APR_DECLARE_NONSTD(t)
//#define APR_VAR_EXPORT        APR_DECLARE_DATA
//#define APR_VAR_IMPORT        APR_DECLARE_DATA

#define APR_INT64_T_FMT          "l64d"
#define APR_TIME_T_FMT APR_INT64_T_FMT


//#define apr_signal(a,b) signal(a,b)
//
//typedef int apr_wait_t;

#endif /* APR_H */
/** @} */
#endif /* NETWARE */

