/* Murrine theme engine
 * Copyright (C) 2006-2007-2008-2009 Andrea Cimitan
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
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "config.h"

#ifdef HAVE_ANIMATION
#include <gtk/gtk.h>

/* #define MRN_IS_PROGRESS_BAR(widget) GTK_IS_PROGRESS_BAR(widget) && widget->allocation.x != -1 && widget->allocation.y != -1 */
#define ANIMATION_DELAY 100
#define CHECK_ANIMATION_TIME 0.5

G_GNUC_INTERNAL void murrine_animation_progressbar_add (GtkWidget *progressbar);
G_GNUC_INTERNAL void murrine_animation_connect_checkbox (GtkWidget *widget);
G_GNUC_INTERNAL gboolean murrine_animation_is_animated (GtkWidget *widget);
G_GNUC_INTERNAL gdouble murrine_animation_elapsed (gpointer data);
G_GNUC_INTERNAL void murrine_animation_cleanup ();
#endif /* HAVE_ANIMATION */
