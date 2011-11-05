void convert(const char *from_charset, const char *to_charset, char *inptr, char *outptr)
{
	size_t inleft = strlen(inptr);
	size_t outleft = inleft;
	iconv_t cd;
	
	if ((cd = iconv_open(to_charset, from_charset)) == (iconv_t)(-1))
	{
		std::cerr << "Cannot open converter from " << from_charset << " to " << to_charset << std::endl;
		exit(8);
	}
	int rc = iconv(cd, &inptr, &inleft, &outptr, &outleft);
	if (rc == -1)
	{
		
	}
	iconv_close(cd);
}
