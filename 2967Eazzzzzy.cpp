#include <iostream>
#include <iomanip>

using namespace std;

char triangle(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
            cout<<" ";
        for(j=0;j<2*i+1;j++)
            cout<<"*";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
char parallelogram(int W,int H)
{
    int i,j;
    for(i=0;i<H;i++)
    {
        for(j=0;j<H-i-1;j++)
            cout<<" ";
        for(j=0;j<W;j++)
            cout<<"*";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
char rectangle(int W,int H)
{
    int i,j;
    for(i=0;i<H;i++)
    {
        for(j=0;j<W;j++)
            cout<<"*";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}

int main()
{
    int n,W,H,i;
    int x,y[100],triangles[100][1],parallelograms[100][2],rectangles[100][2];
    for(i=0;i<100;i++)
    {
        cin>>x;y[i]=x;
        switch(x)
        {
            case 1:cin>>n;    triangles[i][1]=n;       break;
            case 2:cin>>W>>H; parallelograms[i][1]=W; parallelograms[i][2]=H;break;
            case 3:cin>>W>>H; rectangles[i][1]=W; H=rectangles[i][2]=H;    break;
            default: y[i]=-1;i=100;
        }
    }

    for(i=0;i<100;i++)
    {
        switch(y[i])
        {
            case 1: triangle(triangles[i][1]);       break;
            case 2: parallelogram(parallelograms[i][1],parallelograms[i][2]);break;
            case 3: rectangle(rectangles[i][1],rectangles[i][2]);     break;
            default: i=100;
        }
    }
    return 0;
}
