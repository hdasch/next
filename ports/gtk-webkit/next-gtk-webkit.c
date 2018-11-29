/*
Copyright © 2018 Atlas Engineer LLC.
Use of this file is governed by the license that can be found in LICENSE.
*/

#include <gtk/gtk.h>
#include "server.h"

int main(int argc, char *argv[]) {
	// TODO: Use GtkApplication?
	gtk_init(&argc, &argv);

	// TODO: Start the xmlrpc server first?  If GUI is started, then we can
	// report xmlrpc startup issue graphically.
	start_server();
	start_client();

	gtk_main();

	stop_server();
	return 0;
}
