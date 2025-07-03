int main(){
    int arr[5]={-1,2,-3,3,4};
    int size = 5;
    int a;

    for (int i=0;i<size;i++){
        for(int j=0;j<size ;j++){
            if(arr[i]<arr[j]){
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }