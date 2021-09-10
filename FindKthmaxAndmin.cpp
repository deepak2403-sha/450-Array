#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int k, int n)
{
    priority_queue<int> q;
    for (int i = 0; i < n; i++)
    {
        q.push(arr[i]);
        if (q.size() > k)
        {
            q.pop();
        }
    }
    return q.top();
}

int kthlargest(vector<int> &arr, int k, int n)
{
    priority_queue<int> pq;
    for (auto it : arr)
        pq.push(it);

    while (k-- != 1)
    {
        pq.pop();
    }
    return pq.top();
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr[n];
    for (auto &it : arr)
    {
        cin >> it;
    }
    int k;
    cin >> k;
    // cout << kthSmallest(arr, k, n) << endl;
    cout << kthlargest(arr, k, n) << endl;
}

/* 
    JAVA SOL

    void kthSmallest(int arr[], int k, int n){
        PriorityQueue<Integer> q = new PriorityQueue<Integer>();
        for(int i = 0; i < n; i++) {

            q.add(arr[i]);

            if(q.size() > k)
            q.remove();


        }
        cout<<q.peek();
    }
----------------------------------------------------------------------------------------------------------------------------------------------------------------
    KthlargestNumber

    static int kthlargest(int arr[], int k, int n){
        PriorityQueue<Integer> q = new PriorityQueue<Integer>();
        for(int i = 0; i < n; i++) {
            if(i<k){
                pq.add(arr[i]);
            }
            else{
                if(arr[i]>pa.peek()){
                    pq.remove();
                    pq.add(arr[i]);
                }
            }
            return pq.peek();
        }
    }


*/