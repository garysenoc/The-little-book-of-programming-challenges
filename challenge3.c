#include <stdio.h> 
#include <stdlib.h> 
  
float volumeCuboid(float width,float height,float length){
	return width * height * length;
}
float areaRectangle(float width,float height){
	return width * height;
}

int main() 
{ 
  float width,height,length;
  
  printf("Enter height: ");
  scanf("%f",&height);
  printf("Enter height: ");
  scanf("%f",&width);
  printf("Enter length: ");
  scanf("%f",&length);
  
  printf("\n\nArea: %.2f\nHeight: %.2f\nWidth: %.2f",areaRectangle(width,height),height,width);
  printf("\nVolume of Cuboid: %.2f",volumeCuboid(width,height,length));
  return 0; 
} 
