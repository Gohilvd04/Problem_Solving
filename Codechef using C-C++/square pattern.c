int main() 
{

    int n;
    printf("enter the number  :");
    
    scanf("%d", &n);
    int s=((2*n)-1);
      for(int i=0;i<s;++i){
        for(int j=0;j<s;++j){
            int min = i < j ? i : j;
            min = min < s-i ? min : s-i-1;
            min = min < s-j-1 ? min : s-j-1;
            printf("%d ", n-min);             
        }
        printf("\n");  
      }  
   return 0;
}