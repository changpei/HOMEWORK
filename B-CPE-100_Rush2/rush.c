#include "rush.h"
#include <stdio.h>
#include <unistd.h>

int fre[27]={0};
float fre2[27]={0};     //the frequency of 26 alphas

float English[26]={0.08167,
    0.01492,
    0.02782,
    0.04253,
    0.12702,
    0.02228,
    0.02015,
    0.06094,
    0.06966,
    0.00153,
    0.00772,
    0.04025,
    0.02406,
    0.06749,
    0.07507,
    0.01929,
    0.00095,
    0.05987,
    0.06327,
    0.09056,
    0.02758,
    0.00978,
    0.02360,
    0.00150,
    0.01974,
    0.00074
};
float French[26]={
    0.0764,
    0.0090,
    0.0326,
    0.0367,
    0.1472,
    0.0107,
    0.0087,
    0.0074,
    0.0753,
    0.0061,
    0.0005,
    0.0546,
    0.0297,
    0.0710,
    0.0580,
    0.0252,
    0.0136,
    0.0669,
    0.0795,
    0.0724,
    0.0631,
    0.0184,
    0.0007,
    0.0043,
    0.0013,
    0.0033,
};
float German[26]={
    0.0652,
    0.0189,
    0.0273,
    0.0508,
    0.1640,
    0.0166,
    0.0301,
    0.0458,
    0.0655,
    0.0027,
    0.0142,
    0.0344,
    0.0253,
    0.0978,
    0.0259,
    0.0067,
    0.0002,
    0.0700,
    0.0727,
    0.0615,
    0.0417,
    0.0085,
    0.0192,
    0.0003,
    0.0004,
    0.0113,
};
float Spanish[26]=
{
    0.1153,
    0.0222,
    0.0402,
    0.0501,
    0.1218,
    0.0069,
    0.0177,
    0.0070,
    0.0625,
    0.0049,
    0.0001,
    0.0497,
    0.0316,
    0.0671,
    0.0868,
    0.0251,
    0.0088,
    0.0687,
    0.0798,
    0.0463,
    0.0293,
    0.0114,
    0.0002,
    0.0022,
    0.0101,
    0.0047,
};
int get_Euclidean(float text[26], float language[26])
{
    float res=0;
    for(int i=0;i<26;i++)
    {
        res+=(text[i]-language[i])*(text[i]-language[i]);
    }
    res*=100000;
    return (int)res;
}

int my_strlen2(char const *str)
{
    int len = 0;
    while(*str)
    {
        if(*str!=' '&&((*str>='a'&&*str<='z')||(*str>='A'&&*str<='Z')))
            len++;
        str++;
    }
    return len;
}

int my_strlen(char const *str)
{
    int len = 0;
    while(*str++)
    {
        len++;
    }
    return len;
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *s)
{
    write(1, s, my_strlen(s));
}

int isAlpha(char c)
{
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
    {
        if(c>='a'&&c<='z')
            return c-'a';
        else
        {
            return c-'A';
        }
    }
    else
        return 27;
}

int getNum(char *str,char substr)
{
    int i,n=0,s=my_strlen(str);
    for(i=0;i<s;i++)
    {
        if(str[i]==substr)
            n++;
    }
    return n;
}

void itoa (int n,char s[])
{
    int i,j,sign;
    if((sign=n)<0)
        n=-n;
    i=0;
    do{
        s[i++]=n%10+'0';
    }
    while ((n/=10)>0);
    if(sign<0)
        s[i++]='-';
    s[i]='\0';
    for(j=i;j>=0;j--)
        my_putchar(s[j]);
}

void display(int num)
{
    char buf[100];
    itoa(num, buf);
}

char converse(char ch)
{
    char c=ch;
    if(c>='A'&&c<='Z')//表示是大写字母
        c+=32;
    else if(c>='a'&&c<='z');//表示是小写字母
    else
        return '0';
    return c;
}
void cal_fre(char *s)
{
    for(int i=0;i<my_strlen(s);i++)
    {
        int alpha=isAlpha(s[i]);
        fre[alpha]++;
    }
    int len=my_strlen2(s);
    for(int i=0;i<27;i++)
    {
        fre2[i]=(float)fre[i]/len;
    }
}

void output(int argc, char** argv)
{
    int len=my_strlen(argv[1]);
    for(int i=2;i<argc;i++)
    {
        my_putstr(argv[i]);
        my_putstr(": ");
        char c=converse(argv[i][0]);
        if(c=='0')
            continue;
        int n=c-'a';
        int a=fre[n];
        char intbuf[20];
        sprintf(intbuf,"%d",a);
        my_putstr(intbuf);
        my_putstr(" ");
        float res=fre2[n]*100;
        char buf[20];
        sprintf(buf,"%.2f",res);
        my_putstr("(");
        my_putstr(buf);
        my_putstr("%)");
        my_putstr("\n");
    }
}




void Find_language()
{
    int l1=get_Euclidean(fre2, English);
    int l2=get_Euclidean(fre2, Spanish);
    int l3=get_Euclidean(fre2, German);
    int l4=get_Euclidean(fre2, French);
    int mx;
    int tmp1=l1<l2?l1:l2;
    int tmp2=l3<l4?l3:l4;
    mx=tmp1<tmp2?tmp1:tmp2;
    if(mx==l1)
    {
        my_putstr("=> English");
    }
    else if(mx==l2)
    {
        my_putstr("=> Spanish");
    }
    else if(mx==l3)
    {
        my_putstr("=> German");
    }
    else if(mx==l4)
    {
        my_putstr("=> French");
    }
}

int main(int argc, char** argv)
{
    cal_fre(argv[1]);
    output(argc, argv);
    Find_language();
    my_putstr("\n");
    return 0;
}
