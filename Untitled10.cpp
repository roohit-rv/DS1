#include<stdio.h>
#include<string.h>
int main() 
{

char num[100]; 
int q=0,w=0,e=0,r=0;
 int t=0,y=0,u=0,o=0,p=0,a=0; 
scanf("%s",num); 
for(int i=0;i<=strlen(num);i++)
 { 
if (num[i]==0)
 { 
q++; 
}
else if(num[i]==1)
{
 w++; 
 } 
 else if(num[i]==2)
  {

      e++;
 }
 else if(num[i]==3)
 {
     r++;
 }
  else if(num[i]==4)
  {
     t++;
 }
  else if(num[i]==5)
  {
     y++;
 }
  else if(num[i]==6)
  {
     u++;
 }
  else if(num[i]==7)
  {
     o++;
 }
  else if(num[i]==8)
  {
     p++;
 }
  else if(num[i]==9)
  {
     a++;
 }
 else {
     continue;
 }
} printf("%d %d %d %d %d %d %d %d %d %d ",q,w,e,r,t,y,u,o,p,a); return 0;

}
