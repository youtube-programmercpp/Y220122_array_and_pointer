struct sample {
	char a[256];
};
int main()
{
	struct sample a[] = { "", "", "", "", "", "" };
	long long x = &a[5] -  & a[0];
}
