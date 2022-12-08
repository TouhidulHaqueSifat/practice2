#include<stdio.h>

struct point
{
    float x;
    float y;
};
struct triangle
{
    struct point a;
    struct point b;
    struct point c;
};
struct point centroid(struct triangle t)
{
    struct point ans;
    ans.x=(t.a.x+t.b.x+t.c.x)/3;
    ans.y=(t.a.y+t.b.y+t.c.y)/3;
    return ans;
};
int main()
{
    struct point p1;
    scanf("%f %f",&p1.x,&p1.y);
    struct point p2;
    scanf("%f %f",&p2.x,&p2.y);
    struct point p3;
    scanf("%f %f",&p3.x,&p3.y);
    struct triangle t={p1,p2,p3};
    struct point c=centroid(t);
    printf("The centroid is (%.2f,%.2f)",c.x,c.y);
    return 0;


}
