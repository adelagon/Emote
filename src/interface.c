#include <glade/glade.h>
#include "playlist.h"
#include "menu.h"

GtkWidget *
get_widget_from_glade (GladeXML *glade, const char *name)
{
  GtkWidget *widget;
  glade_xml_get_widget (glade, name);
  return (widget);
}

GladeXML *
init_main_interface (const char *gladefile)
{
  GladeXML *ui;
  GtkWidget *menu_bar, *playlist;
  ui = glade_xml_new (gladefile, NULL, NULL);
  menu_bar = glade_xml_get_widget (ui, "menubar");
  playlist = glade_xml_get_widget (ui, "treeview-playlist");
  init_menu (menu_bar);
  init_playlist (playlist);
  return (ui);
}

