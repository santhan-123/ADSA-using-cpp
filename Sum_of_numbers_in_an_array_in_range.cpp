
//Sum_of_numbers_in_an_array_in_range
#include <iostream>
#include <vector>
using namespace std;

vector<int> Prefix_sum_array(vector<int>& arr, int n) {
    vector<int> res(n);
    res[0] = arr[0];
    for (int i = 1; i < n; i++) {
        res[i] = res[i - 1] + arr[i];
    }
    return res;
}

void arr_print(vector<int>& arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    cout << "enter no of elements of array" << endl;
    int n;
    cin >> n;
    vector<int> arr(n);
    cout << "enter the numbers in array" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "enter no of ranges" << endl;
    int m; // number of ranges
    cin >> m;
    cout << "enter ranges (1-based index)" << endl;
    vector<vector<int>> query(m, vector<int>(2));
    for (int i = 0; i < m; i++) {
        cin >> query[i][0] >> query[i][1];
    }

    vector<int> prefix_array = Prefix_sum_array(arr, n);
    
    // Loop to calculate the range sum for each range
    for (int i = 0; i < m; i++) {
        int l = query[i][0] - 1; 
        int r = query[i][1] - 1; 

        int res;
        if (l == 0)
            res = prefix_array[r];
        else
            res = prefix_array[r] - prefix_array[l - 1];

        cout << "Sum of range (" << query[i][0] << ", " << query[i][1] << ") is: " << res << endl;
    }

    return 0;
}
