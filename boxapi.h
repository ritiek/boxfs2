#ifndef BOXAPI_H
#define BOXAPI_H

/*
  This software is licensed under the
    GPLv2 license.
*/

#include <fuse.h>

typedef void * APIDIR;

void 	api_free(); 
int 	api_init(int* argc, char*** argv);

int 	api_readdir(const char *, fuse_fill_dir_t, void * buf);
int 	api_subdirs(const char *);
long	api_getsize(const char *);
void	api_getusage(long *, long * );

int	api_open(const char *, const char *);
void	api_upload(const char *,  const char *);
int	api_create(const char *);
int	api_createdir(const char *);
int	api_removefile(const char *);
int	api_removedir(const char *);
int api_rename(const char *, const char *);
#endif
// BOXAPI_H

