#include <stdio.h>

int main()
{
	int T;
    
  while(scanf("%d",&T)==1){
        int x,count =0;
        for(i=0;i<5;i++){
            scanf("%d",&x);
            if(x==T)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
