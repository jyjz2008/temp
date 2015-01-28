#include <cstdio>

const int N = 1050;

bool record[N];

int main(){
	int c;
	int n;
	while(scanf("%d %d", &c, &n) != EOF){
		memset(record, 0, c);
		int max = -1;
		int temp;
		for(int i = 0;i < n;i++){
			scanf("%d", &temp);
			for(int j = 0;j <= max;j++){
				if(record[j] == true)
			}
		}
	}
	return 0;
}
