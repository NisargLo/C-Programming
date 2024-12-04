/*In digital world colors are specified in RGB format, with values of R, G, and B varying on integer scale from 
0 to 255. Colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK) format with values of C, M, Y and K 
varying on a real scale from 0.0 to 1.0. Convert RGB color to CMYK as per formula: - White=Max(red/255,green/255,blue/255)
- Cyan=(white - red/255)/white
- Magenta=(white - green/255)/white
- Yellow=(white - blue/255)/white
- Black=1 - white
Note: if RGB values are all 0, then the CMY values are all 0 and the K value is 1.*/

#include<stdio.h>
void main() {
     float r,g,b,c,m,y,k,w,max;
     printf("Enter values of R,G,B in range 0-255 : ");
     scanf("%f %f %f",&r,&g,&b);
     if(r==0 && b==0 && g==0) {
          c=m=y=0;
          k=1;
     printf("Values of C,M,Y,K is %f %f %f %f",c,m,y,k);
     }
     else{
          r=r/255;
          g=g/255;
          b=b/255;
     if(r>g && r>b){
          max=r;
     }
     else if(g>r && g>b){
          max=g;
     }
     else if(b>r && b>g){
          max=b;
     }
     w=max;
     c=(w-r)/w;
     m=(w-g)/w;
     y=(w-b)/w;
     k=1-w;
     }
     printf("Values of c,m,y,k is %f %f %f %f",c,m,y,k);
}