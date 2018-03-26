#include <iostream>

using namespace std;

int main()
{
    int num;
    int remander;
    int j=0;
    for(int i=0; i<=10; i++){
        num=i;
        cout<<i;
        cout<< " the binarry number is : ";
        if(num==0){
            cout<<0;
        }
        while (num!=0){
            remander=num%2;
            num=num/2;
            j+=1;
        }
        num=i;
        int arr[j];
        while (num!=0){
            for(int k=0; k<j; k++){
                remander=num%2;
                num=num/2;
                arr[k]=remander;
            }
            for(int m=(sizeof(arr)/sizeof(int))-1; m>=0; m--){
                cout<<arr[m];
            }
        }
        j=0;
        cout<<endl;
    }

    return 0;
}
