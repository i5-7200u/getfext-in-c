void getfext(char fe[], char rtrch[])
{
int smallsize = strlen(fe);
int nullinteger = 0;
char fext[3072];
int addchar = 0;
int returnchararray = 0;
char karakter;
const int realsize = strlen(fe);
for(nullinteger = 0;nullinteger < 1;)
{
karakter = fe[smallsize];
if (karakter == '.')
{
nullinteger = 1;
}
else
{
if (smallsize == 0 && karakter != '.')
{
nullinteger = 2;
}
smallsize--;
}
}
if (nullinteger != 2)
{
for (smallsize = smallsize; smallsize < realsize;)
{
char charact = fe[smallsize];
smallsize++;
fext[addchar] = charact;
addchar++;
}
for (returnchararray = returnchararray; returnchararray <= strlen(fext);)
{
rtrch[returnchararray] = fext[returnchararray];
returnchararray++;
}
}
else
{
char nofext[] = "no file extension";
for (returnchararray = returnchararray; returnchararray <= strlen(nofext);)
{
rtrch[returnchararray] = nofext[returnchararray];
returnchararray++;
}
}
}
