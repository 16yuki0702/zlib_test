#include <zlib.h>

int
main(int argc, char *argv[])
{
	z_stream strm = { .zalloc = Z_NULL, .zfree = Z_NULL, .opaque = Z_NULL };
	deflateInit(&strm, Z_DEFAULT_COMPRESSION);
	deflateEnd(&strm);
	printf("test\n");
	return 0;
}
