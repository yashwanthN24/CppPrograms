#include<stdio.h>
int a[1000][1000],visit[100],q[1000],f=0,r= -1,result[100],u=0;


void bfs(int v,int n){
   int i;
   for ( i = 1; i <= n; i++) {
       if(a[v][i]==1 && visit[i]==0){
           q[++r] = i;


           visit[i] = 1;

       }
   }
   result[u++] = v;
   
   f++;

   if(f<=r){
       bfs(q[f],n);
   }


}
int main(){
   int n,v;
   printf("\nEnter no of vertices: ");
   scanf("%d",&n);
   printf("\nEnter the cost adjacency matrix:\n");
   for (int i = 1; i <= n; i++) {
       for (int j = 1; j <= n; j++) {
           scanf("%d",&a[i][j]);
       }
   }
   printf("\nEnter the source vertex: ");
   scanf("%d",&v);
   for (int i = 1; i <=n; i++) {
       visit[i] = 0;
       q[i] = 0;
   }

   q[++r] = v;
   visit[v] = 1;
   bfs(v,n);
   for(int i=0;i<n;i++){
       printf("%d ",result[i]);
   }
}