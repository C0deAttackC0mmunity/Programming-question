/*submitted by kapil */
#include <stdio.h>
/* Code to check whether a no. is trimorphic or not*/
int main() {
printf("Plz upvote \n");
int n;
scanf("%d",&n);
int e;
for(e=10;n/e!=0;){
    e*=10;
}
int cube=n*n*n;
if(cube%e==n)
    printf("No. is a trimorphic no.");
else
    printf("No. is not a trimorphic no.");
printf("\nCube of %d is %d",n,cube);
 return 0;
}
