#include<iostream>
using namespace std;

int main(){

	int t;

	cin>>t;

	while(t--){

		int np,i,d[100001],p[100001],n[100001],pi=0,ni=0;
		
		cin>>np;

		for(i=0;i<np;i++){

			cin>>d[i];

			if(d[i] >=0)
			{
				p[pi++]=i;
			}
			else
			{
				n[ni++]=i;
			}

		}

		int indp=0,indn=0,vlgr,dnsr;
		long long int grscst=0,cst;

		while(indp <pi && indn <ni)
		{
			int pp,nn;
			pp=p[indp];
			nn=n[indn];
			vlgr=d[pp];
			dnsr=(-1)*d[nn];
			cst=p[indp]-n[indn];

			if(cst < 0)	cst=cst*(-1);

			if(vlgr-dnsr==0){

				indp++;
				indn++;
				cst=vlgr*cst;
				grscst=grscst+cst;

			}
			else if(vlgr- dnsr < 0)
			{
				indp++;
				d[nn]+=vlgr;
				cst=vlgr*cst;
				grscst=grscst+cst;
			}
			else if(vlgr- dnsr > 0)
			{
				indn++;
				d[pp]-=dnsr;
				cst=dnsr*cst;
				grscst=grscst+cst;
			}


		}

		cout<<grscst<<"\n";
	}

	return 0;
}