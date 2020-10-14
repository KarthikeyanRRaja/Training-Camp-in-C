#include<stdio.h>
struct cm
{
  int re,img;
  int re1,img1;
}st;
int main()
{
//Try out your code here
  scanf("%d",&st.re);
  scanf("%d",&st.img);
  scanf("%d",&st.re1);
  scanf("%d",&st.img1);
  sum(st);
  mul(st);
return 0;
}

void sum(struct cm c)
{
  int r,i;
  r=c.re+c.re1;
  i=c.img+c.img1;
  printf("%d+%di\n",r,i);
}

void mul(struct cm p)
{
  int r,i;
  r=((p.re*p.re1)-(p.img*p.img1));
  i=((p.re*p.img1)-(p.img*p.re1));
  printf("%d%di",r,i);
}
