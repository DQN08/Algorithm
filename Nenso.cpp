const int N = 1e5 + 5;
long long a[N], b[N], n;
pair<long long, int> val[N];
void nen(){
	for(int i = 1; i <= n; i++){
		val[i].first = a[i];
		val[i].second = i;
	}
	sort(val + 1, val + n + 1);
	int dem = 0, last = 1e9;
	for(int i = 1; i <= n; i++){
		if(last != val[i].first){
			dem++;
			last = val[i].first;
		}
		b[val[i].second] = dem;
	}
	for(int i = 1; i <= n; i++) cout << b[i] << ' ';
}