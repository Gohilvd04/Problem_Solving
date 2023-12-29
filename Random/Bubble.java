class Bubble {
public static void main(String [] args){
int [] a= {9,8,7,6,5,4,3,2,1};
int swap =0;
int comp = 0;
int i,j;
long start,end;
start = System.nanoTime();

for(i=0; i<a.length; i++){
  for(j=0; j<a.length-1; j++){
    comp++;
    if(a[j]>a[j+1]){
	swap++;
      int temp = a[j];
      a[j] = a[j+1];
      a[j+1] = temp;
    }
  }
}
end = System.nanoTime();

System.out.println(end - start +"\n");
System.out.println(swap);

System.out.println(comp);
for(i=0; i<a.length; i++){
  System.out.print(a[i] + " ");
}

}
}