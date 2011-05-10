/*
 * Copyright (c) 2006, 2009, Oracle and/or its affiliates. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

/*
 * efb_prconf - Display efb hardware configuration
 */


#ifndef	_EFB_PRCONF_H
#define	_EFB_PRCONF_H


#include "xf86Parser.h"		/* Public function, etc. declarations */

#include "fbc_dev.h"		/* Identify the graphics device (-dev opt) */
#include "fbc_properties.h"	/* fbconf_xorg(1M) program properties */

#include "efb_query_device.h"	/* Query the efb graphics device */


void efb_prconf(
	const fbc_dev_t *device,	/* Frame buffer device info (-dev) */
	fbc_varient_t	*fbvar,		/* fbconf_xorg(1M) varient data */
	XF86ConfigPtr	configIR);	/* Config file Internal Rep */


#endif	/* _EFB_PRCONF_H */


/* End of efb_prconf.h */