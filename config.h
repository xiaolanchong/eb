/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if build with ebnet support */
#undef ENABLE_EBNET

/* Define if build with IPv6 support */
#undef ENABLE_IPV6

/* Define if NLS is requested */
#undef ENABLE_NLS

/* Define if pthread support is enabled. */
#undef ENABLE_PTHREAD

/* Define if command names have the suffix \`.exe' */
#define EXEEXT_EXE 1

/* Define to 1 if you have the `atoll' function. */
#define HAVE_ATOLL 1

/* Define to 1 if you have the <direct.h> header file. */
#define HAVE_DIRECT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#undef HAVE_DLFCN_H

/* Define to 1 if you have the `gai_strerror' function. */
#undef HAVE_GAI_STRERROR

/* Define to 1 if you have the `getaddrinfo' function. */
#undef HAVE_GETADDRINFO

/* Define to 1 if you have the `getnameinfo' function. */
#undef HAVE_GETNAMEINFO

/* Define to 1 if you have the <iconv.h> header file. */
#undef HAVE_ICONV_H

/* Define to 1 if you have the `iconv_open' function. */
#undef HAVE_ICONV_OPEN

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <langinfo.h> header file. */
#undef HAVE_LANGINFO_H

/* Define to 1 if you have the `LC_MESSAGES' locale category */
#define HAVE_LC_MESSAGES 1

/* Define to 1 if you have the `bind' library (-lbind). */
/* #undef HAVE_LIBBIND */

/* Define to 1 if you have the <libcharset.h> header file. */
/* #undef HAVE_LIBCHARSET_H */

/* Define to 1 if you have the `nsl' library (-lnsl). */
#undef HAVE_LIBNSL

/* Define to 1 if you have the `resolv' library (-lresolv). */
#undef HAVE_LIBRESOLV

/* Define to 1 if you have the `socket' library (-lsocket). */
#undef HAVE_LIBSOCKET

/* Define to 1 if you have the `locale_charset' function. */
/* #undef HAVE_LOCALE_CHARSET */

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the <mbstring.h> header file. */
#define HAVE_MBSTRING_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `nl_langinfo' function. */
#undef HAVE_NL_LANGINFO

/* Define to 1 if you have the <nl_types.h> header file. */
#undef HAVE_NL_TYPES_H

/* Define to 1 if you have the <pthread.h> header file. */
#undef HAVE_PTHREAD_H

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#undef HAVE_STRCASECMP

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if <netinet/in.h> defines `struct in6_addr' */
#define HAVE_STRUCT_IN6_ADDR 1

/* Define to 1 if <netinet/in.h> defines `struct sockaddr_in6' */
#define HAVE_STRUCT_SOCKADDR_IN6 1

/* Define to 1 if <netinet/in.h> defines `struct sockaddr_storage' */
#define HAVE_STRUCT_SOCKADDR_STORAGE 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H

/* Define to 1 if you have the `_atoi64' function. */
#define HAVE__ATOI64 1

/* Define to 1 if you have the `_getdcwd' function. */
#define HAVE__GETDCWD 1

/* Define to 1 if `in6addr_any' is declared by <netinet/in.h> */
#define IN6ADDR_ANY_DECLARED 1

/* Define to 1 if `in6addr_loopback' is declared by <netinet/in.h> */
#define IN6ADDR_LOOPBACK_DECLARED 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Mailing address */
#define MAILING_ADDRESS "m-kasahr@sra.co.jp"

/* Name of package */
#define PACKAGE "eb"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "eb"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "eb 4.4.3"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "eb"

/* Define to the version of this package. */
#define PACKAGE_VERSION "4.4.3"

/* Define to `1' if printf() recognizes "I64" modifier for __int64 */
#define PRINTF_I64_MODIFIER 1

/* Define to `1' if printf() recognizes "ll" modifier for long long */
#define PRINTF_LL_MODIFIER 1

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "4.4.3"

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to `unsigned char', `unsigned short', `unsigned int' or `unsigned
   long' according with size of `sin_port' in `struct sockaddr_in', if
   <sys/types.h>, <sys/socket.h> or <netinet/in.h> does not define
   `in_port_t'. */
/* #undef in_port_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to `unsigned char', `unsigned short', `unsigned int' or `unsigned
   long' according with size of `sa_family' in `struct sockaddr', if
   <sys/types.h> or <sys/socket.h> does not define `sa_family_t'. */
/* #undef sa_family_t */

/* Define to `int' if <sys/types.h> or <sys/socket.h> does not define. */
/* #undef socklen_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef ssize_t */
