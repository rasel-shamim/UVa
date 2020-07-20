#include <stdio.h>
#include <math.h>

int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--){
		long long LCM,GCD,a,b;
		scanf("%lld %lld",&GCD,&LCM);
		bool ok = true;
		if(LCM%GCD)
			ok = false;
		if(ok)
			printf("%lld %lld\n",GCD,LCM);
		else
			printf("-1\n");
	}
		
	return 0;
}
