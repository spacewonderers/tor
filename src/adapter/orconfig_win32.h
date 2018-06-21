/* orconfig.h for Windows -- This file is *not* generated by autoconf.
 * Instead, it has to be hand-edited to keep Win32 happy.
 */

/* Windows-only defines. */
#define CONFDIR ""
/* Define to 1 if you have the <arpa/inet.h> header file. */
#undef HAVE_ARPA_INET_H

#if defined(_MSC_VER)
#define STDIN_FILENO 0
#include <BaseTsd.h>
#define __attribute__(x)
#define HAVE_STDINT_H
#define SIZEOF_INTPTR_T 8
#define SIZEOF_UINTPTR_T 8
#endif

#define HAVE_O_TEXT
#define HAVE_O_BINARY

#define HAVE___INLINE
/* Define to 1 if you have the <assert.h> header file. */
#define HAVE_ASSERT_H

/* Define to 1 if you have the <ctype.h> header file. */
#define HAVE_CTYPE_H

#define ENABLE_THREADS

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H

/* Define to 1 if you have the `event_get_method' function. */
#define HAVE_EVENT_GET_METHOD 1

/* Define to 1 if you have the `event_get_version' function. */
#define HAVE_EVENT_GET_VERSION 1

/* Define to 1 if you have the `event_set_log_callback' function. */
#define HAVE_EVENT_SET_LOG_CALLBACK 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H

/* Define to 1 if you have the `ftime' function. */
#define HAVE_FTIME

/* Define to 1 if you have the `gettimeofday' function. */
#undef HAVE_GETTIMEOFDAY

/* Define to 1 if you have the <grp.h> header file. */
#undef HAVE_GRP_H

/* Define to 1 if you have the `SSL_CIPHER_find' function. */
 #define HAVE_SSL_CIPHER_FIND

/* Define to 1 if you have the `SSL_get_client_ciphers' function. */
 #define HAVE_SSL_GET_CLIENT_CIPHERS

/* Define to 1 if you have the `SSL_get_client_random' function. */
 #define HAVE_SSL_GET_CLIENT_RANDOM

/* Define to 1 if you have the `SSL_get_server_random' function. */
 #define HAVE_SSL_GET_SERVER_RANDOM

/* Define to 1 if you have the `SSL_SESSION_get_master_key' function. */
 #define HAVE_SSL_SESSION_GET_MASTER_KEY

/* Define to 1 if you have the `inet_aton' function. */
#undef HAVE_INET_ATON

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H

/* Define to 1 if you have the <machine/limits.h> header file. */
#undef HAVE_MACHINE_LIMITS_H

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H

/* Define to 1 if you have the <netdb.h> header file. */
#undef HAVE_NETDB_H

/* Define to 1 if you have the <netinet/in.h> header file. */
#undef HAVE_NETINET_IN_H

/* Define to 1 if you have the <poll.h> header file. */
#undef HAVE_POLL_H

/* Define to 1 if you have the <pwd.h> header file. */
#undef HAVE_PWD_H

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H

/* Define to 1 if you have the `socketpair' function. */
#undef HAVE_SOCKETPAIR

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H

/* Define to 1 if you have the `strlcat' function. */
#if defined (WINCE)
#define HAVE_STRLCAT
#else
#undef HAVE_STRLCAT
#endif

/* Define to 1 if you have the `strlcpy' function. */
#if defined (WINCE)
#define HAVE_STRLCPY
#else
#undef HAVE_STRLCPY
#endif
/* Define to 1 if you have the `strptime' function. */
#undef HAVE_STRPTIME

/* Define to 1 if your timeval has a tv_sec element. */
#define HAVE_STRUCT_TIMEVAL_TV_SEC
/* Change to #undef if you're using BCC */

/* Define to 1 if you have the <sys/fcntl.h> header file. */
#undef HAVE_SYS_FCNTL_H

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#undef HAVE_SYS_IOCTL_H

/* Define to 1 if you have the <sys/limits.h> header file. */
#undef HAVE_SYS_LIMITS_H

/* Define to 1 if you have the <sys/poll.h> header file. */
#undef HAVE_SYS_POLL_H

/* Define to 1 if you have the <sys/socket.h> header file. */
#undef HAVE_SYS_SOCKET_H


/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H

/* Define to 1 if you have the <sys/time.h> header file. */
#undef HAVE_SYS_TIME_H

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H

/* Define to 1 if you have the <sys/utime.h> header file. */
#define HAVE_SYS_UTIME_H

/* Define to 1 if you have the <sys/wait.h> header file. */
#undef HAVE_SYS_WAIT_H

/* Define to 1 if you have the <time.h> header file. */
#define HAVE_TIME_H

/* Define to 1 if you have the `uname' function. */
#undef HAVE_UNAME

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H

/* Define to 1 if you have the `_vscprintf' function. */
#define HAVE__VSCPRINTF 1

/* Define to 1 iff NULL is represented by a 0 in memory. */
#define NULL_REP_IS_ZERO_BYTES 1

/* Define to 1 iff memset(0) sets doubles to 0.0 */
#define DOUBLE_0_REP_IS_ZERO_BYTES 1

/* Name of package */
#define PACKAGE "tor"

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#undef PACKAGE_NAME

/* Define to the full name and version of this package. */
#undef PACKAGE_STRING

/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the version of this package. */
#undef PACKAGE_VERSION

/* The size of `cell_t', as computed by sizeof. */
#define SIZEOF_CELL_T 0

/* The size of `char', as computed by sizeof. */
#define SIZEOF_CHAR 1

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `int16_t', as computed by sizeof. */
#define SIZEOF_INT16_T 2

/* The size of `int32_t', as computed by sizeof. */
#define SIZEOF_INT32_T 4

/* The size of `int64_t', as computed by sizeof. */
#define SIZEOF_INT64_T 8

/* The size of `int8_t', as computed by sizeof. */
#define SIZEOF_INT8_T 1

/* The size of `intptr_t', as computed by sizeof. */
#define SIZEOF_INTPTR_T 8

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `pid_t', as computed by sizeof. */
#define SIZEOF_PID_T 0

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `size_t', as computed by sizeof. */
#define SIZEOF_SIZE_T 8

/* The size of `socklen_t', as computed by sizeof. */
#define SIZEOF_SOCKLEN_T 4

/* The size of `time_t', as computed by sizeof. */
#define SIZEOF_TIME_T 8

/* The size of `uint16_t', as computed by sizeof. */
#define SIZEOF_UINT16_T 2

/* The size of `uint32_t', as computed by sizeof. */
#define SIZEOF_UINT32_T 4

/* The size of `uint64_t', as computed by sizeof. */
#define SIZEOF_UINT64_T 8

/* The size of `uint8_t', as computed by sizeof. */
#define SIZEOF_UINT8_T 1

/* The size of `uintptr_t', as computed by sizeof. */
#define SIZEOF_UINTPTR_T 8

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* The size of `__int64', as computed by sizeof. */
#define SIZEOF___INT64 0

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS

/* Define to 1 if time_t is signed. */
#define TIME_T_IS_SIGNED

/* Define to 1 iff unaligned int access is allowed */
#define UNALIGNED_INT_ACCESS_OK

#define HAVE_EVENT_H 1

/* Define to 1 iff we represent negative integers with two's complement */
#define USING_TWOS_COMPLEMENT

/* Version number of package */
#define VERSION "0.3.0.9"



#define HAVE_STRUCT_SOCKADDR_IN6
#define HAVE_STRUCT_IN6_ADDR
#define RSHIFT_DOES_SIGN_EXTEND
#define FLEXIBLE_ARRAY_MEMBER 0
#define HAVE_EVENT2_EVENT_H 1
#define SHARE_DATADIR ""
#define HAVE_EVENT2_DNS_H 1
#define HAVE_EVENT_BASE_LOOPEXIT 1
#define CURVE25519_ENABLED
#define USE_CURVE25519_DONNA

#define ENUM_VALS_ARE_SIGNED 1

#ifndef STDOUT_FILENO
#define STDOUT_FILENO 1
#endif

#ifndef STDERR_FILENO
#define STDERR_FILENO 2
#endif

#ifndef WINVER
#define WINVER 0x0502
#endif

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0502
#endif

#define WIN32_LEAN_AND_MEAN 1