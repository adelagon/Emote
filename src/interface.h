#ifndef _INTERFACE_H_
#define _INTERFACE_H_

#include <glade/glade.h>

GtkWidget * get_widget_from_glade (GladeXML *glade, const char *name);
GladeXML * init_main_interface (const char *gladefile);

#endif /* _INTERFACE_H_ */
