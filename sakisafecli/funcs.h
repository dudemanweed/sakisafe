#pragma once
#include <stdlib.h>

/* Function used from curl to write data to a buffer */
size_t
write_data(void *buffer, size_t size, size_t nmemb, void *userp);

/* Print usage message (when nothing is given to sakisafecli) */
void
print_usage();

/* Print help message (-h) */
void
print_help();

/* Function used to display progress when uploading a file */

void
progress(
	void *clientp, double dltotal, double dlnow, double ultotal, double ulnow);

/* Print config */
void
print_config();
