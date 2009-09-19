#include <gtk/gtk.h>

enum
  {
    COL_NAME = 0,
    NUM_COLS
  };

GtkWidget *
init_playlist (GtkWidget *playlist)
{
  GtkCellRenderer *renderer;
  GtkListStore *store;
  renderer = gtk_cell_renderer_text_new ();
  gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (playlist),
                                               -1,
                                               "Playlist",
                                               renderer,
                                               "text",
                                               COL_NAME,
                                               NULL);
  store = gtk_list_store_new (NUM_COLS, G_TYPE_STRING, G_TYPE_UINT);
  gtk_tree_view_set_model (GTK_TREE_VIEW (playlist), GTK_TREE_MODEL (store));
  return (playlist);
}

