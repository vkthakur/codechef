#include<iostream>
using namespace std;
#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    
	int t;
	scanf("%d",&t);
	{
    int n,k;
    
    scanf("%d%d",&n,&k);
    
    vector<long long> v;
    long long x;
    for(int i=0;i<n;i++)
    {
            scanf("%lld",&x);
            v.push_back(x);
    }
    
    sort(v.rbegin(),v.rend());

    long long int sig=1;
    
    while(sig<=v[0])
    {
    	sig<<=1;
    	
    }
    
    sig>>=1;
    
    
    for(int t=0;sig>=1;sig>>=1)
    {
            int i=t;
            
            
            while(i<n && (v[i]&sig)==0)
            {
            	
            	i++;	
            	
            }
            
            
            if(i>=n)
            {
            	
            	continue;
            }
           

           
            swap(v[t],v[i]);

            

            
            for(int j=0;j<n;++j)
            {
                    if(j!=t && (v[j]&sig)!=0)
                    v[j]=v[j]^v[t];
            }
            
            t++;
            
    }
    
    long long int result=0;
    
    for(int q=0;q<n;q++)
    {
            result=result^v[q];
    }
    
    long long int t1,t2;
    t1=result^k;
    t2=k^0;

    if(t1 > t2)	printf("%lld\n",t1);
    else	printf("%lld\n",t2);

    }
    
    
    return 0;
}