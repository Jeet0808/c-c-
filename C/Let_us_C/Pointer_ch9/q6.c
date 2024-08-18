#include<stdio.h>
#include<math.h>
float distance(int x1,int x2,int y2,int y3);
float area();
int main(){
    int x1,x2,y1,y2;
    printf("enter x1,x2,y1,y2 : ");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    int d = distance(x1,x2,y1,y2);
    printf("distance is = %d\n",d);
    float a = area();
    printf("area is = %f",a);
    
    return 0;
}
// fun to calculate distance 
float   distance(int x1,int x2,int y1,int y2) {
    int d = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    return d;
}
// fun to get vertices of triangle
float area()
{
    float triarea(float,float,float);
    
    int x1,x2,x3,y1,y2,y3;
   
   

    printf("\nenter the the co-ordinates of three points : ");
    scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);
    int x4,y4;
    printf("\nenter the co-ordinates of one more point : ");
    scanf("%d%d",&x4,&y4);
   float a = distance(x1,y1,x2,y2);
   float b = distance(x2,y2,x4,y4);
   float c = distance(x2,y2,x3,y3);
   float d =  triarea(a,b,c);
   float a1 = distance(x1,y1,x4,y4);
   float b1 = distance(x2,y2,x4,y4);
   float c1 = distance(x3,y3,x4,y4);
  float area1 = triarea(a,a1,b1);
  float area2 = triarea(b,a1,c1);
  float area3 = triarea(c,b1,c1);
  float totalarea = area1+area2+area3;
  if((totalarea-d)<=0.0009) {
    printf("\npoint (%d,%d) is inside the triangle\n",x4,y4);

  }else {
    printf("\npoint (%d,%d) is outside the triangle\n",x4,y4);
  }

return d;

}
// function to claculate area form a formula 
float triarea(float a, float b, float c) {
    // Check for a valid triangle
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Not a valid triangle.\n");
        return -1; // Return an error value
    }
    float s = (a + b + c) / 2;
    float m = s * (s - a) * (s - b) * (s - c);
    // Check if the area calculation will be valid
    if (m < 0) {
        printf("Cannot calculate area for these sides.\n");
        return -1; // Return an error value
    }
    float x = sqrt(m);
    return x;
}
