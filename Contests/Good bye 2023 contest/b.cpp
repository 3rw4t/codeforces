	#include <bits/stdc++.h>
	#include <vector>
	using namespace std;
	#define REP(i, a, b) for (int i = a; i <=b ; i++)
	typedef vector<int> vi;
	
	vi masha(vector<int>  vec){
		int max,min;
		max = *max_element(vec.begin(), vec.end());
		min= *min_element(vec.begin(), vec.end());
		vec.erase(find(vec.begin(), vec.end(), max));
		vec.erase(find(vec.begin(), vec.end(), min));
		int resultado = (max + min)/2;
		vec.push_back(resultado*2);
		
		return vec;
		
	}
	
	vi olga(vi vec)
	{
		int min1, min2, resultado;
		
		min1 = *min_element(vec.begin(),vec.end());
		vec.erase(find(vec.begin(), vec.end(), min1));
		
		min2 = *min_element(vec.begin(), vec.end());
		vec.erase(find(vec.begin(), vec.end(), min2));
		
		resultado = (min1 + min2)/2;
		
		vec.push_back(resultado*2);
		
		return vec;
		
	}
	
	int resfinal(vi vec, int turno){
		if (vec.size() == 1){
			return vec[0];
		}else if(vec.size() == 2){
			int resultado = (vec[0] + vec[1])/2;
			return resultado*2;
		}else{
			if (turno == 0){
				return resfinal(masha(vec), 1);
			}else{
				return resfinal(olga(vec), 0);
			}
		}
	}
	int main()
	{
		int t,a,buff;
		cin >> t;
		REP(i, 1, t){
			cin >> a;
			vi mivec;
					
			REP(j,1,a){
					
					
					cin >> buff;
					mivec.push_back(buff);
					cout << resfinal(mivec, 0) << " ";
			}
			cout << endl;
		}
		
		return 0;
	}

