#include<bits/stdc++.h>
#define Vel_fighter 30;
using namespace std;

void mission(float *x_f,float *y_f,float *x_b,float *y_b,int t)
{
  cout<<"Time = "<<t<<" f "<<"("<<x_f[t]<<","<<y_f[t]<<")  b ("<<x_b[t]<<","<<y_b[t]<<")\t";
  if(t>12)
    {
      cout<<"Target escaped  \n";return;
    }
  float distance=sqrt(std::pow((x_f[t]-x_b[t]),2)+std::pow((y_f[t]-y_b[t]),2));
  cout<<"Dist= "<<distance<<"\t";
  if(distance<=10)
  {
    cout<<"\n\n<<<Target shot !!!>>> -- Pursuit over--\n";return;
  }

  float sin=(y_b[t]-y_f[t])/distance;cout<<"sin "<<sin;
  float cos=(x_b[t]-x_f[t])/distance;cout<<" cos "<<cos<<" \n ";

  x_f[t+1]=x_f[t]+(30*cos);
  y_f[t+1]=y_f[t]+(30*sin);

  mission(x_f,y_f,x_b,y_b,++t);
}
int main()
{
  float x_f[13],y_f[13],distance,sin,cos;
  float time;
  float x_b[13]={80,90,99,108,116,125,133,141,151,160,169,179,180};
  float y_b[13]={0,-2,-5,-9,-15,-18,-23,-29,-28,-25,-21,-20,-17};
  x_f[0]=0;y_f[0]=100;x_b[0]=80;y_b[0]=0;
  mission(x_f,y_f,x_b,y_b,0);
}
