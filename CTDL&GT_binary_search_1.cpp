int BinarySearch(int a[],int n,int x)
{
	int left, right, mid; left=0; right=n-1;
	do{
		mid=(left+right)/2;
		if(a[mid]==x){
			return mid;
		}
		else if(a[mid]<x){
			left=mid+1;
		}
		else{
			right=mid-1;
		}
	}while(left<=right);
	return -1;
}

// Dùng đệ quy 
int BinarySearch_Recursive(int a[],int x,int left,int right){
	if(left>right){
		return -1;
	}
	int mid=(left+right)/2;
	if(x==a[mid]){
		return mid;
	}
	if(x<a[mid]){
		return BinarySearch_Recursive(a,x,left,mid-1);
	}
	return BinarySearch_Recursive(a,x,mid+1,right);
}
