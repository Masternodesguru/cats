/* src/config/pivx-config.h.  Generated from pivx-config.h.in by configure.  */
/* src/config/pivx-config.h.in.  Generated from configure.ac by autoheader.  */

#ifndef PIV_CONFIG_H

#define PIV_CONFIG_H

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Version Build */
#define CLIENT_VERSION_BUILD 0

/* Version is release */
#define CLIENT_VERSION_IS_RELEASE true

/* Major version */
#define CLIENT_VERSION_MAJOR 3

/* Minor version */
#define CLIENT_VERSION_MINOR 0

/* Build revision */
#define CLIENT_VERSION_REVISION 0

/* Version is release */
#define COPYRIGHT_YEAR 2024

/* Define this symbol to build code that uses AVX2 intrinsics */
#define ENABLE_AVX2 1

/* Define this symbol to build code that uses SHA-NI intrinsics */
#define ENABLE_SHANI 1

/* Define this symbol to build code that uses SSE4.1 intrinsics */
#define ENABLE_SSE41 1

/* Define to 1 to enable wallet functions */
#define ENABLE_WALLET 1

/* Define to 1 to enable ZMQ functions */
#define ENABLE_ZMQ 1

/* define if the Boost library is available */
#define HAVE_BOOST /**/

/* define if the Boost::Chrono library is available */
#define HAVE_BOOST_CHRONO /**/

/* define if the Boost::Filesystem library is available */
#define HAVE_BOOST_FILESYSTEM /**/

/* define if the Boost::PROGRAM_OPTIONS library is available */
#define HAVE_BOOST_PROGRAM_OPTIONS /**/

/* define if the Boost::System library is available */
#define HAVE_BOOST_SYSTEM /**/

/* define if the Boost::Thread library is available */
#define HAVE_BOOST_THREAD /**/

/* define if the Boost::Unit_Test_Framework library is available */
/* #undef HAVE_BOOST_UNIT_TEST_FRAMEWORK */

/* Define to 1 if you have the <byteswap.h> header file. */
/* #undef HAVE_BYTESWAP_H */

/* Define this symbol if the consensus lib has been built */
/* #undef HAVE_CONSENSUS_LIB */

/* define if the compiler supports basic C++11 syntax */
#define HAVE_CXX11 1

/* Define to 1 if you have the declaration of `be16toh', and to 0 if you
   don't. */
#define HAVE_DECL_BE16TOH 0

/* Define to 1 if you have the declaration of `be32toh', and to 0 if you
   don't. */
#define HAVE_DECL_BE32TOH 0

/* Define to 1 if you have the declaration of `be64toh', and to 0 if you
   don't. */
#define HAVE_DECL_BE64TOH 0

/* Define to 1 if you have the declaration of `bswap_16', and to 0 if you
   don't. */
#define HAVE_DECL_BSWAP_16 0

/* Define to 1 if you have the declaration of `bswap_32', and to 0 if you
   don't. */
#define HAVE_DECL_BSWAP_32 0

/* Define to 1 if you have the declaration of `bswap_64', and to 0 if you
   don't. */
#define HAVE_DECL_BSWAP_64 0

/* Define to 1 if you have the declaration of `daemon', and to 0 if you don't.
   */
#define HAVE_DECL_DAEMON 0

/* Define to 1 if you have the declaration of `htobe16', and to 0 if you
   don't. */
#define HAVE_DECL_HTOBE16 0

/* Define to 1 if you have the declaration of `htobe32', and to 0 if you
   don't. */
#define HAVE_DECL_HTOBE32 0

/* Define to 1 if you have the declaration of `htobe64', and to 0 if you
   don't. */
#define HAVE_DECL_HTOBE64 0

/* Define to 1 if you have the declaration of `htole16', and to 0 if you
   don't. */
#define HAVE_DECL_HTOLE16 0

/* Define to 1 if you have the declaration of `htole32', and to 0 if you
   don't. */
#define HAVE_DECL_HTOLE32 0

/* Define to 1 if you have the declaration of `htole64', and to 0 if you
   don't. */
#define HAVE_DECL_HTOLE64 0

/* Define to 1 if you have the declaration of `le16toh', and to 0 if you
   don't. */
#define HAVE_DECL_LE16TOH 0

/* Define to 1 if you have the declaration of `le32toh', and to 0 if you
   don't. */
#define HAVE_DECL_LE32TOH 0

/* Define to 1 if you have the declaration of `le64toh', and to 0 if you
   don't. */
#define HAVE_DECL_LE64TOH 0

/* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
   don't. */
#define HAVE_DECL_STRERROR_R 0

/* Define to 1 if you have the declaration of `strnlen', and to 0 if you
   don't. */
#define HAVE_DECL_STRNLEN 1

/* Define to 1 if you have the declaration of `__builtin_clz', and to 0 if you
   don't. */
#define HAVE_DECL___BUILTIN_CLZ 1

/* Define to 1 if you have the declaration of `__builtin_clzl', and to 0 if
   you don't. */
#define HAVE_DECL___BUILTIN_CLZL 1

/* Define to 1 if you have the declaration of `__builtin_clzll', and to 0 if
   you don't. */
#define HAVE_DECL___BUILTIN_CLZLL 1

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define to 1 if you have the <endian.h> header file. */
/* #undef HAVE_ENDIAN_H */

/* Define to 1 if the system has the `dllexport' function attribute */
#define HAVE_FUNC_ATTRIBUTE_DLLEXPORT 1

/* Define to 1 if the system has the `dllimport' function attribute */
#define HAVE_FUNC_ATTRIBUTE_DLLIMPORT 1

/* Define to 1 if the system has the `visibility' function attribute */
#define HAVE_FUNC_ATTRIBUTE_VISIBILITY 1

/* Define this symbol if the BSD getentropy system call is available */
/* #undef HAVE_GETENTROPY */

/* Define this symbol if the BSD getentropy system call is available with
   sys/random.h */
/* #undef HAVE_GETENTROPY_RAND */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `advapi32' library (-ladvapi32). */
#define HAVE_LIBADVAPI32 1

/* Define to 1 if you have the `comctl32' library (-lcomctl32). */
#define HAVE_LIBCOMCTL32 1

/* Define to 1 if you have the `comdlg32' library (-lcomdlg32). */
#define HAVE_LIBCOMDLG32 1

/* Define to 1 if you have the `crypt32' library (-lcrypt32). */
#define HAVE_LIBCRYPT32 1

/* Define to 1 if you have the `gdi32' library (-lgdi32). */
#define HAVE_LIBGDI32 1

/* Define to 1 if you have the `imm32' library (-limm32). */
#define HAVE_LIBIMM32 1

/* Define to 1 if you have the `iphlpapi' library (-liphlpapi). */
#define HAVE_LIBIPHLPAPI 1

/* Define to 1 if you have the `kernel32' library (-lkernel32). */
#define HAVE_LIBKERNEL32 1

/* Define to 1 if you have the `mingwthrd' library (-lmingwthrd). */
#define HAVE_LIBMINGWTHRD 1

/* Define to 1 if you have the `mswsock' library (-lmswsock). */
#define HAVE_LIBMSWSOCK 1

/* Define to 1 if you have the `ole32' library (-lole32). */
#define HAVE_LIBOLE32 1

/* Define to 1 if you have the `oleaut32' library (-loleaut32). */
#define HAVE_LIBOLEAUT32 1

/* Define to 1 if you have the `rpcrt4' library (-lrpcrt4). */
#define HAVE_LIBRPCRT4 1

/* Define to 1 if you have the `shell32' library (-lshell32). */
#define HAVE_LIBSHELL32 1

/* Define to 1 if you have the `shlwapi' library (-lshlwapi). */
#define HAVE_LIBSHLWAPI 1

/* Define to 1 if you have the `ssp' library (-lssp). */
#define HAVE_LIBSSP 1

/* Define to 1 if you have the `user32' library (-luser32). */
#define HAVE_LIBUSER32 1

/* Define to 1 if you have the `uuid' library (-luuid). */
#define HAVE_LIBUUID 1

/* Define to 1 if you have the `winmm' library (-lwinmm). */
#define HAVE_LIBWINMM 1

/* Define to 1 if you have the `winspool' library (-lwinspool). */
#define HAVE_LIBWINSPOOL 1

/* Define to 1 if you have the `ws2_32' library (-lws2_32). */
#define HAVE_LIBWS2_32 1

/* Define to 1 if you have the `z ' library (-lz ). */
#define HAVE_LIBZ_ 1

/* Define this symbol if you have malloc_info */
/* #undef HAVE_MALLOC_INFO */

/* Define this symbol if you have mallopt with M_ARENA_MAX */
/* #undef HAVE_MALLOPT_ARENA_MAX */

/* Define to 1 if you have the <miniupnpc/miniupnpc.h> header file. */
#define HAVE_MINIUPNPC_MINIUPNPC_H 1

/* Define to 1 if you have the <miniupnpc/miniwget.h> header file. */
#define HAVE_MINIUPNPC_MINIWGET_H 1

/* Define to 1 if you have the <miniupnpc/upnpcommands.h> header file. */
#define HAVE_MINIUPNPC_UPNPCOMMANDS_H 1

/* Define to 1 if you have the <miniupnpc/upnperrors.h> header file. */
#define HAVE_MINIUPNPC_UPNPERRORS_H 1

/* Define this symbol if you have MSG_DONTWAIT */
/* #undef HAVE_MSG_DONTWAIT */

/* Define this symbol if you have MSG_NOSIGNAL */
/* #undef HAVE_MSG_NOSIGNAL */

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD 1

/* Have PTHREAD_PRIO_INHERIT. */
#define HAVE_PTHREAD_PRIO_INHERIT 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define if you have `strerror_r'. */
/* #undef HAVE_STRERROR_R */

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define this symbol if the BSD sysctl(KERN_ARND) is available */
/* #undef HAVE_SYSCTL_ARND */

/* Define to 1 if you have the <sys/endian.h> header file. */
/* #undef HAVE_SYS_ENDIAN_H */

/* Define this symbol if the Linux getrandom system call is available */
/* #undef HAVE_SYS_GETRANDOM */

/* Define to 1 if you have the <sys/prctl.h> header file. */
/* #undef HAVE_SYS_PRCTL_H */

/* Define to 1 if you have the <sys/select.h> header file. */
/* #undef HAVE_SYS_SELECT_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define if thread_local is supported. */
/* #undef HAVE_THREAD_LOCAL */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define if the visibility attribute is supported. */
#define HAVE_VISIBILITY_ATTRIBUTE 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://github.com/Masternodesguru/CATS"

/* Define to the full name of this package. */
#define PACKAGE_NAME "CATS Core"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "CATS Core 3.0.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "CATS"

/* Define to the home page for this package. */
#define PACKAGE_URL "https://masternodes.guru/CATS/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "3.0.0"

/* Path to the zk params dir during unit tests on windows */
#define PARAMS_DIR ""

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Define this symbol if the Qt platform is Cocoa */
/* #undef QT_QPA_PLATFORM_COCOA */

/* Define this symbol if the minimal Qt platform exists */
#define QT_QPA_PLATFORM_MINIMAL 1

/* Define this symbol if the Qt platform is Windows */
#define QT_QPA_PLATFORM_WINDOWS 1

/* Define this symbol if the Qt platform is XCB */
/* #undef QT_QPA_PLATFORM_XCB */

/* Define this symbol if Qt plugins are static */
#define QT_STATICPLUGIN 1

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Define to 1 if strerror_r returns char *. */
/* #undef STRERROR_R_CHAR_P */

/* Define this symbol to build in assembly routines */
#define USE_ASM 1

/* Define this symbol if coverage is enabled */
/* #undef USE_COVERAGE */

/* Define if using a custom zk params path */
/* #undef USE_CUSTOM_PARAMS */

/* Define if dbus support should be compiled in */
/* #undef USE_DBUS */

/* Define if QTCHARTS support should be compiled in */
#define USE_QTCHARTS 1

/* UPnP support not compiled if undefined, otherwise value (0 or 1) determines
   default state */
#define USE_UPNP 1

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
#define _FILE_OFFSET_BITS 64

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

#endif //PIV_CONFIG_H
