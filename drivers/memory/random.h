/*
random.h

Public interface to the random number generator 
*/

_PROTOTYPE( void random_init, (void)					);
_PROTOTYPE( int random_reseed, (void)					);
_PROTOTYPE( void random_update, (int source, unsigned long *buf, 
							int count)	);
_PROTOTYPE( void random_getbytes, (void *buf, size_t size)		);
_PROTOTYPE( void random_putbytes, (void *buf, size_t size)		);
