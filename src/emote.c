#include <glade/glade.h>
#include "objects.h"
#include "interface.h"


int main (int argc, char *argv[])
{
  Emote *emote;

  gtk_init (&argc, &argv);

  emote->main_glade = init_main_interface ("data/main.glade");
  emote->main_window = get_widget_from_glade (emote->main_glade, "window-main");
  emote->playlist = get_widget_from_glade (emote->main_glade, "treeview-playlist");

  gtk_main ();

  return 0;
}
