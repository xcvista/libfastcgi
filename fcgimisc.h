/* 
 * fcgimisc.h --
 *
 *      Miscellaneous definitions
 *
 *
 * Copyright (c) 1996 Open Market, Inc.
 *
 * See the file "LICENSE.TERMS" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * $Id: fcgimisc.h,v 1.3 2001/06/18 14:25:47 robs Exp $
 */

#ifndef _FCGIMISC_H
#define _FCGIMISC_H

#include <CoreFoundation/CoreFoundation.h>
#include <objc/runtime.h>

#ifndef FALSE
#define FALSE NO
#endif

#ifndef TRUE
#define TRUE  YES
#endif

#ifndef min
#define min(a,b) ((a) < (b) ? (a) : (b))
#endif

#ifndef max
#define max(a,b) ((a) > (b) ? (a) : (b))
#endif

#ifndef ASSERT
#define ASSERT(assertion) assert(assertion)
#endif

#endif	/* _FCGIMISC_H */
