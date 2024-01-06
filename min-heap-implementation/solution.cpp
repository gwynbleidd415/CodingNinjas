class minHeap {
private:
    vector<int> arr{-1};

    void swapAndChangeIndex(int &i, int j){
        swap(arr[i], arr[j]);
        i = j;
    }
public:

    // Constructor for the class.
    minHeap(int n) {
        // Write your code here.
    }

    // Implement the function to remove minimum element.
    int extractMinElement() {
        // Write you code here.
        if(arr.size() == 1) return -1;
        int ans = arr[1];
        deleteElement(0);
        return ans;
    }

    // Implement the function to delete an element.
    void deleteElement(int ind) {
        // Write you code here.
        ++ind;
        int n = arr.size()-1;
        if(ind > n) return;
        swap(arr[ind], arr[n]);
        int ch1, ch2;
        while(true) {
            ch1 = ind<<1, ch2 = ch1+1;
            if(ch1 < n && arr[ch1]<arr[ind]) {
                if(ch2 < n && arr[ch2] < arr[ind]) {
                    if(arr[ch1] < arr[ch2]) swapAndChangeIndex(ind, ch1);
                    else swapAndChangeIndex(ind, ch2);
                } else {
                    swapAndChangeIndex(ind, ch1);
                }
            } else if(ch2<n && arr[ch2]<arr[ind]) swapAndChangeIndex(ind, ch2);
            else break;
        }
        arr.pop_back();
    }

    // Implement the function to insert 'val' in the heap.
    void insert(int val) {
        // Write you code here.
        int curi = arr.size(), par;
        arr.push_back(val);
        while(curi != 1 && arr[par = curi>>1] > arr[curi]) swapAndChangeIndex(curi, par);
    }
};
