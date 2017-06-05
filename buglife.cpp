nclude<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	int y=1;
	while(t--) {
		int n,e;
		scanf("%d %d",&n,&e);
		vector<int> v[n+1];
		int a,b;
		for(int i=0;i<e;i++) {
			scanf("%d %d",&a,&b);
			v[a].push_back(b);
			v[b].push_back(a);
	//		printf("C");
		}
	//	printf("t");
		stack<int> s;
		bool visited[n+1];
		memset(visited,false,sizeof(visited));
		int color[n+1];
		memset(color,0,sizeof(color));
		int k=0;
		for(int i=1;i<n+1;i++) {
	//		printf("A");
			if(!visited[i]) {
				
				color[i]=1;
				s.push(i);
				while(!s.empty()) {
	//			printf("B");
				int j=s.top();
				s.pop();
				visited[j]=true;
				vector<int>::iterator itr=v[j].begin();
				while(itr!=v[j].end()) {
					
						if(color[*itr]==color[j])
						{k=1;
						break;
						}
						if(color[*itr]==0) {
						//visited[*itr]=true;
							if(color[j]==1)
							color[*itr]=2;
							else
							color[*itr]=1;
						}
						if(!visited[*itr])
							s.push(*itr);
					
					itr++;
				}
			if(k==1)break;
				}
				if(k==1)break;
			}
				if(k==1)break;
		}

		printf("Scenario #%d:\n",y);
		if(k==1)
		printf("Suspicious bugs found!\n");
		else
		printf("No suspicious bugs found!\n");
		y++;
	}
	return 0;
}	

