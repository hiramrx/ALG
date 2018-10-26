public void MergeSort(int[] a,int low,int high)
{
    if (low>=high) {
        return;
    }
    int mid = (low+high)/2;
    MergeSort(int[] a,int low,int mid);
    MergeSort(int[] a,int mid+1,int high);
    Merge(int[] a,int low,int mid,int high);
}

public void Merge(int[] a,int low,int mid,int high)
{
    int i,j,k;
    for (int i = low,j=mid+1; i < mid && j< high; j++) {
        if (a[i]<a[j]) {
            a[k++] = a[i++];
        } else {
            a[k++] = a[j++];
        }
    }
    if (i<=mid) {
        for (int l=0; l < mid-i; l++) {
            a[k++] = a[i+l];
        }
    }
    if (j<=high) {
        for (int l=0; l < mid-i; l++) {
            a[k++] = a[j+l];
        }
    }
}