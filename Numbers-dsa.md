# Numbers:dsa

# basic maths concept

n= 7789
n%10 => last digit
n/10 => update the number

while(n>0)
{
lastdigit=n%10;
printf(lastdigit);
n=n/10;
}

number of digits=log10(n)+1

# reverse number

while (n>0)
{
int digit=n%10;
rev=rev\*10+digit;
n/=10;
}
return rev;
