/* $Id$ */
/*-
 * Copyright (c) 2005 Benedikt Meurer <benny@xfce.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#if !defined(THUNARX_INSIDE_THUNARX_H) && !defined(THUNARX_COMPILATION)
#error "Only <thunarx/thunarx.h> can be included directly, this file may disappear or change contents"
#endif

#ifndef __THUNARX_PRIVATE_H__
#define __THUNARX_PRIVATE_H__

#include <glib.h>

G_BEGIN_DECLS;

#if GLIB_CHECK_VERSION(2,9,0)
#define I_(string) (g_intern_static_string ((string)))
#else
#define I_(string) (g_quark_to_string (g_quark_from_static_string ((string))))
#endif

void thunarx_object_list_take_reference (GList   *object_list,
                                         gpointer target) G_GNUC_INTERNAL;

G_END_DECLS;

#endif /* !__THUNARX_PRIVATE_H__ */
