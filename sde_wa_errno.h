/*
 * sde_wa_errno.h
 */

/*
 * $Source$
 * $Revition$
 * $Author$
 * $Date$
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; version 2.1 of the License.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License version 2.1 for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * version 2.1 along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, US
 */

#ifndef __SDE_WA_ERRNO_H__
#define __SDE_WA_ERRNO_H__

#include <errno.h>
#include <stdio.h>

enum {
  SDE_WA_SUCCESS = 0,
  SDE_WA_FAILURE = -1,
  SDE_WA_NOMEM = 1,
};

#endif __SDE_WA_ERRNO_H__
