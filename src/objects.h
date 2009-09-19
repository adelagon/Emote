#ifndef _OBJECTS_H_
#define _OBJECTS_H_

#include <gtk/gtk.h>

typedef struct EmoteObj Emote;

struct EmoteObj {
  GladeXML *main_glade;
  GtkWidget *main_window;
  GtkWidget *playlist;
};

#endif /* _OBJECTS_H_ */
