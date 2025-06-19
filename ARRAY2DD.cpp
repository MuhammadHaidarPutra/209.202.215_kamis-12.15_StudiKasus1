#include<iostream>
using namespace std;
void tampilkanArray2D( int arr[3][3], char namaArray) {
    cout << namaArray << " = ";
    for (int i = 0; i < 3; i++) {
        if (i > 0) cout << "    ";
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void tampilkanArray(int arr[], int panjang){
	for(int i=0;i<panjang;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void bubbleSort(int arr[],int panjang){
	for(int i=0;i<panjang-1;i++){
		for(int j=0;j<panjang-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main(){
	int a[3][3];
	int b[3][3];
	int gabungkan[18];
	
	cout<<"Masukan elemen untuk array A(3x3): "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"A["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
		}
	}
	cout<<"Masukan elemen untuk array B(3x3): "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"B["<<i<<"]["<<j<<"]: ";
			cin>>b[i][j];
		}
	}
	cout << "\n";
    tampilkanArray2D(a, 'A');
    cout << endl;
    tampilkanArray2D(b, 'B');
    
	int index=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			gabungkan[index++]=a[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			gabungkan[index++]=b[i][j];
		}
	}
	bubbleSort(gabungkan,18);
	
	cout<<endl;
	cout<<"Array Hasil Penggabungan dan Penyortiran: "<<endl;
	tampilkanArray(gabungkan,18);
	
	return 0;
}