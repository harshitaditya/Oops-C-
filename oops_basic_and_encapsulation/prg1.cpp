//  using procedureal method 
#include <stdio.h>
//#include<math.h>

int main() {
    int x,n,result=1;
    printf("Enter two number to find power: ");
    scanf("%d %d",&x,&n);
    for(int i=0;i<n;i++){
        result=result*x;
    }
   // result=pow(x,n);
    printf("result= %d",result);
    
    return 0;
}