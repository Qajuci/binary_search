#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m){
  int i, l;
  l = 0;
  for(i = 0;i < n; i++){
    l += (A[i] / m);
  }
  return l >= k;
}

int main(){
  int i, lb, ub;
  lb = 0;
  ub = 1000000001;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }

  while(ub - lb > 1){
    int mid = (lb + ub) / 2;
    if(p(mid)){
      lb = mid;
    }
    else{
      ub = mid;
    }
  }

  printf("%d", lb);
 
  return 0;
}