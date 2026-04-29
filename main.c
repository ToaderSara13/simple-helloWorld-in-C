#include <gtk/gtk.h>

static gboolean draw_callback(GtkWidget *widget, cairo_t *cr, gpointer data) {
    
    guint width = gtk_widget_get_allocated_width(widget);
    guint height = gtk_widget_get_allocated_height(widget);

    
    cairo_set_source_rgb(cr, 0.1, 0.1, 0.12);
    cairo_paint(cr);

    
    cairo_select_font_face(cr, "Sans", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_BOLD);
    cairo_set_font_size(cr, 45.0);

   
    cairo_set_source_rgb(cr, 0.0, 1.0, 0.8);

   
    const char *text = "Hello World!";

    
    cairo_text_extents_t extents;
    cairo_text_extents(cr, text, &extents);

    
    double x = (width / 2.0) - (extents.width / 2.0 + extents.x_bearing);
    double y = (height / 2.0) - (extents.height / 2.0 + extents.y_bearing);

    
    cairo_move_to(cr, x, y);
    cairo_show_text(cr, text);

    return FALSE;
}

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
   
    gtk_window_set_title(GTK_WINDOW(window), "Task 9 -Hello World");
    gtk_window_set_default_size(GTK_WINDOW(window), 450, 200);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);

    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    GtkWidget *canvas = gtk_drawing_area_new();
    gtk_container_add(GTK_CONTAINER(window), canvas);
    g_signal_connect(canvas, "draw", G_CALLBACK(draw_callback), NULL);

    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}