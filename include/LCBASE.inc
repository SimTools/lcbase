XCOMM #
XCOMM #  This is spec file.  See spec.sample also for further description.
XCOMM #
XCOMM # The file $JSFROOT/conf/spec is included from $JSFROOT/conf/makejsf.tmpl 
XCOMM # through Imakefile when xmkmf command is executed. 
XCOMM #
XCOMM # System information is saved in JSFConfig.h in $JSFROOT/src directory
XCOMM # JSFConfig.h is created by makespec script, when JSF is installed by
XCOMM # make install command.
XCOMM #
XCOMM #$Id:
XCOMM #
#include "include/LCBASEConfig.h"
ROOT_VERSION = __ROOT_VERSION__
ROOT_MINORVERSION = __ROOT_MINORVERSION__
ROOT_PATCHLEVEL= __ROOT_PATCHLEVEL__
ROOT_FULLVERSION= __ROOT_FULLVERSION__
G77EGCS_VERSION = __G77EGCS_VERSION__
G77EGCS_MINORVERSION = __G77EGCS_MINORVERSION__
G77EGCS_PATCHLEVEL = __G77EGCS_PATCHLEVEL__
UNAME_MACHINE = __UNAME_MACHINE__
UNAME_SYSNAME = __UNAME_SYSNAME__
G77EGCS_LIBNAME = __G77EGCS_LIBNAME__
