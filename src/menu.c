#include <gtk/gtk.h>

void
cb_menu_quit (GtkWidget *widget, gpointer data)
{
  gtk_main_quit ();
}

void
init_menu (GtkWidget *menu_bar)
{
  GtkWidget *file_menu, *file, *open, *quit;
  GtkWidget *view_menu, *view, *options, *properties;
  GtkWidget *playback_menu, *playback, *play, *pause, *stop, *next, *prev;
  GtkWidget *help_menu, *help, *about;

  // File SubMenu
  file_menu = gtk_menu_new ();
  file = gtk_menu_item_new_with_label ("File");
  open = gtk_menu_item_new_with_label ("Open");
  quit = gtk_menu_item_new_with_label ("Quit");

  gtk_menu_item_set_submenu (GTK_MENU_ITEM (file), file_menu);
  gtk_menu_shell_append (GTK_MENU_SHELL (file_menu), open);
  gtk_menu_shell_append (GTK_MENU_SHELL (file_menu), quit);
  gtk_menu_shell_append (GTK_MENU_SHELL (menu_bar), file);

  gtk_widget_show (file);
  gtk_widget_show (open);
  gtk_widget_show (quit);

  // View Submenu
  view_menu = gtk_menu_new ();
  view = gtk_menu_item_new_with_label ("View");
  options = gtk_menu_item_new_with_label ("Options");
  properties = gtk_menu_item_new_with_label ("Properties");

  gtk_menu_item_set_submenu (GTK_MENU_ITEM (view), view_menu);
  gtk_menu_shell_append (GTK_MENU_SHELL (view_menu), options);
  gtk_menu_shell_append (GTK_MENU_SHELL (view_menu), properties);
  gtk_menu_shell_append (GTK_MENU_SHELL (menu_bar), view);

  gtk_widget_show (view);
  gtk_widget_show (options);
  gtk_widget_show (properties);

  // Playback Submenu
  playback_menu = gtk_menu_new ();
  playback = gtk_menu_item_new_with_label ("Playback");
  play = gtk_menu_item_new_with_label ("Play");
  pause = gtk_menu_item_new_with_label ("Pause");
  stop = gtk_menu_item_new_with_label ("Stop");
  next = gtk_menu_item_new_with_label ("Next");
  prev = gtk_menu_item_new_with_label ("Previous");

  gtk_menu_item_set_submenu (GTK_MENU_ITEM(playback), playback_menu);
  gtk_menu_shell_append (GTK_MENU_SHELL (playback_menu), play);
  gtk_menu_shell_append (GTK_MENU_SHELL (playback_menu), pause);
  gtk_menu_shell_append (GTK_MENU_SHELL (playback_menu), stop);
  gtk_menu_shell_append (GTK_MENU_SHELL (playback_menu), next);
  gtk_menu_shell_append (GTK_MENU_SHELL (playback_menu), prev);
  gtk_menu_shell_append (GTK_MENU_SHELL (menu_bar), playback);

  gtk_widget_show (playback);
  gtk_widget_show (play);
  gtk_widget_show (pause);
  gtk_widget_show (stop);
  gtk_widget_show (next);
  gtk_widget_show (prev);

  // Help Submenu
  help_menu = gtk_menu_new ();
  help = gtk_menu_item_new_with_label ("Help");
  about = gtk_menu_item_new_with_label ("About");

  gtk_menu_item_set_submenu (GTK_MENU_ITEM (help), help_menu);
  gtk_menu_shell_append (GTK_MENU_SHELL (help_menu), about);
  gtk_menu_shell_append (GTK_MENU_SHELL (menu_bar), help);

  gtk_widget_show (help);
  gtk_widget_show (about);

  gtk_widget_show (menu_bar);
}

